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

// Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix
struct ASafeZoneIndicator_C_HandleInsideOutsideMix_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio
struct ASafeZoneIndicator_C_InitClosestPointAudio_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.UpdateClosestPointAudioLocation
struct ASafeZoneIndicator_C_UpdateClosestPointAudioLocation_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.GetClosestPointOnSafeZone
struct ASafeZoneIndicator_C_GetClosestPointOnSafeZone_Params
{
	struct FVector                                     PlayerLocation;                                           // (Parm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript
struct ASafeZoneIndicator_C_UserConstructionScript_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Holding Audio Crossfader__FinishedFunc
struct ASafeZoneIndicator_C_Holding_Audio_Crossfader__FinishedFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Holding Audio Crossfader__UpdateFunc
struct ASafeZoneIndicator_C_Holding_Audio_Crossfader__UpdateFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.FadeSafeZoneVisuals__FinishedFunc
struct ASafeZoneIndicator_C_FadeSafeZoneVisuals__FinishedFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.FadeSafeZoneVisuals__UpdateFunc
struct ASafeZoneIndicator_C_FadeSafeZoneVisuals__UpdateFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Movement Audio Crossfader__FinishedFunc
struct ASafeZoneIndicator_C_Movement_Audio_Crossfader__FinishedFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Movement Audio Crossfader__UpdateFunc
struct ASafeZoneIndicator_C_Movement_Audio_Crossfader__UpdateFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Timeline_0__FinishedFunc
struct ASafeZoneIndicator_C_Timeline_0__FinishedFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Timeline_0__UpdateFunc
struct ASafeZoneIndicator_C_Timeline_0__UpdateFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange
struct ASafeZoneIndicator_C_OnSafeZoneStateChange_Params
{
	EFortSafeZoneState*                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveTick
struct ASafeZoneIndicator_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay
struct ASafeZoneIndicator_C_ReceiveBeginPlay_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Apply Lowpass to Audio
struct ASafeZoneIndicator_C_Apply_Lowpass_to_Audio_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator
struct ASafeZoneIndicator_C_ExecuteUbergraph_SafeZoneIndicator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
