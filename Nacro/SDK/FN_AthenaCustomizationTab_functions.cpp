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

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectFirstWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::SelectFirstWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectFirstWidget");

	UAthenaCustomizationTab_C_SelectFirstWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowThrobber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::ShowThrobber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowThrobber");

	UAthenaCustomizationTab_C_ShowThrobber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RefreshInputActions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::RefreshInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.RefreshInputActions");

	UAthenaCustomizationTab_C_RefreshInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectInitialWidgetForGamepad
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::SelectInitialWidgetForGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectInitialWidgetForGamepad");

	UAthenaCustomizationTab_C_SelectInitialWidgetForGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.EndPickingCustomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RestoreFocus                   (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::EndPickingCustomization(bool RestoreFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.EndPickingCustomization");

	UAthenaCustomizationTab_C_EndPickingCustomization_Params params;
	params.RestoreFocus = RestoreFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BeginPickingCustomization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaCustomizationCategory   Category                       (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 WidgetToReturnFocusTo          (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::BeginPickingCustomization(EAthenaCustomizationCategory Category, class UWidget* WidgetToReturnFocusTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BeginPickingCustomization");

	UAthenaCustomizationTab_C_BeginPickingCustomization_Params params;
	params.Category = Category;
	params.WidgetToReturnFocusTo = WidgetToReturnFocusTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterInputActions
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::RegisterInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterInputActions");

	UAthenaCustomizationTab_C_RegisterInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterCancel
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationTab_C::RegisterCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterCancel");

	UAthenaCustomizationTab_C_RegisterCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleCancel
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::HandleCancel(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleCancel");

	UAthenaCustomizationTab_C_HandleCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaCustomizationTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnActivated");

	UAthenaCustomizationTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__CharacterSlot_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::BndEvt__CharacterSlot_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__CharacterSlot_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__CharacterSlot_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__GliderSlot_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::BndEvt__GliderSlot_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__GliderSlot_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__GliderSlot_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__PickaxeSlot_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::BndEvt__PickaxeSlot_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__PickaxeSlot_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__PickaxeSlot_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bUsingGamepad                  (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::OnInputModeChanged(bool* bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnInputModeChanged");

	UAthenaCustomizationTab_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaCustomizationTab_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnDeactivated");

	UAthenaCustomizationTab_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaCustomizationTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.Construct");

	UAthenaCustomizationTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaCustomizationTab_C::BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaCustomizationTab_C::BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature");

	UAthenaCustomizationTab_C_BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ExecuteUbergraph_AthenaCustomizationTab
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationTab_C::ExecuteUbergraph_AthenaCustomizationTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationTab.AthenaCustomizationTab_C.ExecuteUbergraph_AthenaCustomizationTab");

	UAthenaCustomizationTab_C_ExecuteUbergraph_AthenaCustomizationTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
