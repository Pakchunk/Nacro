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

// BlueprintGeneratedClass GE_OutsideSafeZoneDamage.GE_OutsideSafeZoneDamage_C
// 0x0000 (0x0660 - 0x0660)
class UGE_OutsideSafeZoneDamage_C : public UGET_PeriodicEnergyDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_OutsideSafeZoneDamage.GE_OutsideSafeZoneDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
