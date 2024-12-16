#pragma once

#include <map>
#include "Offsets.hpp"
#include "Utils.hpp"
#include "SDK.hpp"
using namespace SDK;

namespace Globals
{
	bool bIsInLobby;
	bool bIsInitialized;
	bool bIsInGame;
	bool bIsOnceOrMore;

	// Cheatscripts
	bool bInstantReload = false;
	bool bJillMode;
	UAnimMontage* WeaponReloadMontage;
	UAnimMontage* ReloadAnimation;
	USkeletalMesh* JillMesh;

	UFortEngine* GEngine;
	int* GHandle;
	UFortLocalPlayer* LocalPlayer;
	AFortGameModeAthena* AthenaGameMode;
	AFortGameStateAthena* AthenaGameState;
	AFortPlayerControllerAthena* AthenaController;
	AFortPlayerPawnAthena* AthenaPawn;
	AFortPlayerStateAthena* AthenaPlayerState;

	UFortWeaponItemDefinition* Pickaxe;
	UFortWeaponItemDefinition* PickupItem;
	std::map<std::string, UFortWeaponItemDefinition*> ItemsMap;

	UCustomCharacterPart* charPartHead;
	UCustomCharacterPart* charPartBody;

	// Death animation
	UAnimMontage* DeathMontage;
	AActor* VictoryDrone;

	inline void InitGlobalsFrontend()
	{
		bIsInLobby = true;
		bIsOnceOrMore = false;

		GEngine = *Utils::Offset<UFortEngine*>(Offsets::GEngineOffset);

		GHandle = Utils::Offset<int>(Offsets::GHandleOffset);

		LocalPlayer = reinterpret_cast<UFortLocalPlayer*>(GEngine->GameInstance->LocalPlayers[0]);

		auto pConsole = UConsole::GetDefaultObj();
		pConsole->Outer = Globals::LocalPlayer->ViewportClient;
		LocalPlayer->ViewportClient->ViewportConsole = pConsole;
	}

	inline void InitGlobalsAthena()
	{
		AthenaGameMode = static_cast<AFortGameModeAthena*>(GEngine->GameViewport->World->AuthorityGameMode);
		AthenaGameState = static_cast<AFortGameStateAthena*>(AthenaGameMode->GameState);
		AthenaController = static_cast<AFortPlayerControllerAthena*>(GEngine->GameInstance->LocalPlayers[0]->PlayerController);
		AthenaPlayerState = static_cast<AFortPlayerStateAthena*>(AthenaController->PlayerState);
		bIsInitialized = true;
	}
};