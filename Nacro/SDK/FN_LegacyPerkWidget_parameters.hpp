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

// Function LegacyPerkWidget.LegacyPerkWidget_C.CreateToolTipWidget
struct ULegacyPerkWidget_C_CreateToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeTextInfo
struct ULegacyPerkWidget_C_InitializeTextInfo_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.HighlightBadge
struct ULegacyPerkWidget_C_HighlightBadge_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.GetPerkStat
struct ULegacyPerkWidget_C_GetPerkStat_Params
{
	struct FTooltipStat                                TooltipStat;                                              // (Parm, OutParm)
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.ShowTierImage
struct ULegacyPerkWidget_C_ShowTierImage_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.SetupBadge
struct ULegacyPerkWidget_C_SetupBadge_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeHeroBonusIcon
struct ULegacyPerkWidget_C_InitializeHeroBonusIcon_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeTextOnlyPerk
struct ULegacyPerkWidget_C_InitializeTextOnlyPerk_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.ShouldFadePerk
struct ULegacyPerkWidget_C_ShouldFadePerk_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.GetHighlightColor
struct ULegacyPerkWidget_C_GetHighlightColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.GetTierAbilityBrush
struct ULegacyPerkWidget_C_GetTierAbilityBrush_Params
{
	struct FSlateBrush                                 SlateBrush;                                               // (Parm, OutParm)
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeAbilityPerk
struct ULegacyPerkWidget_C_InitializeAbilityPerk_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeBasicPerk
struct ULegacyPerkWidget_C_InitializeBasicPerk_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.PreConstruct
struct ULegacyPerkWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.Construct
struct ULegacyPerkWidget_C_Construct_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.ExecuteUbergraph_LegacyPerkWidget
struct ULegacyPerkWidget_C_ExecuteUbergraph_LegacyPerkWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
