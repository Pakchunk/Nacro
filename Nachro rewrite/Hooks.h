#pragma once
#include "SDK.hpp"
#include "Offsets.h"
#include "Utils.h"
#include "Global.h"
#include "Player.h"


#define NPOS std::string::npos

typedef PVOID(__fastcall* fOriginalPE)(void*, void*, void*);
static fOriginalPE OriginalPE = *Utils::Offset<fOriginalPE>(Offsets::ProcessEventOffset);

typedef void(__fastcall* CollectGarbage_Internal)(int32_t KeepFlags, bool bPerfromefullPurge);
static CollectGarbage_Internal OriginalGC = *Utils::Offset<CollectGarbage_Internal>(Offsets::CGInternalOffset);


namespace Hooks
{
	using namespace SDK;

	bool bIsAlive;

	bool bIsInLobby = true;
	bool bIsInGame = false;
	bool bPickupHudFound = false;
	bool bIsControlled = true;
	bool bIsFlying = false;
	bool bPickupNoticed;
	int PickupNum = 0;
	std::string PickupDEF;


	void* PEHook(UObject* object, UFunction* function, void* parameter)
	{	
		
		std::string objName = object->GetFullName();
		std::string funcName = function->GetFullName();

		if (funcName.find("CheatScript") != NPOS)
		{
			Player::HandleCheatScript(object, function, parameter);
		}
		
		if (funcName.find("BP_PlayButton") != NPOS && bIsInLobby)
		{
			Player::LoadAthena();

			bIsInLobby = false;
		}
		
		if (funcName.find("ReadyToStartMatch") != NPOS && !bIsAlive && !bIsInLobby)
		{
			Player::GetCharacterParts();

			if (!ReInitVariables)
				Utils::ThrowError("ReInitFailed");

			bIsAlive = true; // dont move this or you'll cause a loop wich takes 6gb of ramen noodles
			
			Player::SpawnPawn();
			Player::PossessPawn();
			Player::ActivateCheats();
			Player::SetUpPawnForPlay();
			Player::EquipPickaxe();
			Player::SetMiniMap();
			Player::StartMatch();

		}

		if (funcName.find("LoadingScreenDropped") != NPOS && !bIsInGame && bIsAlive)
		{
			if (!InitGlobalVariables())
				Utils::ThrowError("ReInitFailed!");

			std::cout << "LoadingScreenDropped" << std::endl;
			bIsInGame = true;
			GameState->FortTimeOfDayManager->TimeOfDay = rand() % 25;
		}

		if (funcName.find("AttemptAircraftJump") != NPOS || funcName.find("AircraftExitedDropZone") != NPOS && bIsInGame && bIsAlive)
		{
			if (PlayerController->IsInAircraft())
			{
				Player::JumpFromAircraft();
			}
		}

		if (funcName.find("ClientOnPawnDied") != NPOS && bIsInGame && bIsAlive)
		{
			bIsAlive = false;
			Player::Die();
		}

		if (funcName.find("Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded") != NPOS)
		{
			Player::VictoryDrone->K2_DestroyActor();
			AthenaPawn->K2_DestroyActor();
		}

		if (funcName.find("ServerHandlePickup") != NPOS)
		{
			Player::HandlePickup(parameter);
		}
		
		if (funcName.find("Tick") != NPOS && bIsInGame && !bIsInLobby && !bIsFlying && !PlayerController->IsInAircraft() && bIsAlive)
		{
			Player::HandleSprinting();
			Player::HandleJumping();
		}

		return OriginalPE(object, function, parameter);
	}

	void* CGHook(int32_t KeepFlags, bool bPerfromefullPurge)
	{
		return NULL;
	}


	bool CreateHooks()
	{
		uintptr_t* PEAddress = Utils::Offset<uintptr_t>(Offsets::ProcessEventOffset);
		uintptr_t* CGAddress = Utils::Offset<uintptr_t>(Offsets::CGInternalOffset);

		if (MH_CreateHook(reinterpret_cast<LPVOID>(PEAddress), PEHook, reinterpret_cast<LPVOID*>(&OriginalPE)) != MH_OK)
			return false;
		if (MH_EnableHook(reinterpret_cast<LPVOID>(PEAddress)) != MH_OK)
			return false;

		
		if (MH_CreateHook(reinterpret_cast<LPVOID>(CGAddress), CGHook, reinterpret_cast<LPVOID*>(&OriginalGC)) != MH_OK)
			return false;
		if (MH_EnableHook(reinterpret_cast<LPVOID>(CGAddress)) != MH_OK)
			return false;
			
		return true;
	}
}