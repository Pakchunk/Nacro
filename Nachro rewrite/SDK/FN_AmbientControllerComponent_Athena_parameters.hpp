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

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetTargetLPFFreq
struct UAmbientControllerComponent_Athena_C_SetTargetLPFFreq_Params
{
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetIndoorMixEnabled
struct UAmbientControllerComponent_Athena_C_SetIndoorMixEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Trace
struct UAmbientControllerComponent_Athena_C_Trace_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Crossfade
struct UAmbientControllerComponent_Athena_C_Crossfade_Params
{
	class USoundBase*                                  NewSound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.RegisterTimeOfDayCallbacks
struct UAmbientControllerComponent_Athena_C_RegisterTimeOfDayCallbacks_Params
{
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveBeginPlay
struct UAmbientControllerComponent_Athena_C_ReceiveBeginPlay_Params
{
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveEndPlay
struct UAmbientControllerComponent_Athena_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.OnCheckIfSurrounded
struct UAmbientControllerComponent_Athena_C_OnCheckIfSurrounded_Params
{
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Evaluate Inside State
struct UAmbientControllerComponent_Athena_C_Evaluate_Inside_State_Params
{
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Day Phase Change
struct UAmbientControllerComponent_Athena_C_On_Day_Phase_Change_Params
{
	TEnumAsByte<EFortDayPhase>                         CurrentDayPhase;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortDayPhase>                         PreviousDayPhase;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAtCreation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveTick
struct UAmbientControllerComponent_Athena_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Change
struct UAmbientControllerComponent_Athena_C_On_Game_Phase_Change_Params
{
	EAthenaGamePhase                                   GamePhase;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Step Change
struct UAmbientControllerComponent_Athena_C_On_Game_Phase_Step_Change_Params
{
	EAthenaGamePhaseStep                               GamePhaseStep;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Set Storm Amb Layer Enabled
struct UAmbientControllerComponent_Athena_C_Set_Storm_Amb_Layer_Enabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ExecuteUbergraph_AmbientControllerComponent_Athena
struct UAmbientControllerComponent_Athena_C_ExecuteUbergraph_AmbientControllerComponent_Athena_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
