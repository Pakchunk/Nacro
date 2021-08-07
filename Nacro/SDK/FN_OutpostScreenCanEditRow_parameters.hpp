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

// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.CenterWidget
struct UOutpostScreenCanEditRow_C_CenterWidget_Params
{
};

// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.Init
struct UOutpostScreenCanEditRow_C_Init_Params
{
	class AFortPlayerStateOutpost*                     InPlayer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerStateOutpost*                     InOutpostOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
struct UOutpostScreenCanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.ExecuteUbergraph_OutpostScreenCanEditRow
struct UOutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
