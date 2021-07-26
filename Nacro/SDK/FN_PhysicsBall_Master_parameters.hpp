#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PhysicsBall_Master.PhysicsBall_Master_C.ApplyImpulseToBall
struct APhysicsBall_Master_C_ApplyImpulseToBall_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	float                                              HitMagnitude;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.UpdateDirectionAndRotationRate
struct APhysicsBall_Master_C_UpdateDirectionAndRotationRate_Params
{
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.UserConstructionScript
struct APhysicsBall_Master_C_UserConstructionScript_Params
{
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveTick
struct APhysicsBall_Master_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveBeginPlay
struct APhysicsBall_Master_C_ReceiveBeginPlay_Params
{
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_429_ComponentBeginOverlapSignature__DelegateSignature
struct APhysicsBall_Master_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_429_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.ExecuteUbergraph_PhysicsBall_Master
struct APhysicsBall_Master_C_ExecuteUbergraph_PhysicsBall_Master_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
