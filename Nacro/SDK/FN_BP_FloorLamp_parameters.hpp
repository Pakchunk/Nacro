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

// Function BP_FloorLamp.BP_FloorLamp_C.OnRep_disable light
struct ABP_FloorLamp_C_OnRep_disable_light_Params
{
};

// Function BP_FloorLamp.BP_FloorLamp_C.UserConstructionScript
struct ABP_FloorLamp_C_UserConstructionScript_Params
{
};

// Function BP_FloorLamp.BP_FloorLamp_C.ReceiveDestroyed
struct ABP_FloorLamp_C_ReceiveDestroyed_Params
{
};

// Function BP_FloorLamp.BP_FloorLamp_C.OnDamageServer
struct ABP_FloorLamp_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function BP_FloorLamp.BP_FloorLamp_C.disabale_light
struct ABP_FloorLamp_C_disabale_light_Params
{
};

// Function BP_FloorLamp.BP_FloorLamp_C.ExecuteUbergraph_BP_FloorLamp
struct ABP_FloorLamp_C_ExecuteUbergraph_BP_FloorLamp_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
