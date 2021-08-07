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

// Function LoginScreen.LoginScreen_C.SafePopContent
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::SafePopContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.SafePopContent");

	ULoginScreen_C_SafePopContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShowAccountSelectWindow
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::ShowAccountSelectWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowAccountSelectWindow");

	ULoginScreen_C_ShowAccountSelectWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.CheckSkipSplashScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::CheckSkipSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.CheckSkipSplashScreen");

	ULoginScreen_C_CheckSkipSplashScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.EmptyLoginStack
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::EmptyLoginStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.EmptyLoginStack");

	ULoginScreen_C_EmptyLoginStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HideNonSplashScreenContent
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::HideNonSplashScreenContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HideNonSplashScreenContent");

	ULoginScreen_C_HideNonSplashScreenContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.RollbackToSplashScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::RollbackToSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.RollbackToSplashScreen");

	ULoginScreen_C_RollbackToSplashScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.PopContentWidgetInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (Parm)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* ULoginScreen_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.PopContentWidgetInternal");

	ULoginScreen_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LoginScreen.LoginScreen_C.ShowSplashScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::ShowSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowSplashScreen");

	ULoginScreen_C_ShowSplashScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.GetLoginMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* ULoginScreen_C::GetLoginMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.GetLoginMenu");

	ULoginScreen_C_GetLoginMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LoginScreen.LoginScreen_C.OnMouseButtonUp_MenuBorder
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply ULoginScreen_C::OnMouseButtonUp_MenuBorder(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnMouseButtonUp_MenuBorder");

	ULoginScreen_C_OnMouseButtonUp_MenuBorder_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LoginScreen.LoginScreen_C.SkipBenchmark
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::SkipBenchmark()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.SkipBenchmark");

	ULoginScreen_C_SkipBenchmark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.RunBenchmark
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::RunBenchmark()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.RunBenchmark");

	ULoginScreen_C_RunBenchmark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShouldShowBenchmark
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::ShouldShowBenchmark(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShouldShowBenchmark");

	ULoginScreen_C_ShouldShowBenchmark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function LoginScreen.LoginScreen_C.ShowEulaWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)
// bool                           ViewOnly                       (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::ShowEulaWindow(const struct FText& Text, bool ViewOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowEulaWindow");

	ULoginScreen_C_ShowEulaWindow_Params params;
	params.Text = Text;
	params.ViewOnly = ViewOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.SetResultsDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (Parm)

void ULoginScreen_C::SetResultsDescription(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.SetResultsDescription");

	ULoginScreen_C_SetResultsDescription_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.SetResultTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// bool                           bShowError                     (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::SetResultTitle(const struct FText& Title, bool bShowError)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.SetResultTitle");

	ULoginScreen_C_SetResultTitle_Params params;
	params.Title = Title;
	params.bShowError = bShowError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShowResultWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   Description                    (Parm)
// bool                           bShowError                     (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::ShowResultWindow(const struct FText& Title, const struct FText& Description, bool bShowError)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowResultWindow");

	ULoginScreen_C_ShowResultWindow_Params params;
	params.Title = Title;
	params.Description = Description;
	params.bShowError = bShowError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ToggleLoginMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::ToggleLoginMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ToggleLoginMenu");

	ULoginScreen_C_ToggleLoginMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.UpdateStatusTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)

void ULoginScreen_C::UpdateStatusTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.UpdateStatusTitle");

	ULoginScreen_C_UpdateStatusTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InLinkedAccountNeedsPurchase   (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::ShowAccountLinkingWindow(bool InLinkedAccountNeedsPurchase)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow");

	ULoginScreen_C_ShowAccountLinkingWindow_Params params;
	params.InLinkedAccountNeedsPurchase = InLinkedAccountNeedsPurchase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShowStatusWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   StatusText                     (Parm)

void ULoginScreen_C::ShowStatusWindow(const struct FText& StatusText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowStatusWindow");

	ULoginScreen_C_ShowStatusWindow_Params params;
	params.StatusText = StatusText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShowSignInWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DirectSignIn                   (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::ShowSignInWindow(bool DirectSignIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowSignInWindow");

	ULoginScreen_C_ShowSignInWindow_Params params;
	params.DirectSignIn = DirectSignIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.DialogResult_EE7DC32F44B9651770AED08101A03510
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::DialogResult_EE7DC32F44B9651770AED08101A03510(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.DialogResult_EE7DC32F44B9651770AED08101A03510");

	ULoginScreen_C_DialogResult_EE7DC32F44B9651770AED08101A03510_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.DialogResult_B952A8754B3836D2151B4981F531542E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::DialogResult_B952A8754B3836D2151B4981F531542E(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.DialogResult_B952A8754B3836D2151B4981F531542E");

	ULoginScreen_C_DialogResult_B952A8754B3836D2151B4981F531542E_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoginScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.Construct");

	ULoginScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnPatchingComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bProceed                       (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::OnPatchingComplete(bool* bProceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnPatchingComplete");

	ULoginScreen_C_OnPatchingComplete_Params params;
	params.bProceed = bProceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnEnterState");

	ULoginScreen_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnExitState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  NextUIState                    (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::OnExitState(EFortUIState* NextUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnExitState");

	ULoginScreen_C_OnExitState_Params params;
	params.NextUIState = NextUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HandleOnStartLogin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LoginEmail                     (Parm, ZeroConstructor)
// struct FString                 LoginPassword                  (Parm, ZeroConstructor)

void ULoginScreen_C::HandleOnStartLogin(const struct FString& LoginEmail, const struct FString& LoginPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HandleOnStartLogin");

	ULoginScreen_C_HandleOnStartLogin_Params params;
	params.LoginEmail = LoginEmail;
	params.LoginPassword = LoginPassword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnLoginFailed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Reason                         (ConstParm, Parm, OutParm, ReferenceParm)

void ULoginScreen_C::OnLoginFailed(struct FText* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnLoginFailed");

	ULoginScreen_C_OnLoginFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnLoginSuceeded
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::OnLoginSuceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnLoginSuceeded");

	ULoginScreen_C_OnLoginSuceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnEulaAvailable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  EulaText                       (ConstParm, Parm, OutParm, ReferenceParm)

void ULoginScreen_C::OnEulaAvailable(struct FText* EulaText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnEulaAvailable");

	ULoginScreen_C_OnEulaAvailable_Params params;
	params.EulaText = EulaText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HandleEulaResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accepted                       (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::HandleEulaResponse(bool Accepted)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HandleEulaResponse");

	ULoginScreen_C_HandleEulaResponse_Params params;
	params.Accepted = Accepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HandleResultConfirmed
// (BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::HandleResultConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HandleResultConfirmed");

	ULoginScreen_C_HandleResultConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HandlerBenchmarkFlow
// (BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::HandlerBenchmarkFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HandlerBenchmarkFlow");

	ULoginScreen_C_HandlerBenchmarkFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   StatusText                     (Parm)

void ULoginScreen_C::AccountLinking_PushStatus(const struct FText& StatusText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus");

	ULoginScreen_C_AccountLinking_PushStatus_Params params;
	params.StatusText = StatusText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_PopStatus
// (BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::AccountLinking_PopStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_PopStatus");

	ULoginScreen_C_AccountLinking_PopStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   FailReason                     (Parm)

void ULoginScreen_C::AccountLinking_LinkingFailed(const struct FText& FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed");

	ULoginScreen_C_AccountLinking_LinkingFailed_Params params;
	params.FailReason = FailReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_RequestSignIn
// (BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::AccountLinking_RequestSignIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_RequestSignIn");

	ULoginScreen_C_AccountLinking_RequestSignIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_RequestAutoLogin
// (BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::AccountLinking_RequestAutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_RequestAutoLogin");

	ULoginScreen_C_AccountLinking_RequestAutoLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnSplashScreenClosed
// (BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::OnSplashScreenClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnSplashScreenClosed");

	ULoginScreen_C_OnSplashScreenClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FContentPushState*      State                          (Parm)

void ULoginScreen_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.PushContentWidgetInternal");

	ULoginScreen_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnLogoutComplete
// (Event, Public, BlueprintEvent)

void ULoginScreen_C::OnLogoutComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnLogoutComplete");

	ULoginScreen_C_OnLogoutComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature");

	ULoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_ViewEula
// (BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::AccountLinking_ViewEula()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_ViewEula");

	ULoginScreen_C_AccountLinking_ViewEula_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HandleViewOnlyClose
// (BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::HandleViewOnlyClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HandleViewOnlyClose");

	ULoginScreen_C_HandleViewOnlyClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bLinkedAccountNeedsPurchase    (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::OnNeedsPurchaseOrAccountLinking(bool* bLinkedAccountNeedsPurchase)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking");

	ULoginScreen_C_OnNeedsPurchaseOrAccountLinking_Params params;
	params.bLinkedAccountNeedsPurchase = bLinkedAccountNeedsPurchase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnDisplayErrorComplete
// (Event, Public, BlueprintEvent)

void ULoginScreen_C::OnDisplayErrorComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnDisplayErrorComplete");

	ULoginScreen_C_OnDisplayErrorComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HandleOnLoginAccountTypeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortLoginAccountType          LoginAccountType               (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::HandleOnLoginAccountTypeSelected(EFortLoginAccountType LoginAccountType)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HandleOnLoginAccountTypeSelected");

	ULoginScreen_C_HandleOnLoginAccountTypeSelected_Params params;
	params.LoginAccountType = LoginAccountType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnPostLoginLogoutComplete
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Reason                         (ConstParm, Parm, OutParm, ReferenceParm)

void ULoginScreen_C::OnPostLoginLogoutComplete(struct FText* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnPostLoginLogoutComplete");

	ULoginScreen_C_OnPostLoginLogoutComplete_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnShowLoginMessage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Tile                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText*                  Body                           (ConstParm, Parm, OutParm, ReferenceParm)

void ULoginScreen_C::OnShowLoginMessage(bool* bShow, struct FText* Tile, struct FText* Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnShowLoginMessage");

	ULoginScreen_C_OnShowLoginMessage_Params params;
	params.bShow = bShow;
	params.Tile = Tile;
	params.Body = Body;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::ExecuteUbergraph_LoginScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen");

	ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
