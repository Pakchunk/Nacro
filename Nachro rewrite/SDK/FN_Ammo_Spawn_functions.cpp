// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ammo_Spawn.Ammo_Spawn_C.GetLootTierOverride
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AAmmo_Spawn_C::GetLootTierOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Spawn.Ammo_Spawn_C.GetLootTierOverride");

	AAmmo_Spawn_C_GetLootTierOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ammo_Spawn.Ammo_Spawn_C.Initialize Pickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_Keep_AmmoStash_C*     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Position                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Tier                           (Parm, ZeroConstructor, IsPlainOldData)

void AAmmo_Spawn_C::Initialize_Pickup(class AB_Keep_AmmoStash_C* Parent, int Position, int Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Spawn.Ammo_Spawn_C.Initialize Pickup");

	AAmmo_Spawn_C_Initialize_Pickup_Params params;
	params.Parent = Parent;
	params.Position = Position;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammo_Spawn.Ammo_Spawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAmmo_Spawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Spawn.Ammo_Spawn_C.UserConstructionScript");

	AAmmo_Spawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammo_Spawn.Ammo_Spawn_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void AAmmo_Spawn_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Spawn.Ammo_Spawn_C.OnBeginSearch");

	AAmmo_Spawn_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammo_Spawn.Ammo_Spawn_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void AAmmo_Spawn_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Spawn.Ammo_Spawn_C.OnLootRepeat");

	AAmmo_Spawn_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammo_Spawn.Ammo_Spawn_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AAmmo_Spawn_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Spawn.Ammo_Spawn_C.OnDamagePlayEffects");

	AAmmo_Spawn_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammo_Spawn.Ammo_Spawn_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AAmmo_Spawn_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Spawn.Ammo_Spawn_C.OnDeathPlayEffects");

	AAmmo_Spawn_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammo_Spawn.Ammo_Spawn_C.OnLoot
// (Event, Public, BlueprintEvent)

void AAmmo_Spawn_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Spawn.Ammo_Spawn_C.OnLoot");

	AAmmo_Spawn_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammo_Spawn.Ammo_Spawn_C.ExecuteUbergraph_Ammo_Spawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmmo_Spawn_C::ExecuteUbergraph_Ammo_Spawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Spawn.Ammo_Spawn_C.ExecuteUbergraph_Ammo_Spawn");

	AAmmo_Spawn_C_ExecuteUbergraph_Ammo_Spawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
