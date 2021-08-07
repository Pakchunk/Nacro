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

// BlueprintGeneratedClass Prop_SecurityCamera_01.Prop_SecurityCamera_01_C
// 0x003C (0x100C - 0x0FD0)
class AProp_SecurityCamera_01_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        RightWing;                                                // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LeftWing;                                                 // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Camera;                                                   // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotDuration;                                              // 0x0FF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotConeInDegrees;                                         // 0x0FF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomPitch;                                              // 0x0FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0FFC(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x1000(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DirectionBias;                                            // 0x1008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prop_SecurityCamera_01.Prop_SecurityCamera_01_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartTickingIfRendered();
	void ReceiveBeginPlay();
	void StartRotating();
	void ExecuteUbergraph_Prop_SecurityCamera_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
