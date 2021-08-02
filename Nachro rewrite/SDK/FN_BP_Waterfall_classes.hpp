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

// BlueprintGeneratedClass BP_Waterfall.BP_Waterfall_C
// 0x00B5 (0x0500 - 0x044B)
class ABP_Waterfall_C : public A_WaterMeshBlueprintMaster_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x044B(0x0005) MISSED OFFSET
	class UAudioComponent*                             WaterFall_Base_Sound_L;                                   // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             WaterFall_Base_Sound_R;                                   // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WaterFallVFX;                                             // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SplashFX_Position_Manual;                                 // 0x0468(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    SplashFX_Rotation;                                        // 0x0474(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SplashFX_Scale;                                           // 0x0480(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	struct FName                                       FoamColor;                                                // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SplashFX_Color;                                           // 0x0498(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Foam_Position_01;                                         // 0x04A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Foam_Position_02;                                         // 0x04B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Foam_Position_03;                                         // 0x04C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Foam_Position_04;                                         // 0x04CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_SplashFX_Height_01;                                   // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_SplashFX_Height_02;                                   // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_SplashFX_Height_03;                                   // 0x04DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_SplashFX_Height_04;                                   // 0x04DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Audio_Z_offset;                                           // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Waterfall_Sound_R_Cue;                                    // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Waterfall_Sound_L_Cue;                                    // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Audio_LR_Offset;                                          // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Terrain_Material;                                         // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Waterfall.BP_Waterfall_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
