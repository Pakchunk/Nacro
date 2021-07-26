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

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.HandleFallTime
struct AAthenaSupplyDrop_02_C_HandleFallTime_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.UpdateDropAudio
struct AAthenaSupplyDrop_02_C_UpdateDropAudio_Params
{
	float                                              FallPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.StartDropAudio
struct AAthenaSupplyDrop_02_C_StartDropAudio_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.OnRep_bLooted
struct AAthenaSupplyDrop_02_C_OnRep_bLooted_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.OnRep_NewLocation
struct AAthenaSupplyDrop_02_C_OnRep_NewLocation_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.GetFallLocation
struct AAthenaSupplyDrop_02_C_GetFallLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.GetImpactLocation
struct AAthenaSupplyDrop_02_C_GetImpactLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ToggleFallingFX
struct AAthenaSupplyDrop_02_C_ToggleFallingFX_Params
{
	bool                                               bToggleOn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ClientPlayDropFX
struct AAthenaSupplyDrop_02_C_ClientPlayDropFX_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SpawnTierDrops
struct AAthenaSupplyDrop_02_C_SpawnTierDrops_Params
{
	int                                                LootTableIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.LootSpawnPosition
struct AAthenaSupplyDrop_02_C_LootSpawnPosition_Params
{
	struct FVector                                     OutPos;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.InitDrop
struct AAthenaSupplyDrop_02_C_InitDrop_Params
{
	struct FSupplyDropUnlocks                          InUnlocks;                                                // (Parm)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BlueprintGetInteractionString
struct AAthenaSupplyDrop_02_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.Landed
struct AAthenaSupplyDrop_02_C_Landed_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.IsAcceptablePositionForPlacement
struct AAthenaSupplyDrop_02_C_IsAcceptablePositionForPlacement_Params
{
	struct FVector*                                    InLocation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   InRotation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortDecoTool**                              DecoTool;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsCDO;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutFailureReason;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.UpdateLocation
struct AAthenaSupplyDrop_02_C_UpdateLocation_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BlueprintCanInteract
struct AAthenaSupplyDrop_02_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.TurnOnInteract
struct AAthenaSupplyDrop_02_C_TurnOnInteract_Params
{
	bool                                               bNewActorEnableCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SpawnLoot
struct AAthenaSupplyDrop_02_C_SpawnLoot_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.UserConstructionScript
struct AAthenaSupplyDrop_02_C_UserConstructionScript_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__FinishedFunc
struct AAthenaSupplyDrop_02_C_FallingTimeline__FinishedFunc_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__UpdateFunc
struct AAthenaSupplyDrop_02_C_FallingTimeline__UpdateFunc_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__Almost Landed__EventFunc
struct AAthenaSupplyDrop_02_C_FallingTimeline__Almost_Landed__EventFunc_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__DisableFlare__EventFunc
struct AAthenaSupplyDrop_02_C_FallingTimeline__DisableFlare__EventFunc_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.LerpFallRate__FinishedFunc
struct AAthenaSupplyDrop_02_C_LerpFallRate__FinishedFunc_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.LerpFallRate__UpdateFunc
struct AAthenaSupplyDrop_02_C_LerpFallRate__UpdateFunc_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ImpactFX
struct AAthenaSupplyDrop_02_C_ImpactFX_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.OverlappingDied
struct AAthenaSupplyDrop_02_C_OverlappingDied_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BlueprintOnInteract
struct AAthenaSupplyDrop_02_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.PlayDrop
struct AAthenaSupplyDrop_02_C_PlayDrop_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SpawnLootDestroyActor
struct AAthenaSupplyDrop_02_C_SpawnLootDestroyActor_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.PlayDropNewTime
struct AAthenaSupplyDrop_02_C_PlayDropNewTime_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SecondaryFallTick
struct AAthenaSupplyDrop_02_C_SecondaryFallTick_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BalloonDestroyed
struct AAthenaSupplyDrop_02_C_BalloonDestroyed_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.StopBeep
struct AAthenaSupplyDrop_02_C_StopBeep_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
struct AAthenaSupplyDrop_02_C_BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.DropIntercepted
struct AAthenaSupplyDrop_02_C_DropIntercepted_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ReceiveBeginPlay
struct AAthenaSupplyDrop_02_C_ReceiveBeginPlay_Params
{
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BndEvt__TargetCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
struct AAthenaSupplyDrop_02_C_BndEvt__TargetCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ExecuteUbergraph_AthenaSupplyDrop_02
struct AAthenaSupplyDrop_02_C_ExecuteUbergraph_AthenaSupplyDrop_02_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.CrateLanded__DelegateSignature
struct AAthenaSupplyDrop_02_C_CrateLanded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
