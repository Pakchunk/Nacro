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

// Function LightningLSystem.LightningLsystem_C.GetRandomMesh
struct ALightningLsystem_C_GetRandomMesh_Params
{
};

// Function LightningLSystem.LightningLsystem_C.CleanupMesh
struct ALightningLsystem_C_CleanupMesh_Params
{
};

// Function LightningLSystem.LightningLsystem_C.UserConstructionScript
struct ALightningLsystem_C_UserConstructionScript_Params
{
};

// Function LightningLSystem.LightningLsystem_C.OnLightingCleanup
struct ALightningLsystem_C_OnLightingCleanup_Params
{
};

// Function LightningLSystem.LightningLsystem_C.SetupLightning
struct ALightningLsystem_C_SetupLightning_Params
{
	struct FVector                                     Start_Location;                                           // (Parm, IsPlainOldData)
	struct FVector                                     End_Location;                                             // (Parm, IsPlainOldData)
};

// Function LightningLSystem.LightningLsystem_C.DebugStrike
struct ALightningLsystem_C_DebugStrike_Params
{
};

// Function LightningLSystem.LightningLsystem_C.OnLightingInitialized
struct ALightningLsystem_C_OnLightingInitialized_Params
{
};

// Function LightningLSystem.LightningLsystem_C.EndLightning
struct ALightningLsystem_C_EndLightning_Params
{
};

// Function LightningLSystem.LightningLsystem_C.ExecuteUbergraph_LightningLsystem
struct ALightningLsystem_C_ExecuteUbergraph_LightningLsystem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
