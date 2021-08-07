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

// Function DailyRewardsSchedule.DailyRewardsSchedule_C.Construct
struct UDailyRewardsSchedule_C_Construct_Params
{
};

// Function DailyRewardsSchedule.DailyRewardsSchedule_C.Destruct
struct UDailyRewardsSchedule_C_Destruct_Params
{
};

// Function DailyRewardsSchedule.DailyRewardsSchedule_C.PreConstruct
struct UDailyRewardsSchedule_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyRewardsSchedule.DailyRewardsSchedule_C.ExecuteUbergraph_DailyRewardsSchedule
struct UDailyRewardsSchedule_C_ExecuteUbergraph_DailyRewardsSchedule_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
