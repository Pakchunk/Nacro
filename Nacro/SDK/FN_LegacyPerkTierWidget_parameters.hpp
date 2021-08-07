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

// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.Construct
struct ULegacyPerkTierWidget_C_Construct_Params
{
};

// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.OnGeneratePerk
struct ULegacyPerkTierWidget_C_OnGeneratePerk_Params
{
	struct FFortUIPerk*                                Perk;                                                     // (Parm)
};

// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.ExecuteUbergraph_LegacyPerkTierWidget
struct ULegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
