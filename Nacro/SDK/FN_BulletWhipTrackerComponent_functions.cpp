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

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.PlayWhipSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBulletWhipTrackerComponent_C::PlayWhipSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.PlayWhipSound");

	UBulletWhipTrackerComponent_C_PlayWhipSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.GetLocalPawnForTracking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerPawn*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortPlayerPawn* UBulletWhipTrackerComponent_C::GetLocalPawnForTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.GetLocalPawnForTracking");

	UBulletWhipTrackerComponent_C_GetLocalPawnForTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.TrackWhipStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Whip_Distance                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBulletWhipTrackerComponent_C::TrackWhipStatus(bool* Changed, float* Whip_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.TrackWhipStatus");

	UBulletWhipTrackerComponent_C_TrackWhipStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
	if (Whip_Distance != nullptr)
		*Whip_Distance = params.Whip_Distance;
}


// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBulletWhipTrackerComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.ReceiveTick");

	UBulletWhipTrackerComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (Parm, IsPlainOldData)

void UBulletWhipTrackerComponent_C::Reset(const struct FVector& StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.Reset");

	UBulletWhipTrackerComponent_C_Reset_Params params;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.Update Velocity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Current_Velocity               (Parm, IsPlainOldData)

void UBulletWhipTrackerComponent_C::Update_Velocity(const struct FVector& Current_Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.Update Velocity");

	UBulletWhipTrackerComponent_C_Update_Velocity_Params params;
	params.Current_Velocity = Current_Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.ExecuteUbergraph_BulletWhipTrackerComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBulletWhipTrackerComponent_C::ExecuteUbergraph_BulletWhipTrackerComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.ExecuteUbergraph_BulletWhipTrackerComponent");

	UBulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
