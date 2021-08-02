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

// Function QuestPlayButton.QuestPlayButton_C.OnLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestPlayButton_C::OnLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.OnLobbyDisconnected");

	UQuestPlayButton_C_OnLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.UpdateQuestStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInCanPlayQuest                (Parm, ZeroConstructor, IsPlainOldData)

void UQuestPlayButton_C::UpdateQuestStatus(bool bInCanPlayQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.UpdateQuestStatus");

	UQuestPlayButton_C_UpdateQuestStatus_Params params;
	params.bInCanPlayQuest = bInCanPlayQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.GetActiveTileType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortTheaterMapTileType        TileType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestPlayButton_C::GetActiveTileType(EFortTheaterMapTileType* TileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.GetActiveTileType");

	UQuestPlayButton_C_GetActiveTileType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TileType != nullptr)
		*TileType = params.TileType;
}


// Function QuestPlayButton.QuestPlayButton_C.CalculateCritMissionDifficulty
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OverrideMin                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideMax                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutDifficultyMin               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDifficultyMax               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestPlayButton_C::CalculateCritMissionDifficulty(float OverrideMin, float OverrideMax, float* OutDifficultyMin, float* OutDifficultyMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.CalculateCritMissionDifficulty");

	UQuestPlayButton_C_CalculateCritMissionDifficulty_Params params;
	params.OverrideMin = OverrideMin;
	params.OverrideMax = OverrideMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDifficultyMin != nullptr)
		*OutDifficultyMin = params.OutDifficultyMin;
	if (OutDifficultyMax != nullptr)
		*OutDifficultyMax = params.OutDifficultyMax;
}


// Function QuestPlayButton.QuestPlayButton_C.SetPlayButtonEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UQuestPlayButton_C::SetPlayButtonEnable(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.SetPlayButtonEnable");

	UQuestPlayButton_C_SetPlayButtonEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.CanPlayQuest
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanPlay                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestPlayButton_C::CanPlayQuest(bool* CanPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.CanPlayQuest");

	UQuestPlayButton_C_CanPlayQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPlay != nullptr)
		*CanPlay = params.CanPlay;
}


// Function QuestPlayButton.QuestPlayButton_C.CanNavigateToQuestObjective
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQuestPlayButton_C::CanNavigateToQuestObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.CanNavigateToQuestObjective");

	UQuestPlayButton_C_CanNavigateToQuestObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuestPlayButton.QuestPlayButton_C.AttemptPlayQuest
// (Private, BlueprintCallable, BlueprintEvent)

void UQuestPlayButton_C::AttemptPlayQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.AttemptPlayQuest");

	UQuestPlayButton_C_AttemptPlayQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.AttemptNavigationToQuestObjective
// (Private, BlueprintCallable, BlueprintEvent)

void UQuestPlayButton_C::AttemptNavigationToQuestObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.AttemptNavigationToQuestObjective");

	UQuestPlayButton_C_AttemptNavigationToQuestObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.SetQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (Parm, ZeroConstructor, IsPlainOldData)

void UQuestPlayButton_C::SetQuest(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.SetQuest");

	UQuestPlayButton_C_SetQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestPlayButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.Construct");

	UQuestPlayButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UQuestPlayButton_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature");

	UQuestPlayButton_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.ForceClick
// (BlueprintCallable, BlueprintEvent)

void UQuestPlayButton_C::ForceClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.ForceClick");

	UQuestPlayButton_C_ForceClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingStarted
// (BlueprintCallable, BlueprintEvent)

void UQuestPlayButton_C::OnMatchmakingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingStarted");

	UQuestPlayButton_C_OnMatchmakingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMatchmakingCompleteResult     Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UQuestPlayButton_C::OnMatchmakingCompleted(EMatchmakingCompleteResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingCompleted");

	UQuestPlayButton_C_OnMatchmakingCompleted_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.OnPlayerStateChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UQuestPlayButton_C::OnPlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.OnPlayerStateChanged");

	UQuestPlayButton_C_OnPlayerStateChanged_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestPlayButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.Destruct");

	UQuestPlayButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UQuestPlayButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.Tick");

	UQuestPlayButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.ExecuteUbergraph_QuestPlayButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UQuestPlayButton_C::ExecuteUbergraph_QuestPlayButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestPlayButton.QuestPlayButton_C.ExecuteUbergraph_QuestPlayButton");

	UQuestPlayButton_C_ExecuteUbergraph_QuestPlayButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
