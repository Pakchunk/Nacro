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

// Function MissionDetailsModifierList.MissionDetailsModifierList_C.CreateDebugModifiers
struct UMissionDetailsModifierList_C_CreateDebugModifiers_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function MissionDetailsModifierList.MissionDetailsModifierList_C.PopulateModifiers
struct UMissionDetailsModifierList_C_PopulateModifiers_Params
{
	bool                                               UseTrunctatedList;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NameTextStyle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DescriptionTextStyle;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Show_Descriptions;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortGameplayModifierItemDefinition*> ModifierItems;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               UseSmallIcons;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
