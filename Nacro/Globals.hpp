#pragma once

#include <map>
#include "SDK.hpp"
#include "Utils.hpp"
#include "Offsets.hpp"
#include "Hooks.hpp"
using namespace SDK;

namespace Globals
{
	bool bIsInLobby;
	bool bIsInitialized;
	bool bIsInGame;
	bool bHasJumped;
	bool bIsOnceOrMore = false;

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

	UCustomCharacterPart* charPartHead;
	UCustomCharacterPart* charPartBody;

	UAnimMontage* DeathMontage;
	AActor* VictoryDrone;

	std::map<std::string, UFortWeaponItemDefinition*> ItemsMap;


	inline void InitGlobalsFrontend()
	{
		bIsInLobby = true;

		uintptr_t ModuleBaseAddr = (uintptr_t)GetModuleHandle(NULL);
		GEngine = *reinterpret_cast<UFortEngine**>(Utils::Offset<uintptr_t**>(Offsets::GEngineOffset));
		FName::GNames = *reinterpret_cast<TNameEntryArray**>(Utils::Offset<uintptr_t**>(Offsets::GNamesOffset));
		UObject::GObjects = reinterpret_cast<FUObjectArray*>(Utils::Offset<uintptr_t*>(Offsets::GUObjectArrayOffset));

		LocalPlayer = reinterpret_cast<UFortLocalPlayer*>(GEngine->GameInstance->LocalPlayers[0]);
		GameplayStatics = reinterpret_cast<UGameplayStatics*>(UGameplayStatics::StaticClass());


		auto pConsole = UConsole::StaticClass()->CreateDefaultObject<UConsole>();
		pConsole->Outer = Globals::LocalPlayer->ViewportClient;
		Globals::LocalPlayer->ViewportClient->ViewportConsole = pConsole;
	}

	inline void InitGlobalsAthena()
	{
		bIsInLobby = false;
		AthenaGameMode = static_cast<AFortGameModeAthena*>(Globals::GEngine->GameViewport->World->AuthorityGameMode);
		AthenaGameState = static_cast<AFortGameStateAthena*>(Globals::AthenaGameMode->GameState);
		AthenaController = static_cast<AFortPlayerControllerAthena*>(Globals::GEngine->GameInstance->LocalPlayers[0]->PlayerController);
		AthenaPlayerState = static_cast<AFortPlayerStateAthena*>(AthenaController->PlayerState);
		bIsInitialized = true;
	}
};