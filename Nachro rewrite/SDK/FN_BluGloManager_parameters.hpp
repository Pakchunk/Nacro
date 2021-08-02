#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BluGloManager.BluGloManager_C.IssueBluGloRequestForMission
struct ABluGloManager_C_IssueBluGloRequestForMission_Params
{
	class AFortMission*                                Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToSpawnBluGloFrom;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.StartSpawnFXAndAudio
struct ABluGloManager_C_StartSpawnFXAndAudio_Params
{
	struct FVector                                     SpawnCenter;                                              // (Parm, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnFXEmitter;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.SpawnBluGloGroup
struct ABluGloManager_C_SpawnBluGloGroup_Params
{
	class AActor*                                      ActorToSpawnFrom;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (Parm, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.ChooseSpawnCenter
struct ABluGloManager_C_ChooseSpawnCenter_Params
{
	class AActor*                                      ActorToSpawnFrom;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToSpawnFrom;                                      // (Parm, IsPlainOldData)
	struct FVector                                     SpawnCenter;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsRandomly
struct ABluGloManager_C_BuildSpawnLocationsRandomly_Params
{
	struct FVector                                     LocationToSpawnFrom;                                      // (Parm, IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             LocationsForSpawningBluGlo;                               // (Parm, OutParm, ZeroConstructor)
};

// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsFromQueryLocations
struct ABluGloManager_C_BuildSpawnLocationsFromQueryLocations_Params
{
	int                                                NumBluGloToSpawn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             QueryResultLocations;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             LocationsForSpawningBluGlo;                               // (Parm, OutParm, ZeroConstructor)
};

// Function BluGloManager.BluGloManager_C.BuildSpawnLocations
struct ABluGloManager_C_BuildSpawnLocations_Params
{
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnCenter;                                              // (Parm, IsPlainOldData)
	TArray<struct FVector>                             LocationsForSpawningBluGlo;                               // (Parm, OutParm, ZeroConstructor)
};

// Function BluGloManager.BluGloManager_C.IssueBluGloRequest
struct ABluGloManager_C_IssueBluGloRequest_Params
{
	int                                                NumBluGloToSpawn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToSpawnFrom;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (Parm, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.SpawnBluGlo
struct ABluGloManager_C_SpawnBluGlo_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm, IsPlainOldData)
	struct FVector                                     SpawnFromLocation;                                        // (Parm, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.RemoveOccupiedNodes
struct ABluGloManager_C_RemoveOccupiedNodes_Params
{
};

// Function BluGloManager.BluGloManager_C.RequestedBluGo
struct ABluGloManager_C_RequestedBluGo_Params
{
	class AFortMission*                                Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EQS_Start_Location;                                       // (Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.UserConstructionScript
struct ABluGloManager_C_UserConstructionScript_Params
{
};

// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseActor
struct ABluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseActor_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BluGloManager.BluGloManager_C.StopSpawnFX
struct ABluGloManager_C_StopSpawnFX_Params
{
	bool                                               off;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.OnBluGloQueryFinished
struct ABluGloManager_C_OnBluGloQueryFinished_Params
{
	class AActor*                                      ActorToSpawnFrom;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (Parm, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.SpawnFXComplete
struct ABluGloManager_C_SpawnFXComplete_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.SpawnBluGloGroupEvent
struct ABluGloManager_C_SpawnBluGloGroupEvent_Params
{
	struct FVector                                     SpawnCenter;                                              // (Parm, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.AddMoreBluGloInWorld
struct ABluGloManager_C_AddMoreBluGloInWorld_Params
{
	class AFortMission*                                Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseEQS
struct ABluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseEQS_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BluGloManager.BluGloManager_C.ExecuteUbergraph_BluGloManager
struct ABluGloManager_C_ExecuteUbergraph_BluGloManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
