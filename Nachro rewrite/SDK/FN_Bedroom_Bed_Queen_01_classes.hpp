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

// BlueprintGeneratedClass Bedroom_Bed_Queen_01.Bedroom_Bed_Queen_01_C
// 0x0008 (0x11F0 - 0x11E8)
class ABedroom_Bed_Queen_01_C : public AParentBuildingContainerBlueprint_C
{
public:
	class UPointLightComponent*                        PointLight;                                               // 0x11E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bedroom_Bed_Queen_01.Bedroom_Bed_Queen_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
