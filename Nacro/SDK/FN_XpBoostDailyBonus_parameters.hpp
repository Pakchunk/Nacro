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

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Get Current Boost
struct UXpBoostDailyBonus_C_Get_Current_Boost_Params
{
	int                                                Boost_Amount;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Update Daily Bonus
struct UXpBoostDailyBonus_C_Update_Daily_Bonus_Params
{
};

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Construct
struct UXpBoostDailyBonus_C_Construct_Params
{
};

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.ExecuteUbergraph_XpBoostDailyBonus
struct UXpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
