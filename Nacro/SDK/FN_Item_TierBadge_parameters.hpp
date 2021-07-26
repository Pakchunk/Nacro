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

// Function Item_TierBadge.Item_TierBadge_C.Set Level
struct UItem_TierBadge_C_Set_Level_Params
{
	int                                                Current_Level;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max_Level;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_TierBadge.Item_TierBadge_C.Refresh Visibility
struct UItem_TierBadge_C_Refresh_Visibility_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemDisplayMode>                      Display_Mode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         Current_Tier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Item_TierBadge.Item_TierBadge_C.Update
struct UItem_TierBadge_C_Update_Params
{
	TEnumAsByte<EFortItemTier>                         Current_Tier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         Max_Tier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemDisplayStyle>                     Item_Display_Style;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemDisplayMode>                      Item_Display_Mode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortRarityItemData                         Rarity_Colors;                                            // (Parm)
	int                                                Current_Level;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max_Level;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
