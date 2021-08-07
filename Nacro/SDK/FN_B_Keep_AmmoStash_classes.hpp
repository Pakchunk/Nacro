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

// BlueprintGeneratedClass B_Keep_AmmoStash.B_Keep_AmmoStash_C
// 0x0090 (0x11D0 - 0x1140)
class AB_Keep_AmmoStash_C : public AKeepItemContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1140(0x0008) (Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender1;                                              // 0x1148(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Placement8;                                               // 0x1150(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Placement7;                                               // 0x1158(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Placement6;                                               // 0x1160(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Placement5;                                               // 0x1168(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Placement4;                                               // 0x1170(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Placement3;                                               // 0x1178(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Placement2;                                               // 0x1180(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Placement_1;                                              // 0x1188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ammo;                                                     // 0x1190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       AmmoPositions;                                            // 0x1198(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AmmoNumber;                                               // 0x11A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Cooldown;                                                 // 0x11AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPickups;                                               // 0x11B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x11B4(0x0004) MISSED OFFSET
	TArray<class AKeepItemContainer*>                  Pickups;                                                  // 0x11B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Warmup;                                                   // 0x11C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x11C9(0x0003) MISSED OFFSET
	int                                                PickupTier;                                               // 0x11CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Keep_AmmoStash.B_Keep_AmmoStash_C");
		return ptr;
	}


	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void AmmoTaken(int AmmoPos, class AKeepItemContainer* Reference);
	void UserConstructionScript();
	void HandleMissionEvent_OnDefenseStarted(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_OnDefenseStopped(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Keep_AmmoStash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
