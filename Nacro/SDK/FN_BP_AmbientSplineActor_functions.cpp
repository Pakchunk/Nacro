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

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.SetFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           _Out                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientSplineActor_C::SetFade(bool _Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.SetFade");

	ABP_AmbientSplineActor_C_SetFade_Params params;
	params._Out = _Out;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.SetNewCheckFrequency
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientSplineActor_C::SetNewCheckFrequency(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.SetNewCheckFrequency");

	ABP_AmbientSplineActor_C_SetNewCheckFrequency_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.DistSq
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Loc_A                          (Parm, IsPlainOldData)
// struct FVector                 Loc_B                          (Parm, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientSplineActor_C::DistSq(const struct FVector& Loc_A, const struct FVector& Loc_B, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.DistSq");

	ABP_AmbientSplineActor_C_DistSq_Params params;
	params.Loc_A = Loc_A;
	params.Loc_B = Loc_B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.GetViewTargetLoc
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Target_Loc                     (Parm, OutParm, IsPlainOldData)

void ABP_AmbientSplineActor_C::GetViewTargetLoc(struct FVector* Target_Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.GetViewTargetLoc");

	ABP_AmbientSplineActor_C_GetViewTargetLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target_Loc != nullptr)
		*Target_Loc = params.Target_Loc;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmbientSplineActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.UserConstructionScript");

	ABP_AmbientSplineActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AmbientSplineActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveBeginPlay");

	ABP_AmbientSplineActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.Check Closest Point
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientSplineActor_C::Check_Closest_Point()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.Check Closest Point");

	ABP_AmbientSplineActor_C_Check_Closest_Point_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientSplineActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveTick");

	ABP_AmbientSplineActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ExecuteUbergraph_BP_AmbientSplineActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientSplineActor_C::ExecuteUbergraph_BP_AmbientSplineActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ExecuteUbergraph_BP_AmbientSplineActor");

	ABP_AmbientSplineActor_C_ExecuteUbergraph_BP_AmbientSplineActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
