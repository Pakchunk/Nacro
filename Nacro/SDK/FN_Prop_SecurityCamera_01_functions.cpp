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

// Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_SecurityCamera_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.UserConstructionScript");

	AProp_SecurityCamera_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.StartTickingIfRendered
// (BlueprintCallable, BlueprintEvent)

void AProp_SecurityCamera_01_C::StartTickingIfRendered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.StartTickingIfRendered");

	AProp_SecurityCamera_01_C_StartTickingIfRendered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_SecurityCamera_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.ReceiveBeginPlay");

	AProp_SecurityCamera_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.StartRotating
// (BlueprintCallable, BlueprintEvent)

void AProp_SecurityCamera_01_C::StartRotating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.StartRotating");

	AProp_SecurityCamera_01_C_StartRotating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.ExecuteUbergraph_Prop_SecurityCamera_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProp_SecurityCamera_01_C::ExecuteUbergraph_Prop_SecurityCamera_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.ExecuteUbergraph_Prop_SecurityCamera_01");

	AProp_SecurityCamera_01_C_ExecuteUbergraph_Prop_SecurityCamera_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
