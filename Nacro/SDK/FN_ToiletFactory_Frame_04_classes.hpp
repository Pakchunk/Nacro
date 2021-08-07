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

// BlueprintGeneratedClass ToiletFactory_Frame_04.ToiletFactory_Frame_04_C
// 0x0008 (0x10D8 - 0x10D0)
class AToiletFactory_Frame_04_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ToiletFactory_Frame_04.ToiletFactory_Frame_04_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoot();
	void OnLootRepeat();
	void OnBeginSearch();
	void ExecuteUbergraph_ToiletFactory_Frame_04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
