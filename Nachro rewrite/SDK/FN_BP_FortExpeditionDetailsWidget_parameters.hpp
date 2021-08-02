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

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Get Bonus Display Name and Brush
struct UBP_FortExpeditionDetailsWidget_C_Get_Bonus_Display_Name_and_Brush_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EFortRarity                                        Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 OutBrush_Brush_M;                                         // (Parm, OutParm)
	struct FText                                       OutDisplayName;                                           // (Parm, OutParm)
	struct FLinearColor                                OutRarityColor;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Bonus Criteria
struct UBP_FortExpeditionDetailsWidget_C_Set_Bonus_Criteria_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Expedition Returns Data
struct UBP_FortExpeditionDetailsWidget_C_Set_Expedition_Returns_Data_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set In Progress State
struct UBP_FortExpeditionDetailsWidget_C_Set_In_Progress_State_Params
{
	class UFortExpeditionItem*                         self2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Remaining Expiration Time
struct UBP_FortExpeditionDetailsWidget_C_Set_Remaining_Expiration_Time_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Requirements
struct UBP_FortExpeditionDetailsWidget_C_Set_Requirements_Params
{
	class UFortExpeditionItemDefinition*               ItemDef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Open Build Expedition Squad
struct UBP_FortExpeditionDetailsWidget_C_Open_Build_Expedition_Squad_Params
{
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rating
struct UBP_FortExpeditionDetailsWidget_C_Set_Rating_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rewards
struct UBP_FortExpeditionDetailsWidget_C_Set_Rewards_Params
{
	class UFortExpeditionItemDefinition*               Item_Def;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Expedition Duration
struct UBP_FortExpeditionDetailsWidget_C_Set_Expedition_Duration_Params
{
	class UFortExpeditionItemDefinition*               Item_Def;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Get Expedition Item Definition
struct UBP_FortExpeditionDetailsWidget_C_Get_Expedition_Item_Definition_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortExpeditionItemDefinition*               Item_Def;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Description
struct UBP_FortExpeditionDetailsWidget_C_Set_Description_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rarity
struct UBP_FortExpeditionDetailsWidget_C_Set_Rarity_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Name
struct UBP_FortExpeditionDetailsWidget_C_Set_Name_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Refresh Item Data
struct UBP_FortExpeditionDetailsWidget_C_Refresh_Item_Data_Params
{
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.DialogResult_11B7688B48FDD9A59A2D55A7B4F60124
struct UBP_FortExpeditionDetailsWidget_C_DialogResult_11B7688B48FDD9A59A2D55A7B4F60124_Params
{
	EFortDialogResult                                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitingForLatentActionCompletion;                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortDialogExternalLatentActionHandle       WaitingDialogHandle;                                      // (Parm)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.SetData
struct UBP_FortExpeditionDetailsWidget_C_SetData_Params
{
	class UFortExpeditionItem**                        InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.HandleOnExpeditionCompleted
struct UBP_FortExpeditionDetailsWidget_C_HandleOnExpeditionCompleted_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature
struct UBP_FortExpeditionDetailsWidget_C_BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Construct
struct UBP_FortExpeditionDetailsWidget_C_Construct_Params
{
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.HandleAbandonExpedition
struct UBP_FortExpeditionDetailsWidget_C_HandleAbandonExpedition_Params
{
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.OnAbandonExpeditionCompleted
struct UBP_FortExpeditionDetailsWidget_C_OnAbandonExpeditionCompleted_Params
{
};

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.ExecuteUbergraph_BP_FortExpeditionDetailsWidget
struct UBP_FortExpeditionDetailsWidget_C_ExecuteUbergraph_BP_FortExpeditionDetailsWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
