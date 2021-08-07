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

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleSlottedSurvivor
struct UItemManangementItemTileButton_C_HandleSlottedSurvivor_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateQuantityProduced
struct UItemManangementItemTileButton_C_UpdateQuantityProduced_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateBangState
struct UItemManangementItemTileButton_C_UpdateBangState_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateInteractionWidgetVisibility
struct UItemManangementItemTileButton_C_UpdateInteractionWidgetVisibility_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.SetEquipSlotOverlay
struct UItemManangementItemTileButton_C_SetEquipSlotOverlay_Params
{
	int                                                EquipSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragDetected
struct UItemManangementItemTileButton_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown
struct UItemManangementItemTileButton_C_On_ItemWidgetHolder_MouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateStyle
struct UItemManangementItemTileButton_C_UpdateStyle_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateMulchStateBox
struct UItemManangementItemTileButton_C_UpdateMulchStateBox_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleDifferentItemManagementModeSetBP
struct UItemManangementItemTileButton_C_HandleDifferentItemManagementModeSetBP_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnHovered
struct UItemManangementItemTileButton_C_OnHovered_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnUnhovered
struct UItemManangementItemTileButton_C_OnUnhovered_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToDetailChanged
struct UItemManangementItemTileButton_C_HandleHasItemToDetailChanged_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToCompareDetailsWithChanged
struct UItemManangementItemTileButton_C_HandleHasItemToCompareDetailsWithChanged_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleItemMulchStateChanged
struct UItemManangementItemTileButton_C_HandleItemMulchStateChanged_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleEquipSlotChanged
struct UItemManangementItemTileButton_C_HandleEquipSlotChanged_Params
{
	int*                                               EquipSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragCancelled
struct UItemManangementItemTileButton_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnSelected
struct UItemManangementItemTileButton_C_OnSelected_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.Construct
struct UItemManangementItemTileButton_C_Construct_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleItemChangedBP
struct UItemManangementItemTileButton_C_HandleItemChangedBP_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.ExecuteUbergraph_ItemManangementItemTileButton
struct UItemManangementItemTileButton_C_ExecuteUbergraph_ItemManangementItemTileButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
