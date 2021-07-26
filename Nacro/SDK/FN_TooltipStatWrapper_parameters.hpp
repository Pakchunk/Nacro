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

// Function TooltipStatWrapper.TooltipStatWrapper_C.ShowUpgradeArrow
struct UTooltipStatWrapper_C_ShowUpgradeArrow_Params
{
	ESlateVisibility                                   InVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipStatWrapper.TooltipStatWrapper_C.Construct
struct UTooltipStatWrapper_C_Construct_Params
{
};

// Function TooltipStatWrapper.TooltipStatWrapper_C.ExecuteUbergraph_TooltipStatWrapper
struct UTooltipStatWrapper_C_ExecuteUbergraph_TooltipStatWrapper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
