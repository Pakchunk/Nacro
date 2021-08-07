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

// Function TopBar.TopBar_C.ConfigureVisibleItemsForSubGame
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::ConfigureVisibleItemsForSubGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.ConfigureVisibleItemsForSubGame");

	UTopBar_C_ConfigureVisibleItemsForSubGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OpenSocialMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::OpenSocialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OpenSocialMenu");

	UTopBar_C_OpenSocialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.FireOpenAnalyticsEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::FireOpenAnalyticsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.FireOpenAnalyticsEvent");

	UTopBar_C_FireOpenAnalyticsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.HideMTXPlusButton
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::HideMTXPlusButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HideMTXPlusButton");

	UTopBar_C_HideMTXPlusButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.ForceMenuClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::ForceMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.ForceMenuClosed");

	UTopBar_C_ForceMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.GetMainMenuTooltipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UTopBar_C::GetMainMenuTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.GetMainMenuTooltipWidget");

	UTopBar_C_GetMainMenuTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBar.TopBar_C.GetFriendsTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UTopBar_C::GetFriendsTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.GetFriendsTooltipWidget");

	UTopBar_C_GetFriendsTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBar.TopBar_C.HandleActiveInvitesCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActiveInvitesCount             (Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::HandleActiveInvitesCountChanged(int ActiveInvitesCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleActiveInvitesCountChanged");

	UTopBar_C_HandleActiveInvitesCountChanged_Params params;
	params.ActiveInvitesCount = ActiveInvitesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.HandleAccountPickerResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ControllerIndex                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UserSwitched                   (Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::HandleAccountPickerResult(int ControllerIndex, bool UserSwitched)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleAccountPickerResult");

	UTopBar_C_HandleAccountPickerResult_Params params;
	params.ControllerIndex = ControllerIndex;
	params.UserSwitched = UserSwitched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.UnbindActiveFriendsCountChangedEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::UnbindActiveFriendsCountChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.UnbindActiveFriendsCountChangedEvent");

	UTopBar_C_UnbindActiveFriendsCountChangedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.HandleActiveFriendsCountChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActiveFriendsCount             (Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::HandleActiveFriendsCountChanged(int ActiveFriendsCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleActiveFriendsCountChanged");

	UTopBar_C_HandleActiveFriendsCountChanged_Params params;
	params.ActiveFriendsCount = ActiveFriendsCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BindActiveFriendsCountChangedEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::BindActiveFriendsCountChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BindActiveFriendsCountChangedEvent");

	UTopBar_C_BindActiveFriendsCountChangedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BindSwitchProfileAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::BindSwitchProfileAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BindSwitchProfileAction");

	UTopBar_C_BindSwitchProfileAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.HandleSwitchProfileAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::HandleSwitchProfileAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleSwitchProfileAction");

	UTopBar_C_HandleSwitchProfileAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function TopBar.TopBar_C.HandleFeatureSwitchOp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIFeature                 Feature                        (Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::HandleFeatureSwitchOp(EFortUIFeature Feature)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleFeatureSwitchOp");

	UTopBar_C_HandleFeatureSwitchOp_Params params;
	params.Feature = Feature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.UnbindNavigationDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::UnbindNavigationDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.UnbindNavigationDelegates");

	UTopBar_C_UnbindNavigationDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BindNavigationDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::BindNavigationDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BindNavigationDelegates");

	UTopBar_C_BindNavigationDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.ForceMenuOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::ForceMenuOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.ForceMenuOpen");

	UTopBar_C_ForceMenuOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.GetSocialMenuContent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UTopBar_C::GetSocialMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.GetSocialMenuContent");

	UTopBar_C_GetSocialMenuContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBar.TopBar_C.CreateWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::CreateWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.CreateWidgets");

	UTopBar_C_CreateWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.HandleCloseAction
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::HandleCloseAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleCloseAction");

	UTopBar_C_HandleCloseAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function TopBar.TopBar_C.BindPanelControl
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::BindPanelControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BindPanelControl");

	UTopBar_C_BindPanelControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.CloseMainMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::CloseMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.CloseMainMenu");

	UTopBar_C_CloseMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OpenMainMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::OpenMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OpenMainMenu");

	UTopBar_C_OpenMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.DialogResult_32D813B145A5E184B01A15AABE16B774
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::DialogResult_32D813B145A5E184B01A15AABE16B774(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.DialogResult_32D813B145A5E184B01A15AABE16B774");

	UTopBar_C_DialogResult_32D813B145A5E184B01A15AABE16B774_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UTopBar_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OnBeginIntro");

	UTopBar_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OnBeginOutro
// (Event, Public, BlueprintEvent)

void UTopBar_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OnBeginOutro");

	UTopBar_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UTopBar_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OnActivated");

	UTopBar_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.Hidden
// (BlueprintCallable, BlueprintEvent)

void UTopBar_C::Hidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.Hidden");

	UTopBar_C_Hidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BndEvt__MainMenu_K2Node_ComponentBoundEvent_48_OnRequestShowFeedbackWidget__DelegateSignature
// (BlueprintEvent)

void UTopBar_C::BndEvt__MainMenu_K2Node_ComponentBoundEvent_48_OnRequestShowFeedbackWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BndEvt__MainMenu_K2Node_ComponentBoundEvent_48_OnRequestShowFeedbackWidget__DelegateSignature");

	UTopBar_C_BndEvt__MainMenu_K2Node_ComponentBoundEvent_48_OnRequestShowFeedbackWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BndEvt__Social_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::BndEvt__Social_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BndEvt__Social_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature");

	UTopBar_C_BndEvt__Social_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.PreConstruct");

	UTopBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.Construct");

	UTopBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopBar_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.Destruct");

	UTopBar_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OnAnimationFinished");

	UTopBar_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_101_StreamTimerStarted__DelegateSignature
// (BlueprintEvent)

void UTopBar_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_101_StreamTimerStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_101_StreamTimerStarted__DelegateSignature");

	UTopBar_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_101_StreamTimerStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_108_StreamTimerExpired__DelegateSignature
// (BlueprintEvent)

void UTopBar_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_108_StreamTimerExpired__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_108_StreamTimerExpired__DelegateSignature");

	UTopBar_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_108_StreamTimerExpired__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.ShowSocialConfirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   MESSAGE                        (Parm)

void UTopBar_C::ShowSocialConfirmation(const struct FText& MESSAGE)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.ShowSocialConfirmation");

	UTopBar_C_ShowSocialConfirmation_Params params;
	params.MESSAGE = MESSAGE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.On Power Increased
// (BlueprintCallable, BlueprintEvent)

void UTopBar_C::On_Power_Increased()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.On Power Increased");

	UTopBar_C_On_Power_Increased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature");

	UTopBar_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.ExecuteUbergraph_TopBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::ExecuteUbergraph_TopBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.ExecuteUbergraph_TopBar");

	UTopBar_C_ExecuteUbergraph_TopBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OpenAccountPicker__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTopBar_C::OpenAccountPicker__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OpenAccountPicker__DelegateSignature");

	UTopBar_C_OpenAccountPicker__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.MainMenuStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::MainMenuStateChanged__DelegateSignature(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.MainMenuStateChanged__DelegateSignature");

	UTopBar_C_MainMenuStateChanged__DelegateSignature_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
