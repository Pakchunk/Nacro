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

// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Draw
struct UTooltipDurabilityMeter_C_Draw_Params
{
	float                                              Normalized;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortDisplayAttribute                       Display_Attribute;                                        // (Parm)
};

// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Construct
struct UTooltipDurabilityMeter_C_Construct_Params
{
};

// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.ExecuteUbergraph_TooltipDurabilityMeter
struct UTooltipDurabilityMeter_C_ExecuteUbergraph_TooltipDurabilityMeter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
