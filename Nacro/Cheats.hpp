#pragma once

#include "SDK.hpp"
#include "Utils.hpp"
#include "World.hpp"
#include "Globals.hpp"
#include <sstream>
#include <fstream>

namespace Cheats
{
	inline bool HandleCheats(std::string Parameters)
	{
		if (Utils::ToLower(Parameters) == "help")
		{
			Globals::AthenaGameMode->Say
			(L"World:\ncheatscript pickup <Any WID>: Spawns the requested weapon at your location as a pickup.\n\nPlayer:\ncheatscript equip <Any WID>: Equips the requested weapon.\n\nFun:\ncheatscript win: Plays win effects.\ncheatscript fly: Toggles flight movement mode.\ncheatscript setgravity <float>: Sets the gravity scale to the requested float value.\ncheatscript toggleinstantreload: Toggles instant reload.\ncheatscript dumpwids: Dumps all item definitions to \\FortniteGame\\Binaries\\Win64\\WIDs_Dump.txt.\n\nDevelopment:\ncheatscript dumpobjects: Dumps all GObjects into \\FortniteGame\\Binaries\\Win64\\Objects_Dump.txt.");

			return true;
		}

		if (Utils::ToLower(Parameters) == "fly")
		{
			Globals::bIsFlying = !Globals::bIsFlying;

			if (Globals::bIsFlying)
				Globals::AthenaPawn->CharacterMovement->MovementMode = EMovementMode::MOVE_Flying;

			if (!Globals::bIsFlying)
				Globals::AthenaPawn->CharacterMovement->MovementMode = EMovementMode::MOVE_Walking;

			return true;
		}

		if (Utils::StartsWithToLower(Parameters, "setgravity"))
		{
			if (Utils::ToLower(Parameters) == "setgravity")
			{
				Globals::AthenaPawn->CharacterMovement->GravityScale = 1;
				return true;
			}

			const auto arg = Parameters.erase(0, Parameters.find(" ") + 1);
			if (arg.empty())
			{
				Globals::AthenaPawn->CharacterMovement->GravityScale = 1;
				return true;
			}

			std::stringstream StrStr(arg);
			float GravityFloat;

			StrStr >> GravityFloat;
			Globals::AthenaPawn->CharacterMovement->GravityScale = GravityFloat;

			return true;
		}

		if (Utils::ToLower(Parameters) == "win")
		{
			Globals::AthenaController->ClientNotifyWon();
			Globals::AthenaController->PlayWinEffects();

			return true;
		}

		if (Utils::ToLower(Parameters) == "toggleinstantreload")
		{
			Globals::bInstantReload = !Globals::bInstantReload;

			if (Globals::bInstantReload)
			{
				Globals::AthenaPawn->CurrentWeapon->WeaponReloadMontage = nullptr;
				Globals::AthenaPawn->CurrentWeapon->ReloadAnimation = nullptr;
			}

			if (!Globals::bInstantReload)
			{
				for (auto it = Globals::ItemsMap.begin(); it != Globals::ItemsMap.end(); ++it)
				{
					if (it->first == Globals::AthenaPawn->CurrentWeapon->WeaponData->GetName())
					{
						Player::Equip(it->second, FGuid{ rand() % 9999,rand() % 9999,rand() % 9999,rand() % 9999 });
						break;
					}
				}
			}

			return true;
		}

		if (Utils::StartsWithToLower(Parameters, "pickup"))
		{
			const auto arg = Parameters.erase(0, Parameters.find(" ") + 1);

			if (!arg.empty())
			{
				Globals::PickupItem = nullptr;
				bool ShouldCheck;

				for (auto it = Globals::ItemsMap.begin(); it != Globals::ItemsMap.end(); ++it)
				{
					if (it->first == arg)
					{
						Globals::PickupItem = it->second;
						ShouldCheck = false;
						break;
					}
					else
					{
						ShouldCheck = true;
					}
				}

				if (ShouldCheck)
				{
					for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
					{
						auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

						if (Objects != nullptr)
						{
							if (Objects->GetFullName().find(arg + "." + arg) != NPOS)
							{
								Globals::PickupItem = static_cast<UFortWeaponItemDefinition*>(Objects);
								Globals::ItemsMap.insert_or_assign(Objects->GetName(), Globals::PickupItem);
								break;
							}

						}
					}
				}

				if (Globals::PickupItem == nullptr)
					return NULL;


				auto Pickup = static_cast<AFortPickupAthena*>(World::SpawnActor(AFortPickupAthena::StaticClass(), Globals::AthenaPawn->K2_GetActorLocation(), FRotator{ 0,0,0 }));
				Pickup->K2_SetActorLocation(Globals::AthenaPawn->K2_GetActorLocation(), false, true, new FHitResult);
				Pickup->TossPickup(Globals::AthenaPawn->K2_GetActorLocation(), nullptr, 1, false);
				Pickup->PrimaryPickupItemEntry.ItemDefinition = Globals::PickupItem;
				Pickup->PrimaryPickupItemEntry.Count = 1;
				Pickup->OnRep_PrimaryPickupItemEntry();
			}

			return true;
		}
		
		if (Utils::StartsWithToLower(Parameters, "equip"))
		{
			const auto arg = Parameters.erase(0, Parameters.find(" ") + 1);

			if (!arg.empty())
			{
				bool ShouldCheck;

				for (auto it = Globals::ItemsMap.begin(); it != Globals::ItemsMap.end(); ++it)
				{
					if (it->first == arg)
					{
						if (!it->second->IsA(UFortWeaponItemDefinition::StaticClass()))
						{
							break;
							return NULL;
						}

						Player::Equip(it->second, FGuid{ rand() % 9999,rand() % 9999,rand() % 9999,rand() % 9999 });
						ShouldCheck = false;
						break;
					}
					else
					{
						ShouldCheck = true;
					}
				}

				if (ShouldCheck)
				{
					for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
					{
						auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

						if (Objects != nullptr)
						{
							if (Objects->GetFullName().find(arg + "." + arg) != NPOS)
							{
								if (!Objects->IsA(UFortWeaponItemDefinition::StaticClass()))
								{
									break;
									return NULL;
								}

								Player::Equip(static_cast<UFortWeaponItemDefinition*>(Objects), FGuid{ rand() % 9999,rand() % 9999,rand() % 9999,rand() % 9999 });
								Globals::ItemsMap.insert_or_assign(Objects->GetName(), static_cast<UFortWeaponItemDefinition*>(Objects));
								break;
							}

						}
					}
				}
			}

			return true;
		}

		if (Utils::ToLower(Parameters) == "dumpobjects")
		{
			std::ofstream txt("Objects_Dump.txt");
			for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
			{
				auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

				if (Objects != nullptr)
					txt << Objects->GetFullName() << "\n";
			}
			MessageBoxA(nullptr, "Successfully dumped all objects to Objects_Dump.txt.", "Success!", MB_OK);
			txt.close();

			return true;
		}

		if (Utils::ToLower(Parameters) == "dumpwids")
		{
			std::ofstream txt("WIDs_Dump.txt");
			for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
			{
				auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

				if (Objects != nullptr)
				{
					if (Objects->GetFullName().find("FortWeaponRangedItemDefinition ") != NPOS || Objects->GetFullName().find("FortWeaponMeleeItemDefinition ") != NPOS || Objects->GetFullName().find("FortBuildingItemDefinition ") != NPOS)
						if (Objects->GetFullName().find("Default__FortBuildingItemDefinition") != NPOS || Objects->GetFullName().find("Default__FortWeaponMeleeItemDefinition") != NPOS || Objects->GetFullName().find("Default__FortWeaponRangedItemDefinition") != NPOS)
							continue;
						else
							txt << Objects->GetName() << "\n";
				}
			}
			MessageBoxA(nullptr, "Successfully dumped all Weapon IDs to WIDs_Dump.txt.", "Success!", MB_OK);
			txt.close();

			return true;
		}

		// TODO: add names dump cheat

		return false;
	}
}