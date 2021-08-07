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

// Function LoginScreen.LoginScreen_C.SafePopContent
struct ULoginScreen_C_SafePopContent_Params
{
};

// Function LoginScreen.LoginScreen_C.ShowAccountSelectWindow
struct ULoginScreen_C_ShowAccountSelectWindow_Params
{
};

// Function LoginScreen.LoginScreen_C.CheckSkipSplashScreen
struct ULoginScreen_C_CheckSkipSplashScreen_Params
{
};

// Function LoginScreen.LoginScreen_C.EmptyLoginStack
struct ULoginScreen_C_EmptyLoginStack_Params
{
};

// Function LoginScreen.LoginScreen_C.HideNonSplashScreenContent
struct ULoginScreen_C_HideNonSplashScreenContent_Params
{
};

// Function LoginScreen.LoginScreen_C.RollbackToSplashScreen
struct ULoginScreen_C_RollbackToSplashScreen_Params
{
};

// Function LoginScreen.LoginScreen_C.PopContentWidgetInternal
struct ULoginScreen_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (Parm)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowSplashScreen
struct ULoginScreen_C_ShowSplashScreen_Params
{
};

// Function LoginScreen.LoginScreen_C.GetLoginMenu
struct ULoginScreen_C_GetLoginMenu_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnMouseButtonUp_MenuBorder
struct ULoginScreen_C_OnMouseButtonUp_MenuBorder_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LoginScreen.LoginScreen_C.SkipBenchmark
struct ULoginScreen_C_SkipBenchmark_Params
{
};

// Function LoginScreen.LoginScreen_C.RunBenchmark
struct ULoginScreen_C_RunBenchmark_Params
{
};

// Function LoginScreen.LoginScreen_C.ShouldShowBenchmark
struct ULoginScreen_C_ShouldShowBenchmark_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowEulaWindow
struct ULoginScreen_C_ShowEulaWindow_Params
{
	struct FText                                       Text;                                                     // (Parm)
	bool                                               ViewOnly;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.SetResultsDescription
struct ULoginScreen_C_SetResultsDescription_Params
{
	struct FText                                       Description;                                              // (Parm)
};

// Function LoginScreen.LoginScreen_C.SetResultTitle
struct ULoginScreen_C_SetResultTitle_Params
{
	struct FText                                       Title;                                                    // (Parm)
	bool                                               bShowError;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowResultWindow
struct ULoginScreen_C_ShowResultWindow_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Description;                                              // (Parm)
	bool                                               bShowError;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ToggleLoginMenu
struct ULoginScreen_C_ToggleLoginMenu_Params
{
};

// Function LoginScreen.LoginScreen_C.UpdateStatusTitle
struct ULoginScreen_C_UpdateStatusTitle_Params
{
	struct FText                                       Title;                                                    // (Parm)
};

// Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow
struct ULoginScreen_C_ShowAccountLinkingWindow_Params
{
	bool                                               InLinkedAccountNeedsPurchase;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowStatusWindow
struct ULoginScreen_C_ShowStatusWindow_Params
{
	struct FText                                       StatusText;                                               // (Parm)
};

// Function LoginScreen.LoginScreen_C.ShowSignInWindow
struct ULoginScreen_C_ShowSignInWindow_Params
{
	bool                                               DirectSignIn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.DialogResult_EE7DC32F44B9651770AED08101A03510
struct ULoginScreen_C_DialogResult_EE7DC32F44B9651770AED08101A03510_Params
{
	EFortDialogResult                                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.DialogResult_B952A8754B3836D2151B4981F531542E
struct ULoginScreen_C_DialogResult_B952A8754B3836D2151B4981F531542E_Params
{
	EFortDialogResult                                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.Construct
struct ULoginScreen_C_Construct_Params
{
};

// Function LoginScreen.LoginScreen_C.OnPatchingComplete
struct ULoginScreen_C_OnPatchingComplete_Params
{
	bool*                                              bProceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnEnterState
struct ULoginScreen_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnExitState
struct ULoginScreen_C_OnExitState_Params
{
	EFortUIState*                                      NextUIState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.HandleOnStartLogin
struct ULoginScreen_C_HandleOnStartLogin_Params
{
	struct FString                                     LoginEmail;                                               // (Parm, ZeroConstructor)
	struct FString                                     LoginPassword;                                            // (Parm, ZeroConstructor)
};

// Function LoginScreen.LoginScreen_C.OnLoginFailed
struct ULoginScreen_C_OnLoginFailed_Params
{
	struct FText*                                      Reason;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.OnLoginSuceeded
struct ULoginScreen_C_OnLoginSuceeded_Params
{
};

// Function LoginScreen.LoginScreen_C.OnEulaAvailable
struct ULoginScreen_C_OnEulaAvailable_Params
{
	struct FText*                                      EulaText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.HandleEulaResponse
struct ULoginScreen_C_HandleEulaResponse_Params
{
	bool                                               Accepted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.HandleResultConfirmed
struct ULoginScreen_C_HandleResultConfirmed_Params
{
};

// Function LoginScreen.LoginScreen_C.HandlerBenchmarkFlow
struct ULoginScreen_C_HandlerBenchmarkFlow_Params
{
};

// Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus
struct ULoginScreen_C_AccountLinking_PushStatus_Params
{
	struct FText                                       StatusText;                                               // (Parm)
};

// Function LoginScreen.LoginScreen_C.AccountLinking_PopStatus
struct ULoginScreen_C_AccountLinking_PopStatus_Params
{
};

// Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed
struct ULoginScreen_C_AccountLinking_LinkingFailed_Params
{
	struct FText                                       FailReason;                                               // (Parm)
};

// Function LoginScreen.LoginScreen_C.AccountLinking_RequestSignIn
struct ULoginScreen_C_AccountLinking_RequestSignIn_Params
{
};

// Function LoginScreen.LoginScreen_C.AccountLinking_RequestAutoLogin
struct ULoginScreen_C_AccountLinking_RequestAutoLogin_Params
{
};

// Function LoginScreen.LoginScreen_C.OnSplashScreenClosed
struct ULoginScreen_C_OnSplashScreenClosed_Params
{
};

// Function LoginScreen.LoginScreen_C.PushContentWidgetInternal
struct ULoginScreen_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (Parm)
};

// Function LoginScreen.LoginScreen_C.OnLogoutComplete
struct ULoginScreen_C_OnLogoutComplete_Params
{
};

// Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
struct ULoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.AccountLinking_ViewEula
struct ULoginScreen_C_AccountLinking_ViewEula_Params
{
};

// Function LoginScreen.LoginScreen_C.HandleViewOnlyClose
struct ULoginScreen_C_HandleViewOnlyClose_Params
{
};

// Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking
struct ULoginScreen_C_OnNeedsPurchaseOrAccountLinking_Params
{
	bool*                                              bLinkedAccountNeedsPurchase;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnDisplayErrorComplete
struct ULoginScreen_C_OnDisplayErrorComplete_Params
{
};

// Function LoginScreen.LoginScreen_C.HandleOnLoginAccountTypeSelected
struct ULoginScreen_C_HandleOnLoginAccountTypeSelected_Params
{
	EFortLoginAccountType                              LoginAccountType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnPostLoginLogoutComplete
struct ULoginScreen_C_OnPostLoginLogoutComplete_Params
{
	struct FText*                                      Reason;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.OnShowLoginMessage
struct ULoginScreen_C_OnShowLoginMessage_Params
{
	bool*                                              bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Tile;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText*                                      Body;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
struct ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
