#pragma once

#include <sstream>
#include <fstream>
#include "SDK.hpp"
#include "Utils.hpp"

#define NPOS std::string::npos

namespace Cheats
{
	inline bool HandleCheats(std::string Parameters)
	{
		//We cant just set Parameters to Utils::ToLower(Parameters) before the ifs, since that breaks things like pickups by making the argument also all lowercase (trust me i tried)

		if (Utils::ToLower(Parameters) == "help")
		{
			//We just dump a bunch of things into the console
			Globals::AthenaGameMode->Say
			(L"World:\ncheatscript pickup <Any WID>: Spawns the requested weapon at your location as a pickup.\n\nPlayer:\ncheatscript equip <Any WID>: Equips the requested weapon.\n\nFun:\ncheatscript win: Plays win effects.\ncheatscript setgravity <float>: Sets the gravity scale to the requested float value.\ncheatscript toggleinstantreload: Toggles instant reload.\ncheatscript dumpwids: Dumps all item definitions to \\FortniteGame\\Binaries\\Win64\\WIDs_Dump.txt.\n\nDevelopment:\ncheatscript dumpobjects: Dumps all GObjects into \\FortniteGame\\Binaries\\Win64\\Objects_Dump.txt.\ncheatscript dumpnames: Dumps all GNames into \\FortniteGame\\Binaries\\Win64\\Names_Dump.txt.");

			//We use this return value in Hooks.hpp, to see if we put in a valid cheatscript (and if not, tell the user)
			return true;
		}

		if (Utils::ToLower(Parameters) == "fly")
		{
			Globals::AthenaGameMode->Say
			(L"No need to use this CheatScript anymore! You can use the engine commands like \'fly\', \'walk\', and \'ghost\' now!");

			return true;
		}

		if (Utils::StartsWithToLower(Parameters, "setgravity"))
		{
			//If there is no number given, then we just reset gravity to normal
			if (Utils::ToLower(Parameters) == "setgravity")
			{
				Globals::AthenaPawn->CharacterMovement->GravityScale = 1;
				return true;
			}

			const auto &arg = Parameters.erase(0, Parameters.find(" ") + 1);
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

		if (Utils::ToLower(Parameters) == "toggleinfinitejump")
		{
			Globals::bInfiniteJump = !Globals::bInfiniteJump;
		}

		if (Utils::ToLower(Parameters) == "win")
		{
			Globals::AthenaController->ClientNotifyWon();
			Globals::AthenaController->PlayWinEffects();

			return true;
		}

		if (Utils::ToLower(Parameters) == "toggleinstantreload")
		{
			//Toggle our variable
			Globals::bInstantReload = !Globals::bInstantReload;

			//After the toggle, we check if its true:
			if (Globals::bInstantReload)
			{
				//Set our variables in Globals to avoid re-equipping our weapon
				Globals::WeaponReloadMontage = Globals::AthenaPawn->CurrentWeapon->WeaponReloadMontage;
				Globals::ReloadAnimation = Globals::AthenaPawn->CurrentWeapon->ReloadAnimation;
				//If it is, just set the animation to nullptr
				Globals::AthenaPawn->CurrentWeapon->WeaponReloadMontage = nullptr;
				Globals::AthenaPawn->CurrentWeapon->ReloadAnimation = nullptr;
			}
			else
			{
				//Reset our weapon's montages using the variables in Globals
				Globals::AthenaPawn->CurrentWeapon->WeaponReloadMontage = Globals::WeaponReloadMontage;
				Globals::AthenaPawn->CurrentWeapon->ReloadAnimation = Globals::ReloadAnimation;
			}

			return true;
		}

		if (Utils::StartsWithToLower(Parameters, "pickup"))
		{
			const auto &arg = Parameters.erase(0, Parameters.find(" ") + 1);

			if (!arg.empty())
			{
				Globals::PickupItem = nullptr;
				bool ShouldCheck{};

				//Run through the entire map
				for (auto it = Globals::ItemsMap.begin(); it != Globals::ItemsMap.end(); ++it)
				{
					//it->first will be a string with the items name in it. We use this to see if we found it.
					if (it->first == arg)
					{
						//Then, we use it->second, which contains the item definition itself, to get the item.
						Globals::PickupItem = it->second;
						ShouldCheck = false;
						break;
					}
					else
					{
						//If we dont find anything in the map, then we have to run through all objects to find what we are looking for.
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
							//Our items full name will be WID.WID, for example: WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03
							//So if we find this, we know we have our item.
							if (Objects->GetFullName().find(arg + "." + arg) != NPOS)
							{
								Globals::PickupItem = static_cast<UFortWeaponItemDefinition*>(Objects);
								//We then add the item to the map, so we don't need to do this again.
								Globals::ItemsMap.insert_or_assign(Objects->GetName(), Globals::PickupItem);
								//Once we've found our object, we dont need to go through the rest of the objects, so we can just break out of the loop.
								break;
							}

						}
					}
				}

				if (Globals::PickupItem == nullptr)
				{
					Globals::AthenaGameMode->Say(L"ItemDefinition not found!");
					return true; //We don't want the generic cheatscript not found message
				}

				//Spawn and set up our pickup
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
			const auto &arg = Parameters.erase(0, Parameters.find(" ") + 1);

			if (!arg.empty())
			{
				bool ShouldCheck{};

				for (auto it = Globals::ItemsMap.begin(); it != Globals::ItemsMap.end(); ++it)
				{
					if (it->first == arg)
					{
						if (!it->second->IsA(UFortWeaponItemDefinition::StaticClass()))
						{
							break;
							return NULL;
						}

						Player::Equip(it->second, FGuid{ rand() % 9999, rand() % 9999, rand() % 9999, rand() % 9999 });
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

		if (Utils::ToLower(Parameters) == "tryability")
		{
			FGameplayAbilitySpec* AbilitySpec = new FGameplayAbilitySpec();

			for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
			{
				auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

				if (Objects->GetFullName().find("Default__FortGameplayAbility_Sprint") != NPOS)
				{
					AbilitySpec->Ability = static_cast<UGameplayAbility*>(Objects);
					AbilitySpec->Level = 1;
					AbilitySpec->InputID = 0;

					Player::GiveAbility(Globals::AthenaPawn->AbilitySystemComponent, AbilitySpec, nullptr);
				}
			}
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
			MessageBoxA(nullptr, "Successfully dumped all objects to Objects_Dump.txt.", "Success!", MB_ICONINFORMATION);
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
			MessageBoxA(nullptr, "Successfully dumped all Weapon IDs to WIDs_Dump.txt.", "Success!", MB_ICONINFORMATION);
			txt.close();

			return true;
		}

		if (Utils::ToLower(Parameters) == "dumpnames")
		{
			std::ofstream txt("Names_Dump.txt");
			for (int i = 0; i < FName::GNames->Num(); ++i)
			{
				auto currentName = (*FName::GNames)[i];

				if (currentName != nullptr)
					txt << currentName->GetAnsiName() << "\n";
			}
			MessageBoxA(nullptr, "Successfully dumped all names to Names_Dump.txt.", "Success!", MB_ICONINFORMATION);
			txt.close();

			return true;
		}

		return false;
	}
}