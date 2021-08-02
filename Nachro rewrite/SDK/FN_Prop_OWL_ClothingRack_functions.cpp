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

// Function Prop_OWL_ClothingRack.Prop_OWL_ClothingRack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_OWL_ClothingRack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_OWL_ClothingRack.Prop_OWL_ClothingRack_C.UserConstructionScript");

	AProp_OWL_ClothingRack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_OWL_ClothingRack.Prop_OWL_ClothingRack_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AProp_OWL_ClothingRack_C::OnDamagePlayEffects(float* Damage, struct FVector* Momentum, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext, struct FGameplayTagContainer* DamageTags, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_OWL_ClothingRack.Prop_OWL_ClothingRack_C.OnDamagePlayEffects");

	AProp_OWL_ClothingRack_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.Momentum = Momentum;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageTags != nullptr)
		*DamageTags = params.DamageTags;
	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
}


// Function Prop_OWL_ClothingRack.Prop_OWL_ClothingRack_C.ExecuteUbergraph_Prop_OWL_ClothingRack
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProp_OWL_ClothingRack_C::ExecuteUbergraph_Prop_OWL_ClothingRack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_OWL_ClothingRack.Prop_OWL_ClothingRack_C.ExecuteUbergraph_Prop_OWL_ClothingRack");

	AProp_OWL_ClothingRack_C_ExecuteUbergraph_Prop_OWL_ClothingRack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
