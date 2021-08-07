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

// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATiered_Chest_6_Parent_C::ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.ShouldDie");

	ATiered_Chest_6_Parent_C_ShouldDie_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATiered_Chest_6_Parent_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.BlueprintCanInteract");

	ATiered_Chest_6_Parent_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.SetLightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void ATiered_Chest_6_Parent_C::SetLightVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.SetLightVisibility");

	ATiered_Chest_6_Parent_C_SetLightVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATiered_Chest_6_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.UserConstructionScript");

	ATiered_Chest_6_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.OnLoot
// (Event, Public, BlueprintEvent)

void ATiered_Chest_6_Parent_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.OnLoot");

	ATiered_Chest_6_Parent_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATiered_Chest_6_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.ReceiveBeginPlay");

	ATiered_Chest_6_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ATiered_Chest_6_Parent_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.ReceiveDestroyed");

	ATiered_Chest_6_Parent_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.OnSetSearched
// (Event, Public, BlueprintEvent)

void ATiered_Chest_6_Parent_C::OnSetSearched()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.OnSetSearched");

	ATiered_Chest_6_Parent_C_OnSetSearched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.ExecuteUbergraph_Tiered_Chest_6_Parent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATiered_Chest_6_Parent_C::ExecuteUbergraph_Tiered_Chest_6_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.ExecuteUbergraph_Tiered_Chest_6_Parent");

	ATiered_Chest_6_Parent_C_ExecuteUbergraph_Tiered_Chest_6_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
