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

// Function SlotLibrary.SlotLibrary_C.Get Attribute Modifier Header Text
struct USlotLibrary_C_Get_Attribute_Modifier_Header_Text_Params
{
	struct FFortAttributeInfo                          Attribute_Info;                                           // (Parm)
	struct FGameplayTagContainer                       Required_Tags;                                            // (Parm)
	struct FText                                       Required_Gameplay_Tags_Description;                       // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SlotLibrary.SlotLibrary_C.Create Attribute Modifier Tool Tip
struct USlotLibrary_C_Create_Attribute_Modifier_Tool_Tip_Params
{
	class APlayerController*                           Owning_Player;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortAttributeInfo                          Attribute_Info;                                           // (Parm)
	struct FGameplayTagContainer                       Required_Gameplay_Tags;                                   // (Parm)
	struct FText                                       Required_Gameplay_Tags_Description;                       // (Parm)
	struct FText                                       Modifier_Source;                                          // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotLibrary.SlotLibrary_C.Get Traits Of Workers
struct USlotLibrary_C_Get_Traits_Of_Workers_Params
{
	TArray<class UFortWorker*>                         Workers;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       Chief_Personality;                                        // (Parm, OutParm)
	struct FGameplayTagContainer                       Crew_Personalities;                                       // (Parm, OutParm)
	struct FGameplayTagContainer                       Crew_Set_Bonuses;                                         // (Parm, OutParm)
};

// Function SlotLibrary.SlotLibrary_C.Calculate Current Pulsing Highlight Color
struct USlotLibrary_C_Calculate_Current_Pulsing_Highlight_Color_Params
{
	struct FLinearColor                                Base_Color;                                               // (Parm, IsPlainOldData)
	struct FLinearColor                                Hightlight_Color;                                         // (Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Current_Color;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function SlotLibrary.SlotLibrary_C.EnsureIconBrush
struct USlotLibrary_C_EnsureIconBrush_Params
{
	struct FFortMultiSizeBrush                         Multi_size_Brush;                                         // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function SlotLibrary.SlotLibrary_C.InitItemWidget
struct USlotLibrary_C_InitItemWidget_Params
{
	class UFortItemWidget*                             Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
