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

// BlueprintGeneratedClass SM_Boardwalk_Stair34.SM_Boardwalk_Stair34_C
// 0x0008 (0x0FD8 - 0x0FD0)
class ASM_Boardwalk_Stair34_C : public ABuildingStairs
{
public:
	class UAudioComponent*                             WoodCreakSound;                                           // 0x0FD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_Boardwalk_Stair34.SM_Boardwalk_Stair34_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
