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

// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
// 0x00EC (0x0664 - 0x0578)
class ASafeZoneIndicator_C : public AFortSafeZoneIndicator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0578(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SafeZoneCylinder;                                         // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_StormFadeIn_6FB75EFB416FB419D85F8797DEDD058C;  // 0x0598(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6FB75EFB416FB419D85F8797DEDD058C;   // 0x059C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x059D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Holding_Audio_Crossfader_Pitch_Curve_F603DC9F45AE40F647212A85E6566CC5;// 0x05A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Holding_Audio_Crossfader_Volume_Curve_F603DC9F45AE40F647212A85E6566CC5;// 0x05AC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Holding_Audio_Crossfader__Direction_F603DC9F45AE40F647212A85E6566CC5;// 0x05B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05B1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Holding_Audio_Crossfader;                                 // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeSafeZoneVisuals_LERP_E671C79642CD40ABC82D55BF6EBA9626;// 0x05C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeSafeZoneVisuals__Direction_E671C79642CD40ABC82D55BF6EBA9626;// 0x05C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeSafeZoneVisuals;                                      // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Movement_Audio_Crossfader_Pitch_Mod_82F6F72D4A8E0708CB39DDA0191E4390;// 0x05D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Movement_Audio_Crossfader_Crossfade_82F6F72D4A8E0708CB39DDA0191E4390;// 0x05D4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Movement_Audio_Crossfader__Direction_82F6F72D4A8E0708CB39DDA0191E4390;// 0x05D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x05D9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Movement_Audio_Crossfader;                                // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             StationaryAudio;                                          // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StationaryLoopSound;                                      // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MovingLoopSound;                                          // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             MovingAudio;                                              // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalPlayerDistanceFromCenter;                            // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocalPlayerOutside;                                      // 0x060C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x060D(0x0003) MISSED OFFSET
	float                                              AudioCrossfade;                                           // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AudioPitchMod;                                            // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HoldingLoopSound;                                         // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             HoldingAudio;                                             // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAthena_GameState_C*                         GameState;                                                // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldingStartTime;                                         // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0634(0x0004) MISSED OFFSET
	class USoundBase*                                  HoldingLoopTickSound;                                     // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             HoldingTickAudio;                                         // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SafeZoneCylinderMID;                                      // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialSafeZoneWorldScale;                                // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsViewTargetPawnOutside;                                 // 0x0654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0655(0x0003) MISSED OFFSET
	class AFortPlayerPawnAthena*                       ViewTargetPawn;                                           // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AudioLowPassValue;                                        // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C");
		return ptr;
	}


	void HandleInsideOutsideMix();
	void InitClosestPointAudio();
	void UpdateClosestPointAudioLocation();
	void GetClosestPointOnSafeZone(const struct FVector& PlayerLocation, struct FVector* Location);
	void UserConstructionScript();
	void Holding_Audio_Crossfader__FinishedFunc();
	void Holding_Audio_Crossfader__UpdateFunc();
	void FadeSafeZoneVisuals__FinishedFunc();
	void FadeSafeZoneVisuals__UpdateFunc();
	void Movement_Audio_Crossfader__FinishedFunc();
	void Movement_Audio_Crossfader__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnSafeZoneStateChange(EFortSafeZoneState* NewState);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void Apply_Lowpass_to_Audio();
	void ExecuteUbergraph_SafeZoneIndicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
