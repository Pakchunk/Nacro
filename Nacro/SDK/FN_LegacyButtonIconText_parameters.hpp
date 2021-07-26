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

// Function LegacyButtonIconText.LegacyButtonIconText_C.Outro
struct ULegacyButtonIconText_C_Outro_Params
{
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Intro
struct ULegacyButtonIconText_C_Intro_Params
{
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Toggle
struct ULegacyButtonIconText_C_Toggle_Params
{
	bool                                               Show_Button;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Alignment
struct ULegacyButtonIconText_C_Set_Alignment_Params
{
	TEnumAsByte<ETextJustify>                          Align;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Update Size Box
struct ULegacyButtonIconText_C_Update_Size_Box_Params
{
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Get Primary Color
struct ULegacyButtonIconText_C_Get_Primary_Color_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Get Secondary Color
struct ULegacyButtonIconText_C_Get_Secondary_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Update Padding
struct ULegacyButtonIconText_C_Update_Padding_Params
{
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Icon
struct ULegacyButtonIconText_C_Set_Icon_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (Parm)
	bool                                               RefreshPadding;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Text
struct ULegacyButtonIconText_C_Set_Text_Params
{
	struct FText                                       InText;                                                   // (Parm)
	bool                                               RefreshPadding;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.PreConstruct
struct ULegacyButtonIconText_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseEnter
struct ULegacyButtonIconText_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseLeave
struct ULegacyButtonIconText_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.ExecuteUbergraph_LegacyButtonIconText
struct ULegacyButtonIconText_C_ExecuteUbergraph_LegacyButtonIconText_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyButtonIconText.LegacyButtonIconText_C.On Mouse Hovered Changed__DelegateSignature
struct ULegacyButtonIconText_C_On_Mouse_Hovered_Changed__DelegateSignature_Params
{
	bool                                               Is_Hovered;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
