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

// Function Prop_Bear.Prop_Bear_C.OnRep_Effects
struct AProp_Bear_C_OnRep_Effects_Params
{
};

// Function Prop_Bear.Prop_Bear_C.UserConstructionScript
struct AProp_Bear_C_UserConstructionScript_Params
{
};

// Function Prop_Bear.Prop_Bear_C.ReceiveBeginPlay
struct AProp_Bear_C_ReceiveBeginPlay_Params
{
};

// Function Prop_Bear.Prop_Bear_C.OnDeathServer
struct AProp_Bear_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function Prop_Bear.Prop_Bear_C.ExecuteUbergraph_Prop_Bear
struct AProp_Bear_C_ExecuteUbergraph_Prop_Bear_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
