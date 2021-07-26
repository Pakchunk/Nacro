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

// Function WildWest_Outhouse_01.WildWest_Outhouse_01_C.UserConstructionScript
struct AWildWest_Outhouse_01_C_UserConstructionScript_Params
{
};

// Function WildWest_Outhouse_01.WildWest_Outhouse_01_C.OnLoot
struct AWildWest_Outhouse_01_C_OnLoot_Params
{
};

// Function WildWest_Outhouse_01.WildWest_Outhouse_01_C.OnDeathPlayEffects
struct AWildWest_Outhouse_01_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function WildWest_Outhouse_01.WildWest_Outhouse_01_C.ExecuteUbergraph_WildWest_Outhouse_01
struct AWildWest_Outhouse_01_C_ExecuteUbergraph_WildWest_Outhouse_01_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
