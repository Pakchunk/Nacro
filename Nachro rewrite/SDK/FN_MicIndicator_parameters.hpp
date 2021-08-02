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

// Function MicIndicator.MicIndicator_C.OnPlayerTalkingChanged
struct UMicIndicator_C_OnPlayerTalkingChanged_Params
{
	bool*                                              bIsTalking;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MicIndicator.MicIndicator_C.OnPlayerMuted
struct UMicIndicator_C_OnPlayerMuted_Params
{
	bool*                                              bIsMuted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator
struct UMicIndicator_C_ExecuteUbergraph_MicIndicator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
