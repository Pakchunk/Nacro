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

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HideParticleComponentsAttachedToMesh
struct UMissionBlueprintFunctionLibrary_C_HideParticleComponentsAttachedToMesh_Params
{
	class UStaticMeshComponent*                        MeshComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SuccessfullyDeactivatedParticle;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuestObjective
struct UMissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuestObjective_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestReference;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestBackendObjectiveName;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerController*                       PlayerControllerOut;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CompletedQuestObjective;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetContributingControllersNearActor
struct UMissionBlueprintFunctionLibrary_C_GetContributingControllersNearActor_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AFortPlayerController*>               PlayerControllersNearby;                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               SuccessfullyFoundPlayer;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.PointLocationsBetweenTwoVectors
struct UMissionBlueprintFunctionLibrary_C_PointLocationsBetweenTwoVectors_Params
{
	struct FVector                                     Vector_1;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Vector_2;                                                 // (Parm, IsPlainOldData)
	int                                                HowManyPoints;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             VectorPoints;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               SuccessfullyFoundPoints;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetCurrentDifficulty
struct UMissionBlueprintFunctionLibrary_C_GetCurrentDifficulty_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difficulty;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ApplyDifficultyOffset
struct UMissionBlueprintFunctionLibrary_C_ApplyDifficultyOffset_Params
{
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDifficulty;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DistanceBetweenTwoVectors
struct UMissionBlueprintFunctionLibrary_C_DistanceBetweenTwoVectors_Params
{
	struct FVector                                     Vector1;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     Vector2;                                                  // (Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuest
struct UMissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuest_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestReference;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestBackendName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerController*                       PlayerControllerOut;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CompletedQuest;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.SeperatePlayersWhoNeedQuest
struct UMissionBlueprintFunctionLibrary_C_SeperatePlayersWhoNeedQuest_Params
{
	class UFortQuestItemDefinition*                    QuestItemReference;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestObjectiveBackendName;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AFortPlayerController*>               PlayersWhoNeedQuest;                                      // (Parm, OutParm, ZeroConstructor)
	TArray<class AFortPlayerController*>               PlayersWhoDoNotNeedQuest;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.BasicBuildingItemDrop
struct UMissionBlueprintFunctionLibrary_C_BasicBuildingItemDrop_Params
{
	TEnumAsByte<EnumEventWorldItemDrop>                Item_Drop_Level;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LootDropLocation;                                         // (Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GrantSurvivorBadge
struct UMissionBlueprintFunctionLibrary_C_GrantSurvivorBadge_Params
{
	int                                                LootLevelIn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivorBadgeTypes>                   BadgeType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetBuildingRecommendation
struct UMissionBlueprintFunctionLibrary_C_GetBuildingRecommendation_Params
{
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BuildingCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RowFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.Random_360_VectorInRange
struct UMissionBlueprintFunctionLibrary_C_Random_360_VectorInRange_Params
{
	float                                              MinDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Random_Vector_Result_;                                    // (Parm, OutParm, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPawnNearActor
struct UMissionBlueprintFunctionLibrary_C_AnyPawnNearActor_Params
{
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPawnNearActor;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class AFortPawn*>                           PawnsNearActor;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GiveQuestUpdateToPlayers
struct UMissionBlueprintFunctionLibrary_C_GiveQuestUpdateToPlayers_Params
{
	class UFortQuestItemDefinition*                    Quest_Reference;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Quest_Objective_Backend_Name;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStatEvent;                                       // (Parm)
	TArray<class AFortPlayerController*>               PlayerControllersForUpdate;                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DropChance
struct UMissionBlueprintFunctionLibrary_C_DropChance_Params
{
	float                                              DropPercentChance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DropResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPlayerNearActor
struct UMissionBlueprintFunctionLibrary_C_AnyPlayerNearActor_Params
{
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayerNearActor;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class AFortPlayerPawn*>                     PlayersNearActor;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.FlashObjectiveUI
struct UMissionBlueprintFunctionLibrary_C_FlashObjectiveUI_Params
{
	class AFortObjectiveBase*                          Objective_Reference;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStopRescue
struct UMissionBlueprintFunctionLibrary_C_NPC_DroneStopRescue_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStartRescue
struct UMissionBlueprintFunctionLibrary_C_NPC_DroneStartRescue_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ListPlayersWhoNeedQuest
struct UMissionBlueprintFunctionLibrary_C_ListPlayersWhoNeedQuest_Params
{
	class UFortQuestItemDefinition*                    Quest_Reference;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Quest_Backend_Name;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AFortPlayerController*>               Player_Controllers_Who_Require_The_Quest;                 // (Parm, OutParm, ZeroConstructor)
	bool                                               DoesAnyoneRequireTheQuest;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyoneRequireQuest
struct UMissionBlueprintFunctionLibrary_C_DoesAnyoneRequireQuest_Params
{
	class UFortQuestItemDefinition*                    QuestReference;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Quest_Backend_Name;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SomePlayerNeedsTheQuest;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.QuestObjectiveCountAchieved
struct UMissionBlueprintFunctionLibrary_C_QuestObjectiveCountAchieved_Params
{
	class AFortPlayerController*                       PlayerControllerReference;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    Quest_Item_Reference;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStatHandle;                                      // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quest_Count_Achieved;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Quest_Count_Required;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               SuccessfullyFoundCount;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HighlightQuestActor
struct UMissionBlueprintFunctionLibrary_C_HighlightQuestActor_Params
{
	class AActor*                                      ActorToHighlight;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HighlightEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesPlayerHaveQuest
struct UMissionBlueprintFunctionLibrary_C_DoesPlayerHaveQuest_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    Quest_Item_Reference;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Quest_Item_Objective_Backend_Name;                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestValid;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerController*                       PlayerControllerRef;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetObjectiveBadgeIconBrush
struct UMissionBlueprintFunctionLibrary_C_GetObjectiveBadgeIconBrush_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                RewardTag;                                                // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 IconBrush;                                                // (Parm, OutParm)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.UnRegisterUI UpdatesWithDamageEvents
struct UMissionBlueprintFunctionLibrary_C_UnRegisterUI_UpdatesWithDamageEvents_Params
{
	class AActor*                                      ActorToUnRegisterWith;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortMissionState*                           MissionState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.RegisterUI UpdatesWithDamageEvents
struct UMissionBlueprintFunctionLibrary_C_RegisterUI_UpdatesWithDamageEvents_Params
{
	class AActor*                                      ActorToRegisterWith;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortMissionState*                           MissionState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
