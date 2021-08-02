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

// BlueprintGeneratedClass Utility_ToolBox_02.Utility_ToolBox_02_C
// 0x0018 (0x10E8 - 0x10D0)
class AUtility_ToolBox_02_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10D0(0x0008) (Transient, DuplicateTransient)
	TArray<class USceneComponent*>                     MeshChildren;                                             // 0x10D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Utility_ToolBox_02.Utility_ToolBox_02_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoot();
	void ExecuteUbergraph_Utility_ToolBox_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
