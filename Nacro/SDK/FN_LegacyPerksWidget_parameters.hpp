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

// Function LegacyPerksWidget.LegacyPerksWidget_C.Construct
struct ULegacyPerksWidget_C_Construct_Params
{
};

// Function LegacyPerksWidget.LegacyPerksWidget_C.OnGeneratePerkTier
struct ULegacyPerksWidget_C_OnGeneratePerkTier_Params
{
	struct FFortUIPerkTier*                            FortPerkTier;                                             // (Parm)
};

// Function LegacyPerksWidget.LegacyPerksWidget_C.ExecuteUbergraph_LegacyPerksWidget
struct ULegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
