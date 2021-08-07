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

// BlueprintGeneratedClass LCD_JunkPile_01a.LCD_JunkPile_01a_C
// 0x0008 (0x10D8 - 0x10D0)
class ALCD_JunkPile_01a_C : public ABuildingContainer
{
public:
	class UAudioComponent*                             Loot_Audio;                                               // 0x10D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LCD_JunkPile_01a.LCD_JunkPile_01a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
