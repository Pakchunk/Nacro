#pragma once

#include "Globals.hpp"
#define NPOS std::string::npos

namespace Player
{
	//We call this in frontend to get the characterparts currently on our player. This sets the variables in Globals, so we can apply them ingame.
	inline void GrabCharacterParts()
	{
		for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
		{
			auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

			if (Objects != nullptr)
			{
				if (Objects->GetFullName().find("CustomCharacterPart") != NPOS && Objects->GetFullName().find("ATH") != NPOS)
				{
					if (Objects->GetFullName().find("Head") != NPOS)
						Globals::charPartHead = static_cast<UCustomCharacterPart*>(Objects);
					else
						Globals::charPartBody = static_cast<UCustomCharacterPart*>(Objects);
				}

				if (Globals::charPartHead && Globals::charPartBody)
					break;
			}
		}
	}

	//Spawn a new Athena pawn and set our pawn to it
	inline void SpawnPlayer()
	{
		Globals::AthenaController->CheatManager->Summon(L"PlayerPawn_Athena_C");
		SDK::TArray<AActor*> outActors;
		Globals::GameplayStatics->STATIC_GetAllActorsOfClass(Globals::GEngine->GameViewport->World, SDK::APlayerPawn_Athena_C::StaticClass(), &outActors);
		Globals::AthenaPawn = static_cast<AFortPlayerPawnAthena*>(outActors[0]);
	}

	//Set our player's CharacterParts
	inline void ChooseParts(UCustomCharacterPart* InHead, UCustomCharacterPart* InBody)
	{
		Globals::AthenaPawn->ServerChoosePart(EFortCustomPartType::Head, InHead);
		Globals::AthenaPawn->ServerChoosePart(EFortCustomPartType::Body, InBody);
	}

	//Show CharacterParts on our player
	inline void ShowParts()
	{
		Globals::AthenaPlayerState->OnRep_CharacterParts();
	}

	//Sets team index, allowing for markers and health in top left
	inline void SetTeamIndex(EFortTeam Team)
	{
		Globals::AthenaPlayerState->TeamIndex = Team;
		Globals::AthenaPlayerState->OnRep_TeamIndex();
	}

	//Equip given item definition
	inline void Equip(UFortWeaponItemDefinition* Item, FGuid Guid)
	{
		Globals::AthenaPawn->EquipWeaponDefinition(Item, Guid);

		if (Globals::bInstantReload)
		{
			Globals::WeaponReloadMontage = Globals::AthenaPawn->CurrentWeapon->WeaponReloadMontage;
			Globals::ReloadAnimation = Globals::AthenaPawn->CurrentWeapon->ReloadAnimation;

			Globals::AthenaPawn->CurrentWeapon->WeaponReloadMontage = nullptr;
			Globals::AthenaPawn->CurrentWeapon->ReloadAnimation = nullptr;
		}
	}

	//left here in case we need it, but i doubt it will ever get used again
	DWORD UpdatePawn(LPVOID lpParam)
	{
		while (true)
		{
			

			if (Globals::bIsInLobby)
				break;

			Sleep(1000 / 30);
		}

		ExitThread(0);
	}
};