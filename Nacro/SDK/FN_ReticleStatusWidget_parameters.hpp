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

// Function ReticleStatusWidget.ReticleStatusWidget_C.Construct
struct UReticleStatusWidget_C_Construct_Params
{
};

// Function ReticleStatusWidget.ReticleStatusWidget_C.OnUnableToPerformAction
struct UReticleStatusWidget_C_OnUnableToPerformAction_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (Parm)
	struct FText                                       FailureText;                                              // (Parm)
};

// Function ReticleStatusWidget.ReticleStatusWidget_C.ExecuteUbergraph_ReticleStatusWidget
struct UReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
