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

// BlueprintGeneratedClass Ammo_Spawn.Ammo_Spawn_C
// 0x0018 (0x1158 - 0x1140)
class AAmmo_Spawn_C : public AKeepItemContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1140(0x0008) (Transient, DuplicateTransient)
	class AB_Keep_AmmoStash_C*                         SpawnerRef;                                               // 0x1148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                PositionRef;                                              // 0x1150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PickupTier;                                               // 0x1154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ammo_Spawn.Ammo_Spawn_C");
		return ptr;
	}


	int GetLootTierOverride();
	void Initialize_Pickup(class AB_Keep_AmmoStash_C* Parent, int Position, int Tier);
	void UserConstructionScript();
	void OnBeginSearch();
	void OnLootRepeat();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnLoot();
	void ExecuteUbergraph_Ammo_Spawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
