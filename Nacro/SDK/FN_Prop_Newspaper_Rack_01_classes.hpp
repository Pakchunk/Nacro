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

// BlueprintGeneratedClass Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C
// 0x0008 (0x10D8 - 0x10D0)
class AProp_Newspaper_Rack_01_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnBeginSearch();
	void OnLootRepeat();
	void ExecuteUbergraph_Prop_Newspaper_Rack_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
