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

// Function Prop_OWL_ClothingRack.Prop_OWL_ClothingRack_C.UserConstructionScript
struct AProp_OWL_ClothingRack_C_UserConstructionScript_Params
{
};

// Function Prop_OWL_ClothingRack.Prop_OWL_ClothingRack_C.OnDamagePlayEffects
struct AProp_OWL_ClothingRack_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function Prop_OWL_ClothingRack.Prop_OWL_ClothingRack_C.ExecuteUbergraph_Prop_OWL_ClothingRack
struct AProp_OWL_ClothingRack_C_ExecuteUbergraph_Prop_OWL_ClothingRack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
