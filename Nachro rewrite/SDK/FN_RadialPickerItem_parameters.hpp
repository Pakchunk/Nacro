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

// Function RadialPickerItem.RadialPickerItem_C.SetKeybindVisibility
struct URadialPickerItem_C_SetKeybindVisibility_Params
{
};

// Function RadialPickerItem.RadialPickerItem_C.SetShowImageAndLabel
struct URadialPickerItem_C_SetShowImageAndLabel_Params
{
	bool                                               ShowImageAndLabel;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPickerItem.RadialPickerItem_C.SetItemContent
struct URadialPickerItem_C_SetItemContent_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Option_Enabled;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Radial_Item_Index;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPickerItem.RadialPickerItem_C.SetSelected
struct URadialPickerItem_C_SetSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPickerItem.RadialPickerItem_C.SetImageAndLabelContent
struct URadialPickerItem_C_SetImageAndLabelContent_Params
{
	struct FText                                       Text;                                                     // (Parm)
	struct FSlateBrush                                 Brush;                                                    // (Parm)
	bool                                               Option_Enabled;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RadialItemIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPickerItem.RadialPickerItem_C.Construct
struct URadialPickerItem_C_Construct_Params
{
};

// Function RadialPickerItem.RadialPickerItem_C.ExecuteUbergraph_RadialPickerItem
struct URadialPickerItem_C_ExecuteUbergraph_RadialPickerItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
