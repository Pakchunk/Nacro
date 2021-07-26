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

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ChestSkipToResultFocusTimelineStops
struct ABP_PlayerSpawnTeleportPAd_C_ChestSkipToResultFocusTimelineStops_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.SpawnLootChests
struct ABP_PlayerSpawnTeleportPAd_C_SpawnLootChests_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.InitializeCamera
struct ABP_PlayerSpawnTeleportPAd_C_InitializeCamera_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ForceThirdPerson
struct ABP_PlayerSpawnTeleportPAd_C_ForceThirdPerson_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.InitPlayerData
struct ABP_PlayerSpawnTeleportPAd_C_InitPlayerData_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.StartDroneSpawnOut
struct ABP_PlayerSpawnTeleportPAd_C_StartDroneSpawnOut_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.SetBannerVisibility
struct ABP_PlayerSpawnTeleportPAd_C_SetBannerVisibility_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.CreateBannerMID
struct ABP_PlayerSpawnTeleportPAd_C_CreateBannerMID_Params
{
	int                                                PlayerIdx;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.OnReceivedPlayerData
struct ABP_PlayerSpawnTeleportPAd_C_OnReceivedPlayerData_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.SetBannerMaterials
struct ABP_PlayerSpawnTeleportPAd_C_SetBannerMaterials_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.InitBannerMIDs
struct ABP_PlayerSpawnTeleportPAd_C_InitBannerMIDs_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.GetPlayerIndex
struct ABP_PlayerSpawnTeleportPAd_C_GetPlayerIndex_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.StartSpawnInSequenceForPlayer
struct ABP_PlayerSpawnTeleportPAd_C_StartSpawnInSequenceForPlayer_Params
{
	class UFortNewPlayerParams*                        NewPlayerParams;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TriggerLevelUpEffect
struct ABP_PlayerSpawnTeleportPAd_C_TriggerLevelUpEffect_Params
{
	class AFortPlayerPawn*                             LevelingUpPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.SpawnAllDrones
struct ABP_PlayerSpawnTeleportPAd_C_SpawnAllDrones_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.GetDroneTeleportTransform
struct ABP_PlayerSpawnTeleportPAd_C_GetDroneTeleportTransform_Params
{
	int                                                PlayerIdx;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  DroneTransform;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.SpawnDrone
struct ABP_PlayerSpawnTeleportPAd_C_SpawnDrone_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ClearArea
struct ABP_PlayerSpawnTeleportPAd_C_ClearArea_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ViewCamera
struct ABP_PlayerSpawnTeleportPAd_C_ViewCamera_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.EnableLocalPlayerInput
struct ABP_PlayerSpawnTeleportPAd_C_EnableLocalPlayerInput_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TeleportAllPlayers
struct ABP_PlayerSpawnTeleportPAd_C_TeleportAllPlayers_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.GetPlayerTeleportTransform
struct ABP_PlayerSpawnTeleportPAd_C_GetPlayerTeleportTransform_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Teleport_Transform;                                       // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.UserConstructionScript
struct ABP_PlayerSpawnTeleportPAd_C_UserConstructionScript_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestCameraIntro__FinishedFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestCameraIntro__FinishedFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestCameraIntro__UpdateFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestCameraIntro__UpdateFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestAddBadge__FinishedFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestAddBadge__FinishedFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestAddBadge__UpdateFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestAddBadge__UpdateFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestProgression__FinishedFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestProgression__FinishedFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestProgression__UpdateFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestProgression__UpdateFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestProgression__PrimaryChestHide__EventFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestProgression__PrimaryChestHide__EventFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestFinalFocus__FinishedFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestFinalFocus__FinishedFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestFinalFocus__UpdateFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestFinalFocus__UpdateFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestCameraOutro__FinishedFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestCameraOutro__FinishedFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestCameraOutro__UpdateFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestCameraOutro__UpdateFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestIntroNextChest__FinishedFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestIntroNextChest__FinishedFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestIntroNextChest__UpdateFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestIntroNextChest__UpdateFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestOutro__FinishedFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestOutro__FinishedFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestOutro__UpdateFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineChestOutro__UpdateFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineCameraIntro__FinishedFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineCameraIntro__FinishedFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineCameraIntro__UpdateFunc
struct ABP_PlayerSpawnTeleportPAd_C_TimelineCameraIntro__UpdateFunc_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.OnHomeTeleporterBound
struct ABP_PlayerSpawnTeleportPAd_C_OnHomeTeleporterBound_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OldHomeActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.OnHomeTeleporterBoundServer
struct ABP_PlayerSpawnTeleportPAd_C_OnHomeTeleporterBoundServer_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OldHomeActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.OnHomeTeleporterUnbound
struct ABP_PlayerSpawnTeleportPAd_C_OnHomeTeleporterUnbound_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewHomeActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.OnHomeTeleporterUnboundServer
struct ABP_PlayerSpawnTeleportPAd_C_OnHomeTeleporterUnboundServer_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewHomeActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.Chest Intro Next Chest
struct ABP_PlayerSpawnTeleportPAd_C_Chest_Intro_Next_Chest_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_ChestIntro
struct ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_ChestIntro_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_ChestAddBadge
struct ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_ChestAddBadge_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_ChestProgression
struct ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_ChestProgression_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_ChestResultFocus
struct ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_ChestResultFocus_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_ChestOutro
struct ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_ChestOutro_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_ChestSkipToResultFocus
struct ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_ChestSkipToResultFocus_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleMissionEvent_PlayTeleportOnToSpawnPad
struct ABP_PlayerSpawnTeleportPAd_C_HandleMissionEvent_PlayTeleportOnToSpawnPad_Params
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

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ClientInitSpawnOut
struct ABP_PlayerSpawnTeleportPAd_C_ClientInitSpawnOut_Params
{
	TArray<struct FSpawnTeleportPadPlayerData>         NewPlayerData;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.OnWorldReady
struct ABP_PlayerSpawnTeleportPAd_C_OnWorldReady_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleMissionEvent_SetupTeleportOutCamera
struct ABP_PlayerSpawnTeleportPAd_C_HandleMissionEvent_SetupTeleportOutCamera_Params
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

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_PlayerLeavingEvent
struct ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_PlayerLeavingEvent_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_HeroLevelUpEvent
struct ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_HeroLevelUpEvent_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.PlayerLeavingEndedEvent
struct ABP_PlayerSpawnTeleportPAd_C_PlayerLeavingEndedEvent_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ReceiveBeginPlay
struct ABP_PlayerSpawnTeleportPAd_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ClientStartSpawnInCamera
struct ABP_PlayerSpawnTeleportPAd_C_ClientStartSpawnInCamera_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleMissionEvent_StartLeavingZone
struct ABP_PlayerSpawnTeleportPAd_C_HandleMissionEvent_StartLeavingZone_Params
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

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.LogoutTick
struct ABP_PlayerSpawnTeleportPAd_C_LogoutTick_Params
{
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleMissionEvent_PlayerSpawned
struct ABP_PlayerSpawnTeleportPAd_C_HandleMissionEvent_PlayerSpawned_Params
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

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_CameraIntro
struct ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_CameraIntro_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ExecuteUbergraph_BP_PlayerSpawnTeleportPAd
struct ABP_PlayerSpawnTeleportPAd_C_ExecuteUbergraph_BP_PlayerSpawnTeleportPAd_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
