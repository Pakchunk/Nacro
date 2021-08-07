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

// Function PhysicsBall_Master.PhysicsBall_Master_C.ApplyImpulseToBall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)
// float                          HitMagnitude                   (Parm, ZeroConstructor, IsPlainOldData)

void APhysicsBall_Master_C::ApplyImpulseToBall(const struct FVector& HitLocation, float HitMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.ApplyImpulseToBall");

	APhysicsBall_Master_C_ApplyImpulseToBall_Params params;
	params.HitLocation = HitLocation;
	params.HitMagnitude = HitMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.UpdateDirectionAndRotationRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APhysicsBall_Master_C::UpdateDirectionAndRotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.UpdateDirectionAndRotationRate");

	APhysicsBall_Master_C_UpdateDirectionAndRotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APhysicsBall_Master_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.UserConstructionScript");

	APhysicsBall_Master_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void APhysicsBall_Master_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveTick");

	APhysicsBall_Master_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APhysicsBall_Master_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveBeginPlay");

	APhysicsBall_Master_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_429_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APhysicsBall_Master_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_429_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_429_ComponentBeginOverlapSignature__DelegateSignature");

	APhysicsBall_Master_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_429_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ExecuteUbergraph_PhysicsBall_Master
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APhysicsBall_Master_C::ExecuteUbergraph_PhysicsBall_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.ExecuteUbergraph_PhysicsBall_Master");

	APhysicsBall_Master_C_ExecuteUbergraph_PhysicsBall_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
