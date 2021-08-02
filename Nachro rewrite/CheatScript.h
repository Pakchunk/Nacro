#pragma once
#include "SDK.hpp"
#include "Hooks.h"
#include "Global.h"
#include "Player.h"

namespace CheatScript
{
	std::string StrToLower(std::string Str)
	{
		transform(Str.begin(), Str.end(), Str.begin(), tolower);
		return Str;
	}

	using namespace SDK;

	bool bInstantReload;

	UFortWeaponItemDefinition* PickupWeapon;

	void Help()
	{
		GameMode->Say(L"World:\ncheatscript pickup <Any WID>: Spawns the requested weapon at your location as a pickup.\n\nPlayer:\ncheatscript equip <Any WID>: Equips the requested weapon.\n\nFun:\ncheatscript win: Plays win effects.\ncheatscript fly: Toggles flight movement mode.\ncheatscript toggleinstantreload: Toggles instant reload.\ncheatscript dumpwids: Dumps all item definitions to \\FortniteGame\\Binaries\\Win64\\WIDs_Dump.txt.\n\nDevelopment:\ncheatscript dumpobjects: Dumps all GObjects into \\FortniteGame\\Binaries\\Win64\\Objects_Dump.txt.");
	}

	void Fly()
	{

	}

	void InstantReload()
	{
		bInstantReload = !bInstantReload;
		if (bInstantReload)
		{
			AthenaPawn->CurrentWeapon->WeaponReloadMontage = nullptr;
			AthenaPawn->CurrentWeapon->ReloadAnimation = nullptr;
		}

		if (!bInstantReload)
		{
			//re-equip if turning it off -- this resets the reload animation

			for (auto it = ItemsMap.begin(); it != ItemsMap.end(); ++it)
			{
				if (it->first == AthenaPawn->CurrentWeapon->WeaponData->GetName())
				{
					AthenaPawn->EquipWeaponDefinition(it->second, FGuid{ rand() % 9999,rand() % 9999,rand() % 9999,rand() % 9999 });
					break;
				}
			}
		}
	}


	bool PickUP(std::string ScriptParams)
	{
		if (StrToLower(ScriptParams).find("pickup") == 0)
		{
			const auto arg = ScriptParams.erase(0, ScriptParams.find(" ") + 1);

			if (!arg.empty())
			{
				PickupWeapon = nullptr;
				bool ShouldCheck = true;

				for (auto it = ItemsMap.begin(); it != ItemsMap.end(); ++it)
				{
					if (it->first == arg)
					{
						PickupWeapon = it->second;
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
					for (int i = 0; i < GObjects->ObjObjects.Num(); ++i)
					{
						auto curObject = GObjects->ObjObjects.GetByIndex(i);

						if (curObject != nullptr)
						{
							//if this returns true we've found our weapon
							if (curObject->GetFullName().find(arg + "." + arg) != std::string::npos)
							{
								std::cout << curObject->GetName() << std::endl;
								PickupWeapon = static_cast<UFortWeaponItemDefinition*>(curObject);
								ItemsMap.insert_or_assign(curObject->GetName(), PickupWeapon);
								//we dont need to run through EVERY other object after this so we can break out of the loop
								break;
							}

						}
					}
				}
				if (PickupWeapon == nullptr) {
					std::cout << "Item definition wasnt found! Aborting...\n";
					return false;
				}

				FTransform Transform;
				FQuat Quat;

				Quat.W = 1.0f; 
				Quat.X = AthenaPawn->K2_GetActorLocation().X;
				Quat.Y = AthenaPawn->K2_GetActorLocation().Y;
				Quat.Z = AthenaPawn->K2_GetActorLocation().Z;

				Transform.Rotation = Quat; 
				Transform.Scale3D = FVector{ 1,1,1 }; 
				Transform.Translation = AthenaPawn->K2_GetActorLocation();

				AFortPickupAthena* Pickup = static_cast<AFortPickupAthena*>(GameplayStatics->STATIC_BeginSpawningActorFromClass(GEngine->GameViewport->World, AFortPickupAthena::StaticClass(), Transform, false, AthenaPawn));
				GameplayStatics->STATIC_FinishSpawningActor(Pickup, Transform);

				//set its location to the players
				Pickup->K2_SetActorLocation(AthenaPawn->K2_GetActorLocation(), false, true, new FHitResult);

				//toss it
				Pickup->TossPickup(AthenaPawn->K2_GetActorLocation(), nullptr, 1, false);

				//set the item definition and count
				Pickup->PrimaryPickupItemEntry.ItemDefinition = PickupWeapon;
				Pickup->PrimaryPickupItemEntry.Count = 1;
				Pickup->OnRep_PrimaryPickupItemEntry();
			}
		}
	}


	void SetGravity(std::string ScriptParams)
	{
		const auto arg = ScriptParams.erase(0, ScriptParams.find(" ") + 1);

		if (arg.empty())
			AthenaPawn->CharacterMovement->GravityScale = 1.0f;


		std::stringstream StrStr(arg);
		float GravityFloat;

		StrStr >> GravityFloat;
		AthenaPawn->CharacterMovement->GravityScale = GravityFloat;
	}

	void DumpObjects()
	{

		std::ofstream txt("Objects_Dump.txt");

		txt << "Number of objects: " << GObjects->ObjObjects.Num() << "\n\n";

		for (int i = 0; i < GObjects->ObjObjects.Num(); ++i)
		{
			auto currentObject = GObjects->ObjObjects.GetByIndex(i);

			if (currentObject != nullptr)
				txt << "[" << GObjects->ObjObjects.Num() << "]" << "\t" << currentObject->GetFullName() << "\n";
		}

		MessageBoxA(nullptr, "Successfully dumped all objects to Objects_Dump.txt.", "Success!", MB_OK);
		txt.close();
	}

	void DumpNames()
	{
		std::ofstream txt("Names_Dump.txt");

		txt << "Number of names: " << GNames->Num() << "\n\n";

		for (int i = 0; i < GNames->Num(); ++i)
		{
			auto currentName = GNames->GetName(i);

			if (currentName != nullptr)
				txt << "[" << GNames->Num() << "]" << "\t" << currentName->GetAnsiName() << "\n";
		}

		MessageBoxA(nullptr, "Successfully dumped all objects to Objects_Dump.txt.", "Success!", MB_OK);
		txt.close();

	}

}