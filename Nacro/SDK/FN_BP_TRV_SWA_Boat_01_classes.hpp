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

// BlueprintGeneratedClass BP_TRV_SWA_Boat_01.BP_TRV_SWA_Boat_01_C
// 0x0000 (0x0FD0 - 0x0FD0)
class ABP_TRV_SWA_Boat_01_C : public ABuildingProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TRV_SWA_Boat_01.BP_TRV_SWA_Boat_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
