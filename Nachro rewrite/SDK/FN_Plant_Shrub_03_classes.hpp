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

// BlueprintGeneratedClass Plant_Shrub_03.Plant_Shrub_03_C
// 0x0024 (0x120C - 0x11E8)
class APlant_Shrub_03_C : public AParentBuildingContainerBlueprint_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11E8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effect;                                                   // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Bugs;                                                     // 0x11F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        Dust_Mesh_Particles;                                      // 0x1200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentChanceOfAddedFX;                                   // 0x1208(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Plant_Shrub_03.Plant_Shrub_03_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Plant_Shrub_03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
