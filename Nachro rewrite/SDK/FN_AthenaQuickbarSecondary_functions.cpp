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

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleMaximizeShowing
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::HandleMaximizeShowing()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleMaximizeShowing");

	UAthenaQuickbarSecondary_C_HandleMaximizeShowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleShowHideRail
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::HandleShowHideRail()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleShowHideRail");

	UAthenaQuickbarSecondary_C_HandleShowHideRail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleMinimizeHiding
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::HandleMinimizeHiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleMinimizeHiding");

	UAthenaQuickbarSecondary_C_HandleMinimizeHiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleKeyBindsChange
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::HandleKeyBindsChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleKeyBindsChange");

	UAthenaQuickbarSecondary_C_HandleKeyBindsChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Show Secondary Quickbar Rail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSecondary_C::Show_Secondary_Quickbar_Rail(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Show Secondary Quickbar Rail");

	UAthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Maximize");

	UAthenaQuickbarSecondary_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Minimize");

	UAthenaQuickbarSecondary_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleKeybindsChanged");

	UAthenaQuickbarSecondary_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleInputMethodChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSecondary_C::HandleInputMethodChanged_Bind(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleInputMethodChanged_Bind");

	UAthenaQuickbarSecondary_C_HandleInputMethodChanged_Bind_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaQuickbarSecondary_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Destruct");

	UAthenaQuickbarSecondary_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.OnQuickBarSlotFocusChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                 QuickbarIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSecondary_C::OnQuickBarSlotFocusChanged_Bind(EFortQuickBars QuickbarIndex, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.OnQuickBarSlotFocusChanged_Bind");

	UAthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind_Params params;
	params.QuickbarIndex = QuickbarIndex;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaQuickbarSecondary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Construct");

	UAthenaQuickbarSecondary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.OnQuickbarContentsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars*                QuickbarIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSecondary_C::OnQuickbarContentsChanged(EFortQuickBars* QuickbarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.OnQuickbarContentsChanged");

	UAthenaQuickbarSecondary_C_OnQuickbarContentsChanged_Params params;
	params.QuickbarIndex = QuickbarIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.ExecuteUbergraph_AthenaQuickbarSecondary
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSecondary_C::ExecuteUbergraph_AthenaQuickbarSecondary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.ExecuteUbergraph_AthenaQuickbarSecondary");

	UAthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
