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

// Function QuantitySelector.QuantitySelector_C.SetCurrentValue
struct UQuantitySelector_C_SetCurrentValue_Params
{
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.GetCurrentValue
struct UQuantitySelector_C_GetCurrentValue_Params
{
	int                                                CurrentValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.SetupForInputMode
struct UQuantitySelector_C_SetupForInputMode_Params
{
	bool                                               IsUsingGamepad;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.SliderValueChanged
struct UQuantitySelector_C_SliderValueChanged_Params
{
};

// Function QuantitySelector.QuantitySelector_C.HandleCancelPressed
struct UQuantitySelector_C_HandleCancelPressed_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.HandleTransferPressed
struct UQuantitySelector_C_HandleTransferPressed_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.HandleMaxPressed
struct UQuantitySelector_C_HandleMaxPressed_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.CloseSelector
struct UQuantitySelector_C_CloseSelector_Params
{
};

// Function QuantitySelector.QuantitySelector_C.SetAdditionalText
struct UQuantitySelector_C_SetAdditionalText_Params
{
	struct FText                                       AdditionalInfoText;                                       // (Parm)
};

// Function QuantitySelector.QuantitySelector_C.SetSplitData
struct UQuantitySelector_C_SetSplitData_Params
{
	int                                                StartingCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaximumCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TitleText;                                                // (Parm)
	struct FText                                       ButtonText;                                               // (Parm)
	struct FText                                       AdditionalInfoText;                                       // (Parm)
};

// Function QuantitySelector.QuantitySelector_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature
struct UQuantitySelector_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature
struct UQuantitySelector_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature
struct UQuantitySelector_C_BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature
struct UQuantitySelector_C_BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.OnActivated
struct UQuantitySelector_C_OnActivated_Params
{
};

// Function QuantitySelector.QuantitySelector_C.OnDeactivated
struct UQuantitySelector_C_OnDeactivated_Params
{
};

// Function QuantitySelector.QuantitySelector_C.Construct
struct UQuantitySelector_C_Construct_Params
{
};

// Function QuantitySelector.QuantitySelector_C.HandleChangeInputMode
struct UQuantitySelector_C_HandleChangeInputMode_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.ExecuteUbergraph_QuantitySelector
struct UQuantitySelector_C_ExecuteUbergraph_QuantitySelector_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.OnStackValueChangedDispatcher__DelegateSignature
struct UQuantitySelector_C_OnStackValueChangedDispatcher__DelegateSignature_Params
{
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   FortItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.OnButtonClickedDispatcher__DelegateSignature
struct UQuantitySelector_C_OnButtonClickedDispatcher__DelegateSignature_Params
{
	int                                                ChosenValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   FortItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
