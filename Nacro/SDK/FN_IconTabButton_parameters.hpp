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

// Function IconTabButton.IconTabButton_C.Update Bang State
struct UIconTabButton_C_Update_Bang_State_Params
{
	bool                                               bBangEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle
struct UIconTabButton_C_SetTutorialBorderStyle_Params
{
	class UClass*                                      BorderStyle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTabButton.IconTabButton_C.ShowText
struct UIconTabButton_C_ShowText_Params
{
};

// Function IconTabButton.IconTabButton_C.Set Icon
struct UIconTabButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (Parm)
};

// Function IconTabButton.IconTabButton_C.Set Text
struct UIconTabButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (Parm)
};

// Function IconTabButton.IconTabButton_C.PreConstruct
struct UIconTabButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged
struct UIconTabButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function IconTabButton.IconTabButton_C.SetTabLabelInfo
struct UIconTabButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function IconTabButton.IconTabButton_C.OnSelected
struct UIconTabButton_C_OnSelected_Params
{
};

// Function IconTabButton.IconTabButton_C.OnDeselected
struct UIconTabButton_C_OnDeselected_Params
{
};

// Function IconTabButton.IconTabButton_C.Construct
struct UIconTabButton_C_Construct_Params
{
};

// Function IconTabButton.IconTabButton_C.OnHovered
struct UIconTabButton_C_OnHovered_Params
{
};

// Function IconTabButton.IconTabButton_C.OnUnhovered
struct UIconTabButton_C_OnUnhovered_Params
{
};

// Function IconTabButton.IconTabButton_C.OnEnabled
struct UIconTabButton_C_OnEnabled_Params
{
};

// Function IconTabButton.IconTabButton_C.OnDisabled
struct UIconTabButton_C_OnDisabled_Params
{
};

// Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton
struct UIconTabButton_C_ExecuteUbergraph_IconTabButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
