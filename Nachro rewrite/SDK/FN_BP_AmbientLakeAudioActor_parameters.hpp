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

// Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.UserConstructionScript
struct ABP_AmbientLakeAudioActor_C_UserConstructionScript_Params
{
};

// Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.ReceiveTick
struct ABP_AmbientLakeAudioActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.ExecuteUbergraph_BP_AmbientLakeAudioActor
struct ABP_AmbientLakeAudioActor_C_ExecuteUbergraph_BP_AmbientLakeAudioActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
