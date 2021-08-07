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

// Function Ammo_Spawn.Ammo_Spawn_C.GetLootTierOverride
struct AAmmo_Spawn_C_GetLootTierOverride_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ammo_Spawn.Ammo_Spawn_C.Initialize Pickup
struct AAmmo_Spawn_C_Initialize_Pickup_Params
{
	class AB_Keep_AmmoStash_C*                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ammo_Spawn.Ammo_Spawn_C.UserConstructionScript
struct AAmmo_Spawn_C_UserConstructionScript_Params
{
};

// Function Ammo_Spawn.Ammo_Spawn_C.OnBeginSearch
struct AAmmo_Spawn_C_OnBeginSearch_Params
{
};

// Function Ammo_Spawn.Ammo_Spawn_C.OnLootRepeat
struct AAmmo_Spawn_C_OnLootRepeat_Params
{
};

// Function Ammo_Spawn.Ammo_Spawn_C.OnDamagePlayEffects
struct AAmmo_Spawn_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function Ammo_Spawn.Ammo_Spawn_C.OnDeathPlayEffects
struct AAmmo_Spawn_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function Ammo_Spawn.Ammo_Spawn_C.OnLoot
struct AAmmo_Spawn_C_OnLoot_Params
{
};

// Function Ammo_Spawn.Ammo_Spawn_C.ExecuteUbergraph_Ammo_Spawn
struct AAmmo_Spawn_C_ExecuteUbergraph_Ammo_Spawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
