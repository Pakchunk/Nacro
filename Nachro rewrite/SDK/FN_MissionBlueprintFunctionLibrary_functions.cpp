// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HideParticleComponentsAttachedToMesh
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    MeshComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SuccessfullyDeactivatedParticle (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_HideParticleComponentsAttachedToMesh(class UStaticMeshComponent* MeshComponent, class UObject* __WorldContext, bool* SuccessfullyDeactivatedParticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HideParticleComponentsAttachedToMesh");

	UMissionBlueprintFunctionLibrary_C_HideParticleComponentsAttachedToMesh_Params params;
	params.MeshComponent = MeshComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SuccessfullyDeactivatedParticle != nullptr)
		*SuccessfullyDeactivatedParticle = params.SuccessfullyDeactivatedParticle;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuestObjective
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* QuestReference                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   QuestBackendObjectiveName      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerController*   PlayerControllerOut            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CompletedQuestObjective        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_HasPlayerCompletedQuestObjective(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, const struct FName& QuestBackendObjectiveName, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuestObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuestObjective");

	UMissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuestObjective_Params params;
	params.PlayerController = PlayerController;
	params.QuestReference = QuestReference;
	params.QuestBackendObjectiveName = QuestBackendObjectiveName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerControllerOut != nullptr)
		*PlayerControllerOut = params.PlayerControllerOut;
	if (CompletedQuestObjective != nullptr)
		*CompletedQuestObjective = params.CompletedQuestObjective;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetContributingControllersNearActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AFortPlayerController*> PlayerControllersNearby        (Parm, OutParm, ZeroConstructor)
// bool                           SuccessfullyFoundPlayer        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_GetContributingControllersNearActor(float Distance, class AActor* Actor, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersNearby, bool* SuccessfullyFoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetContributingControllersNearActor");

	UMissionBlueprintFunctionLibrary_C_GetContributingControllersNearActor_Params params;
	params.Distance = Distance;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerControllersNearby != nullptr)
		*PlayerControllersNearby = params.PlayerControllersNearby;
	if (SuccessfullyFoundPlayer != nullptr)
		*SuccessfullyFoundPlayer = params.SuccessfullyFoundPlayer;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.PointLocationsBetweenTwoVectors
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Vector_1                       (Parm, IsPlainOldData)
// struct FVector                 Vector_2                       (Parm, IsPlainOldData)
// int                            HowManyPoints                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         VectorPoints                   (Parm, OutParm, ZeroConstructor)
// bool                           SuccessfullyFoundPoints        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_PointLocationsBetweenTwoVectors(const struct FVector& Vector_1, const struct FVector& Vector_2, int HowManyPoints, class UObject* __WorldContext, TArray<struct FVector>* VectorPoints, bool* SuccessfullyFoundPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.PointLocationsBetweenTwoVectors");

	UMissionBlueprintFunctionLibrary_C_PointLocationsBetweenTwoVectors_Params params;
	params.Vector_1 = Vector_1;
	params.Vector_2 = Vector_2;
	params.HowManyPoints = HowManyPoints;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VectorPoints != nullptr)
		*VectorPoints = params.VectorPoints;
	if (SuccessfullyFoundPoints != nullptr)
		*SuccessfullyFoundPoints = params.SuccessfullyFoundPoints;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetCurrentDifficulty
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Difficulty                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_GetCurrentDifficulty(class UObject* __WorldContext, float* Difficulty, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetCurrentDifficulty");

	UMissionBlueprintFunctionLibrary_C_GetCurrentDifficulty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difficulty != nullptr)
		*Difficulty = params.Difficulty;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ApplyDifficultyOffset
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseDifficulty                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_ApplyDifficultyOffset(const struct FName& RowName, float BaseDifficulty, class UObject* __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ApplyDifficultyOffset");

	UMissionBlueprintFunctionLibrary_C_ApplyDifficultyOffset_Params params;
	params.RowName = RowName;
	params.BaseDifficulty = BaseDifficulty;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DistanceBetweenTwoVectors
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Vector1                        (Parm, IsPlainOldData)
// struct FVector                 Vector2                        (Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_DistanceBetweenTwoVectors(const struct FVector& Vector1, const struct FVector& Vector2, class UObject* __WorldContext, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DistanceBetweenTwoVectors");

	UMissionBlueprintFunctionLibrary_C_DistanceBetweenTwoVectors_Params params;
	params.Vector1 = Vector1;
	params.Vector2 = Vector2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* QuestReference                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   QuestBackendName               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerController*   PlayerControllerOut            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CompletedQuest                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_HasPlayerCompletedQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, const struct FName& QuestBackendName, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuest");

	UMissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuest_Params params;
	params.PlayerController = PlayerController;
	params.QuestReference = QuestReference;
	params.QuestBackendName = QuestBackendName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerControllerOut != nullptr)
		*PlayerControllerOut = params.PlayerControllerOut;
	if (CompletedQuest != nullptr)
		*CompletedQuest = params.CompletedQuest;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.SeperatePlayersWhoNeedQuest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* QuestItemReference             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   QuestObjectiveBackendName      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AFortPlayerController*> PlayersWhoNeedQuest            (Parm, OutParm, ZeroConstructor)
// TArray<class AFortPlayerController*> PlayersWhoDoNotNeedQuest       (Parm, OutParm, ZeroConstructor)

void UMissionBlueprintFunctionLibrary_C::STATIC_SeperatePlayersWhoNeedQuest(class UFortQuestItemDefinition* QuestItemReference, const struct FName& QuestObjectiveBackendName, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayersWhoNeedQuest, TArray<class AFortPlayerController*>* PlayersWhoDoNotNeedQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.SeperatePlayersWhoNeedQuest");

	UMissionBlueprintFunctionLibrary_C_SeperatePlayersWhoNeedQuest_Params params;
	params.QuestItemReference = QuestItemReference;
	params.QuestObjectiveBackendName = QuestObjectiveBackendName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayersWhoNeedQuest != nullptr)
		*PlayersWhoNeedQuest = params.PlayersWhoNeedQuest;
	if (PlayersWhoDoNotNeedQuest != nullptr)
		*PlayersWhoDoNotNeedQuest = params.PlayersWhoDoNotNeedQuest;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.BasicBuildingItemDrop
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EnumEventWorldItemDrop> Item_Drop_Level                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LootDropLocation               (Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_BasicBuildingItemDrop(TEnumAsByte<EnumEventWorldItemDrop> Item_Drop_Level, const struct FVector& LootDropLocation, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.BasicBuildingItemDrop");

	UMissionBlueprintFunctionLibrary_C_BasicBuildingItemDrop_Params params;
	params.Item_Drop_Level = Item_Drop_Level;
	params.LootDropLocation = LootDropLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GrantSurvivorBadge
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LootLevelIn                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESurvivorBadgeTypes> BadgeType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_GrantSurvivorBadge(int LootLevelIn, TEnumAsByte<ESurvivorBadgeTypes> BadgeType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GrantSurvivorBadge");

	UMissionBlueprintFunctionLibrary_C_GrantSurvivorBadge_Params params;
	params.LootLevelIn = LootLevelIn;
	params.BadgeType = BadgeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetBuildingRecommendation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            BuildingCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RowFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_GetBuildingRecommendation(const struct FName& RowName, class UObject* __WorldContext, int* BuildingCount, bool* RowFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetBuildingRecommendation");

	UMissionBlueprintFunctionLibrary_C_GetBuildingRecommendation_Params params;
	params.RowName = RowName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildingCount != nullptr)
		*BuildingCount = params.BuildingCount;
	if (RowFound != nullptr)
		*RowFound = params.RowFound;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.Random_360_VectorInRange
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MinDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Random_Vector_Result_          (Parm, OutParm, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_Random_360_VectorInRange(float MinDistance, float MaxDistance, class UObject* __WorldContext, struct FVector* Random_Vector_Result_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.Random_360_VectorInRange");

	UMissionBlueprintFunctionLibrary_C_Random_360_VectorInRange_Params params;
	params.MinDistance = MinDistance;
	params.MaxDistance = MaxDistance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Random_Vector_Result_ != nullptr)
		*Random_Vector_Result_ = params.Random_Vector_Result_;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPawnNearActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPawnNearActor                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class AFortPawn*>       PawnsNearActor                 (Parm, OutParm, ZeroConstructor)

void UMissionBlueprintFunctionLibrary_C::STATIC_AnyPawnNearActor(float DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool* IsPawnNearActor, TArray<class AFortPawn*>* PawnsNearActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPawnNearActor");

	UMissionBlueprintFunctionLibrary_C_AnyPawnNearActor_Params params;
	params.DistanceToCheck = DistanceToCheck;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPawnNearActor != nullptr)
		*IsPawnNearActor = params.IsPawnNearActor;
	if (PawnsNearActor != nullptr)
		*PawnsNearActor = params.PawnsNearActor;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GiveQuestUpdateToPlayers
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* Quest_Reference                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Quest_Objective_Backend_Name   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDataTableRowHandle     ObjectiveStatEvent             (Parm)
// TArray<class AFortPlayerController*> PlayerControllersForUpdate     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* Quest_Reference, const struct FName& Quest_Objective_Backend_Name, const struct FDataTableRowHandle& ObjectiveStatEvent, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersForUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GiveQuestUpdateToPlayers");

	UMissionBlueprintFunctionLibrary_C_GiveQuestUpdateToPlayers_Params params;
	params.Quest_Reference = Quest_Reference;
	params.Quest_Objective_Backend_Name = Quest_Objective_Backend_Name;
	params.ObjectiveStatEvent = ObjectiveStatEvent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerControllersForUpdate != nullptr)
		*PlayerControllersForUpdate = params.PlayerControllersForUpdate;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DropChance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DropPercentChance              (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DropResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_DropChance(float DropPercentChance, class UObject* __WorldContext, bool* DropResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DropChance");

	UMissionBlueprintFunctionLibrary_C_DropChance_Params params;
	params.DropPercentChance = DropPercentChance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DropResult != nullptr)
		*DropResult = params.DropResult;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPlayerNearActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPlayerNearActor              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class AFortPlayerPawn*> PlayersNearActor               (Parm, OutParm, ZeroConstructor)

void UMissionBlueprintFunctionLibrary_C::STATIC_AnyPlayerNearActor(float DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool* IsPlayerNearActor, TArray<class AFortPlayerPawn*>* PlayersNearActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPlayerNearActor");

	UMissionBlueprintFunctionLibrary_C_AnyPlayerNearActor_Params params;
	params.DistanceToCheck = DistanceToCheck;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlayerNearActor != nullptr)
		*IsPlayerNearActor = params.IsPlayerNearActor;
	if (PlayersNearActor != nullptr)
		*PlayersNearActor = params.PlayersNearActor;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.FlashObjectiveUI
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective_Reference            (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_FlashObjectiveUI(class AFortObjectiveBase* Objective_Reference, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.FlashObjectiveUI");

	UMissionBlueprintFunctionLibrary_C_FlashObjectiveUI_Params params;
	params.Objective_Reference = Objective_Reference;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStopRescue
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_NPC_DroneStopRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStopRescue");

	UMissionBlueprintFunctionLibrary_C_NPC_DroneStopRescue_Params params;
	params.Actor = Actor;
	params.Instigator = Instigator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStartRescue
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_NPC_DroneStartRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStartRescue");

	UMissionBlueprintFunctionLibrary_C_NPC_DroneStartRescue_Params params;
	params.Actor = Actor;
	params.Instigator = Instigator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ListPlayersWhoNeedQuest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* Quest_Reference                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Quest_Backend_Name             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AFortPlayerController*> Player_Controllers_Who_Require_The_Quest (Parm, OutParm, ZeroConstructor)
// bool                           DoesAnyoneRequireTheQuest      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_ListPlayersWhoNeedQuest(class UFortQuestItemDefinition* Quest_Reference, const struct FName& Quest_Backend_Name, class UObject* __WorldContext, TArray<class AFortPlayerController*>* Player_Controllers_Who_Require_The_Quest, bool* DoesAnyoneRequireTheQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ListPlayersWhoNeedQuest");

	UMissionBlueprintFunctionLibrary_C_ListPlayersWhoNeedQuest_Params params;
	params.Quest_Reference = Quest_Reference;
	params.Quest_Backend_Name = Quest_Backend_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Controllers_Who_Require_The_Quest != nullptr)
		*Player_Controllers_Who_Require_The_Quest = params.Player_Controllers_Who_Require_The_Quest;
	if (DoesAnyoneRequireTheQuest != nullptr)
		*DoesAnyoneRequireTheQuest = params.DoesAnyoneRequireTheQuest;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyoneRequireQuest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* QuestReference                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Quest_Backend_Name             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SomePlayerNeedsTheQuest        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_DoesAnyoneRequireQuest(class UFortQuestItemDefinition* QuestReference, const struct FName& Quest_Backend_Name, class UObject* __WorldContext, bool* SomePlayerNeedsTheQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyoneRequireQuest");

	UMissionBlueprintFunctionLibrary_C_DoesAnyoneRequireQuest_Params params;
	params.QuestReference = QuestReference;
	params.Quest_Backend_Name = Quest_Backend_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SomePlayerNeedsTheQuest != nullptr)
		*SomePlayerNeedsTheQuest = params.SomePlayerNeedsTheQuest;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.QuestObjectiveCountAchieved
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerControllerReference      (Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* Quest_Item_Reference           (Parm, ZeroConstructor, IsPlainOldData)
// struct FDataTableRowHandle     ObjectiveStatHandle            (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quest_Count_Achieved           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Quest_Count_Required           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           SuccessfullyFoundCount         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_QuestObjectiveCountAchieved(class AFortPlayerController* PlayerControllerReference, class UFortQuestItemDefinition* Quest_Item_Reference, const struct FDataTableRowHandle& ObjectiveStatHandle, class UObject* __WorldContext, int* Quest_Count_Achieved, int* Quest_Count_Required, bool* SuccessfullyFoundCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.QuestObjectiveCountAchieved");

	UMissionBlueprintFunctionLibrary_C_QuestObjectiveCountAchieved_Params params;
	params.PlayerControllerReference = PlayerControllerReference;
	params.Quest_Item_Reference = Quest_Item_Reference;
	params.ObjectiveStatHandle = ObjectiveStatHandle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quest_Count_Achieved != nullptr)
		*Quest_Count_Achieved = params.Quest_Count_Achieved;
	if (Quest_Count_Required != nullptr)
		*Quest_Count_Required = params.Quest_Count_Required;
	if (SuccessfullyFoundCount != nullptr)
		*SuccessfullyFoundCount = params.SuccessfullyFoundCount;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HighlightQuestActor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToHighlight               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HighlightEnabled               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_HighlightQuestActor(class AActor* ActorToHighlight, bool HighlightEnabled, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HighlightQuestActor");

	UMissionBlueprintFunctionLibrary_C_HighlightQuestActor_Params params;
	params.ActorToHighlight = ActorToHighlight;
	params.HighlightEnabled = HighlightEnabled;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesPlayerHaveQuest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* Quest_Item_Reference           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Quest_Item_Objective_Backend_Name (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           QuestValid                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerController*   PlayerControllerRef            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_DoesPlayerHaveQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* Quest_Item_Reference, const struct FName& Quest_Item_Objective_Backend_Name, class UObject* __WorldContext, bool* QuestValid, class AFortPlayerController** PlayerControllerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesPlayerHaveQuest");

	UMissionBlueprintFunctionLibrary_C_DoesPlayerHaveQuest_Params params;
	params.PlayerController = PlayerController;
	params.Quest_Item_Reference = Quest_Item_Reference;
	params.Quest_Item_Objective_Backend_Name = Quest_Item_Objective_Backend_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestValid != nullptr)
		*QuestValid = params.QuestValid;
	if (PlayerControllerRef != nullptr)
		*PlayerControllerRef = params.PlayerControllerRef;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetObjectiveBadgeIconBrush
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            RewardTag                      (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             IconBrush                      (Parm, OutParm)

void UMissionBlueprintFunctionLibrary_C::STATIC_GetObjectiveBadgeIconBrush(class AFortObjectiveBase* Objective, const struct FGameplayTag& RewardTag, class UObject* __WorldContext, struct FSlateBrush* IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetObjectiveBadgeIconBrush");

	UMissionBlueprintFunctionLibrary_C_GetObjectiveBadgeIconBrush_Params params;
	params.Objective = Objective;
	params.RewardTag = RewardTag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconBrush != nullptr)
		*IconBrush = params.IconBrush;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.UnRegisterUI UpdatesWithDamageEvents
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToUnRegisterWith          (Parm, ZeroConstructor, IsPlainOldData)
// class AFortMissionState*       MissionState                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_UnRegisterUI_UpdatesWithDamageEvents(class AActor* ActorToUnRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.UnRegisterUI UpdatesWithDamageEvents");

	UMissionBlueprintFunctionLibrary_C_UnRegisterUI_UpdatesWithDamageEvents_Params params;
	params.ActorToUnRegisterWith = ActorToUnRegisterWith;
	params.MissionState = MissionState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.RegisterUI UpdatesWithDamageEvents
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToRegisterWith            (Parm, ZeroConstructor, IsPlainOldData)
// class AFortMissionState*       MissionState                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_RegisterUI_UpdatesWithDamageEvents(class AActor* ActorToRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.RegisterUI UpdatesWithDamageEvents");

	UMissionBlueprintFunctionLibrary_C_RegisterUI_UpdatesWithDamageEvents_Params params;
	params.ActorToRegisterWith = ActorToRegisterWith;
	params.MissionState = MissionState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
