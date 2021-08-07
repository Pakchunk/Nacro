#pragma once

#include "Globals.hpp"
#define NPOS std::string::npos

namespace Player
{
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
			}
		}
	}

	inline void SpawnPlayer()
	{
		Globals::AthenaController->CheatManager->Summon(L"PlayerPawn_Athena_C");
		SDK::TArray<AActor*> outActors;
		Globals::GameplayStatics->STATIC_GetAllActorsOfClass(Globals::GEngine->GameViewport->World, SDK::APlayerPawn_Athena_C::StaticClass(), &outActors);
		Globals::AthenaPawn = static_cast<AFortPlayerPawnAthena*>(outActors[0]);
	}

	inline void ChooseParts(UCustomCharacterPart* InHead, UCustomCharacterPart* InBody)
	{
		Globals::AthenaPawn->ServerChoosePart(EFortCustomPartType::Head, InHead);
		Globals::AthenaPawn->ServerChoosePart(EFortCustomPartType::Body, InBody);
	}

	inline void ShowParts()
	{
		Globals::AthenaPlayerState->OnRep_CharacterParts();
	}

	inline void SetTeamIndex(EFortTeam Team)
	{
		Globals::AthenaPlayerState->TeamIndex = Team;
		Globals::AthenaPlayerState->OnRep_TeamIndex();
	}

	inline void Equip(UFortWeaponItemDefinition* Item, FGuid Guid)
	{
		Globals::AthenaPawn->EquipWeaponDefinition(Item, Guid);
	}

	DWORD UpdatePawn(LPVOID lpParam)
	{
		while (true)
		{
			if (GetAsyncKeyState(VK_SHIFT) & 0x8000 && !Globals::AthenaController->IsInAircraft() && !Globals::AthenaPawn->IsSkydiving() && Globals::AthenaPawn->CurrentWeapon && !Globals::AthenaPawn->CurrentWeapon->bIsReloadingWeapon && !Globals::AthenaPawn->CurrentWeapon->bIsTargeting)
			{
				Globals::AthenaPawn->CurrentMovementStyle = EFortMovementStyle::Sprinting;
			}
			else
			{
				Globals::AthenaPawn->CurrentMovementStyle = EFortMovementStyle::Running;
			}

			if (GetAsyncKeyState(0x53) & 0x8000)
			{
				if (Globals::AthenaPawn->CurrentMovementStyle != EFortMovementStyle::Running)
				{
					Globals::AthenaPawn->CurrentMovementStyle = EFortMovementStyle::Running;
				}
			}

			if (GetAsyncKeyState(VK_SPACE) & 0x8000 && !Globals::AthenaController->IsInAircraft() && !Globals::AthenaPawn->IsSkydiving())
			{
				if (!Globals::bHasJumped)
				{
					Globals::bHasJumped = true;
					if (Globals::AthenaPawn->bIsCrouched)
					{
						Globals::AthenaPawn->UnCrouch(true);
					}
					else
					{
						if (!Globals::AthenaPawn->IsJumpProvidingForce())
						{
							Globals::AthenaPawn->Jump();
						}
					}
				}
			}
			else if (GetAsyncKeyState(VK_SPACE) & 0x8000 && !Globals::AthenaController->IsInAircraft() && Globals::AthenaPawn->IsSkydiving() && !Globals::AthenaPawn->IsParachuteForcedOpen()) {
				if (!Globals::bHasJumped) {
					Globals::bHasJumped = true;
					if (!Globals::AthenaPawn->IsParachuteOpen()) {
						Globals::AthenaPawn->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Custom, 2U);
					}
					else {
						Globals::AthenaPawn->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Custom, 3U);
					}
				}
			}
			else
			{
				if (Globals::bHasJumped)
					Globals::bHasJumped = false;
			}

			if (Globals::AthenaPawn->CurrentWeapon && Globals::AthenaPawn->CurrentWeapon->bIsTargeting)
			{
				Globals::AthenaPawn->CurrentMovementStyle = EFortMovementStyle::Walking;
			}

			if (Globals::bIsInLobby)
			{
				break;
			}

			Sleep(1000 / 30);
		}

		ExitThread(0);
	}
};