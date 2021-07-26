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

// Function BP_FloorLamp.BP_FloorLamp_C.OnRep_disable light
// (BlueprintCallable, BlueprintEvent)

void ABP_FloorLamp_C::OnRep_disable_light()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FloorLamp.BP_FloorLamp_C.OnRep_disable light");

	ABP_FloorLamp_C_OnRep_disable_light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FloorLamp.BP_FloorLamp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FloorLamp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FloorLamp.BP_FloorLamp_C.UserConstructionScript");

	ABP_FloorLamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FloorLamp.BP_FloorLamp_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_FloorLamp_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FloorLamp.BP_FloorLamp_C.ReceiveDestroyed");

	ABP_FloorLamp_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FloorLamp.BP_FloorLamp_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void ABP_FloorLamp_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FloorLamp.BP_FloorLamp_C.OnDamageServer");

	ABP_FloorLamp_C_OnDamageServer_Params params;
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


// Function BP_FloorLamp.BP_FloorLamp_C.disabale_light
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_FloorLamp_C::disabale_light()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FloorLamp.BP_FloorLamp_C.disabale_light");

	ABP_FloorLamp_C_disabale_light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FloorLamp.BP_FloorLamp_C.ExecuteUbergraph_BP_FloorLamp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FloorLamp_C::ExecuteUbergraph_BP_FloorLamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FloorLamp.BP_FloorLamp_C.ExecuteUbergraph_BP_FloorLamp");

	ABP_FloorLamp_C_ExecuteUbergraph_BP_FloorLamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
