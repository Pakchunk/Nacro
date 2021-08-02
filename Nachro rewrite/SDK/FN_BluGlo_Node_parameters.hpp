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

// Function BluGlo_Node.BluGlo_Node_C.BlueprintGetInteractionString
struct ABluGlo_Node_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BluGlo_Node.BluGlo_Node_C.OnRep_CanInteract
struct ABluGlo_Node_C_OnRep_CanInteract_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.BlueprintCanInteract
struct ABluGlo_Node_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BluGlo_Node.BluGlo_Node_C.OnRep_DeActivateEffects
struct ABluGlo_Node_C_OnRep_DeActivateEffects_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.OnRep_ActivateEffects
struct ABluGlo_Node_C_OnRep_ActivateEffects_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.UserConstructionScript
struct ABluGlo_Node_C_UserConstructionScript_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.Trail__FinishedFunc
struct ABluGlo_Node_C_Trail__FinishedFunc_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.Trail__UpdateFunc
struct ABluGlo_Node_C_Trail__UpdateFunc_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.ReceiveBeginPlay
struct ABluGlo_Node_C_ReceiveBeginPlay_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.BlueprintOnInteract
struct ABluGlo_Node_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGlo_Node.BluGlo_Node_C.HandleMissionEvent_LocateBluGlo
struct ABluGlo_Node_C_HandleMissionEvent_LocateBluGlo_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BluGlo_Node.BluGlo_Node_C.ShowSpawnTrail
struct ABluGlo_Node_C_ShowSpawnTrail_Params
{
	struct FVector                                     StartLocation;                                            // (Parm, IsPlainOldData)
	float                                              AnimDelay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGlo_Node.BluGlo_Node_C.ExecuteUbergraph_BluGlo_Node
struct ABluGlo_Node_C_ExecuteUbergraph_BluGlo_Node_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
