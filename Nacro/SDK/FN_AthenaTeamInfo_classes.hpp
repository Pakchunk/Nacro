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

// WidgetBlueprintGeneratedClass AthenaTeamInfo.AthenaTeamInfo_C
// 0x0020 (0x0280 - 0x0260)
class UAthenaTeamInfo_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                _Vertical_Box__Team_Members;                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UAthenaTeamMemberInfo_C*>             TeamMembers;                                              // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaTeamInfo.AthenaTeamInfo_C");
		return ptr;
	}


	void HandleTeamMutedChanged(TArray<bool>* TeamMuted);
	void HandleTeamTalkingChanged(TArray<bool>* TeamTalking);
	void HandleTeamMemberRemoved();
	void HandleTeamRevivingChanged(TArray<bool>* TeamReviving);
	void HandleTeamMemberPlayerNamesChanged();
	void HandleTeamDeadChanged(TArray<bool>* TeamDead);
	void HandleTeamDBNOChanged(TArray<bool>* TeamDBNO);
	void HandleTeamMemberAdded();
	void HandleTeamHitInfoChanged(TArray<float>* HealthFractions, TArray<float>* ShieldFractions);
	void ClearContents();
	void AppendTeamMember(class AFortPlayerStateAthena* PlayerState, int PlayerIndex);
	void Construct();
	void HandlePartyLeft();
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_AthenaTeamInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
