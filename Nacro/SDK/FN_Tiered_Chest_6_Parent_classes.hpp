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

// BlueprintGeneratedClass Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C
// 0x0034 (0x1104 - 0x10D0)
class ATiered_Chest_6_Parent_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10D0(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        TrasureLight;                                             // 0x10D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Closed_Chest;                                             // 0x10E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Chest_Ambient_Sound;                                      // 0x10E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Loot_Effect;                                              // 0x10F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SpecialChestOpenSound;                                    // 0x10F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDrawDistance_ChestFX;                                  // 0x1100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C");
		return ptr;
	}


	bool ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void SetLightVisibility(bool Visible);
	void UserConstructionScript();
	void OnLoot();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void OnSetSearched();
	void ExecuteUbergraph_Tiered_Chest_6_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
