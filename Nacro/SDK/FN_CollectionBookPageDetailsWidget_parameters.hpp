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

// Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.OnPageProgressionUpdated
struct UCollectionBookPageDetailsWidget_C_OnPageProgressionUpdated_Params
{
	int*                                               TotalFilledSlots;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TotalSlots;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EFortCollectionBookState*                          State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.ExecuteUbergraph_CollectionBookPageDetailsWidget
struct UCollectionBookPageDetailsWidget_C_ExecuteUbergraph_CollectionBookPageDetailsWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
