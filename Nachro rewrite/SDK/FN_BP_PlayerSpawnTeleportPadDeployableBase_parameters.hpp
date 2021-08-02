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

// Function BP_PlayerSpawnTeleportPadDeployableBase.BP_PlayerSpawnTeleportPadDeployableBase_C.UserConstructionScript
struct ABP_PlayerSpawnTeleportPadDeployableBase_C_UserConstructionScript_Params
{
};

// Function BP_PlayerSpawnTeleportPadDeployableBase.BP_PlayerSpawnTeleportPadDeployableBase_C.ClearArea
struct ABP_PlayerSpawnTeleportPadDeployableBase_C_ClearArea_Params
{
};

// Function BP_PlayerSpawnTeleportPadDeployableBase.BP_PlayerSpawnTeleportPadDeployableBase_C.OnWorldReady
struct ABP_PlayerSpawnTeleportPadDeployableBase_C_OnWorldReady_Params
{
};

// Function BP_PlayerSpawnTeleportPadDeployableBase.BP_PlayerSpawnTeleportPadDeployableBase_C.HandleMissionEvent_TeleportHordePlayers
struct ABP_PlayerSpawnTeleportPadDeployableBase_C_HandleMissionEvent_TeleportHordePlayers_Params
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

// Function BP_PlayerSpawnTeleportPadDeployableBase.BP_PlayerSpawnTeleportPadDeployableBase_C.ExecuteUbergraph_BP_PlayerSpawnTeleportPadDeployableBase
struct ABP_PlayerSpawnTeleportPadDeployableBase_C_ExecuteUbergraph_BP_PlayerSpawnTeleportPadDeployableBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
