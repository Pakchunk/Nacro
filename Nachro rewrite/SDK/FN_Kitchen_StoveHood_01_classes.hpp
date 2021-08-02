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

// BlueprintGeneratedClass Kitchen_StoveHood_01.Kitchen_StoveHood_01_C
// 0x0008 (0x10D8 - 0x10D0)
class AKitchen_StoveHood_01_C : public ABuildingContainer
{
public:
	class UParticleSystemComponent*                    Effect_Loot;                                              // 0x10D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Kitchen_StoveHood_01.Kitchen_StoveHood_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
