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

// Function Bathroom_PrisonToilet.Bathroom_PrisonToilet_C.UserConstructionScript
struct ABathroom_PrisonToilet_C_UserConstructionScript_Params
{
};

// Function Bathroom_PrisonToilet.Bathroom_PrisonToilet_C.OnLoot
struct ABathroom_PrisonToilet_C_OnLoot_Params
{
};

// Function Bathroom_PrisonToilet.Bathroom_PrisonToilet_C.OnDeathPlayEffects
struct ABathroom_PrisonToilet_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function Bathroom_PrisonToilet.Bathroom_PrisonToilet_C.ExecuteUbergraph_Bathroom_PrisonToilet
struct ABathroom_PrisonToilet_C_ExecuteUbergraph_Bathroom_PrisonToilet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
