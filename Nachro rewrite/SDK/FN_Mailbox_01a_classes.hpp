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

// BlueprintGeneratedClass Mailbox_01a.Mailbox_01a_C
// 0x0010 (0x11F8 - 0x11E8)
class AMailbox_01a_C : public AParentBuildingContainerBlueprint_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11E8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effect_Mail;                                              // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mailbox_01a.Mailbox_01a_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoot();
	void OnLootRepeat();
	void ExecuteUbergraph_Mailbox_01a(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
