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

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.SetInitialMouseKeyboardStyle
struct UCampaignMapIconTextButton_C_SetInitialMouseKeyboardStyle_Params
{
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.UpdateTextStyle
struct UCampaignMapIconTextButton_C_UpdateTextStyle_Params
{
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.SetContentAlignment
struct UCampaignMapIconTextButton_C_SetContentAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.UpdateContentAlignment
struct UCampaignMapIconTextButton_C_UpdateContentAlignment_Params
{
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.SetMouseKeyboardStyle
struct UCampaignMapIconTextButton_C_SetMouseKeyboardStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.UpdateStyle
struct UCampaignMapIconTextButton_C_UpdateStyle_Params
{
	bool                                               UsingGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.UpdateText
struct UCampaignMapIconTextButton_C_UpdateText_Params
{
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.SetControllerStyle
struct UCampaignMapIconTextButton_C_SetControllerStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.UpdateTextAndStyle
struct UCampaignMapIconTextButton_C_UpdateTextAndStyle_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.InitializeButton
struct UCampaignMapIconTextButton_C_InitializeButton_Params
{
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.Set Icon
struct UCampaignMapIconTextButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (Parm)
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.Set Text
struct UCampaignMapIconTextButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (Parm)
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.OnCurrentTextStyleChanged
struct UCampaignMapIconTextButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.PreConstruct
struct UCampaignMapIconTextButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.SetTabLabelInfo
struct UCampaignMapIconTextButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UCampaignMapIconTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.OnTriggeredInputActionChanged
struct UCampaignMapIconTextButton_C_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle*                        NewTriggeredAction;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.OnActionProgress
struct UCampaignMapIconTextButton_C_OnActionProgress_Params
{
	float*                                             HeldPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.OnActionComplete
struct UCampaignMapIconTextButton_C_OnActionComplete_Params
{
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.Construct
struct UCampaignMapIconTextButton_C_Construct_Params
{
};

// Function CampaignMapIconTextButton.CampaignMapIconTextButton_C.ExecuteUbergraph_CampaignMapIconTextButton
struct UCampaignMapIconTextButton_C_ExecuteUbergraph_CampaignMapIconTextButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
