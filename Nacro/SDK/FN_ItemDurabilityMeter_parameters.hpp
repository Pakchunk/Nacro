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

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Set Backfill Color
struct UItemDurabilityMeter_C_Set_Backfill_Color_Params
{
	struct FLinearColor                                Backfill_Color;                                           // (Parm, IsPlainOldData)
};

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Set Durability
struct UItemDurabilityMeter_C_Set_Durability_Params
{
	float                                              Durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Update
struct UItemDurabilityMeter_C_Update_Params
{
	struct FVector2D                                   Draw_Size;                                                // (Parm, IsPlainOldData)
	float                                              Durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Construct
struct UItemDurabilityMeter_C_Construct_Params
{
};

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.ExecuteUbergraph_ItemDurabilityMeter
struct UItemDurabilityMeter_C_ExecuteUbergraph_ItemDurabilityMeter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
