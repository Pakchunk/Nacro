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

// BlueprintGeneratedClass CobWebs01.CobWebs01_C
// 0x002C (0x1100 - 0x10D4)
class ACobWebs01_C : public AParent_BuildingPropActor_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x10D4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10D8(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box_Collision;                                            // 0x10E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CollisionBoxExtents;                                      // 0x10E8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CollisionBoxOffset;                                       // 0x10F4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CobWebs01.CobWebs01_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Box_Collision_K2Node_ComponentBoundEvent_21_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ExecuteUbergraph_CobWebs01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
