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

// Function HalloweenQuestsTile.HalloweenQuestsTile_C.SetupSideQuestRewards
struct UHalloweenQuestsTile_C_SetupSideQuestRewards_Params
{
};

// Function HalloweenQuestsTile.HalloweenQuestsTile_C.Configure Rewards and Timers
struct UHalloweenQuestsTile_C_Configure_Rewards_and_Timers_Params
{
};

// Function HalloweenQuestsTile.HalloweenQuestsTile_C.PopulateVladQuestArray
struct UHalloweenQuestsTile_C_PopulateVladQuestArray_Params
{
};

// Function HalloweenQuestsTile.HalloweenQuestsTile_C.IsEventUnlocked
struct UHalloweenQuestsTile_C_IsEventUnlocked_Params
{
	bool                                               IsUnlocked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HalloweenQuestsTile.HalloweenQuestsTile_C.AdvanceRewardsDisplay
struct UHalloweenQuestsTile_C_AdvanceRewardsDisplay_Params
{
};

// Function HalloweenQuestsTile.HalloweenQuestsTile_C.UpdateSideQuestInfo
struct UHalloweenQuestsTile_C_UpdateSideQuestInfo_Params
{
};

// Function HalloweenQuestsTile.HalloweenQuestsTile_C.Construct
struct UHalloweenQuestsTile_C_Construct_Params
{
};

// Function HalloweenQuestsTile.HalloweenQuestsTile_C.Handle OnQuestsUpdated
struct UHalloweenQuestsTile_C_Handle_OnQuestsUpdated_Params
{
};

// Function HalloweenQuestsTile.HalloweenQuestsTile_C.Destruct
struct UHalloweenQuestsTile_C_Destruct_Params
{
};

// Function HalloweenQuestsTile.HalloweenQuestsTile_C.ExecuteUbergraph_HalloweenQuestsTile
struct UHalloweenQuestsTile_C_ExecuteUbergraph_HalloweenQuestsTile_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
