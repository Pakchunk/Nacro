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

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookLevelProgressionChanged
struct UCollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged_Params
{
	float*                                             NewCompletionPct;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookPreviewXPChange
struct UCollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange_Params
{
	float*                                             PreviewCompletionPct;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.ExecuteUbergraph_CollectionBookProgressWidget
struct UCollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
