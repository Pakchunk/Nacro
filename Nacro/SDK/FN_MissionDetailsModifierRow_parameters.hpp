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

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation
struct UMissionDetailsModifierRow_C_PlayIntroAnimation_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Init
struct UMissionDetailsModifierRow_C_Init_Params
{
	struct FText                                       ModifierName;                                             // (Parm)
	struct FText                                       ModifierDescription;                                      // (Parm)
	class UTexture2D*                                  ModifierIcon;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TextStyle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Show_Description;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseSmallIcon;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct
struct UMissionDetailsModifierRow_C_Construct_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow
struct UMissionDetailsModifierRow_C_ExecuteUbergraph_MissionDetailsModifierRow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
