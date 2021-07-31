#include <iostream>
#include <fstream>
#include <algorithm>
#include <chrono>

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
	class UObject* MapTexture;
};

namespace Nacro
{
	// Engine Ptrs
	UWorld** World;
	UFortEngine* GEngine;
	ULocalPlayer* LocalPlayer;
	UGameplayStatics* GameplayStatics;

	// Game Ptrs
	AFortPlayerPawnAthena* Pawn;
	AFortPlayerControllerAthena* Controller;
	AFortGameModeAthena* GameMode;
	AFortPlayerStateAthena* PlayerState;
	AFortGameStateAthena* GameState;
	AFortQuickBars* FortQB;

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
	bool IsFlying = false;
	bool PickupNoticed;
	bool HasJumped = false;
	int PickupNum = 0;
	std::string PickupDEF;
	std::string WorldName;

	auto FindActor(UClass* Class)
	{
		TArray<AActor*> Actor;
		GameplayStatics->STATIC_GetAllActorsOfClass(GEngine->GameViewport->World, Class, &Actor);
		return Actor;
	}

	void InitializeGame()
	{
		uintptr_t ModuleBaseAddr = (uintptr_t)GetModuleHandle(NULL);

		GEngine = *reinterpret_cast<UFortEngine**>(ModuleBaseAddr + 0x674AB20);
		World = reinterpret_cast<UWorld**>(ModuleBaseAddr + 0x674CD00);
		FName::GNames = *reinterpret_cast<TNameEntryArray**>((PBYTE)ModuleBaseAddr + 0x66587C8);
		UObject::GObjects = reinterpret_cast<FUObjectArray*>((PBYTE)ModuleBaseAddr + 0x6661380);

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

		GameplayStatics = reinterpret_cast<UGameplayStatics*>(UGameplayStatics::StaticClass());

		LocalPlayer = reinterpret_cast<ULocalPlayer*>(GEngine->GameInstance->LocalPlayers[0]);
		auto pConsole = UConsole::StaticClass()->CreateDefaultObject<UConsole>();
		pConsole->Outer = LocalPlayer->ViewportClient;
		LocalPlayer->ViewportClient->ViewportConsole = pConsole;
	}

	DWORD UpdatePawn(LPVOID lpParam)
	{
		while (true)
		{
			if (GetAsyncKeyState(VK_SHIFT) & 0x8000 && !Controller->IsInAircraft() && !Pawn->IsSkydiving() && Pawn->CurrentWeapon && !Pawn->CurrentWeapon->bIsReloadingWeapon && !Pawn->CurrentWeapon->bIsTargeting)
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

			if (GetAsyncKeyState(VK_SPACE) & 0x8000 && !Controller->IsInAircraft())
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

			Sleep(1000 / 30);
		}
	}

	void InGame()
	{
		IsInitialized = true;

		GameMode = static_cast<AFortGameModeAthena*>(GEngine->GameViewport->World->AuthorityGameMode);

		Controller = static_cast<AFortPlayerControllerAthena*>(GEngine->GameViewport->GameInstance->LocalPlayers[0]->PlayerController);

		//spawn find and possess the playerpawn
		Controller->CheatManager->Summon(TEXT("PlayerPawn_Athena_C"));
		auto actorPawn = FindActor(APlayerPawn_Athena_C::StaticClass())[0];
		Pawn = static_cast<AFortPlayerPawnAthena*>(actorPawn);
		Controller->Possess(Pawn);

		//Enable infinite ammo in advance
		static_cast<UFortCheatManager*>(Controller->CheatManager)->ToggleInfiniteAmmo();

		//pause storm
		reinterpret_cast<UKismetSystemLibrary*>(UKismetSystemLibrary::StaticClass())->STATIC_ExecuteConsoleCommand(*World, L"PauseSafeZone", nullptr);

		//set character parts
		Pawn->ServerChoosePart(EFortCustomPartType::Head, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_MED_BLK_Red_Head_01_ATH.F_MED_BLK_Red_Head_01_ATH"));
		Pawn->ServerChoosePart(EFortCustomPartType::Body, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_TV12_ATH.F_Med_Soldier_TV12_ATH"));
		// screw a proper skin system :middle_finger:

		PlayerState = static_cast<AFortPlayerStateAthena*>(Controller->PlayerState);
		PlayerState->OnRep_CharacterParts();

		//set the players team index -- this shows the health in the top left and allows for markers to be placed
		PlayerState->TeamIndex = EFortTeam::HumanPvP_Team1;
		PlayerState->OnRep_TeamIndex();

		GameState = static_cast<AFortGameStateAthena*>(GEngine->GameViewport->World->GameState);
		reinterpret_cast<BrushStructObject*>(reinterpret_cast<uintptr_t>(GEngine->GameViewport->World->GameState) + 0x1438)->MapTexture = UObject::FindObject<UTexture2D>("Texture2D MiniMapAthena.MiniMapAthena");

		//equip the pickaxe
		Pick = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
		Pawn->EquipWeaponDefinition(Pick, PickGuid = { 0,0,0,0 });

		WorldName = GameplayStatics->STATIC_GetCurrentLevelName(GEngine->GameViewport->World, false).ToString();

		DeathMontage = UObject::FindObject<UAnimMontage>("AnimMontage PlayerDeath_Athena.PlayerDeath_Athena");

		Controller->Role = ENetRole::ROLE_Authority;

		//drop loading screen
		Controller->ServerReadyToStartMatch();
		GameMode->StartMatch();

		GarbageCollection = (PBYTE)(uintptr_t)GetModuleHandle(NULL) + 0x137D380;
		MH_CreateHook(static_cast<LPVOID>(GarbageCollection), CollectGarbageInternalHook, reinterpret_cast<LPVOID*>(&CollectGarbageInternal));
		MH_EnableHook(static_cast<LPVOID>(GarbageCollection));
	}

	PVOID(*ProcessEvent)(UObject*, UFunction*, PVOID) = nullptr;
	PVOID ProcessEventHook(UObject* Object, UFunction* Function, PVOID Params)
	{
		//when play button is pressed
		if (Function->GetName().find("BP_PlayButton") != std::string::npos)
		{
			GameplayStatics->STATIC_OpenLevel(GEngine->GameViewport->World, "Athena_Terrain", true, L"");
		}
		//any function coming from the pickup widget
		if (Object->GetName().find("PickupItemWidget") != std::string::npos && !PickupHudFound)
		{
			PickupHudFound = true;
			auto UI = UObject::FindObject<UWidget>("HUD-PickupItemWidget_C Transient.FortEngine_0.FortGameInstance_0.InteractionIndicator_C_0.WidgetTree_0.HUD-PickupItemWidget");
			PickupHUD = static_cast<UHUD_PickupItemWidget_C*>(UI);
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

			CreateThread(0, 0, UpdatePawn, 0, 0, 0);
		}
		//when the player jumps or the bus timer runs out
		if (Function->GetName().find("AttemptAircraftJump") != std::string::npos && IsInitialized && IsInGame || Function->GetName().find("AircraftExitedDropZone") != std::string::npos && IsInitialized && IsInGame)
		{
			if (Controller->IsInAircraft())
			{
				//spawn and find the playerpawn
				Controller->CheatManager->Summon(TEXT("PlayerPawn_Athena_C"));
				auto actorPawn = FindActor(APlayerPawn_Athena_C::StaticClass())[0];
				Pawn = static_cast<AFortPlayerPawnAthena*>(actorPawn);
				//set its rotation right
				Pawn->K2_SetActorRotation(FRotator{ 0,Pawn->K2_GetActorRotation().Yaw,0 }, false);
				//possess
				Controller->Possess(Pawn);
				//equip the pickaxe again
				Pawn->EquipWeaponDefinition(Pick, PickGuid);
				PlayerState->OnRep_CharacterParts();
			}
		}
		//called when picking something up
		if (Function->GetName().find("OnAboutToEnterBackpack") != std::string::npos)
		{
			if (PickupDEF.find("Weapon") != std::string::npos) {
				Pawn->EquipWeaponDefinition(UObject::FindObject<UFortWeaponItemDefinition>(PickupDEF), PickupGUID);
			}
			if (InstantReload)
			{
				Pawn->CurrentWeapon->WeaponReloadMontage = nullptr;
				Pawn->CurrentWeapon->ReloadAnimation = nullptr;
			}
		}
		// when player dies
		if (Function->GetName().find("ClientOnPawnDied") != std::string::npos && IsInGame)
		{
			// play death montage (in other word, animation)
			Pawn->PlayAnimMontage(DeathMontage, 0.7, "");
			Controller->CheatManager->Summon(TEXT("BP_VictoryDrone_C"));
			auto BPDrone = static_cast<ABP_VictoryDrone_C*>(FindActor(ABP_VictoryDrone_C::StaticClass())[0]);
			BPDrone->K2_SetActorLocationAndRotation(Pawn->K2_GetActorLocation(), FRotator{ 0,0,0 }, true, true, new FHitResult);
		}
		// when the victory drone animation ends
		if (Function->GetFullName().find("Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded") != std::string::npos && IsInGame)
		{
			// destroy pawn and victory drone
			FindActor(ABP_VictoryDrone_C::StaticClass())[0]->K2_DestroyActor();
			Pawn->K2_DestroyActor();
		}
		//cheatscripts
		if (Function->GetName().find("CheatScript") != std::string::npos && IsInGame)
		{
			if (static_cast<UCheatManager_CheatScript_Params*>(Params)->ScriptName.IsValid())
			{
				auto ScriptStr = static_cast<UCheatManager_CheatScript_Params*>(Params)->ScriptName.ToString();

				if (ToLower(ScriptStr) == "help")
				{
					GameMode->Say(L"World:\ncheatscript pickup <Any WID>: Spawns the requested weapon at your location as a pickup.\n\nPlayer:\ncheatscript equip <Any WID>: Equips the requested weapon.\n\nFun:\ncheatscript win: Plays win effects.\ncheatscript fly: Toggles flight movement mode.\ncheatscript toggleinstantreload: Toggles instant reload.\ncheatscript dumpwids: Dumps all item definitions to \\FortniteGame\\Binaries\\Win64\\WIDs_Dump.txt.\n\nDevelopment:\ncheatscript dumpobjects: Dumps all GObjects into \\FortniteGame\\Binaries\\Win64\\Objects_Dump.txt.");
				}
				if (ToLower(ScriptStr) == "fly")
				{
					IsFlying = !IsFlying;

					if (IsFlying)
					{
						Pawn->CharacterMovement->MovementMode = EMovementMode::MOVE_Flying;
					}

					if (!IsFlying)
					{
						Pawn->CharacterMovement->MovementMode = EMovementMode::MOVE_Walking;
					}
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
						//re-equip if turning it off -- this resets the reload animation
						Pawn->EquipWeaponDefinition(UObject::FindObject<UFortWeaponItemDefinition>(Pawn->CurrentWeapon->WeaponData->GetFullName()), FGuid{ rand() % 9999,rand() % 9999,rand() % 9999,rand() % 9999 });
					}
				}
				if (ToLower(ScriptStr) == "dumpobjects")
				{
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
					std::ofstream txt("WIDs_Dump.txt");
					for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
					{
						auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

						if (Objects != nullptr)
						{
							if (Objects->GetFullName().find("FortWeaponRangedItemDefinition ") != std::string::npos || Objects->GetFullName().find("FortWeaponMeleeItemDefinition ") != std::string::npos || Objects->GetFullName().find("FortBuildingItemDefinition ") != std::string::npos)
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
						std::string objPickup = "FortPickupAthena " + WorldName + "." + WorldName + ".PersistentLevel.FortPickupAthena_";
						objPickup.append(std::to_string(PickupNum));
						//increment the pickup number for findobject
						PickupNum++;

						//summon
						Controller->CheatManager->Summon(TEXT("FortPickupAthena"));
						//run through all gameobjects
						for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
						{
							auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

							if (Objects != nullptr)
							{
								//if this returns true we've found our weapon
								if (Objects->GetFullName().find(arg + "." + arg) != std::string::npos)
								{
									//set to the wid
									PickupWEP = static_cast<UFortWeaponItemDefinition*>(Objects);
									//we dont need to run through EVERY other object after this so we can break out of the loop
									break;
								}

							}
						}
						//find the pickup
						auto Pickup = static_cast<AFortPickupAthena*>(UObject::FindObject<AFortPickupAthena>(objPickup));
						//set its location to the players
						Pickup->K2_SetActorLocation(Pawn->K2_GetActorLocation(), false, true, new FHitResult);
						//toss it
						Pickup->TossPickup(Pawn->K2_GetActorLocation(), nullptr, 1, false);
						//set the item definition and count
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
						//we already have a variable for the pickaxe saved so we dont need to findobject it
						if (arg == "WID_Harvest_Pickaxe_Athena_C_T01")
						{
							Pawn->EquipWeaponDefinition(Pick, PickGuid);
						}
						else
						{
							//go through all gameobjects
							for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
							{
								auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

								if (Objects != nullptr)
								{
									//if we've found it
									if (Objects->GetFullName().find(arg + "." + arg) != std::string::npos)
									{
										//equip it
										Pawn->EquipWeaponDefinition(static_cast<UFortWeaponItemDefinition*>(Objects), FGuid{ rand() % 9999,rand() % 9999,rand() % 9999,rand() % 9999 });
										if (InstantReload)
										{
											Pawn->CurrentWeapon->WeaponReloadMontage = nullptr;
											Pawn->CurrentWeapon->ReloadAnimation = nullptr;
										}
										break;
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
