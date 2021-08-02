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

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.SetFade
struct ABP_AmbientSplineActor_C_SetFade_Params
{
	bool                                               _Out;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.SetNewCheckFrequency
struct ABP_AmbientSplineActor_C_SetNewCheckFrequency_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.DistSq
struct ABP_AmbientSplineActor_C_DistSq_Params
{
	struct FVector                                     Loc_A;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     Loc_B;                                                    // (Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.GetViewTargetLoc
struct ABP_AmbientSplineActor_C_GetViewTargetLoc_Params
{
	struct FVector                                     Target_Loc;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.UserConstructionScript
struct ABP_AmbientSplineActor_C_UserConstructionScript_Params
{
};

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveBeginPlay
struct ABP_AmbientSplineActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.Check Closest Point
struct ABP_AmbientSplineActor_C_Check_Closest_Point_Params
{
};

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveTick
struct ABP_AmbientSplineActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ExecuteUbergraph_BP_AmbientSplineActor
struct ABP_AmbientSplineActor_C_ExecuteUbergraph_BP_AmbientSplineActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
