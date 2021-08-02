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

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDrop
struct ULegacyItem_DO_NOT_USE_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Opacity
struct ULegacyItem_DO_NOT_USE_C_Update_Base_Opacity_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Activatable State
struct ULegacyItem_DO_NOT_USE_C_Update_Activatable_State_Params
{
	bool                                               Activatable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Rating Tag
struct ULegacyItem_DO_NOT_USE_C_Update_Rating_Tag_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Texture2D From Multi Size Brush
struct ULegacyItem_DO_NOT_USE_C_Get_Texture2D_From_Multi_Size_Brush_Params
{
	struct FFortMultiSizeBrush                         Multi_Size_Brush;                                         // (Parm)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2D;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Num in Stack
struct ULegacyItem_DO_NOT_USE_C_Get_Num_in_Stack_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Style
struct ULegacyItem_DO_NOT_USE_C_Set_Display_Style_Params
{
	bool                                               Override_Display_Style;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemDisplayStyle>                     DisplayStyle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Hide Subtype Icons
struct ULegacyItem_DO_NOT_USE_C_Hide_Subtype_Icons_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Primary Icon Visibility
struct ULegacyItem_DO_NOT_USE_C_Set_Primary_Icon_Visibility_Params
{
	bool                                               Override_Icon_Visibility;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   Item_Icon_Visibility;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Subtype Icons & Ammo Color
struct ULegacyItem_DO_NOT_USE_C_Set_Subtype_Icons___Ammo_Color_Params
{
	bool                                               Override_Secondary_Icon_Color;                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Secondary_Icon_Override_Color;                            // (Parm, IsPlainOldData)
	bool                                               Override_Tertiary_Icon_Color;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tertiary_Icon_Override_Color;                             // (Parm, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDoubleClick
struct ULegacyItem_DO_NOT_USE_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Resize
struct ULegacyItem_DO_NOT_USE_C_Resize_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Refresh
struct ULegacyItem_DO_NOT_USE_C_Refresh_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Stack Count
struct ULegacyItem_DO_NOT_USE_C_Set_Stack_Count_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Durability
struct ULegacyItem_DO_NOT_USE_C_Set_Durability_Params
{
	float                                              Durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Cooldown Meter
struct ULegacyItem_DO_NOT_USE_C_Update_Cooldown_Meter_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Durability Meter
struct ULegacyItem_DO_NOT_USE_C_Update_Durability_Meter_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Tooltip Header
struct ULegacyItem_DO_NOT_USE_C_Set_Tooltip_Header_Params
{
	struct FText                                       Header_Text;                                              // (Parm)
	class USlateBrushAsset*                            Icon_Brush;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Tooltip
struct ULegacyItem_DO_NOT_USE_C_Get_Item_Tooltip_Params
{
	int                                                OverrideStackCount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Mode
struct ULegacyItem_DO_NOT_USE_C_Set_Display_Mode_Params
{
	EFortUIState                                       Current_UI_State;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Cursor_Mode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Ammo Count
struct ULegacyItem_DO_NOT_USE_C_Set_Ammo_Count_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Subtype Icons & Ammo
struct ULegacyItem_DO_NOT_USE_C_Update_Subtype_Icons___Ammo_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Display Style
struct ULegacyItem_DO_NOT_USE_C_Get_Display_Style_Params
{
	EFortItemType                                      Item_Type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemDisplayStyle>                     Style;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Tier Badge
struct ULegacyItem_DO_NOT_USE_C_Update_Tier_Badge_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Primary Icon
struct ULegacyItem_DO_NOT_USE_C_Update_Primary_Icon_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Texture Set
struct ULegacyItem_DO_NOT_USE_C_Get_Item_Texture_Set_Params
{
	TEnumAsByte<EItemDisplayStyle>                     Display_Style;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemTextureSet                             Texture_Set;                                              // (Parm, OutParm)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Size Box
struct ULegacyItem_DO_NOT_USE_C_Update_Size_Box_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDragDetected
struct ULegacyItem_DO_NOT_USE_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDown
struct ULegacyItem_DO_NOT_USE_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update All
struct ULegacyItem_DO_NOT_USE_C_Update_All_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Stack Counter
struct ULegacyItem_DO_NOT_USE_C_Update_Stack_Counter_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Item Data
struct ULegacyItem_DO_NOT_USE_C_Set_Item_Data_Params
{
	class UFortItem*                                   Item_Data;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Material
struct ULegacyItem_DO_NOT_USE_C_Update_Base_Material_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemChanged
struct ULegacyItem_DO_NOT_USE_C_BPOnItemChanged_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Construct
struct ULegacyItem_DO_NOT_USE_C_Construct_Params
{
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.PreConstruct
struct ULegacyItem_DO_NOT_USE_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemSet
struct ULegacyItem_DO_NOT_USE_C_BPOnItemSet_Params
{
	class UFortItem**                                  NewItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnCursorModeChanged
struct ULegacyItem_DO_NOT_USE_C_OnCursorModeChanged_Params
{
	bool                                               bCursorModeEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentWidget;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseEnter
struct ULegacyItem_DO_NOT_USE_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnCooldownSecondsChanged
struct ULegacyItem_DO_NOT_USE_C_BPOnCooldownSecondsChanged_Params
{
	int*                                               NewCooldownSeconds;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnActivatableChanged
struct ULegacyItem_DO_NOT_USE_C_BPOnActivatableChanged_Params
{
	bool*                                              bNewActivatable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.ExecuteUbergraph_LegacyItem_DO_NOT_USE
struct ULegacyItem_DO_NOT_USE_C_ExecuteUbergraph_LegacyItem_DO_NOT_USE_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
