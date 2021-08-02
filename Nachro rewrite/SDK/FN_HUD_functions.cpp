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

// Function HUD.HUD_C.CheckHUDElementVisibility
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   HiddenHUDElementTags           (Parm, OutParm, ReferenceParm)
// struct FGameplayTag            HUDElementTagToCheck           (Parm)
// class UWidget*                 HUDElement                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UHUD_C::CheckHUDElementVisibility(const struct FGameplayTag& HUDElementTagToCheck, struct FGameplayTagContainer* HiddenHUDElementTags, class UWidget** HUDElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CheckHUDElementVisibility");

	UHUD_C_CheckHUDElementVisibility_Params params;
	params.HUDElementTagToCheck = HUDElementTagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HiddenHUDElementTags != nullptr)
		*HiddenHUDElementTags = params.HiddenHUDElementTags;
	if (HUDElement != nullptr)
		*HUDElement = params.HUDElement;
}


// Function HUD.HUD_C.OnHUDElementVisibilityChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   HiddenHUDElementTags           (Parm, OutParm, ReferenceParm)

void UHUD_C::OnHUDElementVisibilityChanged(struct FGameplayTagContainer* HiddenHUDElementTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnHUDElementVisibilityChanged");

	UHUD_C_OnHUDElementVisibilityChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HiddenHUDElementTags != nullptr)
		*HiddenHUDElementTags = params.HiddenHUDElementTags;
}


// Function HUD.HUD_C.OnManagementTabSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabName                        (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::OnManagementTabSelected(const struct FName& TabName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnManagementTabSelected");

	UHUD_C_OnManagementTabSelected_Params params;
	params.TabName = TabName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.PopContentWidgetInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (Parm)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UHUD_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.PopContentWidgetInternal");

	UHUD_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.CreateInterestIndicatorWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::CreateInterestIndicatorWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CreateInterestIndicatorWidget");

	UHUD_C_CreateInterestIndicatorWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleOnPointOfInterestRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PointOfInterest                (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::HandleOnPointOfInterestRemoved(class AActor* PointOfInterest)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleOnPointOfInterestRemoved");

	UHUD_C_HandleOnPointOfInterestRemoved_Params params;
	params.PointOfInterest = PointOfInterest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleOnPointOfInterestAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PointOfInterest                (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayText                    (Parm)
// class UTexture2D*              DisplayImage                   (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::HandleOnPointOfInterestAdded(class AActor* PointOfInterest, const struct FText& DisplayText, class UTexture2D* DisplayImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleOnPointOfInterestAdded");

	UHUD_C_HandleOnPointOfInterestAdded_Params params;
	params.PointOfInterest = PointOfInterest;
	params.DisplayText = DisplayText;
	params.DisplayImage = DisplayImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPickerMode                Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            InitialOption                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreFirstAccept              (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::ShowPicker(EFortPickerMode Mode, int InitialOption, bool IgnoreFirstAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowPicker");

	UHUD_C_ShowPicker_Params params;
	params.Mode = Mode;
	params.InitialOption = InitialOption;
	params.IgnoreFirstAccept = IgnoreFirstAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnHordeTierCompleteWidgetFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::OnHordeTierCompleteWidgetFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnHordeTierCompleteWidgetFinished");

	UHUD_C_OnHordeTierCompleteWidgetFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleHordeTierComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortCompletionResult          Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::HandleHordeTierComplete(EFortCompletionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleHordeTierComplete");

	UHUD_C_HandleHordeTierComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleFocusChat
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::HandleFocusChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleFocusChat");

	UHUD_C_HandleFocusChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ToggleTopLevelMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::ToggleTopLevelMenu(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ToggleTopLevelMenu");

	UHUD_C_ToggleTopLevelMenu_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ToggleChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::ToggleChat(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ToggleChat");

	UHUD_C_ToggleChat_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetPersistentHUDContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::SetPersistentHUDContentVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetPersistentHUDContentVisibility");

	UHUD_C_SetPersistentHUDContentVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleIndicatorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InidicatorsEnabled             (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::HandleIndicatorModeChanged(bool InidicatorsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleIndicatorModeChanged");

	UHUD_C_HandleIndicatorModeChanged_Params params;
	params.InidicatorsEnabled = InidicatorsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetCursorModeContent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             CustomWidget                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UHUD_C::SetCursorModeContent(class UUserWidget* CustomWidget, struct FName* ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetCursorModeContent");

	UHUD_C_SetCursorModeContent_Params params;
	params.CustomWidget = CustomWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionName != nullptr)
		*ActionName = params.ActionName;
}


// Function HUD.HUD_C.SetGameMode
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::SetGameMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetGameMode");

	UHUD_C_SetGameMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnPlayerTargetingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTargeting                    (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::OnPlayerTargetingChanged(bool IsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnPlayerTargetingChanged");

	UHUD_C_OnPlayerTargetingChanged_Params params;
	params.IsTargeting = IsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleKeybindsChanged");

	UHUD_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleZoneCompleted
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::HandleZoneCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleZoneCompleted");

	UHUD_C_HandleZoneCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnHandleAction
// (HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (Parm, OutParm)
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnHandleAction");

	UHUD_C_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function HUD.HUD_C.SetQuickbarSizes
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::SetQuickbarSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetQuickbarSizes");

	UHUD_C_SetQuickbarSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleQuickbarSlotFocusSlotChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                 Quickbar_Index                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::HandleQuickbarSlotFocusSlotChanged(EFortQuickBars Quickbar_Index, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleQuickbarSlotFocusSlotChanged");

	UHUD_C_HandleQuickbarSlotFocusSlotChanged_Params params;
	params.Quickbar_Index = Quickbar_Index;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             CursorModeContentCustomWidget  (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::HandleCursorModeChanged(bool IsEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentCustomWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleCursorModeChanged");

	UHUD_C_HandleCursorModeChanged_Params params;
	params.IsEnabled = IsEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentCustomWidget = CursorModeContentCustomWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A
// (BlueprintCallable, BlueprintEvent)

void UHUD_C::OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A");

	UHUD_C_OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A
// (BlueprintCallable, BlueprintEvent)

void UHUD_C::OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A");

	UHUD_C_OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnEnterState");

	UHUD_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.QuestsCompleted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Quests                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHUD_C::QuestsCompleted(TArray<class UFortQuestItem*> Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.QuestsCompleted");

	UHUD_C_QuestsCompleted_Params params;
	params.Quests = Quests;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Construct");

	UHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.LoadingScreenChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::LoadingScreenChanged(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.LoadingScreenChanged");

	UHUD_C_LoadingScreenChanged_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.EndOfDayRecapStarted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEndOfDayRecap          EndOfDayRecap                  (ConstParm, Parm, OutParm, ReferenceParm)

void UHUD_C::EndOfDayRecapStarted(const struct FEndOfDayRecap& EndOfDayRecap)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.EndOfDayRecapStarted");

	UHUD_C_EndOfDayRecapStarted_Params params;
	params.EndOfDayRecap = EndOfDayRecap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.EndOfDayRecapEnded
// (BlueprintCallable, BlueprintEvent)

void UHUD_C::EndOfDayRecapEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.EndOfDayRecapEnded");

	UHUD_C_EndOfDayRecapEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FContentPushState*      State                          (Parm)

void UHUD_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.PushContentWidgetInternal");

	UHUD_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Destruct");

	UHUD_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::HandleInputMethodChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleInputMethodChanged");

	UHUD_C_HandleInputMethodChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
// (BlueprintEvent)

void UHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature");

	UHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
// (BlueprintEvent)

void UHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature");

	UHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ExecuteUbergraph_HUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::ExecuteUbergraph_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ExecuteUbergraph_HUD");

	UHUD_C_ExecuteUbergraph_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
