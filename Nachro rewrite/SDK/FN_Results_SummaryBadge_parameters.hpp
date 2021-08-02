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

// Function Results_SummaryBadge.Results_SummaryBadge_C.Initialize
struct UResults_SummaryBadge_C_Initialize_Params
{
	class UFortItem*                                   BadgeItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_SummaryBadge.Results_SummaryBadge_C.PreConstruct
struct UResults_SummaryBadge_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_SummaryBadge.Results_SummaryBadge_C.Manual Pre Construct
struct UResults_SummaryBadge_C_Manual_Pre_Construct_Params
{
};

// Function Results_SummaryBadge.Results_SummaryBadge_C.ExecuteUbergraph_Results_SummaryBadge
struct UResults_SummaryBadge_C_ExecuteUbergraph_Results_SummaryBadge_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
