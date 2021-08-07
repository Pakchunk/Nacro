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

// BlueprintGeneratedClass Hydrant01.Hydrant01_C
// 0x0030 (0x1050 - 0x1020)
class AHydrant01_C : public AFireHydrant__2_C
{
public:
	bool                                               Can_Jump_1;                                               // 0x1020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1021(0x0007) MISSED OFFSET
	class UStaticMesh*                                 Hydrant_Mesh;                                             // 0x1028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Hydrant_Broken_Mesh;                                      // 0x1030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaterEffectOffset;                                        // 0x1038(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1044(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        LaunchForceFeedback_1;                                    // 0x1048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hydrant01.Hydrant01_C");
		return ptr;
	}


	void handle_Exploded_State();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
