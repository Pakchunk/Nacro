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

// BlueprintGeneratedClass B_Post_Explosion_Generic.B_Post_Explosion_Generic_C
// 0x0518 (0x08A0 - 0x0388)
class AB_Post_Explosion_Generic_C : public AActor
{
public:
	class UPostProcessComponent*                       PostFX;                                                   // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            PostFX_SphereComponent;                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PostFX_PreviewScale;                                      // 0x0398(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              PostFX_BlendRadius;                                       // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PostFX_ShakeEpicenter;                                    // 0x03A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PostFX_ShakeOuterradius;                                  // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostFX_ShakeInnerRadius;                                  // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseCameraShake;                                           // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class UClass*                                      CameraShakeClass;                                         // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseForceFeedback;                                         // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	float                                              DeactivateDelay;                                          // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPostProcessSettings                        PostFX_Settings;                                          // 0x03D0(0x04C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UForceFeedbackEffect*                        ForceFeedbackNear;                                        // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ForceFeedbackFar;                                         // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Post_Explosion_Generic.B_Post_Explosion_Generic_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
