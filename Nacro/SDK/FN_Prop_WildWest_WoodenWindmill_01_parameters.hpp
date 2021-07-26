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

// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.UserConstructionScript
struct AProp_WildWest_WoodenWindmill_01_C_UserConstructionScript_Params
{
};

// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.ReceiveBeginPlay
struct AProp_WildWest_WoodenWindmill_01_C_ReceiveBeginPlay_Params
{
};

// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.NewSpin
struct AProp_WildWest_WoodenWindmill_01_C_NewSpin_Params
{
};

// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.SpinUpdate
struct AProp_WildWest_WoodenWindmill_01_C_SpinUpdate_Params
{
};

// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.ReceiveTick
struct AProp_WildWest_WoodenWindmill_01_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.ReceiveDestroyed
struct AProp_WildWest_WoodenWindmill_01_C_ReceiveDestroyed_Params
{
};

// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.OnDeathPlayEffects
struct AProp_WildWest_WoodenWindmill_01_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.ExecuteUbergraph_Prop_WildWest_WoodenWindmill_01
struct AProp_WildWest_WoodenWindmill_01_C_ExecuteUbergraph_Prop_WildWest_WoodenWindmill_01_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
