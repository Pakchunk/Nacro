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

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitSmallAlteration
struct ULegacyAlteration_Widget_C_InitSmallAlteration_Params
{
};

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitFullAlteration
struct ULegacyAlteration_Widget_C_InitFullAlteration_Params
{
};

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ShouldFadeAlteration
struct ULegacyAlteration_Widget_C_ShouldFadeAlteration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.GetHighlightColor
struct ULegacyAlteration_Widget_C_GetHighlightColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.Construct
struct ULegacyAlteration_Widget_C_Construct_Params
{
};

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ExecuteUbergraph_LegacyAlteration_Widget
struct ULegacyAlteration_Widget_C_ExecuteUbergraph_LegacyAlteration_Widget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
