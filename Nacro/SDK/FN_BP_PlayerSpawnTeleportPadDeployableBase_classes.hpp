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

// BlueprintGeneratedClass BP_PlayerSpawnTeleportPadDeployableBase.BP_PlayerSpawnTeleportPadDeployableBase_C
// 0x000E (0x11D8 - 0x11CA)
class ABP_PlayerSpawnTeleportPadDeployableBase_C : public ABP_PlayerSpawnTeleportPAd_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x11CA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerSpawnTeleportPadDeployableBase.BP_PlayerSpawnTeleportPadDeployableBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ClearArea();
	void OnWorldReady();
	void HandleMissionEvent_TeleportHordePlayers(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ExecuteUbergraph_BP_PlayerSpawnTeleportPadDeployableBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
