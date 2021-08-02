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

// BlueprintGeneratedClass Commerce_VendingMachine_Drink.Commerce_VendingMachine_Drink_C
// 0x0008 (0x11F0 - 0x11E8)
class ACommerce_VendingMachine_Drink_C : public AParentBuildingContainerBlueprint_C
{
public:
	class USpotLightComponent*                         SpotLight;                                                // 0x11E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Commerce_VendingMachine_Drink.Commerce_VendingMachine_Drink_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
