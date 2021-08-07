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

// BlueprintGeneratedClass Mailbox_01b.Mailbox_01b_C
// 0x0015 (0x11FD - 0x11E8)
class AMailbox_01b_C : public AParentBuildingContainerBlueprint_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11E8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effect_Mail;                                              // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MailBoxesSpawned;                                         // 0x11F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHandled;                                                 // 0x11FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mailbox_01b.Mailbox_01b_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLootRepeat();
	void OnLoot();
	void OnBeginSearch();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Mailbox_01b(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
