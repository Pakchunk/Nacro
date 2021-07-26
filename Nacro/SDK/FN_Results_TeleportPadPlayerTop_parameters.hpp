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

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Play Anim Intro
struct UResults_TeleportPadPlayerTop_C_Play_Anim_Intro_Params
{
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Initialize
struct UResults_TeleportPadPlayerTop_C_Initialize_Params
{
	struct FUniqueNetIdRepl                            UniqueNetID;                                              // (Parm)
	class UFortUIScoreReport*                          ScoreReport;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreReportIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.IntroName
struct UResults_TeleportPadPlayerTop_C_IntroName_Params
{
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.PreConstruct
struct UResults_TeleportPadPlayerTop_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Intro
struct UResults_TeleportPadPlayerTop_C_Intro_Params
{
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.ExecuteUbergraph_Results_TeleportPadPlayerTop
struct UResults_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
