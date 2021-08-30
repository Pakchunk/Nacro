#pragma once

#include "SDK.hpp"
#include "Globals.hpp"
#include "Player.hpp"

#define NPOS std::string::npos

namespace World
{
	struct BrushStructObject
	{
		unsigned char GoTo[0x48];
		class UObject* MapTexture;
	};

	inline AActor* SpawnActor(UClass* ActorClass, FVector Location, FRotator Rotation)
	{
		FQuat Quat;
		FTransform Transform;
		Quat.W = 0;
		Quat.X = Rotation.Pitch;
		Quat.Y = Rotation.Roll;
		Quat.Z = Rotation.Yaw;

		Transform.Rotation = Quat;
		Transform.Scale3D = FVector{ 1,1,1 };
		Transform.Translation = Location;

		auto Actor = Globals::GameplayStatics->STATIC_BeginSpawningActorFromClass(Globals::GEngine->GameViewport->World, ActorClass, Transform, false, nullptr);
		Globals::GameplayStatics->STATIC_FinishSpawningActor(Actor, Transform);
		return Actor;
	}

	inline void LoadItems()
	{
		if (!Globals::bIsOnceOrMore)
		{
			Globals::Pickaxe = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");

			for (int i = 0; i < UObject::GetGlobalObjects().Num(); ++i)
			{
				auto Objects = UObject::GetGlobalObjects().GetByIndex(i);

				if (Objects != nullptr)
				{
					if (Objects->GetFullName().find("FortWeaponRangedItemDefinition ") != NPOS || Objects->GetFullName().find("FortWeaponMeleeItemDefinition ") != NPOS || Objects->GetFullName().find("FortBuildingItemDefinition ") != NPOS)
						if (Objects->GetFullName().find("Default__FortBuildingItemDefinition") != NPOS || Objects->GetFullName().find("Default__FortWeaponMeleeItemDefinition") != NPOS || Objects->GetFullName().find("Default__FortWeaponRangedItemDefinition") != NPOS)
							continue;
						else
						{
							Globals::ItemsMap.insert_or_assign(Objects->GetName(), static_cast<UFortWeaponItemDefinition*>(Objects));
							Player::Equip(static_cast<UFortWeaponItemDefinition*>(Objects), FGuid{ rand() % 9999,rand() % 9999,rand() % 9999,rand() % 9999 });
						}
				}
			}
		}
	}

	inline void SetupMiniMap()
	{
		reinterpret_cast<BrushStructObject*>(reinterpret_cast<uintptr_t>(Globals::GEngine->GameViewport->World->GameState) + 0x1438)->MapTexture =
			UObject::FindObject<UTexture2D>("Texture2D MiniMapAthena.MiniMapAthena");
	}

	inline void StartMatch()
	{
		Globals::AthenaController->ServerReadyToStartMatch();
		Globals::AthenaGameMode->StartMatch();
	}
}