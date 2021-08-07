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

// BlueprintGeneratedClass AthenaAircraft.AthenaAircraft_C
// 0x0008 (0x04C8 - 0x04C0)
class AAthenaAircraft_C : public AFortAthenaAircraft
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AthenaAircraft.AthenaAircraft_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayEffectsForPlayerJumped();
	void ExecuteUbergraph_AthenaAircraft(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
