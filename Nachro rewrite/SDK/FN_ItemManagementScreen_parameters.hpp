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

// Function ItemManagementScreen.ItemManagementScreen_C.HandleMulchItemsCallback
struct UItemManagementScreen_C_HandleMulchItemsCallback_Params
{
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.GetMaxTransferCount
struct UItemManagementScreen_C_GetMaxTransferCount_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.CompleteItemDrop
struct UItemManagementScreen_C_CompleteItemDrop_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleDropItemsCallback
struct UItemManagementScreen_C_HandleDropItemsCallback_Params
{
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleDrop
struct UItemManagementScreen_C_HandleDrop_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.CompleteItemTransfer
struct UItemManagementScreen_C_CompleteItemTransfer_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransferItemsCallback
struct UItemManagementScreen_C_HandleTransferItemsCallback_Params
{
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.DestroyQuantitySelector
struct UItemManagementScreen_C_DestroyQuantitySelector_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.CreateQuantitySelector
struct UItemManagementScreen_C_CreateQuantitySelector_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       ConfirmText;                                              // (Parm)
	int                                                InitialQuantity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransfer
struct UItemManagementScreen_C_HandleTransfer_Params
{
	class UFortItem*                                   ItemToTransfer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.ShowCraftError
struct UItemManagementScreen_C_ShowCraftError_Params
{
	EFortCraftFailCause                                FailCause;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.CraftAndSlot
struct UItemManagementScreen_C_CraftAndSlot_Params
{
	class UFortSchematicItem*                          SchematicItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquip
struct UItemManagementScreen_C_HandleEquip_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.SizeInventoryPanel
struct UItemManagementScreen_C_SizeInventoryPanel_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.OnDrop
struct UItemManagementScreen_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.GetDescriptionText
struct UItemManagementScreen_C_GetDescriptionText_Params
{
	struct FText                                       ItemDescription;                                          // (Parm, OutParm)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspect
struct UItemManagementScreen_C_HandleInspect_Params
{
	class UFortItem*                                   ItemToInspect;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleClose
struct UItemManagementScreen_C_HandleClose_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40
struct UItemManagementScreen_C_DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40_Params
{
	EFortDialogResult                                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA
struct UItemManagementScreen_C_OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleDifferentItemManagementModeSetBP
struct UItemManagementScreen_C_HandleDifferentItemManagementModeSetBP_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquipItemBP
struct UItemManagementScreen_C_HandleEquipItemBP_Params
{
	class UFortItem**                                  Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleCraftItemBP
struct UItemManagementScreen_C_HandleCraftItemBP_Params
{
	class UFortSchematicItem**                         SchematicItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.DefaultActionRefresh
struct UItemManagementScreen_C_DefaultActionRefresh_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.OnActivated
struct UItemManagementScreen_C_OnActivated_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleConsumeItemBP
struct UItemManagementScreen_C_HandleConsumeItemBP_Params
{
	class UFortConsumableAccountItem**                 ConsumableItem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspectItemBP
struct UItemManagementScreen_C_HandleInspectItemBP_Params
{
	class UFortItem**                                  Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransferItemBP
struct UItemManagementScreen_C_HandleTransferItemBP_Params
{
	class UFortItem**                                  Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleDropItemBP
struct UItemManagementScreen_C_HandleDropItemBP_Params
{
	class UFortItem**                                  Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleMulchQuantitySelection
struct UItemManagementScreen_C_HandleMulchQuantitySelection_Params
{
	class UFortItem**                                  Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.ExecuteUbergraph_ItemManagementScreen
struct UItemManagementScreen_C_ExecuteUbergraph_ItemManagementScreen_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
