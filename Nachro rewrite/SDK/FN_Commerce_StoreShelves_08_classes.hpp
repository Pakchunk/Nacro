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

// BlueprintGeneratedClass Commerce_StoreShelves_08.Commerce_StoreShelves_08_C
// 0x0010 (0x11F8 - 0x11E8)
class ACommerce_StoreShelves_08_C : public AParentBuildingContainerBlueprint_C
{
public:
	class UPointLightComponent*                        PointLight1;                                              // 0x11E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Commerce_StoreShelves_08.Commerce_StoreShelves_08_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
