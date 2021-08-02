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

// Function BasicStrokeBox.BasicStrokeBox_C.Customize
struct UBasicStrokeBox_C_Customize_Params
{
	int                                                Shape_Style;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Fill_Color;                                               // (Parm, IsPlainOldData)
	struct FLinearColor                                Stroke_Color;                                             // (Parm, IsPlainOldData)
};

// Function BasicStrokeBox.BasicStrokeBox_C.Redraw
struct UBasicStrokeBox_C_Redraw_Params
{
};

// Function BasicStrokeBox.BasicStrokeBox_C.PreConstruct
struct UBasicStrokeBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicStrokeBox.BasicStrokeBox_C.ExecuteUbergraph_BasicStrokeBox
struct UBasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
