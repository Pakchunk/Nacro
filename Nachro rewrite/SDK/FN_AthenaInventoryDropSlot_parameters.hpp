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

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnDrop
struct UAthenaInventoryDropSlot_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.Tick
struct UAthenaInventoryDropSlot_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.ExecuteUbergraph_AthenaInventoryDropSlot
struct UAthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnEquipRequested__DelegateSignature
struct UAthenaInventoryDropSlot_C_OnEquipRequested__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
