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

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleSlottedSurvivor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManangementItemTileButton_C::HandleSlottedSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleSlottedSurvivor");

	UItemManangementItemTileButton_C_HandleSlottedSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateQuantityProduced
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManangementItemTileButton_C::UpdateQuantityProduced()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateQuantityProduced");

	UItemManangementItemTileButton_C_UpdateQuantityProduced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateBangState
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManangementItemTileButton_C::UpdateBangState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateBangState");

	UItemManangementItemTileButton_C_UpdateBangState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateInteractionWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManangementItemTileButton_C::UpdateInteractionWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateInteractionWidgetVisibility");

	UItemManangementItemTileButton_C_UpdateInteractionWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.SetEquipSlotOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EquipSlot                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemManangementItemTileButton_C::SetEquipSlotOverlay(int EquipSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.SetEquipSlotOverlay");

	UItemManangementItemTileButton_C_SetEquipSlotOverlay_Params params;
	params.EquipSlot = EquipSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManangementItemTileButton_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragDetected");

	UItemManangementItemTileButton_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UItemManangementItemTileButton_C::On_ItemWidgetHolder_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown");

	UItemManangementItemTileButton_C_On_ItemWidgetHolder_MouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManangementItemTileButton_C::UpdateStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateStyle");

	UItemManangementItemTileButton_C_UpdateStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateMulchStateBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManangementItemTileButton_C::UpdateMulchStateBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateMulchStateBox");

	UItemManangementItemTileButton_C_UpdateMulchStateBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleDifferentItemManagementModeSetBP
// (Event, Protected, BlueprintEvent)

void UItemManangementItemTileButton_C::HandleDifferentItemManagementModeSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleDifferentItemManagementModeSetBP");

	UItemManangementItemTileButton_C_HandleDifferentItemManagementModeSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UItemManangementItemTileButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnHovered");

	UItemManangementItemTileButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UItemManangementItemTileButton_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnUnhovered");

	UItemManangementItemTileButton_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToDetailChanged
// (Event, Protected, BlueprintEvent)

void UItemManangementItemTileButton_C::HandleHasItemToDetailChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToDetailChanged");

	UItemManangementItemTileButton_C_HandleHasItemToDetailChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToCompareDetailsWithChanged
// (Event, Protected, BlueprintEvent)

void UItemManangementItemTileButton_C::HandleHasItemToCompareDetailsWithChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToCompareDetailsWithChanged");

	UItemManangementItemTileButton_C_HandleHasItemToCompareDetailsWithChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleItemMulchStateChanged
// (Event, Protected, BlueprintEvent)

void UItemManangementItemTileButton_C::HandleItemMulchStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleItemMulchStateChanged");

	UItemManangementItemTileButton_C_HandleItemMulchStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleEquipSlotChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           EquipSlot                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemManangementItemTileButton_C::HandleEquipSlotChanged(int* EquipSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleEquipSlotChanged");

	UItemManangementItemTileButton_C_HandleEquipSlotChanged_Params params;
	params.EquipSlot = EquipSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemManangementItemTileButton_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragCancelled");

	UItemManangementItemTileButton_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UItemManangementItemTileButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnSelected");

	UItemManangementItemTileButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemManangementItemTileButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.Construct");

	UItemManangementItemTileButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleItemChangedBP
// (Event, Protected, BlueprintEvent)

void UItemManangementItemTileButton_C::HandleItemChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleItemChangedBP");

	UItemManangementItemTileButton_C_HandleItemChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.ExecuteUbergraph_ItemManangementItemTileButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemManangementItemTileButton_C::ExecuteUbergraph_ItemManangementItemTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.ExecuteUbergraph_ItemManangementItemTileButton");

	UItemManangementItemTileButton_C_ExecuteUbergraph_ItemManangementItemTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
