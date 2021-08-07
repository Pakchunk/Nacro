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

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDropItemConfirmationCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChosenQuantity                 (Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::HandleDropItemConfirmationCallback(int ChosenQuantity, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDropItemConfirmationCallback");

	UAthenaInventoryPanel_C_HandleDropItemConfirmationCallback_Params params;
	params.ChosenQuantity = ChosenQuantity;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DestroyQuantitySelectorWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::DestroyQuantitySelectorWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.DestroyQuantitySelectorWidget");

	UAthenaInventoryPanel_C_DestroyQuantitySelectorWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.CreateQuantitySelectorWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          Item                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ConfirmationText               (Parm)

void UAthenaInventoryPanel_C::CreateQuantitySelectorWidget(class UFortWorldItem* Item, const struct FText& ConfirmationText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.CreateQuantitySelectorWidget");

	UAthenaInventoryPanel_C_CreateQuantitySelectorWidget_Params params;
	params.Item = Item;
	params.ConfirmationText = ConfirmationText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RefocusOnInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::RefocusOnInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RefocusOnInventory");

	UAthenaInventoryPanel_C_RefocusOnInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DropItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::DropItem(class UFortWorldItem* Item, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.DropItem");

	UAthenaInventoryPanel_C_DropItem_Params params;
	params.Item = Item;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDrop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::HandleDrop(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDrop");

	UAthenaInventoryPanel_C_HandleDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::RegisterDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterDrop");

	UAthenaInventoryPanel_C_RegisterDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.PerformEquip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::PerformEquip(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.PerformEquip");

	UAthenaInventoryPanel_C_PerformEquip_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterLeaveInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::RegisterLeaveInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterLeaveInventory");

	UAthenaInventoryPanel_C_RegisterLeaveInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.TrySetupInputHandling
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::TrySetupInputHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.TrySetupInputHandling");

	UAthenaInventoryPanel_C_TrySetupInputHandling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleEquip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::HandleEquip(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleEquip");

	UAthenaInventoryPanel_C_HandleEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterEquip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::RegisterEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterEquip");

	UAthenaInventoryPanel_C_RegisterEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::RegisterBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterBack");

	UAthenaInventoryPanel_C_RegisterBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::HandleClose(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleClose");

	UAthenaInventoryPanel_C_HandleClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.GetSelectedEquipSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::GetSelectedEquipSlot(int* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.GetSelectedEquipSlot");

	UAthenaInventoryPanel_C_GetSelectedEquipSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.ProcessSlotAction
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::ProcessSlotAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.ProcessSlotAction");

	UAthenaInventoryPanel_C_ProcessSlotAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.UpdateEquipSlots
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::UpdateEquipSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.UpdateEquipSlots");

	UAthenaInventoryPanel_C_UpdateEquipSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleQuickBarChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortQuickBars*                QuickBarType                   (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::HandleQuickBarChangedBP(EFortQuickBars* QuickBarType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleQuickBarChangedBP");

	UAthenaInventoryPanel_C_HandleQuickBarChangedBP_Params params;
	params.QuickBarType = QuickBarType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryPanel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnActivated");

	UAthenaInventoryPanel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryPanel_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDeactivated");

	UAthenaInventoryPanel_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RequestEquip
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::RequestEquip(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RequestEquip");

	UAthenaInventoryPanel_C_RequestEquip_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnInventoryItemSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::OnInventoryItemSelected(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnInventoryItemSelected");

	UAthenaInventoryPanel_C_OnInventoryItemSelected_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature");

	UAthenaInventoryPanel_C_BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature");

	UAthenaInventoryPanel_C_BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature");

	UAthenaInventoryPanel_C_BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature");

	UAthenaInventoryPanel_C_BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature");

	UAthenaInventoryPanel_C_BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.ExecuteUbergraph_AthenaInventoryPanel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::ExecuteUbergraph_AthenaInventoryPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.ExecuteUbergraph_AthenaInventoryPanel");

	UAthenaInventoryPanel_C_ExecuteUbergraph_AthenaInventoryPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
