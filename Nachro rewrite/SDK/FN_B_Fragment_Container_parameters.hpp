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

// Function B_Fragment_Container.B_Fragment_Container_C.ForceFeedbackInteract
struct AB_Fragment_Container_C_ForceFeedbackInteract_Params
{
	bool                                               Soft;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOrbTaken
struct AB_Fragment_Container_C_OnRep_IsOrbTaken_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOn
struct AB_Fragment_Container_C_OnRep_IsOn_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.SetOutlander
struct AB_Fragment_Container_C_SetOutlander_Params
{
	class AActor*                                      NewOutlander;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.SetAwake
struct AB_Fragment_Container_C_SetAwake_Params
{
	bool                                               NewAwake;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.UpdateShouldTick
struct AB_Fragment_Container_C_UpdateShouldTick_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetFailedInteractionString
struct AB_Fragment_Container_C_BlueprintGetFailedInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOpen
struct AB_Fragment_Container_C_OnRep_IsOpen_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.DelayedDestroy
struct AB_Fragment_Container_C_DelayedDestroy_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_BuffType
struct AB_Fragment_Container_C_OnRep_BuffType_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetInteractionString
struct AB_Fragment_Container_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintCanInteract
struct AB_Fragment_Container_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.UserConstructionScript
struct AB_Fragment_Container_C_UserConstructionScript_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__FinishedFunc
struct AB_Fragment_Container_C_VerticalMovementTimeline__FinishedFunc_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__UpdateFunc
struct AB_Fragment_Container_C_VerticalMovementTimeline__UpdateFunc_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__Up__EventFunc
struct AB_Fragment_Container_C_VerticalMovementTimeline__Up__EventFunc_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__down__EventFunc
struct AB_Fragment_Container_C_VerticalMovementTimeline__down__EventFunc_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.ReceiveBeginPlay
struct AB_Fragment_Container_C_ReceiveBeginPlay_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnDeathServer
struct AB_Fragment_Container_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnInteract
struct AB_Fragment_Container_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.ActivateFX
struct AB_Fragment_Container_C_ActivateFX_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Fragment_Container_C_BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature
struct AB_Fragment_Container_C_BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.ReceiveTick
struct AB_Fragment_Container_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.MoveUp
struct AB_Fragment_Container_C_MoveUp_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.PowerDown
struct AB_Fragment_Container_C_PowerDown_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.MoveDown
struct AB_Fragment_Container_C_MoveDown_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.ShowOnMiniMap
struct AB_Fragment_Container_C_ShowOnMiniMap_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.StartHide
struct AB_Fragment_Container_C_StartHide_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.Reset_Activation
struct AB_Fragment_Container_C_Reset_Activation_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnBeginInteract
struct AB_Fragment_Container_C_BlueprintOnBeginInteract_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.MultiFeedback
struct AB_Fragment_Container_C_MultiFeedback_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.SoftFeedback
struct AB_Fragment_Container_C_SoftFeedback_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.ExecuteUbergraph_B_Fragment_Container
struct AB_Fragment_Container_C_ExecuteUbergraph_B_Fragment_Container_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
