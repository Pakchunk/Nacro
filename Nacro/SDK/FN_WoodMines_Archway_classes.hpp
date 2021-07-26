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

// BlueprintGeneratedClass WoodMines_Archway.WoodMines_Archway_C
// 0x0011 (0x10E9 - 0x10D8)
class AWoodMines_Archway_C : public AParent_BuildingWall_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10D8(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             WoodCreakSound;                                           // 0x10E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayCreakSound;                                           // 0x10E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodMines_Archway.WoodMines_Archway_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WoodMines_Archway(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
