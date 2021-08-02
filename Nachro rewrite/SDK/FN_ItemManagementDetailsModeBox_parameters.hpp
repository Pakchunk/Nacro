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

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.UnbindEvents
struct UItemManagementDetailsModeBox_C_UnbindEvents_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshTransferAction
struct UItemManagementDetailsModeBox_C_RefreshTransferAction_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleTransfer
struct UItemManagementDetailsModeBox_C_HandleTransfer_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterTransfer
struct UItemManagementDetailsModeBox_C_RegisterTransfer_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInspectUpgrade
struct UItemManagementDetailsModeBox_C_RegisterInspectUpgrade_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleQuickbarContentsChanged
struct UItemManagementDetailsModeBox_C_HandleQuickbarContentsChanged_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterLeaveInventory
struct UItemManagementDetailsModeBox_C_RegisterLeaveInventory_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshMulchAction
struct UItemManagementDetailsModeBox_C_RefreshMulchAction_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleInputMethodChanged
struct UItemManagementDetailsModeBox_C_HandleInputMethodChanged_Params
{
	bool                                               UsingGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCraftAndSlot
struct UItemManagementDetailsModeBox_C_HandleCraftAndSlot_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCraftAndSlot
struct UItemManagementDetailsModeBox_C_RegisterCraftAndSlot_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshCraftActions
struct UItemManagementDetailsModeBox_C_RefreshCraftActions_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleWorldItemsChanged
struct UItemManagementDetailsModeBox_C_HandleWorldItemsChanged_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleWorldItemListChanged
struct UItemManagementDetailsModeBox_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInventoryInspect
struct UItemManagementDetailsModeBox_C_RegisterInventoryInspect_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetTabStyling
struct UItemManagementDetailsModeBox_C_SetTabStyling_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetItemVisualization
struct UItemManagementDetailsModeBox_C_SetItemVisualization_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.UpdateConsumeItemButtonState
struct UItemManagementDetailsModeBox_C_UpdateConsumeItemButtonState_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetupDetailPanels
struct UItemManagementDetailsModeBox_C_SetupDetailPanels_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleEquip
struct UItemManagementDetailsModeBox_C_HandleEquip_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterEquip
struct UItemManagementDetailsModeBox_C_RegisterEquip_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleTrack
struct UItemManagementDetailsModeBox_C_HandleTrack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterTrack
struct UItemManagementDetailsModeBox_C_RegisterTrack_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCompare
struct UItemManagementDetailsModeBox_C_RegisterCompare_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterConsumeItem
struct UItemManagementDetailsModeBox_C_RegisterConsumeItem_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterSort
struct UItemManagementDetailsModeBox_C_RegisterSort_Params
{
	bool                                               InGame;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterBack
struct UItemManagementDetailsModeBox_C_RegisterBack_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInspect
struct UItemManagementDetailsModeBox_C_RegisterInspect_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterRetire
struct UItemManagementDetailsModeBox_C_RegisterRetire_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterMulch
struct UItemManagementDetailsModeBox_C_RegisterMulch_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCraft
struct UItemManagementDetailsModeBox_C_RegisterCraft_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterDrop
struct UItemManagementDetailsModeBox_C_RegisterDrop_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleDrop
struct UItemManagementDetailsModeBox_C_HandleDrop_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.ShowSelection
struct UItemManagementDetailsModeBox_C_ShowSelection_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCraft
struct UItemManagementDetailsModeBox_C_HandleCraft_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleConsumeItem
struct UItemManagementDetailsModeBox_C_HandleConsumeItem_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.TrySetupInputHandling
struct UItemManagementDetailsModeBox_C_TrySetupInputHandling_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleSort
struct UItemManagementDetailsModeBox_C_HandleSort_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleMulch
struct UItemManagementDetailsModeBox_C_HandleMulch_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCompare
struct UItemManagementDetailsModeBox_C_HandleCompare_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleInspect
struct UItemManagementDetailsModeBox_C_HandleInspect_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleClose
struct UItemManagementDetailsModeBox_C_HandleClose_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature
struct UItemManagementDetailsModeBox_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleDifferentItemToDetailSetBP
struct UItemManagementDetailsModeBox_C_HandleDifferentItemToDetailSetBP_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnActivated
struct UItemManagementDetailsModeBox_C_OnActivated_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature
struct UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature
struct UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature
struct UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleConsumeItemProgressChangedBP
struct UItemManagementDetailsModeBox_C_HandleConsumeItemProgressChangedBP_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature
struct UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnDeactivated
struct UItemManagementDetailsModeBox_C_OnDeactivated_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.Construct
struct UItemManagementDetailsModeBox_C_Construct_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.ExecuteUbergraph_ItemManagementDetailsModeBox
struct UItemManagementDetailsModeBox_C_ExecuteUbergraph_ItemManagementDetailsModeBox_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
