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
	bool bHasJumped;
	bool bIsOnceOrMore;

	// Cheatscripts
	bool bInstantReload = false;
	bool bInfiniteJump = false;
	bool JillMode;
	UAnimMontage* WeaponReloadMontage;
	UAnimMontage* ReloadAnimation;
	USkeletalMesh* JillMesh;

	UFortEngine* GEngine;
	UGameplayStatics* GameplayStatics;
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
		FName::GNames = *Utils::Offset<TNameEntryArray*>(Offsets::GNamesOffset);
		UObject::GObjects = Utils::Offset<FUObjectArray>(Offsets::GUObjectArrayOffset);

		LocalPlayer = reinterpret_cast<UFortLocalPlayer*>(GEngine->GameInstance->LocalPlayers[0]);
		GameplayStatics = reinterpret_cast<UGameplayStatics*>(UGameplayStatics::StaticClass());


		auto pConsole = UConsole::StaticClass()->CreateDefaultObject<UConsole>();
		pConsole->Outer = Globals::LocalPlayer->ViewportClient;
		Globals::LocalPlayer->ViewportClient->ViewportConsole = pConsole;
	}

	inline void InitGlobalsAthena()
	{
		AthenaGameMode = static_cast<AFortGameModeAthena*>(Globals::GEngine->GameViewport->World->AuthorityGameMode);
		AthenaGameState = static_cast<AFortGameStateAthena*>(Globals::AthenaGameMode->GameState);
		AthenaController = static_cast<AFortPlayerControllerAthena*>(Globals::GEngine->GameInstance->LocalPlayers[0]->PlayerController);
		AthenaPlayerState = static_cast<AFortPlayerStateAthena*>(AthenaController->PlayerState);
		bIsInitialized = true;
	}
};