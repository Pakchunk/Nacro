#pragma once
#include "SDK.hpp"
#include "Utils.h"
#include "Offsets.h"

using namespace SDK;

std::map<std::string, UFortWeaponItemDefinition*> ItemsMap;

uintptr_t Imagebase;

UFortEngine* GEngine;
UWorld* GWorld;
FUObjectArray* GObjects;
TNameEntryArray* GNames;

UKismetSystemLibrary* Kismet;
UFortKismetLibrary* FortKismet;
UGameplayStatics* GameplayStatics;

AFortPlayerControllerAthena* PlayerController;
AAthena_GameState_C* GameState;
AFortGameModeAthena* GameMode;
UFortLocalPlayer* LocalPlayer;
AFortPlayerPawnAthena* AthenaPawn;
AFortPlayerStateAthena* PlayerState;

UClass* AthenaPawnStaticClass;
UClass* VictoryDroneStaticClass;
UClass* WeaponItemStaticClass;



bool InitGlobalVariables()
{
	Imagebase = reinterpret_cast<uintptr_t>(GetModuleHandle(0));

	GEngine = *Utils::Offset<SDK::UFortEngine*>(Offsets::GEngineOffset);
	GWorld = *Utils::Offset<SDK::UWorld*>(Offsets::GWorldOffset);
	GObjects = Utils::Offset<FUObjectArray>(Offsets::GUObjectArrayOffset);
	GNames = *Utils::Offset<SDK::TNameEntryArray*>(Offsets::GNamesOffset);

	Kismet = reinterpret_cast<SDK::UKismetSystemLibrary*>(SDK::UKismetSystemLibrary::StaticClass());
	FortKismet = reinterpret_cast<SDK::UFortKismetLibrary*>(SDK::UFortKismetLibrary::StaticClass());
	GameplayStatics = reinterpret_cast<SDK::UGameplayStatics*>(SDK::UGameplayStatics::StaticClass());

	PlayerController = static_cast<SDK::AAthena_PlayerController_C*>(GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController);
	GameState = static_cast<SDK::AAthena_GameState_C*>(GWorld->GameState);
	GameMode = static_cast<SDK::AFortGameModeAthena*>(GWorld->AuthorityGameMode);
	LocalPlayer = static_cast<SDK::UFortLocalPlayer*>(GWorld->OwningGameInstance->LocalPlayers[0]);

	AthenaPawnStaticClass = AFortPlayerPawnAthena::StaticClass();
	VictoryDroneStaticClass = ABP_VictoryDrone_C::StaticClass();
	WeaponItemStaticClass = UFortWeaponItemDefinition::StaticClass();



	if (!GEngine || !GWorld || !GObjects || !GNames || !Kismet || !FortKismet || !GameplayStatics
		|| !PlayerController || !GameState || !GameMode || !LocalPlayer)
		return false;
	else
		return true;
}

bool ReInitVariables()
{
	PlayerController = static_cast<SDK::AAthena_PlayerController_C*>(GEngine->GameViewport->World->OwningGameInstance->LocalPlayers[0]->PlayerController);
	GameState = static_cast<SDK::AAthena_GameState_C*>(GEngine->GameViewport->World->GameState);
	GameMode = static_cast<SDK::AFortGameModeAthena*>(GEngine->GameViewport->World->AuthorityGameMode);
	LocalPlayer = static_cast<SDK::UFortLocalPlayer*>(GEngine->GameViewport->World->OwningGameInstance->LocalPlayers[0]);

	if (!PlayerController || !GameState || !GameMode || !LocalPlayer)
		return false;
	else
		return true;
}

void CommitAbilityPatch()
{
	uintptr_t AbilityPatch = Utils::FindPattern("C0 0F 84 3C 02 00 00 0F 2F F7 0F 86 F5 00 00 00");
	if (AbilityPatch)
	{
		DWORD dwProtection;
		VirtualProtect(reinterpret_cast<PBYTE>(AbilityPatch), 16, PAGE_EXECUTE_READWRITE, &dwProtection);

		reinterpret_cast<uint8_t*>(AbilityPatch)[2] = 0x85;
		reinterpret_cast<uint8_t*>(AbilityPatch)[11] = 0x8D;

		DWORD dwTemp;
		VirtualProtect(reinterpret_cast<PBYTE>(AbilityPatch), 16, dwProtection, &dwTemp);
	}
}