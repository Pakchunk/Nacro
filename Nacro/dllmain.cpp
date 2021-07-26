#include <iostream>

#include "SDK.hpp"
#include "Memory.h"
#include "MinHook/MinHook.h"
#pragma comment(lib, "MinHook/libMinHook.x64.lib")


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

/*bool StartsWithToLower(std::string String, std::string StartsWithStr)
{
	
}*/

using namespace SDK;

struct BrushStructObject
{
	unsigned char GoTo[0x48];
	class SDK::UObject* MapTexture;
};
bool UWidget::IsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsVisible");

	UWidget_IsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

namespace Nacro
{
	// SDK/ENGINE POINTERS
	UWorld** World;
	UEngine* GEngine;
	AFortPlayerPawnAthena* Pawn;
	AFortPlayerControllerAthena* Controller;
	AFortGameModeAthena* GameMode;
	AFortPlayerStateAthena* PlayerState;
	UFortCheatManager* CheatManager;
	ULocalPlayer* LocalPlayer;
	AFortAthenaAircraft* Aircraft;
	PVOID GarbageCollection;
	UFortWeaponItemDefinition* PickupWEP;
	UHUD_PickupItemWidget_C* PickupHUD;
	FGuid PickupGUID;
	FGuid LatestPickup;
	UKismetSystemLibrary* KismetSystem;
	UGameplayStatics* GameplayStatics;

	AFortGameStateAthena* GameState;
	

	FGuid PickGuid;
	UFortWeaponItemDefinition* Pick;

	// REGULAR VARIABLES
	bool IsInitialized = false;
	bool IsInGame = false;
	bool PickupHudFound = false;
	bool PickupNoticed;
	bool test;
	int PickupNum = 0;
	std::string PickupDEF;
	std::string LatestPickupDef;
	bool ee;

	void InitializeGame()
	{
		uintptr_t ModuleBaseAddr = (uintptr_t)GetModuleHandle(NULL);

		GEngine = *reinterpret_cast<SDK::UEngine**>(ModuleBaseAddr + 0x674AB20);
		World = reinterpret_cast<SDK::UWorld**>(ModuleBaseAddr + 0x674CD00);
		FName::GNames = *reinterpret_cast<SDK::TNameEntryArray**>((PBYTE)ModuleBaseAddr + 0x66587C8);
		UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>((PBYTE)ModuleBaseAddr + 0x6661380);

		auto OwnerPatch = Memory::FindPattern("\xC0\x0F\x84\x3C\x02\x00\x00\x0F\x2F\xF7\x0F\x86\xF5\x00\x00\x00", "xxxxxxxxxxxxxxxx");
		if (OwnerPatch)
		{
			DWORD dwProtection;
			VirtualProtect(OwnerPatch, 16, PAGE_EXECUTE_READWRITE, &dwProtection);

			reinterpret_cast<uint8_t*>(OwnerPatch)[2] = 0x85;
			reinterpret_cast<uint8_t*>(OwnerPatch)[11] = 0x8D;

			DWORD dwTemp;
			VirtualProtect(OwnerPatch, 16, dwProtection, &dwTemp);
		}

		GameplayStatics = SDK::UObject::FindObject<SDK::UGameplayStatics>("GameplayStatics Engine.Default__GameplayStatics");
		auto objLocalPlayer = UObject::FindObject<UFortLocalPlayer>("FortLocalPlayer Transient.FortEngine_1.FortLocalPlayer_1");
		LocalPlayer = reinterpret_cast<ULocalPlayer*>(objLocalPlayer);
		auto pConsole = SDK::UConsole::StaticClass()->CreateDefaultObject<SDK::UConsole>();
		pConsole->Outer = LocalPlayer->ViewportClient;
		LocalPlayer->ViewportClient->ViewportConsole = pConsole;
	}

	SDK::TArray<SDK::AActor*> FindActor(SDK::UClass* Class)
	{
		SDK::TArray<SDK::AActor*> Actor;
		GameplayStatics->STATIC_GetAllActorsOfClass(GEngine->GameViewport->World, Class, &Actor);
		return Actor;
	}

	DWORD UpdatePawn(LPVOID lpParam)
	{
		while (true)
		{
			if (Pawn && !Controller->IsInAircraft() && !Pawn->IsSkydiving())
			{
				if (GetAsyncKeyState(VK_SHIFT) & 0x8000)
				{
					Pawn->CurrentMovementStyle = EFortMovementStyle::Sprinting;
				}
				else
				{
					Pawn->CurrentMovementStyle = EFortMovementStyle::Running;
				}

				if (GetAsyncKeyState(VK_SPACE) & 0x8000)
				{
					if (!Pawn->IsJumpProvidingForce())
					{
						Pawn->Jump();
					}
				}
			}

			Sleep(1000 / 60);
		}
	}

	void InGame()
	{
		IsInitialized = true;

		KismetSystem = UObject::FindObject<UKismetSystemLibrary>("KismetSystemLibrary Engine.Default__KismetSystemLibrary");

		auto objCheatManager = UObject::FindObject<UFortCheatManager>("FortCheatManager Athena_Terrain.Athena_Terrain.PersistentLevel.Athena_PlayerController_C_1.FortCheatManager_1");
		CheatManager = static_cast<UFortCheatManager*>(objCheatManager);

		auto objGameMode = UObject::FindObject<AAthena_GameMode_C>("Athena_GameMode_C Athena_Terrain.Athena_Terrain.PersistentLevel.Athena_GameMode_C_1");
		GameMode = static_cast<AFortGameModeAthena*>(objGameMode);

		auto objController = UObject::FindObject<AAthena_PlayerController_C>("Athena_PlayerController_C Athena_Terrain.Athena_Terrain.PersistentLevel.Athena_PlayerController_C_1");
		Controller = static_cast<AFortPlayerControllerAthena*>(objController);

		Controller->CheatManager->Summon(TEXT("PlayerPawn_Athena_C"));
		auto actorPawn = FindActor(SDK::APlayerPawn_Athena_C::StaticClass())[0];
		Pawn = static_cast<AFortPlayerPawnAthena*>(actorPawn);
		Controller->Possess(Pawn);

		Pawn->ServerChoosePart(EFortCustomPartType::Head, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart M_Med_Soldier_Head_01_ATH.M_Med_Soldier_Head_01_ATH"));
		Pawn->ServerChoosePart(EFortCustomPartType::Body, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart M_Med_Soldier_01_Base_ATH.M_Med_Soldier_01_Base_ATH"));

		PlayerState = static_cast<AFortPlayerStateAthena*>(Controller->PlayerState);
		PlayerState->OnRep_CharacterParts();

		PlayerState->TeamIndex = EFortTeam::Monster;
		PlayerState->OnRep_TeamIndex();


		GameState = static_cast<AFortGameStateAthena*>(GEngine->GameViewport->World->GameState);
		reinterpret_cast<BrushStructObject*>(reinterpret_cast<uintptr_t>(GEngine->GameViewport->World->GameState) + 0x1438)->MapTexture = SDK::UObject::FindObject<SDK::UTexture2D>("Texture2D MiniMapAthena.MiniMapAthena");

		Pick = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
		PickGuid = { 0,0,0,0 };
		Pawn->EquipWeaponDefinition(Pick, PickGuid);

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
		if (Function->GetName().find("OnBeginSearch") != std::string::npos)
		{

		}
		if (Function->GetName().find("ReadyToStartMatch") != std::string::npos && !IsInitialized)
		{
			InGame();
		}
		if (Function->GetName().find("Search") != std::string::npos && IsInGame)
		{
			std::cout << Function->GetFullName() << std::endl;
		}
		if (Function->GetName().find("search") != std::string::npos && IsInGame)
		{
			std::cout << Function->GetFullName() << std::endl;
		}
		if (Function->GetName().find("LoadingScreenDropped") != std::string::npos && !IsInGame)
		{
			IsInGame = true;
		}
		if (Function->GetName().find("AttemptAircraftJump") != std::string::npos && IsInitialized && IsInGame)
		{
			Controller->CheatManager->Summon(TEXT("PlayerPawn_Athena_C"));
			auto actorPawn = FindActor(SDK::APlayerPawn_Athena_C::StaticClass())[0];
			Pawn = static_cast<AFortPlayerPawnAthena*>(actorPawn);
			Pawn->K2_SetActorRotation(FRotator{ 0,Pawn->K2_GetActorRotation().Yaw,0 }, false);
			Controller->Possess(Pawn);
			Pawn->EquipWeaponDefinition(Pick, PickGuid);
			PlayerState->OnRep_CharacterParts();
		}
		if (Function->GetName().find("OnAboutToEnterBackpack") != std::string::npos)
		{
			Pawn->EquipWeaponDefinition(UObject::FindObject<UFortWeaponItemDefinition>(PickupDEF), PickupGUID);
		}
		if (Function->GetName().find("CheatScript") != std::string::npos)
		{
			auto ScriptName = static_cast<SDK::UCheatManager_CheatScript_Params*>(Params)->ScriptName;
			if (ScriptName.IsValid())
			{
				auto StringConvert = ScriptName.ToString();
				if (StringConvert == "ready") // Only use on a map which you have to summon the pawn yourself
				{
					InGame();
				}
				if (StartsWith(StringConvert, "pickup"))
				{

					const auto arg = StringConvert.erase(0, StringConvert.find(" ") + 1);
					if (!arg.empty())
					{
						PickupNum++;
						std::string objPickup = "FortPickupAthena Athena_Terrain.Athena_Terrain.PersistentLevel.FortPickupAthena_";
						objPickup.append(std::to_string(PickupNum));

						Controller->CheatManager->Summon(TEXT("FortPickupAthena"));
						PickupWEP = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponRangedItemDefinition " + arg + "." + arg);
						auto Pickup = static_cast<AFortPickupAthena*>(UObject::FindObject<AFortPickupAthena>(objPickup));
						Pickup->K2_SetActorLocation(Pawn->K2_GetActorLocation(), false, true, new FHitResult);
						Pickup->TossPickup(Pawn->K2_GetActorLocation(), nullptr, 1, false);
						Pickup->PrimaryPickupItemEntry.ItemDefinition = PickupWEP;
						Pickup->PrimaryPickupItemEntry.Count = 1;
						Pickup->OnRep_PrimaryPickupItemEntry();
					}
				}
				if (StartsWith(StringConvert, "equip"))
				{

					const auto arg = StringConvert.erase(0, StringConvert.find(" ") + 1);

					if (!arg.empty())
					{
						Pawn->EquipWeaponDefinition(UObject::FindObject<UFortWeaponItemDefinition>(arg), FGuid{ rand(),rand(),rand(),rand() });
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
		AllocConsole();
		ShowWindow(GetConsoleWindow(), SW_SHOW);
		FILE* fp;
		freopen_s(&fp, "CONOIN$", "r", stdin);
		freopen_s(&fp, "CONOUT$", "w", stdout);
		freopen_s(&fp, "CONOUT$", "w", stderr);
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

