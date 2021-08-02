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

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateKeyBindingText_SpecialCases
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickBarSlot_C::UpdateKeyBindingText_SpecialCases()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateKeyBindingText_SpecialCases");

	UAthenaQuickBarSlot_C_UpdateKeyBindingText_SpecialCases_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.GetKeyBindingAction_Gamepad
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyBindingAction               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickBarSlot_C::GetKeyBindingAction_Gamepad(struct FName* KeyBindingAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.GetKeyBindingAction_Gamepad");

	UAthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyBindingAction != nullptr)
		*KeyBindingAction = params.KeyBindingAction;
}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateKeyBindingText
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickBarSlot_C::UpdateKeyBindingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateKeyBindingText");

	UAthenaQuickBarSlot_C_UpdateKeyBindingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ExecuteUbergraph_AthenaQuickBarSlot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickBarSlot_C::ExecuteUbergraph_AthenaQuickBarSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ExecuteUbergraph_AthenaQuickBarSlot");

	UAthenaQuickBarSlot_C_ExecuteUbergraph_AthenaQuickBarSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
