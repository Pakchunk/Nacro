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

// Function StatsListWidget.StatsListWidget_C.AdjustClampCount
struct UStatsListWidget_C_AdjustClampCount_Params
{
	class UFortAttributeListItem_NUI*                  Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatsListWidget.StatsListWidget_C.ToggleClampedValueMessage
struct UStatsListWidget_C_ToggleClampedValueMessage_Params
{
	bool                                               inShow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatsListWidget.StatsListWidget_C.OnClearShownAttributes
struct UStatsListWidget_C_OnClearShownAttributes_Params
{
};

// Function StatsListWidget.StatsListWidget_C.OnAddShownAttributeListItem
struct UStatsListWidget_C_OnAddShownAttributeListItem_Params
{
	class UFortAttributeListItem_NUI**                 AttributeListItemWidget;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatsListWidget.StatsListWidget_C.OnRemoveShownAttributeListItem
struct UStatsListWidget_C_OnRemoveShownAttributeListItem_Params
{
	class UFortAttributeListItem_NUI**                 AttributeListItemWidget;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatsListWidget.StatsListWidget_C.ExecuteUbergraph_StatsListWidget
struct UStatsListWidget_C_ExecuteUbergraph_StatsListWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
