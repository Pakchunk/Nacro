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

// Function XpBar.XpBar_C.ScaledCommanderBalance
struct UXpBar_C_ScaledCommanderBalance_Params
{
	int                                                LeveXP;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InInt2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XpBar.XpBar_C.ScaledRestBalance
struct UXpBar_C_ScaledRestBalance_Params
{
	int                                                AmountToLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XpBar.XpBar_C.ScaledBoostBalance
struct UXpBar_C_ScaledBoostBalance_Params
{
	int                                                AmountToLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XpBar.XpBar_C.GetExperienceToolTipWidget
struct UXpBar_C_GetExperienceToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XpBar.XpBar_C.Update Xp Bar
struct UXpBar_C_Update_Xp_Bar_Params
{
	struct FFortPublicAccountInfo                      Account_Info;                                             // (Parm)
};

// Function XpBar.XpBar_C.Construct
struct UXpBar_C_Construct_Params
{
};

// Function XpBar.XpBar_C.Account Info Changed
struct UXpBar_C_Account_Info_Changed_Params
{
	struct FFortPublicAccountInfo                      NewInfo;                                                  // (Parm)
};

// Function XpBar.XpBar_C.Xp Boost Changed
struct UXpBar_C_Xp_Boost_Changed_Params
{
	int                                                BoostAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpBar.XpBar_C.ExecuteUbergraph_XpBar
struct UXpBar_C_ExecuteUbergraph_XpBar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
