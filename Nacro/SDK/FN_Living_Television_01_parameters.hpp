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

// Function Living_Television_01.Living_Television_01_C.OnRep_bKillSound
struct ALiving_Television_01_C_OnRep_bKillSound_Params
{
};

// Function Living_Television_01.Living_Television_01_C.UserConstructionScript
struct ALiving_Television_01_C_UserConstructionScript_Params
{
};

// Function Living_Television_01.Living_Television_01_C.Timeline_0__FinishedFunc
struct ALiving_Television_01_C_Timeline_0__FinishedFunc_Params
{
};

// Function Living_Television_01.Living_Television_01_C.Timeline_0__UpdateFunc
struct ALiving_Television_01_C_Timeline_0__UpdateFunc_Params
{
};

// Function Living_Television_01.Living_Television_01_C.OnLoot
struct ALiving_Television_01_C_OnLoot_Params
{
};

// Function Living_Television_01.Living_Television_01_C.OnLootRepeat
struct ALiving_Television_01_C_OnLootRepeat_Params
{
};

// Function Living_Television_01.Living_Television_01_C.OnDeathServer
struct ALiving_Television_01_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function Living_Television_01.Living_Television_01_C.ExecuteUbergraph_Living_Television_01
struct ALiving_Television_01_C_ExecuteUbergraph_Living_Television_01_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
