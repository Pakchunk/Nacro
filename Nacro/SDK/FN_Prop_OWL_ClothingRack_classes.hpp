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

// BlueprintGeneratedClass Prop_OWL_ClothingRack.Prop_OWL_ClothingRack_C
// 0x0008 (0x0FD8 - 0x0FD0)
class AProp_OWL_ClothingRack_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prop_OWL_ClothingRack.Prop_OWL_ClothingRack_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDamagePlayEffects(float* Damage, struct FVector* Momentum, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext, struct FGameplayTagContainer* DamageTags, struct FHitResult* HitInfo);
	void ExecuteUbergraph_Prop_OWL_ClothingRack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
