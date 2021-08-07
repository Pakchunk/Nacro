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

// BlueprintGeneratedClass Plant_Shrub_08.Plant_Shrub_08_C
// 0x0010 (0x11F8 - 0x11E8)
class APlant_Shrub_08_C : public AParentBuildingContainerBlueprint_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11E8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effect;                                                   // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Plant_Shrub_08.Plant_Shrub_08_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoot();
	void ExecuteUbergraph_Plant_Shrub_08(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
