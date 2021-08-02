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

// BlueprintGeneratedClass FORT_Roof_Corner_In.FORT_Roof_Corner_In_C
// 0x0000 (0x0FD0 - 0x0FD0)
class AFORT_Roof_Corner_In_C : public ABuildingRoof
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FORT_Roof_Corner_In.FORT_Roof_Corner_In_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
