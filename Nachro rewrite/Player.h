#pragma once
#include "SDK.hpp"
#include"Global.h"
#include"CheatScript.h"

#define NPOS std::string::npos





namespace Player
{
	std::string StrToLower(std::string Str)
	{
		transform(Str.begin(), Str.end(), Str.begin(), tolower);
		return Str;
	}

	using namespace SDK;

	bool bHasJumped = false;
	bool bUseInstantReload = false;

	UCustomCharacterPart* charPartHead;
	UCustomCharacterPart* charPartBody;

	
	UAnimMontage* DeatMontage;

	FGuid PickaxeGuid;
	UFortWeaponItemDefinition* Pickaxe;

	ABP_VictoryDrone_C* VictoryDrone;

	std::map<std::string, UFortWeaponItemDefinition*> ItemsMap;

	struct BrushStructObject
	{
		unsigned char GoTo[0x48];
		class UObject* MapTexture;
	};

	void EnableConsole()
	{
		UFortConsole* UEConsole = UFortConsole::StaticClass()->CreateDefaultObject<UFortConsole>();
		UEConsole->Outer = LocalPlayer->ViewportClient;
		 
		LocalPlayer->ViewportClient->ViewportConsole = UEConsole;
	}

	inline void GetCharacterParts()
	{
		for (int i = 0; i < GObjects->ObjObjects.Num(); i++)
		{
			UObject* currObject = GObjects->ObjObjects.GetByIndex(i);

			if (currObject == nullptr)
				continue;

			std::string objName = currObject->GetFullName();

			if (objName.find("CustomCharacterPart") != NPOS && objName.find("ATH") != NPOS)
			{
				if (objName.find("F_MED_BLK_Red_Head_01_ATH") != NPOS || objName.find("F_Med_Soldier_TV12_ATH") != NPOS)
						continue;
				
				if (objName.find("Head") != NPOS)
					charPartHead = reinterpret_cast<UCustomCharacterPart*>(currObject);
				else
					charPartBody = reinterpret_cast<UCustomCharacterPart*>(currObject);
			}
			if (charPartHead != nullptr && charPartBody != nullptr)
				break;
		}
		if (charPartHead == nullptr || charPartBody == nullptr)
		{
			charPartHead = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_MED_BLK_Red_Head_01_ATH.F_MED_BLK_Red_Head_01_ATH");
			charPartBody = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_TV12_ATH.F_Med_Soldier_TV12_ATH");
		}
		
	}

	inline void LoadAthena()
	{
		PlayerController->LocalTravel(L"Athena_Terrain");
	}

	inline void SpawnPawn()
	{
		PlayerController = static_cast<AFortPlayerControllerAthena*>(GEngine->GameViewport->GameInstance->LocalPlayers[0]->PlayerController);
		PlayerController->CheatManager->Summon(L"PlayerPawn_Athena_C");

		TArray<AActor*> outArray;
		GameplayStatics->STATIC_GetAllActorsOfClass(GEngine->GameViewport->World, AthenaPawnStaticClass, &outArray);
		AthenaPawn = reinterpret_cast<AFortPlayerPawnAthena*>(outArray[0]);
	}

	inline void PossessPawn()
	{
		PlayerController->Possess(AthenaPawn);
	}

	inline void ActivateCheats()
	{
		static_cast<UFortCheatManager*>(PlayerController->CheatManager)->ToggleInfiniteAmmo();
		PlayerController->CheatManager->God();
	}

	void SetUpPawnForPlay()
	{
		if (!charPartHead || !charPartBody)
			Utils::ThrowErrorExit("Character parts are null!");

		AthenaPawn->ServerChoosePart(EFortCustomPartType::Head, charPartHead);
		AthenaPawn->ServerChoosePart(EFortCustomPartType::Body, charPartBody);

		AFortPlayerStateAthena* PlayerState = static_cast<AFortPlayerStateAthena*>(PlayerController->PlayerState);
		PlayerState->OnRep_CharacterParts();

		PlayerState->TeamIndex = EFortTeam::HumanPvP_Team1;
		PlayerState->OnRep_TeamIndex();

		DeatMontage = UObject::FindObject<UAnimMontage>("AnimMontage PlayerDeath_Athena.PlayerDeath_Athena");
	}

	inline void EquipPickaxe()
	{
		if(Pickaxe == nullptr)
			Pickaxe = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");

		AthenaPawn->EquipWeaponDefinition(Pickaxe, PickaxeGuid = { 0,0,0,0 });
		PlayerController->AddItemToQuickBars(Pickaxe, EFortQuickBars::Primary, 0);
	}

	inline void SetMiniMap()
	{
		reinterpret_cast<BrushStructObject*>(reinterpret_cast<uintptr_t>(GEngine->GameViewport->World->GameState) + 0x1438)->MapTexture = 
			UObject::FindObject<UTexture2D>("Texture2D MiniMapAthena.MiniMapAthena");
	}

	void StartMatch()
	{
		GameMode = reinterpret_cast<AFortGameModeAthena*>(GWorld->AuthorityGameMode);

		PlayerController->Role = ENetRole::ROLE_Authority;

		PlayerController->ServerReadyToStartMatch();
		static_cast<AFortGameModeAthena*>(GEngine->GameViewport->World->AuthorityGameMode)->StartMatch();
		

		PlayerState = reinterpret_cast<AFortPlayerStateAthena*>(AthenaPawn->PlayerState);
		/*
		FKey consoleKey;
		consoleKey.KeyName = "F2";

		PlayerController->ConsoleKey(consoleKey);
		*/
	}

	void JumpFromAircraft()
	{
		SpawnPawn();

		AthenaPawn->ServerChoosePart(EFortCustomPartType::Head, charPartHead);
		AthenaPawn->ServerChoosePart(EFortCustomPartType::Body, charPartBody);

		AthenaPawn->K2_SetActorRotation(FRotator{ 0, AthenaPawn->K2_GetActorRotation().Yaw, 0 }, false);

		PossessPawn();

		PlayerState->OnRep_CharacterParts();

		EquipPickaxe();
	}

	void Die()
	{
		AthenaPawn->PlayAnimMontage(DeatMontage, 0.7f, "");
		PlayerController->CheatManager->Summon(L"BP_VictoryDrone_C");

		TArray<AActor*> outArray;
		GameplayStatics->STATIC_GetAllActorsOfClass(GWorld, VictoryDroneStaticClass, &outArray);

		VictoryDrone = reinterpret_cast<ABP_VictoryDrone_C*>(outArray[0]);
		
		VictoryDrone->K2_SetActorLocationAndRotation(AthenaPawn->K2_GetActorLocation(), FRotator{ 0,0,0 }, true, true, new FHitResult);
	}

	bool HandleCheatScript(UObject* object, UFunction* function, void* params)
	{
		auto ScriptStr = static_cast<UCheatManager_CheatScript_Params*>(params)->ScriptName.ToString();

		std::string searchStr = StrToLower(ScriptStr);

		if (searchStr.find("help") != NPOS)
			CheatScript::Help();
		
		if (searchStr.find("fly") != NPOS)
			CheatScript::Fly();

		if (searchStr.find("toggleinstantreload") != NPOS || searchStr.find("instantreload") != NPOS)
			CheatScript::InstantReload();

		if (searchStr.find("dumpobjects") != NPOS || searchStr.find("dump objects") != NPOS)
			CheatScript::DumpObjects();

		if (searchStr.find("dumpnames") != NPOS || searchStr.find("dump names") != NPOS)
			CheatScript::DumpNames();

		if (searchStr.find("pickup") != NPOS)
			if (!CheatScript::PickUP(ScriptStr))
				return false;

		return true;
	}

	void HandlePickup(void* Params)
	{
		auto Param = static_cast<AFortPlayerPawn_ServerHandlePickup_Params*>(Params);

		for (auto it = ItemsMap.begin(); it != ItemsMap.end(); ++it)
		{
			if (it->first == Param->Pickup->PrimaryPickupItemEntry.ItemDefinition->GetName())
			{
				if (Param->Pickup->PrimaryPickupItemEntry.ItemDefinition->GetFullName().find("Weapon"))
				{
					if (!Param->Pickup->PrimaryPickupItemEntry.ItemDefinition->IsA(WeaponItemStaticClass))
					{
						break;
					}

					AthenaPawn->EquipWeaponDefinition(it->second, Param->Pickup->PrimaryPickupItemEntry.ItemGuid);

					if (bUseInstantReload)
					{
						AthenaPawn->CurrentWeapon->WeaponReloadMontage = nullptr;
						AthenaPawn->CurrentWeapon->ReloadAnimation = nullptr;
					}
					break;
				}
			}
		}
	}

	__forceinline void HandleSprinting()
	{
		if (GetAsyncKeyState(VK_SHIFT) & 0x8000 && !PlayerController->IsInAircraft() && !AthenaPawn->IsSkydiving()
			&& AthenaPawn->CurrentWeapon && !AthenaPawn->CurrentWeapon->bIsReloadingWeapon && !AthenaPawn->CurrentWeapon->bIsTargeting)
		{
			AthenaPawn->CurrentMovementStyle = EFortMovementStyle::Sprinting;
		}
		else
		{
			AthenaPawn->CurrentMovementStyle = EFortMovementStyle::Running;
		}
	}

	__forceinline void HandleJumping()
	{
		if (GetAsyncKeyState(VK_SPACE) & 0x8000)
		{
			if (AthenaPawn->IsSkydiving() && !PlayerController->IsInAircraft())
			{
				if (!bHasJumped) {
					if (!AthenaPawn->IsParachuteOpen())
						AthenaPawn->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Custom, 2U);

					else if (AthenaPawn->IsParachuteOpen() && !AthenaPawn->IsParachuteForcedOpen())
						AthenaPawn->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Custom, 3U);
					bHasJumped = true;
				}
			}
			else
			{
				if (!bHasJumped)
				{
					bHasJumped = true;
					if (AthenaPawn->bIsCrouched)
					{
						AthenaPawn->UnCrouch(true);
					}

					else
					{
						if (!AthenaPawn->IsJumpProvidingForce())
							AthenaPawn->Jump();
					}
				}
			}
		}
		else {
			if (bHasJumped)
				bHasJumped = false;
		}
	}
};  