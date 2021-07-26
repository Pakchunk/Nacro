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

// BlueprintGeneratedClass Haystack_Prop.Haystack_Prop_C
// 0x0008 (0x0FD8 - 0x0FD0)
class AHaystack_Prop_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Haystack_Prop.Haystack_Prop_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLootRepeat();
	void OnBeginSearch();
	void OnLoot();
	void ExecuteUbergraph_Haystack_Prop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
