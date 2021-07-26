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

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Text Visibility
struct UTooltip_Item_C_Get_Tooltip_Header_Text_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Icon Visibility
struct UTooltip_Item_C_Get_Tooltip_Header_Icon_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Visibility
struct UTooltip_Item_C_Get_Tooltip_Header_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tooltip-Item.Tooltip-Item_C.Get Theme Color [Normal]
struct UTooltip_Item_C_Get_Theme_Color__Normal__Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Tooltip-Item.Tooltip-Item_C.Get Icon Brush
struct UTooltip_Item_C_Get_Icon_Brush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tooltip-Item.Tooltip-Item_C.Construct
struct UTooltip_Item_C_Construct_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.ExecuteUbergraph_Tooltip-Item
struct UTooltip_Item_C_ExecuteUbergraph_Tooltip_Item_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
