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

// BlueprintGeneratedClass WoodMines_BalconyS.WoodMines_BalconyS_C
// 0x0008 (0x0FD8 - 0x0FD0)
class AWoodMines_BalconyS_C : public ABuildingFloor
{
public:
	class UAudioComponent*                             WoodStressSound;                                          // 0x0FD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodMines_BalconyS.WoodMines_BalconyS_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
