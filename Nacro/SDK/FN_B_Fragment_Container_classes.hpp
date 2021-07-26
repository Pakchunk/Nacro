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

// BlueprintGeneratedClass B_Fragment_Container.B_Fragment_Container_C
// 0x0360 (0x1320 - 0x0FC0)
class AB_Fragment_Container_C : public ABuildingSMActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FC0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_LightOn;                                                // 0x0FC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Orb_Mesh;                                                 // 0x0FD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_ResOut;                                                 // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Orb_PickupEffect;                                       // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           BlockingCollision;                                        // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Container_SK;                                             // 0x0FF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             RotationRoot;                                             // 0x0FF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             VerticalMovement;                                         // 0x1000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Awaken_Collision;                                         // 0x1008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            MiniMapCollision;                                         // 0x1010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMiniMapComponent*                       MiniMapLoc;                                               // 0x1018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMovementTimeline_Z_Offset_E77B23F44312E9BD5DA6EF9ACE127DE4;// 0x1020(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    VerticalMovementTimeline__Direction_E77B23F44312E9BD5DA6EF9ACE127DE4;// 0x1024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1025(0x0003) MISSED OFFSET
	class UTimelineComponent*                          VerticalMovementTimeline;                                 // 0x1028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       TC_HasFragmentAbility;                                    // 0x1030(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_LlamaFragment;                                         // 0x1050(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	struct FGameplayTagContainer                       TC_ChargeFragmentTag;                                     // 0x1070(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_LlamaFragmentTag;                                      // 0x1090(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_FragmentCollected;                                  // 0x10B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          SentFragment;                                             // 0x10B8(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_OutlanderFragmentTypes>              FragmentType;                                             // 0x1160(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1161(0x0003) MISSED OFFSET
	struct FLinearColor                                ChargeFragmentColor;                                      // 0x1164(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FLinearColor                                LlamaFragmentColor;                                       // 0x1174(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1184(0x0004) MISSED OFFSET
	class UFortAmmoItemDefinition*                     FragmentAmmoData;                                         // 0x1188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Current_Outlander;                                        // 0x1190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             InteractingPlayerPawn;                                    // 0x1198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_Outlander_LlamaFragment;                               // 0x11A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_ClearFragmentCooldown;                                 // 0x11A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_Outlander_FragmentTeamSpeedBost;                       // 0x11B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FortPawnFilter;                                           // 0x11B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LlamaFragmentPercent;                                     // 0x11C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              RotateToPlayerSpeed;                                      // 0x11C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastInteractStartTime;                                    // 0x11C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayedDestroyTime;                                       // 0x11CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfTimeToPingMap;                                    // 0x11D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfMapPings;                                         // 0x11D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAnyOutlanderStillAround;                                // 0x11D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanInteract;                                              // 0x11D9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               IsAwake;                                                  // 0x11DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasLoot;                                                  // 0x11DB(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOpen;                                                   // 0x11DC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUP;                                                    // 0x11DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOn;                                                     // 0x11DE(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x11DF(0x0001) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Container_Base_Mat;                                       // 0x11E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Container_Screen_mat;                                     // 0x11E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Container_Light_mat;                                      // 0x11F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Orb_Mat;                                                  // 0x11F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Orb_Turn_On_Sound;                                        // 0x1200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Orb_Hello_Sound;                                          // 0x1208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Orb_Hover_Sound;                                          // 0x1210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Orb_Goodbye_Sound;                                        // 0x1218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Orb_Thanks_Sound;                                         // 0x1220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       InteractLlamaFragment;                                    // 0x1228(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       InteractChargeFragment;                                   // 0x1240(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       InteractNonOutlander;                                     // 0x1258(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       PickupLlamaFragment;                                      // 0x1270(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       PickupChargeFragment;                                     // 0x1288(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                             OrbAudioComponent;                                        // 0x12A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOrbTaken;                                               // 0x12A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x12A9(0x0007) MISSED OFFSET
	struct FText                                       FailedOutlanderOnlyOneLlama;                              // 0x12B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       FailedOutlanderMaxFragHeldDefault;                        // 0x12C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       FailedOutlanderActivatedButDoesNotYetPossessFragmentAbility;// 0x12E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       FailedNonOutlanderActivated;                              // 0x12F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UForceFeedbackEffect*                        FF_Interact;                                              // 0x1310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        FFInteractSoft;                                           // 0x1318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Fragment_Container.B_Fragment_Container_C");
		return ptr;
	}


	void ForceFeedbackInteract(bool Soft);
	void OnRep_IsOrbTaken();
	void OnRep_IsOn();
	void SetOutlander(class AActor* NewOutlander);
	void SetAwake(bool NewAwake);
	void UpdateShouldTick();
	struct FText BlueprintGetFailedInteractionString(class AFortPawn** InteractingPawn);
	void OnRep_IsOpen();
	void DelayedDestroy();
	void OnRep_BuffType();
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void UserConstructionScript();
	void VerticalMovementTimeline__FinishedFunc();
	void VerticalMovementTimeline__UpdateFunc();
	void VerticalMovementTimeline__Up__EventFunc();
	void VerticalMovementTimeline__down__EventFunc();
	void ReceiveBeginPlay();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void ActivateFX();
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveTick(float* DeltaSeconds);
	void MoveUp();
	void PowerDown();
	void MoveDown();
	void ShowOnMiniMap();
	void StartHide();
	void Reset_Activation();
	void BlueprintOnBeginInteract();
	void MultiFeedback();
	void SoftFeedback();
	void ExecuteUbergraph_B_Fragment_Container(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
