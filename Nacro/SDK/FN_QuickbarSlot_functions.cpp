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

// Function QuickbarSlot.QuickbarSlot_C.UpdateItemBoxSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::UpdateItemBoxSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.UpdateItemBoxSize");

	UQuickbarSlot_C_UpdateItemBoxSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.UpdateItemCardsVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::UpdateItemCardsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.UpdateItemCardsVisibility");

	UQuickbarSlot_C_UpdateItemCardsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemCooldownType          CooldownType                   (Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::OnCooldownStopped(EFortItemCooldownType CooldownType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped");

	UQuickbarSlot_C_OnCooldownStopped_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemCooldownType          CooldownType                   (Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::OnCooldownStarted(EFortItemCooldownType CooldownType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted");

	UQuickbarSlot_C_OnCooldownStarted_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::InitializeCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns");

	UQuickbarSlot_C_InitializeCooldowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Gamepad
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyBindingAction               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::GetKeyBindingAction_Gamepad(struct FName* KeyBindingAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Gamepad");

	UQuickbarSlot_C_GetKeyBindingAction_Gamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyBindingAction != nullptr)
		*KeyBindingAction = params.KeyBindingAction;
}


// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Keyboard
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Key_Binding_Action             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::GetKeyBindingAction_Keyboard(struct FName* Key_Binding_Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Keyboard");

	UQuickbarSlot_C_GetKeyBindingAction_Keyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key_Binding_Action != nullptr)
		*Key_Binding_Action = params.Key_Binding_Action;
}


// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyBindingAction               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::GetKeyBindingAction(struct FName* KeyBindingAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction");

	UQuickbarSlot_C_GetKeyBindingAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyBindingAction != nullptr)
		*KeyBindingAction = params.KeyBindingAction;
}


// Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::UpdateKeyBindingVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingVisibility");

	UQuickbarSlot_C_UpdateKeyBindingVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingText
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::UpdateKeyBindingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingText");

	UQuickbarSlot_C_UpdateKeyBindingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Resize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemCardSize              Card_Size                      (Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::Resize(EFortItemCardSize Card_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.Resize");

	UQuickbarSlot_C_Resize_Params params;
	params.Card_Size = Card_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSkipAnimation            (Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::Maximize(bool ShouldSkipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.Maximize");

	UQuickbarSlot_C_Maximize_Params params;
	params.ShouldSkipAnimation = ShouldSkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSkipAnimation            (Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::Minimize(bool ShouldSkipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.Minimize");

	UQuickbarSlot_C_Minimize_Params params;
	params.ShouldSkipAnimation = ShouldSkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.SetSelected");

	UQuickbarSlot_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted
// (BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::HandleMaximizeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted");

	UQuickbarSlot_C_HandleMaximizeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished
// (BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::HandleMinimizeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished");

	UQuickbarSlot_C_HandleMinimizeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished
// (BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::HandleMaximizeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished");

	UQuickbarSlot_C_HandleMaximizeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted
// (BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::HandleMinimizeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted");

	UQuickbarSlot_C_HandleMinimizeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.Tick");

	UQuickbarSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.PreConstruct");

	UQuickbarSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.RefreshItem
// (BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::RefreshItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.RefreshItem");

	UQuickbarSlot_C_RefreshItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuickbarSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.Construct");

	UQuickbarSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.SetAnimatedBoxScaleFactor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimatedBoxScaleFactor         (Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::SetAnimatedBoxScaleFactor(float AnimatedBoxScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.SetAnimatedBoxScaleFactor");

	UQuickbarSlot_C_SetAnimatedBoxScaleFactor_Params params;
	params.AnimatedBoxScaleFactor = AnimatedBoxScaleFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::ExecuteUbergraph_QuickbarSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot");

	UQuickbarSlot_C_ExecuteUbergraph_QuickbarSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
