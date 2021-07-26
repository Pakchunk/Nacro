#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C
// 0x01EA (0x11CA - 0x0FE0)
class ABP_PlayerSpawnTeleportPAd_C : public AFortPlayerSpawnPad
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FE0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             CameraTransformProxy;                                     // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LootChestCenter;                                          // 0x0FF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        S_Spawn_Flag_04;                                          // 0x0FF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        S_Spawn_Flag_03;                                          // 0x1000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        S_Spawn_Flag_02;                                          // 0x1008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        S_Spawn_Flag_01;                                          // 0x1010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Player4LevelUpPS;                                         // 0x1018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Player3LevelUpPS;                                         // 0x1020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Player2LevelUpPS;                                         // 0x1028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Player1LevelUpPS;                                         // 0x1030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Particles;                                                // 0x1038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Meshes;                                                   // 0x1040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               DestructionVolume;                                        // 0x1048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMiniMapComponent*                       MiniMapComponent;                                         // 0x1050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TimelineChestIntroNextChest_ChestOffset_304C0A2745903A202389F5AF878005F9;// 0x1058(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineChestIntroNextChest__Direction_304C0A2745903A202389F5AF878005F9;// 0x1064(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1065(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimelineChestIntroNextChest;                              // 0x1068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TimelineChestCameraOutro_CameraOffset_8E02A974410FBFF2353688AE9ED16364;// 0x1070(0x000C) (IsPlainOldData)
	float                                              TimelineChestCameraOutro_CameraPitchOffset_8E02A974410FBFF2353688AE9ED16364;// 0x107C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineChestCameraOutro__Direction_8E02A974410FBFF2353688AE9ED16364;// 0x1080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1081(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TimelineChestCameraOutro;                                 // 0x1088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TimelineChestOutro_ChestOffset_A3EAB05745F93AAFC35AA2AF95754AEC;// 0x1090(0x000C) (IsPlainOldData)
	float                                              TimelineChestOutro_Chest_whiteOut_A3EAB05745F93AAFC35AA2AF95754AEC;// 0x109C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineChestOutro__Direction_A3EAB05745F93AAFC35AA2AF95754AEC;// 0x10A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x10A1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TimelineChestOutro;                                       // 0x10A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TimelineChestFinalFocus_CameraPositionOffset_B9B69D1340D82ED5791A47A2D08FEBFE;// 0x10B0(0x000C) (IsPlainOldData)
	float                                              TimelineChestFinalFocus_PowerSwipeAnimation_B9B69D1340D82ED5791A47A2D08FEBFE;// 0x10BC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineChestFinalFocus__Direction_B9B69D1340D82ED5791A47A2D08FEBFE;// 0x10C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x10C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TimelineChestFinalFocus;                                  // 0x10C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TimelineChestProgression_ChestOffset_2B2DA749433D83B490167A80264D14B6;// 0x10D0(0x000C) (IsPlainOldData)
	struct FVector                                     TimelineChestProgression_PrimaryChestOffset_2B2DA749433D83B490167A80264D14B6;// 0x10DC(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineChestProgression__Direction_2B2DA749433D83B490167A80264D14B6;// 0x10E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x10E9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TimelineChestProgression;                                 // 0x10F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TimelineCameraIntro_CameraOffset_A3955BCE49F93B08E3315CBB5666B6D3;// 0x10F8(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineCameraIntro__Direction_A3955BCE49F93B08E3315CBB5666B6D3;// 0x1104(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1105(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimelineCameraIntro;                                      // 0x1108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimelineChestCameraIntro_CameraPitchOffset_3D5354B34A15454450784C9E224D112F;// 0x1110(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineChestCameraIntro__Direction_3D5354B34A15454450784C9E224D112F;// 0x1114(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1115(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimelineChestCameraIntro;                                 // 0x1118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimelineChestAddBadge_Chest_whiteOut_16FF6BDC4A45B7BC42521096E049C01B;// 0x1120(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimelineChestAddBadge_Chest_Squash_and_stretch_16FF6BDC4A45B7BC42521096E049C01B;// 0x1124(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineChestAddBadge__Direction_16FF6BDC4A45B7BC42521096E049C01B;// 0x1128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x1129(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TimelineChestAddBadge;                                    // 0x1130(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                Camera;                                                   // 0x1138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DroneHeight;                                              // 0x1140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitDelay;                                                // 0x1144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSpawnTeleportPadPlayerData>         PlayerData;                                               // 0x1148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaximumNumberOfPlayers;                                   // 0x1158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x115C(0x0004) MISSED OFFSET
	TArray<float>                                      PlayerLogoutTimes;                                        // 0x1160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bVictoryScreenStarted;                                    // 0x1170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x1171(0x0007) MISSED OFFSET
	TArray<class UStaticMesh*>                         ChestMeshes;                                              // 0x1178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     ChestSpawnOffset;                                         // 0x1188(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CameraRelativeRotation;                                   // 0x1194(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraRelativeLocation;                                   // 0x11A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                ChestIntroIndex;                                          // 0x11AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ChestPosition;                                            // 0x11B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentChestLevel;                                        // 0x11BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ChestDisplay;                                             // 0x11C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitializedCamera;                                       // 0x11C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnedChests;                                           // 0x11C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C");
		return ptr;
	}


	void ChestSkipToResultFocusTimelineStops();
	void SpawnLootChests();
	void InitializeCamera();
	void ForceThirdPerson();
	void InitPlayerData();
	void StartDroneSpawnOut(class AFortPlayerPawn* PlayerPawn);
	void SetBannerVisibility(bool bVisible);
	void CreateBannerMID(int PlayerIdx);
	void OnReceivedPlayerData();
	void SetBannerMaterials();
	void InitBannerMIDs();
	void GetPlayerIndex(class AFortPlayerPawn* PlayerPawn, int* PlayerIndex);
	void StartSpawnInSequenceForPlayer(class UFortNewPlayerParams* NewPlayerParams);
	void TriggerLevelUpEffect(class AFortPlayerPawn* LevelingUpPawn);
	void SpawnAllDrones();
	void GetDroneTeleportTransform(int PlayerIdx, struct FTransform* DroneTransform);
	void SpawnDrone(int PlayerIndex);
	void ClearArea();
	void ViewCamera();
	void EnableLocalPlayerInput(bool bEnable);
	void TeleportAllPlayers();
	void GetPlayerTeleportTransform(int PlayerIndex, struct FTransform* Teleport_Transform);
	void UserConstructionScript();
	void TimelineChestCameraIntro__FinishedFunc();
	void TimelineChestCameraIntro__UpdateFunc();
	void TimelineChestAddBadge__FinishedFunc();
	void TimelineChestAddBadge__UpdateFunc();
	void TimelineChestProgression__FinishedFunc();
	void TimelineChestProgression__UpdateFunc();
	void TimelineChestProgression__PrimaryChestHide__EventFunc();
	void TimelineChestFinalFocus__FinishedFunc();
	void TimelineChestFinalFocus__UpdateFunc();
	void TimelineChestCameraOutro__FinishedFunc();
	void TimelineChestCameraOutro__UpdateFunc();
	void TimelineChestIntroNextChest__FinishedFunc();
	void TimelineChestIntroNextChest__UpdateFunc();
	void TimelineChestOutro__FinishedFunc();
	void TimelineChestOutro__UpdateFunc();
	void TimelineCameraIntro__FinishedFunc();
	void TimelineCameraIntro__UpdateFunc();
	void OnHomeTeleporterBound(class AFortPlayerPawn* PlayerPawn, class AActor* OldHomeActor);
	void OnHomeTeleporterBoundServer(class AFortPlayerPawn* PlayerPawn, class AActor* OldHomeActor);
	void OnHomeTeleporterUnbound(class AFortPlayerPawn* PlayerPawn, class AActor* NewHomeActor);
	void OnHomeTeleporterUnboundServer(class AFortPlayerPawn* PlayerPawn, class AActor* NewHomeActor);
	void Chest_Intro_Next_Chest();
	void HandleClientEvent_ChestIntro(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_ChestAddBadge(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_ChestProgression(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_ChestResultFocus(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_ChestOutro(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_ChestSkipToResultFocus(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleMissionEvent_PlayTeleportOnToSpawnPad(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ClientInitSpawnOut(TArray<struct FSpawnTeleportPadPlayerData> NewPlayerData);
	void OnWorldReady();
	void HandleMissionEvent_SetupTeleportOutCamera(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleClientEvent_PlayerLeavingEvent(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_HeroLevelUpEvent(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void PlayerLeavingEndedEvent(class AFortPlayerPawn* PlayerPawn);
	void ReceiveBeginPlay();
	void ClientStartSpawnInCamera();
	void HandleMissionEvent_StartLeavingZone(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void LogoutTick();
	void HandleMissionEvent_PlayerSpawned(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleClientEvent_CameraIntro(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_BP_PlayerSpawnTeleportPAd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
