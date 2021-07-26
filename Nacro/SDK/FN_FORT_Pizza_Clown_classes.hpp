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

// BlueprintGeneratedClass FORT_Pizza_Clown.FORT_Pizza_Clown_C
// 0x0014 (0x0FE4 - 0x0FD0)
class AFORT_Pizza_Clown_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        FORT_Pizza_Clown;                                         // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotateSpeed;                                              // 0x0FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FORT_Pizza_Clown.FORT_Pizza_Clown_C");
		return ptr;
	}


	void UserConstructionScript();
	void Clown_Spinner();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FORT_Pizza_Clown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
