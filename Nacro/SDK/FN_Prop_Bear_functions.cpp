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

// Function Prop_Bear.Prop_Bear_C.OnRep_Effects
// (BlueprintCallable, BlueprintEvent)

void AProp_Bear_C::OnRep_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_Bear.Prop_Bear_C.OnRep_Effects");

	AProp_Bear_C_OnRep_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_Bear.Prop_Bear_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_Bear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_Bear.Prop_Bear_C.UserConstructionScript");

	AProp_Bear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_Bear.Prop_Bear_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_Bear_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_Bear.Prop_Bear_C.ReceiveBeginPlay");

	AProp_Bear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_Bear.Prop_Bear_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AProp_Bear_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_Bear.Prop_Bear_C.OnDeathServer");

	AProp_Bear_C_OnDeathServer_Params params;
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


// Function Prop_Bear.Prop_Bear_C.ExecuteUbergraph_Prop_Bear
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProp_Bear_C::ExecuteUbergraph_Prop_Bear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_Bear.Prop_Bear_C.ExecuteUbergraph_Prop_Bear");

	AProp_Bear_C_ExecuteUbergraph_Prop_Bear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
