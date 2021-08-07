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

// Function Living_Television_01.Living_Television_01_C.OnRep_bKillSound
// (BlueprintCallable, BlueprintEvent)

void ALiving_Television_01_C::OnRep_bKillSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Living_Television_01.Living_Television_01_C.OnRep_bKillSound");

	ALiving_Television_01_C_OnRep_bKillSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Living_Television_01.Living_Television_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALiving_Television_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Living_Television_01.Living_Television_01_C.UserConstructionScript");

	ALiving_Television_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Living_Television_01.Living_Television_01_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ALiving_Television_01_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Living_Television_01.Living_Television_01_C.Timeline_0__FinishedFunc");

	ALiving_Television_01_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Living_Television_01.Living_Television_01_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ALiving_Television_01_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Living_Television_01.Living_Television_01_C.Timeline_0__UpdateFunc");

	ALiving_Television_01_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Living_Television_01.Living_Television_01_C.OnLoot
// (Event, Public, BlueprintEvent)

void ALiving_Television_01_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Living_Television_01.Living_Television_01_C.OnLoot");

	ALiving_Television_01_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Living_Television_01.Living_Television_01_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void ALiving_Television_01_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Living_Television_01.Living_Television_01_C.OnLootRepeat");

	ALiving_Television_01_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Living_Television_01.Living_Television_01_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void ALiving_Television_01_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Living_Television_01.Living_Television_01_C.OnDeathServer");

	ALiving_Television_01_C_OnDeathServer_Params params;
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


// Function Living_Television_01.Living_Television_01_C.ExecuteUbergraph_Living_Television_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALiving_Television_01_C::ExecuteUbergraph_Living_Television_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Living_Television_01.Living_Television_01_C.ExecuteUbergraph_Living_Television_01");

	ALiving_Television_01_C_ExecuteUbergraph_Living_Television_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
