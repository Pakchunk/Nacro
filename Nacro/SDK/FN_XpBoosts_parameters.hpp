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

// Function XpBoosts.XpBoosts_C.Activate
struct UXpBoosts_C_Activate_Params
{
};

// Function XpBoosts.XpBoosts_C.Update Total Boosts
struct UXpBoosts_C_Update_Total_Boosts_Params
{
};

// Function XpBoosts.XpBoosts_C.Unbind Party Delegates
struct UXpBoosts_C_Unbind_Party_Delegates_Params
{
};

// Function XpBoosts.XpBoosts_C.HandleOnTeamMemberStateChanged
struct UXpBoosts_C_HandleOnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         NewMemberState;                                           // (Parm)
};

// Function XpBoosts.XpBoosts_C.Update Total Boost Amounts
struct UXpBoosts_C_Update_Total_Boost_Amounts_Params
{
};

// Function XpBoosts.XpBoosts_C.HandleRemotePlayerRemoved
struct UXpBoosts_C_HandleRemotePlayerRemoved_Params
{
	int                                                RemovedIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpBoosts.XpBoosts_C.Bind Party Delegates
struct UXpBoosts_C_Bind_Party_Delegates_Params
{
};

// Function XpBoosts.XpBoosts_C.Update Current Boosts
struct UXpBoosts_C_Update_Current_Boosts_Params
{
};

// Function XpBoosts.XpBoosts_C.Construct
struct UXpBoosts_C_Construct_Params
{
};

// Function XpBoosts.XpBoosts_C.Give Boost Clicked
struct UXpBoosts_C_Give_Boost_Clicked_Params
{
	struct FUniqueNetIdRepl                            Player_to_Boost;                                          // (Parm)
};

// Function XpBoosts.XpBoosts_C.On Party Left
struct UXpBoosts_C_On_Party_Left_Params
{
};

// Function XpBoosts.XpBoosts_C.On Party Joined
struct UXpBoosts_C_On_Party_Joined_Params
{
};

// Function XpBoosts.XpBoosts_C.Xp Boost Changed
struct UXpBoosts_C_Xp_Boost_Changed_Params
{
	int                                                BoostAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpBoosts.XpBoosts_C.ExecuteUbergraph_XpBoosts
struct UXpBoosts_C_ExecuteUbergraph_XpBoosts_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
