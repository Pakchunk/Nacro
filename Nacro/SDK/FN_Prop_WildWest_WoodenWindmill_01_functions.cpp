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

// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_WildWest_WoodenWindmill_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.UserConstructionScript");

	AProp_WildWest_WoodenWindmill_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_WildWest_WoodenWindmill_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.ReceiveBeginPlay");

	AProp_WildWest_WoodenWindmill_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.NewSpin
// (BlueprintCallable, BlueprintEvent)

void AProp_WildWest_WoodenWindmill_01_C::NewSpin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.NewSpin");

	AProp_WildWest_WoodenWindmill_01_C_NewSpin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.SpinUpdate
// (BlueprintCallable, BlueprintEvent)

void AProp_WildWest_WoodenWindmill_01_C::SpinUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.SpinUpdate");

	AProp_WildWest_WoodenWindmill_01_C_SpinUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProp_WildWest_WoodenWindmill_01_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.ReceiveTick");

	AProp_WildWest_WoodenWindmill_01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProp_WildWest_WoodenWindmill_01_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.ReceiveDestroyed");

	AProp_WildWest_WoodenWindmill_01_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AProp_WildWest_WoodenWindmill_01_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.OnDeathPlayEffects");

	AProp_WildWest_WoodenWindmill_01_C_OnDeathPlayEffects_Params params;
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


// Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.ExecuteUbergraph_Prop_WildWest_WoodenWindmill_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProp_WildWest_WoodenWindmill_01_C::ExecuteUbergraph_Prop_WildWest_WoodenWindmill_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C.ExecuteUbergraph_Prop_WildWest_WoodenWindmill_01");

	AProp_WildWest_WoodenWindmill_01_C_ExecuteUbergraph_Prop_WildWest_WoodenWindmill_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
