#include <iostream>
#include <fstream>
#include <algorithm>

#include "SDK.hpp"
#include "Memory.h"
#include "MinHook/MinHook.h"

#pragma comment(lib, "MinHook/libMinHook.x64.lib")

#define AllocateConsole


PVOID(*CollectGarbageInternal)(uint32_t, bool) = nullptr;
PVOID CollectGarbageInternalHook(uint32_t KeepFlags, bool bPerformFullPurge)
{
	return NULL;
}

bool StartsWith(std::string String, std::string StartsWithStr)
{
	if (String.find(StartsWithStr) == 0)
		return true;
	else
		return false;
}

bool StartsWithToLower(std::string String, std::string StartsWithStr)
{
	std::transform(String.begin(), String.end(), String.begin(), tolower);

	if (String.find(StartsWithStr) == 0)
		return true;
	else
		return false;
}

std::string ToLower(std::string Str)
{
	transform(Str.begin(), Str.end(), Str.begin(), tolower);
	return Str;
}



using namespace SDK;

struct BrushStructObject
{
	unsigned char GoTo[0x48];
	class SDK::UObject* MapTexture;
};

namespace Nacro
{
	// Engine Ptrs
	UWorld** World;
	UEngine* GEngine;
	ULocalPlayer* LocalPlayer;
	UGameplayStatics* GameplayStatics;

	// Game Ptrs
	AFortPlayerPawnAthena* Pawn;
	AFortPlayerControllerAthena* Controller;
	AFortGameModeAthena* GameMode;
	AFortPlayerStateAthena* PlayerState;
	AFortGameStateAthena* GameState;

	// Miscellaneous
	PVOID GarbageCollection;
	UFortWeaponItemDefinition* PickupWEP;
	UHUD_PickupItemWidget_C* PickupHUD;
	FGuid PickupGUID;

	UAnimMontage* DeathMontage;
	
	FGuid PickGuid;
	UFortWeaponItemDefinition* Pick;

	// REGULAR VARIABLES
	bool IsInitialized = false;
	bool IsInGame = false;
	bool PickupHudFound = false;
	bool InstantReload = false;
	bool IsControlled = true;
	bool PickupNoticed;
	bool HasJumped = false;
	int PickupNum = 0;
	std::string PickupDEF;

	auto FindActor(SDK::UClass* Class)
	{
		SDK::TArray<SDK::AActor*> Actor;
		GameplayStatics->STATIC_GetAllActorsOfClass(GEngine->GameViewport->World, Class, &Actor);
		return Actor;
	}

	void InitializeGame()
	{
		uintptr_t ModuleBaseAddr = (uintptr_t)GetModuleHandle(NULL);

		GEngine = *reinterpret_cast<SDK::UEngine**>(ModuleBaseAddr + 0x674AB20);
		World = reinterpret_cast<SDK::UWorld**>(ModuleBaseAddr + 0x674CD00);
		FName::GNames = *reinterpret_cast<SDK::TNameEntryArray**>((PBYTE)ModuleBaseAddr + 0x66587C8);
		UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>((PBYTE)ModuleBaseAddr + 0x6661380);

		auto AbilityPatch = Memory::FindPattern("\xC0\x0F\x84\x3C\x02\x00\x00\x0F\x2F\xF7\x0F\x86\xF5\x00\x00\x00", "xxxxxxxxxxxxxxxx");
		if (AbilityPatch)
		{
			DWORD dwProtection;
			VirtualProtect(AbilityPatch, 16, PAGE_EXECUTE_READWRITE, &dwProtection);

			reinterpret_cast<uint8_t*>(AbilityPatch)[2] = 0x85;
			reinterpret_cast<uint8_t*>(AbilityPatch)[11] = 0x8D;

			DWORD dwTemp;
			VirtualProtect(AbilityPatch, 16, dwProtection, &dwTemp);
		}

		GameplayStatics = SDK::UObject::FindObject<SDK::UGameplayStatics>("GameplayStatics Engine.Default__GameplayStatics");
		auto objLocalPlayer = UObject::FindObject<UFortLocalPlayer>("FortLocalPlayer Transient.FortEngine_1.FortLocalPlayer_1");
		LocalPlayer = reinterpret_cast<ULocalPlayer*>(objLocalPlayer);
		auto pConsole = SDK::UConsole::StaticClass()->CreateDefaultObject<SDK::UConsole>();
		pConsole->Outer = LocalPlayer->ViewportClient;
		LocalPlayer->ViewportClient->ViewportConsole = pConsole;
	}

	DWORD UpdatePawn(LPVOID lpParam)
	{
		while (true)
		{
			if (Pawn != nullptr && !Controller->IsInAircraft() && !Pawn->IsSkydiving())
			{
				if (GetAsyncKeyState(VK_SHIFT) & 0x8000 && Pawn->CurrentWeapon && !Pawn->CurrentWeapon->bIsReloadingWeapon && !Pawn->CurrentWeapon->bIsTargeting)
				{
						Pawn->CurrentMovementStyle = EFortMovementStyle::Sprinting;
				}
				else
				{
						Pawn->CurrentMovementStyle = EFortMovementStyle::Running;
				}

				if (GetAsyncKeyState(0x53) & 0x8000)
				{
					if (Pawn->CurrentMovementStyle != EFortMovementStyle::Running)
					{
						Pawn->CurrentMovementStyle = EFortMovementStyle::Running;
					}
				}

				if (GetAsyncKeyState(VK_SPACE) & 0x8000)
				{
					if (!HasJumped)
					{
						HasJumped = true;
						if (Pawn->bIsCrouched)
						{
							Pawn->UnCrouch(true);
						}
						else
						{
							if (!Pawn->IsJumpProvidingForce())
							{
								Pawn->Jump();
							}
						}
					}
				}
				else
				{
					if (HasJumped)
						HasJumped = false;
				}

				if (Pawn->CurrentWeapon && Pawn->CurrentWeapon->bIsTargeting)
				{
					Pawn->CurrentMovementStyle = EFortMovementStyle::Walking;
				}

				if (!Pawn->IsControlled() && IsControlled)
				{
					IsControlled = false;
					Pawn->PlayAnimMontage(DeathMontage, 1, "");
					Controller->CheatManager->Summon(TEXT("BP_VictoryDrone_C"));
					auto BPDrone = FindActor(ABP_VictoryDrone_C::StaticClass())[0];
					BPDrone->K2_SetActorLocationAndRotation(Pawn->K2_GetActorLocation(), FRotator{ 0,0,0 }, true, true, new FHitResult);
					Sleep(2000);
					Pawn->K2_DestroyActor();
					BPDrone->K2_DestroyActor();
					ExitThread(0);
				}
			}

			Sleep(1000 / 60);
		}
	}

	void InGame()
	{
		IsInitialized = true;

		GameMode = static_cast<AFortGameModeAthena*>(GEngine->GameViewport->World->AuthorityGameMode);

		Controller = static_cast<AFortPlayerControllerAthena*>(GEngine->GameViewport->GameInstance->LocalPlayers[0]->PlayerController);

		Controller->CheatManager->Summon(TEXT("PlayerPawn_Athena_C"));
		auto actorPawn = FindActor(SDK::APlayerPawn_Athena_C::StaticClass())[0];
		Pawn = static_cast<AFortPlayerPawnAthena*>(actorPawn);
		Controller->Possess(Pawn);
		
		//Enable infinite ammo and godmode in advance
		static_cast<UFortCheatManager*>(Controller->CheatManager)->ToggleInfiniteAmmo();
		Controller->CheatManager->God();

		Pawn->ServerChoosePart(EFortCustomPartType::Head, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_MED_BLK_Red_Head_01_ATH.F_MED_BLK_Red_Head_01_ATH"));
		Pawn->ServerChoosePart(EFortCustomPartType::Body, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_TV12_ATH.F_Med_Soldier_TV12_ATH"));
		// screw a proper skin system :middle_finger:

		PlayerState = static_cast<AFortPlayerStateAthena*>(Controller->PlayerState);
		PlayerState->OnRep_CharacterParts();

		PlayerState->TeamIndex = EFortTeam::HumanPvP_Team1;
		PlayerState->OnRep_TeamIndex();

		GameState = static_cast<AFortGameStateAthena*>(GEngine->GameViewport->World->GameState);
		reinterpret_cast<BrushStructObject*>(reinterpret_cast<uintptr_t>(GEngine->GameViewport->World->GameState) + 0x1438)->MapTexture = SDK::UObject::FindObject<SDK::UTexture2D>("Texture2D MiniMapAthena.MiniMapAthena");

		Pick = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
		Pawn->EquipWeaponDefinition(Pick, PickGuid = { 0,0,0,0 });

		DeathMontage = UObject::FindObject<UAnimMontage>("AnimMontage PlayerDeath_Athena.PlayerDeath_Athena");

		Controller->Role = ENetRole::ROLE_Authority;

		Controller->ServerReadyToStartMatch();
		GameMode->StartMatch();

		CreateThread(0, 0, UpdatePawn, 0, 0, 0);

		GarbageCollection = (PBYTE)(uintptr_t)GetModuleHandle(NULL) + 0x137D380;
		MH_CreateHook(static_cast<LPVOID>(GarbageCollection), CollectGarbageInternalHook, reinterpret_cast<LPVOID*>(&CollectGarbageInternal));
		MH_EnableHook(static_cast<LPVOID>(GarbageCollection));
	}

	PVOID(*ProcessEvent)(UObject*, UFunction*, PVOID) = nullptr;
	PVOID ProcessEventHook(UObject* Object, UFunction* Function, PVOID Params)
	{
		if (Function->GetName().find("BP_PlayButton") != std::string::npos)
		{
			GameplayStatics->STATIC_OpenLevel(GEngine->GameViewport->World, "Athena_Terrain", true, L"");
		}
		if (Object->GetName().find("PickupItemWidget") != std::string::npos && !PickupHudFound)
		{
			PickupHudFound = true;
			auto UI = UObject::FindObject<UWidget>("HUD-PickupItemWidget_C Transient.FortEngine_1.FortGameInstance_1.InteractionIndicator_C_1.WidgetTree_1.HUD-PickupItemWidget");
			PickupHUD = static_cast<UHUD_PickupItemWidget_C*>(UI);
			//std::cout << UI->PickupItem->GetItemDefinitionBP()->GetFullName() << std::endl;
		}
		if (Function->GetName().find("Tick") != std::string::npos && IsInGame)
		{
			if (PickupHudFound)
			{
				if (PickupHUD->IsVisible() && !PickupNoticed)
				{
					PickupNoticed = true;
					PickupDEF = PickupHUD->Pickup->PrimaryPickupItemEntry.ItemDefinition->GetFullName();
					PickupGUID = PickupHUD->Pickup->PrimaryPickupItemEntry.ItemGuid;
				}
				if (!PickupHUD->IsVisible() && PickupNoticed)
				{
					PickupNoticed = false;
				}
			}
		}
		if (Function->GetName().find("ReadyToStartMatch") != std::string::npos && !IsInitialized)
		{
			InGame();
		}
		if (Function->GetName().find("LoadingScreenDropped") != std::string::npos && !IsInGame)
		{
			IsInGame = true;
			GameState->FortTimeOfDayManager->TimeOfDay = rand() % 25;
		}
		if (Function->GetName().find("AttemptAircraftJump") != std::string::npos && IsInitialized && IsInGame || Function->GetName().find("AircraftExitedDropZone") != std::string::npos && IsInitialized && IsInGame)
		{
			if (Controller->IsInAircraft())
			{
				Controller->CheatManager->Summon(TEXT("PlayerPawn_Athena_C"));
				auto actorPawn = FindActor(SDK::APlayerPawn_Athena_C::StaticClass())[0];
				Pawn = static_cast<AFortPlayerPawnAthena*>(actorPawn);
				Pawn->K2_SetActorRotation(FRotator{ 0,Pawn->K2_GetActorRotation().Yaw,0 }, false);
				Controller->Possess(Pawn);
				Pawn->EquipWeaponDefinition(Pick, PickGuid);
				PlayerState->OnRep_CharacterParts();
				Controller->CheatManager->God();
			}
		}
		if (Function->GetName().find("OnAboutToEnterBackpack") != std::string::npos)
		{
			Pawn->EquipWeaponDefinition(UObject::FindObject<UFortWeaponItemDefinition>(PickupDEF), PickupGUID);
			if (InstantReload)
			{
				Pawn->CurrentWeapon->WeaponReloadMontage = nullptr;
				Pawn->CurrentWeapon->ReloadAnimation = nullptr;
			}
		}
		if (Function->GetName().find("CheatScript") != std::string::npos && IsInGame)
		{
			if (static_cast<SDK::UCheatManager_CheatScript_Params*>(Params)->ScriptName.IsValid())
			{
				auto ScriptStr = static_cast<SDK::UCheatManager_CheatScript_Params*>(Params)->ScriptName.ToString();

				if (ToLower(ScriptStr) == "help")
				{
					GameMode->Say(L"World:\ncheatscript pickup <AnyWID>: Spawns the requested weapon at your location as a pickup.\n\nPlayer:\ncheatscript equip <AnyWID>: Equips the requested weapon.\n\nFun:\ncheatscript win: Plays win effects.\ncheatscript toggleinstantreload: Toggles instant reload.\ncheatscript dumpwids: Dumps all item definitions to \\FortniteGame\\Binaries\\Win64\\WIDs_Dump.txt\n\nDevelopment:\ncheatscript dumpobjects: Dumps all GObjects into \\FortniteGame\\Binaries\\Win64\\Objects_Dump.txt.");
				}
				if (ToLower(ScriptStr) == "win")
				{
					Controller->ClientNotifyWon();
					Controller->PlayWinEffects();
				}
				if (ToLower(ScriptStr) == "toggleinstantreload")
				{
					InstantReload = !InstantReload;
					if (InstantReload)
					{
						Pawn->CurrentWeapon->WeaponReloadMontage = nullptr;
						Pawn->CurrentWeapon->ReloadAnimation = nullptr;
					}
					
					if (!InstantReload)
					{
						Pawn->EquipWeaponDefinition(UObject::FindObject<UFortWeaponItemDefinition>(Pawn->CurrentWeapon->WeaponData->GetFullName()), FGuid{ rand() % 9999,rand() % 9999,rand() % 9999,rand() % 9999 });
					}
				}
				if (ToLower(ScriptStr) == "dumpobjects")
				{
					try
					{
						remove("Objects_Dump.txt");
					}
					catch (...) { }

					std::ofstream txt("Objects_Dump.txt");
					for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
					{
						auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

						if (Objects != nullptr)
							txt << Objects->GetFullName() << "\n";
					}
					MessageBoxA(nullptr, "Successfully dumped all objects to Objects_Dump.txt.", "Success!", MB_OK);
					txt.close();
				}
				if (ToLower(ScriptStr) == "dumpwids")
				{
					try
					{
						remove("WIDs_Dump.txt");
					}
					catch (...) {}

					std::ofstream txt("WIDs_Dump.txt");
					for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
					{
						auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

						if (Objects != nullptr)
						{
							if (Objects->GetFullName().find("FortWeaponRangedItemDefinition ") !=std::string::npos || Objects->GetFullName().find("FortWeaponMeleeItemDefinition ") != std::string::npos || Objects->GetFullName().find("FortBuildingItemDefinition ") != std::string::npos)
								if (Objects->GetFullName().find("Default__FortBuildingItemDefinition") != std::string::npos || Objects->GetFullName().find("Default__FortWeaponMeleeItemDefinition") != std::string::npos || Objects->GetFullName().find("Default__FortWeaponRangedItemDefinition") != std::string::npos)
									continue;
								else
									txt << Objects->GetName() << "\n";
						}
					}
					MessageBoxA(nullptr, "Successfully dumped all Weapon IDs to WIDs_Dump.txt.", "Success!", MB_OK);
					txt.close();
				}
				if (StartsWithToLower(ScriptStr, "pickup"))
				{
					const auto arg = ScriptStr.erase(0, ScriptStr.find(" ") + 1);

					if (!arg.empty())
					{
						PickupNum++;
						std::string objPickup = "FortPickupAthena Athena_Terrain.Athena_Terrain.PersistentLevel.FortPickupAthena_";
						objPickup.append(std::to_string(PickupNum));

						Controller->CheatManager->Summon(TEXT("FortPickupAthena"));
						for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
						{
							auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

							if (Objects != nullptr)
							{
								if (Objects->GetFullName().find(arg + "." + arg) != std::string::npos)
								{
									PickupWEP = static_cast<UFortWeaponItemDefinition*>(Objects);
								}

							}
						}
						auto Pickup = static_cast<AFortPickupAthena*>(UObject::FindObject<AFortPickupAthena>(objPickup));
						Pickup->K2_SetActorLocation(Pawn->K2_GetActorLocation(), false, true, new FHitResult);
						Pickup->TossPickup(Pawn->K2_GetActorLocation(), nullptr, 1, false);
						Pickup->PrimaryPickupItemEntry.ItemDefinition = PickupWEP;
						Pickup->PrimaryPickupItemEntry.Count = 1;
						Pickup->OnRep_PrimaryPickupItemEntry();
					}
				}
				if (StartsWithToLower(ScriptStr, "equip"))
				{
					const auto arg = ScriptStr.erase(0, ScriptStr.find(" ") + 1);

					if (!arg.empty())
					{
						if (arg == "WID_Harvest_Pickaxe_Athena_C_T01")
						{
							Pawn->EquipWeaponDefinition(Pick, PickGuid);
						}
						else
						{
							for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
							{
								auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

								if (Objects != nullptr)
								{
									if (Objects->GetFullName().find(arg + "." + arg) != std::string::npos)
									{
										Pawn->EquipWeaponDefinition(static_cast<UFortWeaponItemDefinition*>(Objects), FGuid{ rand() % 9999,rand() % 9999,rand() % 9999,rand() % 9999 });
										if (InstantReload)
										{
											Pawn->CurrentWeapon->WeaponReloadMontage = nullptr;
											Pawn->CurrentWeapon->ReloadAnimation = nullptr;
										}
									}

								}
							}
						}
					}
				}
			}
		}

		return ProcessEvent(Object, Function, Params);
	}

	DWORD Main(LPVOID)
	{
		uintptr_t ModuleBaseAddr = (uintptr_t)GetModuleHandle(NULL);

		InitializeGame();
		MH_Initialize();

		auto ProcessEventAddr = (PBYTE)ModuleBaseAddr + 0x13D86E0;
		MH_CreateHook(static_cast<LPVOID>(ProcessEventAddr), ProcessEventHook, reinterpret_cast<LPVOID*>(&ProcessEvent));
		MH_EnableHook(static_cast<LPVOID>(ProcessEventAddr));

		return NULL;
	}
}

BOOL __stdcall DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
	{
#ifdef AllocateConsole
		AllocConsole();
		ShowWindow(GetConsoleWindow(), SW_SHOW);
		FILE* fp;
		freopen_s(&fp, "CONOIN$", "r", stdin);
		freopen_s(&fp, "CONOUT$", "w", stdout);
		freopen_s(&fp, "CONOUT$", "w", stderr);
#endif // AllocateConsole

		CreateThread(0, 0, Nacro::Main, 0, 0, 0);
		break;
	}
	case DLL_PROCESS_DETACH:
	{
		FreeLibraryAndExitThread(hModule, 0);
		break;
	}
	}

	return TRUE;
}

