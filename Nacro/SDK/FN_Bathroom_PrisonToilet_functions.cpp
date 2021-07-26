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

// Function Bathroom_PrisonToilet.Bathroom_PrisonToilet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABathroom_PrisonToilet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bathroom_PrisonToilet.Bathroom_PrisonToilet_C.UserConstructionScript");

	ABathroom_PrisonToilet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bathroom_PrisonToilet.Bathroom_PrisonToilet_C.OnLoot
// (Event, Public, BlueprintEvent)

void ABathroom_PrisonToilet_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bathroom_PrisonToilet.Bathroom_PrisonToilet_C.OnLoot");

	ABathroom_PrisonToilet_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bathroom_PrisonToilet.Bathroom_PrisonToilet_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void ABathroom_PrisonToilet_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bathroom_PrisonToilet.Bathroom_PrisonToilet_C.OnDeathPlayEffects");

	ABathroom_PrisonToilet_C_OnDeathPlayEffects_Params params;
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


// Function Bathroom_PrisonToilet.Bathroom_PrisonToilet_C.ExecuteUbergraph_Bathroom_PrisonToilet
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABathroom_PrisonToilet_C::ExecuteUbergraph_Bathroom_PrisonToilet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bathroom_PrisonToilet.Bathroom_PrisonToilet_C.ExecuteUbergraph_Bathroom_PrisonToilet");

	ABathroom_PrisonToilet_C_ExecuteUbergraph_Bathroom_PrisonToilet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
