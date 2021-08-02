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

// BlueprintGeneratedClass Sign_Durrr_8.Sign_Durrr_7_C
// 0x000C (0x10E0 - 0x10D4)
class ASign_Durrr_7_C : public AParent_BuildingPropActor_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x10D4(0x0004) MISSED OFFSET
	class UPointLightComponent*                        PointLight;                                               // 0x10D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sign_Durrr_8.Sign_Durrr_7_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
