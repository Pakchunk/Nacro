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

// Function IconAndNameWidget.IconAndNameWidget_C.Set Border Color
struct UIconAndNameWidget_C_Set_Border_Color_Params
{
	struct FLinearColor                                Value;                                                    // (Parm, IsPlainOldData)
};

// Function IconAndNameWidget.IconAndNameWidget_C.Setup Text
struct UIconAndNameWidget_C_Setup_Text_Params
{
};

// Function IconAndNameWidget.IconAndNameWidget_C.Setup Border
struct UIconAndNameWidget_C_Setup_Border_Params
{
};

// Function IconAndNameWidget.IconAndNameWidget_C.PreConstruct
struct UIconAndNameWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconAndNameWidget.IconAndNameWidget_C.ExecuteUbergraph_IconAndNameWidget
struct UIconAndNameWidget_C_ExecuteUbergraph_IconAndNameWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
