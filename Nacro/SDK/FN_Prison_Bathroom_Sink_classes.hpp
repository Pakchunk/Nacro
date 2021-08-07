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

// BlueprintGeneratedClass Prison_Bathroom_Sink.Prison_Bathroom_Sink_C
// 0x0008 (0x10D8 - 0x10D0)
class APrison_Bathroom_Sink_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prison_Bathroom_Sink.Prison_Bathroom_Sink_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoot();
	void OnLootRepeat();
	void ExecuteUbergraph_Prison_Bathroom_Sink(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
