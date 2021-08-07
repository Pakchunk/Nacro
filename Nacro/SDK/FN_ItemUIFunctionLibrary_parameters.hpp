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

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Truncate Integer Value
struct UItemUIFunctionLibrary_C_Truncate_Integer_Value_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Min_Fractional_Digits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max_Fractional_Digits;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Formatted_Value;                                          // (Parm, OutParm)
};

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Convert Tier To Integer
struct UItemUIFunctionLibrary_C_Convert_Tier_To_Integer_Params
{
	TEnumAsByte<EFortItemTier>                         Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Numeric_Tier;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.ParseLevelRequiredFromString
struct UItemUIFunctionLibrary_C_ParseLevelRequiredFromString_Params
{
	struct FString                                     inString;                                                 // (Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                outInt;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Add Alteration Widgets
struct UItemUIFunctionLibrary_C_Add_Alteration_Widgets_Params
{
	class UVerticalBox*                                Host_Widget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PreviewLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowInVaultDetails;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
