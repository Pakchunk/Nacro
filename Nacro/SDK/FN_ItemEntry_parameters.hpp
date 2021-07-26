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

// Function ItemEntry.ItemEntry_C.DoesItemHaveChildren
struct UItemEntry_C_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.GetIndentLevel
struct UItemEntry_C_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.IsItemExpanded
struct UItemEntry_C_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.GetData
struct UItemEntry_C_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.OnAcquireFromPool
struct UItemEntry_C_OnAcquireFromPool_Params
{
};

// Function ItemEntry.ItemEntry_C.OnReleaseToPool
struct UItemEntry_C_OnReleaseToPool_Params
{
};

// Function ItemEntry.ItemEntry_C.Private_OnExpanderArrowShiftClicked
struct UItemEntry_C_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function ItemEntry.ItemEntry_C.RegisterOnClicked
struct UItemEntry_C_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemEntry.ItemEntry_C.SetExpanded
struct UItemEntry_C_SetExpanded_Params
{
	bool                                               bExpanded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.SetIndexInList
struct UItemEntry_C_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.SetSelected
struct UItemEntry_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.ToggleExpansion
struct UItemEntry_C_ToggleExpansion_Params
{
};

// Function ItemEntry.ItemEntry_C.Reset
struct UItemEntry_C_Reset_Params
{
};

// Function ItemEntry.ItemEntry_C.SetData
struct UItemEntry_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonListView*                             OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.Construct
struct UItemEntry_C_Construct_Params
{
};

// Function ItemEntry.ItemEntry_C.ExecuteUbergraph_ItemEntry
struct UItemEntry_C_ExecuteUbergraph_ItemEntry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemEntry.ItemEntry_C.Entry Selected__DelegateSignature
struct UItemEntry_C_Entry_Selected__DelegateSignature_Params
{
	class UFortItemDefinition*                         Items_Definition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
