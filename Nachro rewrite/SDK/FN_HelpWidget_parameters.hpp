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

// Function HelpWidget.HelpWidget_C.Init
struct UHelpWidget_C_Init_Params
{
	struct FText                                       inTitle;                                                  // (Parm)
	struct FText                                       inDescription;                                            // (Parm)
	struct FText                                       inStep1_Text;                                             // (Parm)
	struct FText                                       inStep2_Text;                                             // (Parm)
	struct FText                                       inStep3_Text;                                             // (Parm)
	class UTexture2D*                                  inStep1_Picture;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  inStep2_Picture;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  inStep3_Picture;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                inNumOfSteps;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HelpWidget.HelpWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature
struct UHelpWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HelpWidget.HelpWidget_C.Construct
struct UHelpWidget_C_Construct_Params
{
};

// Function HelpWidget.HelpWidget_C.ExecuteUbergraph_HelpWidget
struct UHelpWidget_C_ExecuteUbergraph_HelpWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
