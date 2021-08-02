#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.OnSectionSlotUpdate
struct UCollectionBookSectionTileWidget_C_OnSectionSlotUpdate_Params
{
	int*                                               NumFilledSlots;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumSlots;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EFortCollectionBookState*                          SectionState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.ExecuteUbergraph_CollectionBookSectionTileWidget
struct UCollectionBookSectionTileWidget_C_ExecuteUbergraph_CollectionBookSectionTileWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
