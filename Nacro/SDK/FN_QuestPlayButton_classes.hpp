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

// WidgetBlueprintGeneratedClass QuestPlayButton.QuestPlayButton_C
// 0x001C (0x0254 - 0x0238)
class UQuestPlayButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class UIconTextButton_C*                           PlayButton;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortQuestItem*                              QuestItem;                                                // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HACK_PlayerStateDirtyCounter;                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestPlayButton.QuestPlayButton_C");
		return ptr;
	}


	void OnLobbyDisconnected();
	void UpdateQuestStatus(bool bInCanPlayQuest);
	void GetActiveTileType(EFortTheaterMapTileType* TileType);
	void CalculateCritMissionDifficulty(float OverrideMin, float OverrideMax, float* OutDifficultyMin, float* OutDifficultyMax);
	void SetPlayButtonEnable(bool Enable);
	void CanPlayQuest(bool* CanPlay);
	bool CanNavigateToQuestObjective();
	void AttemptPlayQuest();
	void AttemptNavigationToQuestObjective();
	void SetQuest(class UFortQuestItem* Quest);
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ForceClick();
	void OnMatchmakingStarted();
	void OnMatchmakingCompleted(EMatchmakingCompleteResult Result);
	void OnPlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo);
	void Destruct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_QuestPlayButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
