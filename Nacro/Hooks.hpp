#pragma once

#include "MinHook/MinHook.h"
#pragma comment(lib, "MinHook/libMinHook.x64.lib")

#include "SDK.hpp"
#include "Offsets.hpp"
#include "Player.hpp"
#include "World.hpp"
#include "Cheats.hpp"
#include "Abilities.hpp"

#define NPOS std::string::npos
using namespace SDK;

namespace Hooks
{
	// could split this into .h / .cpp but i dont care enough to
	void CreateHooks();

	void* CheatScriptHook(UCheatManager* thisref, FString ScriptName)
	{
		if (ScriptName.IsValid() && Globals::bIsInGame)
		{
			if (!Cheats::HandleCheats(ScriptName.ToString()))
				Globals::AthenaGameMode->Say
				(L"CheatScript not recognized, please use \'cheatscript help\' for a list of available CheatScript commands.");
		}

		return NULL;
	}

	void WalkHook(UObject* Context, FFrame& TheStack, void* Result)
	{
		if (Globals::bIsInGame)
		{
			Globals::AthenaPawn->SetActorEnableCollision(true);
			Globals::AthenaPawn->CharacterMovement->MovementMode = EMovementMode::MOVE_Walking;
		}
	}

	void FlyHook(UObject* Context, FFrame& TheStack, void* Result)
	{
		if (Globals::bIsInGame)
		{
			Globals::AthenaPawn->SetActorEnableCollision(true);
			Globals::AthenaPawn->CharacterMovement->MovementMode = EMovementMode::MOVE_Flying;
		}
	}

	void GhostHook(UObject* Context, FFrame& TheStack, void* Result)
	{
		if (Globals::bIsInGame)
		{
			Globals::AthenaPawn->SetActorEnableCollision(false);
			Globals::AthenaPawn->CharacterMovement->MovementMode = EMovementMode::MOVE_Flying;
		}
	}

	void ServerReturnToMainMenuHook(AFortPlayerControllerAthena* thisref)
	{
		if (Globals::bIsInGame)
		{
			Globals::bIsInLobby = true;
			Globals::bIsInitialized = false;
			Globals::bIsInGame = false;
			Globals::bInstantReload = false;
			Globals::bJillMode = false;
		}

		reinterpret_cast<AFortPlayerController*>(thisref)->ServerReturnToMainMenu();
	}

	void (*ServerHandlePickupOriginal)(AFortPlayerPawn* thisref, AFortPickup* Pickup, float InFlyTime, FVector InStartDirection, bool bPlayPickupSound);

	void ServerHandlePickupHook(AFortPlayerPawn* thisref, AFortPickup* Pickup, float InFlyTime, FVector InStartDirection, bool bPlayPickupSound)
	{
		if (Pickup->PrimaryPickupItemEntry.ItemDefinition->GetName() == "WID_Harvest_Pickaxe_Athena_C_T01")
		{
			Player::Equip(Globals::Pickaxe, FGuid{ 0,0,0,0 });
		}
		else
		{
			if (Pickup->PrimaryPickupItemEntry.ItemDefinition->IsA(UFortWeaponItemDefinition::StaticClass()))
			{
				for (auto it = Globals::ItemsMap.begin(); it != Globals::ItemsMap.end(); ++it)
				{
					if (it->first == Pickup->PrimaryPickupItemEntry.ItemDefinition->GetName())
						Player::Equip(it->second, FGuid{ rand() % 9999, rand() % 9999, rand() % 9999, rand() % 9999 });
				}
			}
		}

		if (Globals::bInstantReload)
		{
			Globals::WeaponReloadMontage = Globals::AthenaPawn->CurrentWeapon->WeaponReloadMontage;
			Globals::ReloadAnimation = Globals::AthenaPawn->CurrentWeapon->ReloadAnimation;

			Globals::AthenaPawn->CurrentWeapon->WeaponReloadMontage = nullptr;
			Globals::AthenaPawn->CurrentWeapon->ReloadAnimation = nullptr;
		}

		ServerHandlePickupOriginal(thisref, Pickup, InFlyTime, InStartDirection, bPlayPickupSound);
	}

	void OnServerAttemptAircraftJumpAircraftExitedDropZone()
	{
		if (Globals::AthenaController->IsInAircraft())
		{
			Player::SpawnPlayer();
			Globals::AthenaPawn->K2_SetActorRotation(FRotator{ 0,Globals::AthenaPawn->K2_GetActorRotation().Yaw,0 }, false);
			Globals::AthenaController->Possess(Globals::AthenaPawn);

			Player::Equip(Globals::Pickaxe, FGuid{ 0,0,0,0 });

			if (Globals::bJillMode)
				Globals::AthenaPawn->Mesh->SetSkeletalMesh(Globals::JillMesh, true);

			Player::ShowParts();
		}
	}

	void (*ServerAttemptAircraftJumpOriginal)(AFortPlayerControllerAthena* thisref, FRotator ClientRotation);
	
	void ServerAttemptAircraftJumpHook(AFortPlayerControllerAthena* thisref, FRotator ClientRotation)
	{
		OnServerAttemptAircraftJumpAircraftExitedDropZone();
		ServerAttemptAircraftJumpOriginal(thisref, ClientRotation);
	}

	void (*OnAircraftExitedDropZoneOriginal)(AFortGameModeAthena* thisref);

	void OnAircraftExitedDropZoneHook(AFortGameModeAthena* thisref)
	{
		OnServerAttemptAircraftJumpAircraftExitedDropZone();
		OnAircraftExitedDropZoneOriginal(thisref);
	}

	void (*ServerLoadingScreenDroppedOriginal)(AFortPlayerController* thisref);

	void ServerLoadingScreenDroppedHook(AFortPlayerController* thisref)
	{
		if (Globals::bIsInitialized && !Globals::bIsInGame && !Globals::bIsInLobby)
		{
			Globals::bIsInGame = true;
			Globals::AthenaGameState->FortTimeOfDayManager->TimeOfDay = rand() % 25;

			Globals::AthenaController->bHasClientFinishedLoading = true;
			Globals::AthenaController->ServerSetClientHasFinishedLoading(true);

			Globals::AthenaController->bHasServerFinishedLoading = true;
			Globals::AthenaController->OnRep_bHasServerFinishedLoading();
		}

		ServerLoadingScreenDroppedOriginal(thisref);
	}

	void (*ReadyToStartMatchOriginal)(AGameMode* thisref);

	void ReadyToStartMatchHook(AGameMode* thisref)
	{
		if (!Globals::bIsInitialized && !Globals::bIsInLobby)
		{
			Globals::InitGlobalsAthena();

			Player::SpawnPlayer();
			Globals::AthenaController->Possess(Globals::AthenaPawn);

			World::LoadItems();
			Player::Equip(Globals::Pickaxe, FGuid{ 0,0,0,0 });

			World::SetupMiniMap();

			Player::ChooseParts(Globals::charPartHead, Globals::charPartBody);
			Player::ShowParts();

			Globals::DeathMontage = UObject::FindObject<UAnimMontage>("AnimMontage PlayerDeath_Athena.PlayerDeath_Athena");

			Player::SetTeamIndex(EFortTeam::HumanPvP_Team1);

			static_cast<UFortCheatManager*>(Globals::AthenaController->CheatManager)->ToggleInfiniteAmmo();

			World::StartMatch();
			
			CreateHooks();

			Abilities::GiveAllAbilities();			
		}

		ReadyToStartMatchOriginal(thisref);
	}

	void OnPlayButtonPressedHook()
	{
		// Get CharacterParts before heading ingame
		Player::GrabCharacterParts();

		UGameplayStatics::OpenLevel(Globals::GEngine->GameViewport->World, UKismetStringLibrary::Conv_StringToName(L"Athena_Terrain"), true, L"");
		Globals::bIsInLobby = false;
	}

	// blehh im lazy
	inline void CreateHook(uintptr_t Offset, void* Detour, void* Original)
	{
		LPVOID asLPVOID = reinterpret_cast<LPVOID>(Utils::Offset<uintptr_t>(Offset));

		MH_CreateHook(asLPVOID, Detour, reinterpret_cast<LPVOID*>(&Original));
		MH_EnableHook(asLPVOID);
	}

	inline void CreateHooks()
	{
		std::cout << "createhooks begin\n";
		if (Globals::bIsInLobby && !Globals::bIsInitialized)
		{
			std::cout << "attempting mh initialize\n";
			std::cout << MH_Initialize() << "\n";
			std::cout << "mh initialize OK\n";

			std::cout << "attempting cheatscript hook\n";
			CreateHook(Offsets::CheatScriptOffset, CheatScriptHook, NULL);
			std::cout << "cheatscript hook OK\n";

			UClass* CheatManagerClass = UCheatManager::StaticClass();
			CheatManagerClass->GetFunction("CheatManager", "Ghost")->ExecFunction = GhostHook;
			std::cout << "ghost exec swap OK\n";
			CheatManagerClass->GetFunction("CheatManager", "Fly")->ExecFunction = FlyHook;
			std::cout << "fly exec swap OK\n";
			CheatManagerClass->GetFunction("CheatManager", "Walk")->ExecFunction = WalkHook;
			std::cout << "walk exec swap OK\n";

			void** FortPlayerControllerAthenaVTable = (void**)AFortPlayerControllerAthena::GetDefaultObj()->VTable;
			Memory::SwapVTableEntry(FortPlayerControllerAthenaVTable, 0x22E, ServerReturnToMainMenuHook);
			std::cout << "serverreturntomainmenu vtable swap OK\n";
			ServerAttemptAircraftJumpOriginal = decltype(ServerAttemptAircraftJumpOriginal)(FortPlayerControllerAthenaVTable[0x30E]);
			Memory::SwapVTableEntry(FortPlayerControllerAthenaVTable, 0x30E, ServerAttemptAircraftJumpHook);
			std::cout << "serverattemptaircraftjump vtable swap OK\n";

			void** FortPlayerPawnVTable = (void**)AFortPlayerPawn::GetDefaultObj()->VTable;
			ServerHandlePickupOriginal = decltype(ServerHandlePickupOriginal)(FortPlayerPawnVTable[0x179]);
			Memory::SwapVTableEntry(FortPlayerPawnVTable, 0x179, ServerHandlePickupHook);
			std::cout << "serverhandlepickup vtable swap OK\n";

			OnAircraftExitedDropZoneOriginal = Utils::Offset<void(AFortGameModeAthena*)>(Offsets::OnAircraftExitedDropZoneOffset);
			CreateHook(Offsets::OnAircraftExitedDropZoneOffset, OnAircraftExitedDropZoneHook, NULL);
			std::cout << "onaircraftexiteddropzone hook OK\n";

			void** FortPlayerControllerVTable = (void**)AFortPlayerController::StaticClass()->VTable;
			ServerLoadingScreenDroppedOriginal = decltype(ServerLoadingScreenDroppedOriginal)(FortPlayerControllerVTable[0x234]);
			Memory::SwapVTableEntry(FortPlayerControllerVTable, 0x234, ServerLoadingScreenDroppedHook);
			std::cout << "serverloadingscreendropped vtable swap OK\n";

			void** GameModeVTable = (void**)AGameMode::StaticClass()->VTable;
			ReadyToStartMatchOriginal = decltype(ReadyToStartMatchOriginal)(GameModeVTable[0xF7]);
			Memory::SwapVTableEntry(GameModeVTable, 0xF7, ReadyToStartMatchHook);
			std::cout << "readytostartmatch vtable swap OK\n";

			CreateHook(Offsets::OnPlayButtonPressedOffset, OnPlayButtonPressedHook, NULL);
			std::cout << "onplaybuttonpressed hook OK\n";
		}
		std::cout << "createhooks end\n";
	}
}