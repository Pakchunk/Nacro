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

// Function TooltipLibrary.TooltipLibrary_C.CreateXPTooltip
struct UTooltipLibrary_C_CreateXPTooltip_Params
{
	class APlayerController*                           Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Header;                                                   // (Parm)
	struct FText                                       CommanderXP;                                              // (Parm)
	struct FText                                       BoostXP;                                                  // (Parm)
	struct FText                                       RestXP;                                                   // (Parm)
	struct FText                                       Body;                                                     // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonUserWidget*                           Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Core Stat Tooltip
struct UTooltipLibrary_C_Create_Core_Stat_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHeroCoreStat                               Data;                                                     // (Parm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Basic Multi Line Tooltip
struct UTooltipLibrary_C_Create_Basic_Multi_Line_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               Body_Text;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       Header_Text;                                              // (Parm)
	class USlateBrushAsset*                            Icon_Brush;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Compare Item Tooltip
struct UTooltipLibrary_C_Create_Compare_Item_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Header_Text;                                              // (Parm)
	class USlateBrushAsset*                            Header_Icon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   ComparedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Item Tooltip
struct UTooltipLibrary_C_Create_Item_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Header_Text;                                              // (Parm)
	class USlateBrushAsset*                            Header_Icon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OverrideQuantity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Set Enabled And Tooltip Text
struct UTooltipLibrary_C_Set_Enabled_And_Tooltip_Text_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Tooltip_Text;                                             // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Custom Tooltip
struct UTooltipLibrary_C_Create_Custom_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Header_Text;                                              // (Parm)
	class USlateBrushAsset*                            Icon_Brush;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Basic Tooltip
struct UTooltipLibrary_C_Create_Basic_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Body_Text;                                                // (Parm)
	struct FText                                       Header_Text;                                              // (Parm)
	class USlateBrushAsset*                            Icon_Brush;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
