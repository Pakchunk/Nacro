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

// Function MessageCenterListItem.MessageCenterListItem_C.DoesItemHaveChildren
struct UMessageCenterListItem_C_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.GetIndentLevel
struct UMessageCenterListItem_C_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.IsItemExpanded
struct UMessageCenterListItem_C_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.GetData
struct UMessageCenterListItem_C_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.ShowText
struct UMessageCenterListItem_C_ShowText_Params
{
	struct FText                                       Text;                                                     // (Parm)
	class UCommonTextBlock*                            TextBlock;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.SetMessage
struct UMessageCenterListItem_C_SetMessage_Params
{
	class UFortUINotification*                         MESSAGE;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.OnAcquireFromPool
struct UMessageCenterListItem_C_OnAcquireFromPool_Params
{
};

// Function MessageCenterListItem.MessageCenterListItem_C.OnReleaseToPool
struct UMessageCenterListItem_C_OnReleaseToPool_Params
{
};

// Function MessageCenterListItem.MessageCenterListItem_C.Private_OnExpanderArrowShiftClicked
struct UMessageCenterListItem_C_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function MessageCenterListItem.MessageCenterListItem_C.RegisterOnClicked
struct UMessageCenterListItem_C_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MessageCenterListItem.MessageCenterListItem_C.SetExpanded
struct UMessageCenterListItem_C_SetExpanded_Params
{
	bool                                               bExpanded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.SetIndexInList
struct UMessageCenterListItem_C_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.ToggleExpansion
struct UMessageCenterListItem_C_ToggleExpansion_Params
{
};

// Function MessageCenterListItem.MessageCenterListItem_C.Reset
struct UMessageCenterListItem_C_Reset_Params
{
};

// Function MessageCenterListItem.MessageCenterListItem_C.SetData
struct UMessageCenterListItem_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonListView*                             OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.Construct
struct UMessageCenterListItem_C_Construct_Params
{
};

// Function MessageCenterListItem.MessageCenterListItem_C.SetSelected
struct UMessageCenterListItem_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.ExecuteUbergraph_MessageCenterListItem
struct UMessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
