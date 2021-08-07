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

// BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C
// 0x0018 (0x10D8 - 0x10C0)
class AParent_BuildingWall_C : public ABuildingWall
{
public:
	struct FVector                                     BuildingBoundsMax;                                        // 0x10C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BuildingBoundsMin;                                        // 0x10CC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
