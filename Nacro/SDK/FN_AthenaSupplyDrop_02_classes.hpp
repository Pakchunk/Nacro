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

// BlueprintGeneratedClass AthenaSupplyDrop_02.AthenaSupplyDrop_02_C
// 0x021C (0x0A6C - 0x0850)
class AAthenaSupplyDrop_02_C : public AFortAthenaSupplyDrop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0850(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               TargetCollision;                                          // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FlareAudio;                                               // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReticleAudio;                                             // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               InterceptCollision;                                       // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Flare;                                                  // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_DamageBalloon_Athena;                                  // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Reticle;                                                // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_SupplydropCrate_Explosion;                              // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Collision;                                                // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SupplyDrop_Mesh_Open;                                     // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Trail;                                                    // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SupplyDrop_Mesh;                                          // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LerpFallRate_lerp_FE7E27BB426803D6C67CB1B938DEA932;       // 0x08C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LerpFallRate__Direction_FE7E27BB426803D6C67CB1B938DEA932; // 0x08C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LerpFallRate;                                             // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingTimeline_FallCrossfadeAudioCurve_9BECDABA4A72652B113789B5C4B94027;// 0x08D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FallingTimeline_FallCurve_9BECDABA4A72652B113789B5C4B94027;// 0x08D4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FallingTimeline__Direction_9BECDABA4A72652B113789B5C4B94027;// 0x08D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08D9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FallingTimeline;                                          // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Allow_SupplyDrop_Interact;                                // 0x08E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	class USoundBase*                                  Activate_Sound;                                           // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Impact_Sound;                                             // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Loot_Sound;                                               // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EventHit;                                                 // 0x0908(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          EventData;                                                // 0x0910(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     LootSpawnOffset;                                          // 0x09B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FallHeight;                                               // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSupplyDropUnlocks                          Unlocks;                                                  // 0x09C8(0x0005) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09CD(0x0003) MISSED OFFSET
	TArray<struct FName>                               LootTableNames;                                           // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                SelfDestructTimerHandle;                                  // 0x09E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABuildingActor*                              Floor;                                                    // 0x09E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // 0x09F0(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              FallTime;                                                 // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                SecondaryFallingTimerHandle;                              // 0x0A00(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bLooted;                                                  // 0x0A08(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0A09(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    CrateLanded;                                              // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              FallingPlayrate;                                          // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0A24(0x0004) MISSED OFFSET
	class UAudioComponent*                             FallingAudio;                                             // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBalloonPopped;                                           // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0A31(0x0007) MISSED OFFSET
	struct FCurveTableRowHandle                        NewVar_1;                                                 // 0x0A38(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCurveTableRowHandle                        CurveTable_FallTime;                                      // 0x0A48(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCurveTableRowHandle                        CurveTable_FallHeight;                                    // 0x0A58(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              NewVar_2;                                                 // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AthenaSupplyDrop_02.AthenaSupplyDrop_02_C");
		return ptr;
	}


	void HandleFallTime();
	void UpdateDropAudio(float FallPercent);
	void StartDropAudio();
	void OnRep_bLooted();
	void OnRep_NewLocation();
	struct FVector GetFallLocation();
	struct FVector GetImpactLocation();
	void ToggleFallingFX(bool bToggleOn);
	void ClientPlayDropFX();
	void SpawnTierDrops(int LootTableIndex);
	void LootSpawnPosition(struct FVector* OutPos);
	void InitDrop(const struct FSupplyDropUnlocks& InUnlocks);
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	void Landed();
	bool IsAcceptablePositionForPlacement(struct FVector* InLocation, struct FRotator* InRotation, class AFortDecoTool** DecoTool, bool* bIsCDO, struct FText* OutFailureReason);
	void UpdateLocation(float Time);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void TurnOnInteract(bool bNewActorEnableCollision);
	void SpawnLoot();
	void UserConstructionScript();
	void FallingTimeline__FinishedFunc();
	void FallingTimeline__UpdateFunc();
	void FallingTimeline__Almost_Landed__EventFunc();
	void FallingTimeline__DisableFlare__EventFunc();
	void LerpFallRate__FinishedFunc();
	void LerpFallRate__UpdateFunc();
	void ImpactFX();
	void OverlappingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void PlayDrop();
	void SpawnLootDestroyActor();
	void PlayDropNewTime();
	void SecondaryFallTick();
	void BalloonDestroyed();
	void StopBeep();
	void BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DropIntercepted();
	void ReceiveBeginPlay();
	void BndEvt__TargetCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_AthenaSupplyDrop_02(int EntryPoint);
	void CrateLanded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
