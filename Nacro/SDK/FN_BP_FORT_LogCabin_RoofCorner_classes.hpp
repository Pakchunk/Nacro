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

// BlueprintGeneratedClass BP_FORT_LogCabin_RoofCorner.BP_FORT_LogCabin_RoofCorner_C
// 0x0000 (0x0FD0 - 0x0FD0)
class ABP_FORT_LogCabin_RoofCorner_C : public ABuildingRoof
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FORT_LogCabin_RoofCorner.BP_FORT_LogCabin_RoofCorner_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
