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

// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ConfigureChoice
struct UPlayerChoiceButtonWidget_C_ConfigureChoice_Params
{
	struct FChoiceDataEntry                            Choice;                                                   // (Parm)
	int                                                ChoiceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerChoiceWidget_C*                       Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature
struct UPlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ExecuteUbergraph_PlayerChoiceButtonWidget
struct UPlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
