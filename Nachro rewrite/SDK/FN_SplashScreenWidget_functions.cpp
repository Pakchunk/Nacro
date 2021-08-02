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

// Function SplashScreenWidget.SplashScreenWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USplashScreenWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.OnFocusReceived");

	USplashScreenWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USplashScreenWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.OnMouseButtonDown");

	USplashScreenWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SplashScreenWidget.SplashScreenWidget_C.RelinquishInputFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USplashScreenWidget_C::RelinquishInputFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.RelinquishInputFocus");

	USplashScreenWidget_C_RelinquishInputFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.SetInputFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USplashScreenWidget_C::SetInputFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.SetInputFocus");

	USplashScreenWidget_C_SetInputFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (Parm, ZeroConstructor, IsPlainOldData)

void USplashScreenWidget_C::OnInputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged");

	USplashScreenWidget_C_OnInputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnGameBootableInviteReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UserIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void USplashScreenWidget_C::OnGameBootableInviteReceived(int* UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.OnGameBootableInviteReceived");

	USplashScreenWidget_C_OnGameBootableInviteReceived_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void USplashScreenWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.OnActivated");

	USplashScreenWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USplashScreenWidget_C::ExecuteUbergraph_SplashScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget");

	USplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
