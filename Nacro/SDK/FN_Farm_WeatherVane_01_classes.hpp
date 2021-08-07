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

// BlueprintGeneratedClass Farm_WeatherVane_01.Farm_WeatherVane_01_C
// 0x0020 (0x0FF0 - 0x0FD0)
class AFarm_WeatherVane_01_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        RoosterMesh;                                              // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationAmount;                                           // 0x0FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0FE4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SecondaryMID;                                             // 0x0FE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Farm_WeatherVane_01.Farm_WeatherVane_01_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnBounceAnimationUpdate(struct FFortBounceData* Data);
	void ExecuteUbergraph_Farm_WeatherVane_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
