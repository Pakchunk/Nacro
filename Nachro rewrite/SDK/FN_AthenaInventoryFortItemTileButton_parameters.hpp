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

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnDrop
struct UAthenaInventoryFortItemTileButton_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnFocusReceived
struct UAthenaInventoryFortItemTileButton_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown
struct UAthenaInventoryFortItemTileButton_C_On_ItemWidgetHolder_MouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.UpdateInteractionWidgetVisibility
struct UAthenaInventoryFortItemTileButton_C_UpdateInteractionWidgetVisibility_Params
{
};

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.SetEquipSlotOverlay
struct UAthenaInventoryFortItemTileButton_C_SetEquipSlotOverlay_Params
{
	int                                                EquipSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnDragDetected
struct UAthenaInventoryFortItemTileButton_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.UpdateStyle
struct UAthenaInventoryFortItemTileButton_C_UpdateStyle_Params
{
};

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.HandleEquipSlotChanged
struct UAthenaInventoryFortItemTileButton_C_HandleEquipSlotChanged_Params
{
	int*                                               EquipSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnInventoryItemSelected_Event_1
struct UAthenaInventoryFortItemTileButton_C_OnInventoryItemSelected_Event_1_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.Construct
struct UAthenaInventoryFortItemTileButton_C_Construct_Params
{
};

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.Destruct
struct UAthenaInventoryFortItemTileButton_C_Destruct_Params
{
};

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnSelected
struct UAthenaInventoryFortItemTileButton_C_OnSelected_Params
{
};

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.ExecuteUbergraph_AthenaInventoryFortItemTileButton
struct UAthenaInventoryFortItemTileButton_C_ExecuteUbergraph_AthenaInventoryFortItemTileButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
