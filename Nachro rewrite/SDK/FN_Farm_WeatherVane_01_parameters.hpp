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

// Function Farm_WeatherVane_01.Farm_WeatherVane_01_C.UserConstructionScript
struct AFarm_WeatherVane_01_C_UserConstructionScript_Params
{
};

// Function Farm_WeatherVane_01.Farm_WeatherVane_01_C.ReceiveTick
struct AFarm_WeatherVane_01_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Farm_WeatherVane_01.Farm_WeatherVane_01_C.OnBounceAnimationUpdate
struct AFarm_WeatherVane_01_C_OnBounceAnimationUpdate_Params
{
	struct FFortBounceData*                            Data;                                                     // (Parm)
};

// Function Farm_WeatherVane_01.Farm_WeatherVane_01_C.ExecuteUbergraph_Farm_WeatherVane_01
struct AFarm_WeatherVane_01_C_ExecuteUbergraph_Farm_WeatherVane_01_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
