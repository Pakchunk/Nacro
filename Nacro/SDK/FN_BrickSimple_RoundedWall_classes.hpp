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

// BlueprintGeneratedClass BrickSimple_RoundedWall.BrickSimple_RoundedWall_C
// 0x0000 (0x10D8 - 0x10D8)
class ABrickSimple_RoundedWall_C : public AParent_BuildingWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BrickSimple_RoundedWall.BrickSimple_RoundedWall_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
