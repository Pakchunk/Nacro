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

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.InitializeSettings
struct UPerkTierWidgetNew_C_InitializeSettings_Params
{
	bool                                               bIncludeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDescription;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        IconSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortUIPerkTier                             FortPerkTier;                                             // (Parm)
};

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.Construct
struct UPerkTierWidgetNew_C_Construct_Params
{
};

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.OnGeneratePerk
struct UPerkTierWidgetNew_C_OnGeneratePerk_Params
{
	struct FFortUIPerk*                                Perk;                                                     // (Parm)
	class UFortPerkWidget_NUI**                        PerkWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.ExecuteUbergraph_PerkTierWidgetNew
struct UPerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
