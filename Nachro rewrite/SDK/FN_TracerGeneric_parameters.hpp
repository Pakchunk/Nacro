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

// Function TracerGeneric.TracerGeneric_C.GetLocalPawnForPassBy
struct ATracerGeneric_C_GetLocalPawnForPassBy_Params
{
	class AFortPlayerPawn*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TracerGeneric.TracerGeneric_C.PlayPassBySound
struct ATracerGeneric_C_PlayPassBySound_Params
{
};

// Function TracerGeneric.TracerGeneric_C.TrackPassBy
struct ATracerGeneric_C_TrackPassBy_Params
{
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Pass_Distance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TracerGeneric.TracerGeneric_C.UserConstructionScript
struct ATracerGeneric_C_UserConstructionScript_Params
{
};

// Function TracerGeneric.TracerGeneric_C.ReceiveTick
struct ATracerGeneric_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TracerGeneric.TracerGeneric_C.OnInit
struct ATracerGeneric_C_OnInit_Params
{
	struct FVector*                                    Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TracerGeneric.TracerGeneric_C.ExecuteUbergraph_TracerGeneric
struct ATracerGeneric_C_ExecuteUbergraph_TracerGeneric_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
