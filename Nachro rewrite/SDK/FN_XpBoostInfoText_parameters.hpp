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

// Function XpBoostInfoText.XpBoostInfoText_C.Update Available Boosts
struct UXpBoostInfoText_C_Update_Available_Boosts_Params
{
};

// Function XpBoostInfoText.XpBoostInfoText_C.Construct
struct UXpBoostInfoText_C_Construct_Params
{
};

// Function XpBoostInfoText.XpBoostInfoText_C.HandleAccountUpdate
struct UXpBoostInfoText_C_HandleAccountUpdate_Params
{
	struct FFortPublicAccountInfo                      NewInfo;                                                  // (Parm)
};

// Function XpBoostInfoText.XpBoostInfoText_C.Xp Boost Changed
struct UXpBoostInfoText_C_Xp_Boost_Changed_Params
{
	int                                                BoostAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpBoostInfoText.XpBoostInfoText_C.ExecuteUbergraph_XpBoostInfoText
struct UXpBoostInfoText_C_ExecuteUbergraph_XpBoostInfoText_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
