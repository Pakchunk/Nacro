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

// Function FrontEnd.FrontEnd_C.PlayEventMovieIfNecessary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayingEventMovie              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::PlayEventMovieIfNecessary(bool* PlayingEventMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.PlayEventMovieIfNecessary");

	UFrontEnd_C_PlayEventMovieIfNecessary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayingEventMovie != nullptr)
		*PlayingEventMovie = params.PlayingEventMovie;
}


// Function FrontEnd.FrontEnd_C.NeedsToPlayEventMovie
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NeedsToPlayEventMovie          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::NeedsToPlayEventMovie(bool* NeedsToPlayEventMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.NeedsToPlayEventMovie");

	UFrontEnd_C_NeedsToPlayEventMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedsToPlayEventMovie != nullptr)
		*NeedsToPlayEventMovie = params.NeedsToPlayEventMovie;
}


// Function FrontEnd.FrontEnd_C.UpdateVisibilityState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideHeader                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideFooter                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideChat                       (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::UpdateVisibilityState(bool HideHeader, bool HideFooter, bool HideChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.UpdateVisibilityState");

	UFrontEnd_C_UpdateVisibilityState_Params params;
	params.HideHeader = HideHeader;
	params.HideFooter = HideFooter;
	params.HideChat = HideChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.SetChatWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::SetChatWidgetVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.SetChatWidgetVisibility");

	UFrontEnd_C_SetChatWidgetVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.InitForSubGame
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEnd_C::InitForSubGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.InitForSubGame");

	UFrontEnd_C_InitForSubGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.GetActiveTab
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ActiveTab                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::GetActiveTab(struct FName* ActiveTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.GetActiveTab");

	UFrontEnd_C_GetActiveTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveTab != nullptr)
		*ActiveTab = params.ActiveTab;
}


// Function FrontEnd.FrontEnd_C.HandleWidgetStackChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ActiveWidgetIndex              (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::HandleWidgetStackChanged(class UWidget* Widget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.HandleWidgetStackChanged");

	UFrontEnd_C_HandleWidgetStackChanged_Params params;
	params.Widget = Widget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEnd_C::UnbindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.UnbindDelegates");

	UFrontEnd_C_UnbindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.HandlePopContentStackOp
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEnd_C::HandlePopContentStackOp()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.HandlePopContentStackOp");

	UFrontEnd_C_HandlePopContentStackOp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.PopContentWidgetInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (Parm)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UFrontEnd_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.PopContentWidgetInternal");

	UFrontEnd_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FrontEnd.FrontEnd_C.HandleQuestRewardClaimed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEnd_C::HandleQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.HandleQuestRewardClaimed");

	UFrontEnd_C_HandleQuestRewardClaimed_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function FrontEnd.FrontEnd_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEnd_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.BindDelegates");

	UFrontEnd_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.HandleEnterFrontend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIState                   UIState                        (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::HandleEnterFrontend(EFortUIState UIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.HandleEnterFrontend");

	UFrontEnd_C_HandleEnterFrontend_Params params;
	params.UIState = UIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.SetFooterVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::SetFooterVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.SetFooterVisibility");

	UFrontEnd_C_SetFooterVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.PopContentWidget_Internal
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEnd_C::PopContentWidget_Internal()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.PopContentWidget_Internal");

	UFrontEnd_C_PopContentWidget_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.SetHeaderVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::SetHeaderVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.SetHeaderVisibility");

	UFrontEnd_C_SetHeaderVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.PushContentWidget_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 InWidget                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideHeader                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideFooter                     (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::PushContentWidget_Internal(class UWidget* InWidget, bool HideHeader, bool HideFooter)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.PushContentWidget_Internal");

	UFrontEnd_C_PushContentWidget_Internal_Params params;
	params.InWidget = InWidget;
	params.HideHeader = HideHeader;
	params.HideFooter = HideFooter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.RegisterScriptedActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIState                   InPreviousUIState              (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::RegisterScriptedActions(EFortUIState InPreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.RegisterScriptedActions");

	UFrontEnd_C_RegisterScriptedActions_Params params;
	params.InPreviousUIState = InPreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.HandleMainMenuStateChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::HandleMainMenuStateChanged(bool Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.HandleMainMenuStateChanged");

	UFrontEnd_C_HandleMainMenuStateChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.On_MainAreaDarken_MouseButtonUp
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFrontEnd_C::On_MainAreaDarken_MouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.On_MainAreaDarken_MouseButtonUp");

	UFrontEnd_C_On_MainAreaDarken_MouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FrontEnd.FrontEnd_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.OnEnterState");

	UFrontEnd_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.HandleQuestsGranted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Quests                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEnd_C::HandleQuestsGranted(TArray<class UFortQuestItem*> Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.HandleQuestsGranted");

	UFrontEnd_C_HandleQuestsGranted_Params params;
	params.Quests = Quests;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.HandleQuestsCompleted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Quests                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEnd_C::HandleQuestsCompleted(TArray<class UFortQuestItem*> Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.HandleQuestsCompleted");

	UFrontEnd_C_HandleQuestsCompleted_Params params;
	params.Quests = Quests;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.HandleLobbyDisconnected
// (BlueprintCallable, BlueprintEvent)

void UFrontEnd_C::HandleLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.HandleLobbyDisconnected");

	UFrontEnd_C_HandleLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FContentPushState*      State                          (Parm)

void UFrontEnd_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.PushContentWidgetInternal");

	UFrontEnd_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.OnExitState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  NextUIState                    (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::OnExitState(EFortUIState* NextUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.OnExitState");

	UFrontEnd_C_OnExitState_Params params;
	params.NextUIState = NextUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrontEnd_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.Destruct");

	UFrontEnd_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.DailyRewardsTokenGranted
// (BlueprintCallable, BlueprintEvent)

void UFrontEnd_C::DailyRewardsTokenGranted()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.DailyRewardsTokenGranted");

	UFrontEnd_C_DailyRewardsTokenGranted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.HandleClientEvent_FinishedModalWindows
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)

void UFrontEnd_C::HandleClientEvent_FinishedModalWindows(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.HandleClientEvent_FinishedModalWindows");

	UFrontEnd_C_HandleClientEvent_FinishedModalWindows_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.OnFrontEndVisibilityUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bHideHeader                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHideFooter                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHideChatWidget                (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::OnFrontEndVisibilityUpdated(bool* bHideHeader, bool* bHideFooter, bool* bHideChatWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.OnFrontEndVisibilityUpdated");

	UFrontEnd_C_OnFrontEndVisibilityUpdated_Params params;
	params.bHideHeader = bHideHeader;
	params.bHideFooter = bHideFooter;
	params.bHideChatWidget = bHideChatWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.HandleClientEvent_EventMovieFinishedPlaying
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)

void UFrontEnd_C::HandleClientEvent_EventMovieFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.HandleClientEvent_EventMovieFinishedPlaying");

	UFrontEnd_C_HandleClientEvent_EventMovieFinishedPlaying_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrontEnd_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.Construct");

	UFrontEnd_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.HandleClientEvent_NotPlayingEventMovie
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)

void UFrontEnd_C::HandleClientEvent_NotPlayingEventMovie(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.HandleClientEvent_NotPlayingEventMovie");

	UFrontEnd_C_HandleClientEvent_NotPlayingEventMovie_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd.FrontEnd_C.ExecuteUbergraph_FrontEnd
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFrontEnd_C::ExecuteUbergraph_FrontEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.ExecuteUbergraph_FrontEnd");

	UFrontEnd_C_ExecuteUbergraph_FrontEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
