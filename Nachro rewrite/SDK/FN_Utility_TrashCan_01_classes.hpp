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

// BlueprintGeneratedClass Utility_TrashCan_01.Utility_TrashCan_01_C
// 0x0028 (0x10F8 - 0x10D0)
class AUtility_TrashCan_01_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10D0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effect_Flies_On_Player;                                   // 0x10D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Flies;                                             // 0x10E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypeArray;                                          // 0x10E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Utility_TrashCan_01.Utility_TrashCan_01_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoot();
	void ExecuteUbergraph_Utility_TrashCan_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
