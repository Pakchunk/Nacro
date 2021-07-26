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

// Function B_Pickups.B_Pickups_C.CreateHologramMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::CreateHologramMIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.CreateHologramMIDs");

	AB_Pickups_C_CreateHologramMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SetHologramPickedUpParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Tier_0_or_1                    (Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::SetHologramPickedUpParams(bool Tier_0_or_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SetHologramPickedUpParams");

	AB_Pickups_C_SetHologramPickedUpParams_Params params;
	params.Tier_0_or_1 = Tier_0_or_1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SpawnPickedUpTrailPS
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::SpawnPickedUpTrailPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SpawnPickedUpTrailPS");

	AB_Pickups_C_SpawnPickedUpTrailPS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SetRarityColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::SetRarityColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SetRarityColor");

	AB_Pickups_C_SetRarityColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.UserConstructionScript");

	AB_Pickups_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.ReceiveTick");

	AB_Pickups_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.OnAboutToEnterBackpack
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              PickupTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::OnAboutToEnterBackpack(class AFortPawn** PickupTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.OnAboutToEnterBackpack");

	AB_Pickups_C_OnAboutToEnterBackpack_Params params;
	params.PickupTarget = PickupTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.OnTossed
// (Event, Public, BlueprintEvent)

void AB_Pickups_C::OnTossed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.OnTossed");

	AB_Pickups_C_OnTossed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.OnPickedUp
// (Event, Public, BlueprintEvent)

void AB_Pickups_C::OnPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.OnPickedUp");

	AB_Pickups_C_OnPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Pickups_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.ReceiveBeginPlay");

	AB_Pickups_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.ExecuteUbergraph_B_Pickups
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::ExecuteUbergraph_B_Pickups(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.ExecuteUbergraph_B_Pickups");

	AB_Pickups_C_ExecuteUbergraph_B_Pickups_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
