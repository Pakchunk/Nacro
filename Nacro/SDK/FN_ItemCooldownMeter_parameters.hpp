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

// Function ItemCooldownMeter.ItemCooldownMeter_C.GetCooldownMaterial
struct UItemCooldownMeter_C_GetCooldownMaterial_Params
{
	class UMaterialInstanceDynamic*                    CooldownMat;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCooldownMeter.ItemCooldownMeter_C.GetSecondsCorrectedMinutes
struct UItemCooldownMeter_C_GetSecondsCorrectedMinutes_Params
{
	int                                                Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemCooldownMeter.ItemCooldownMeter_C.Set Cooldown
struct UItemCooldownMeter_C_Set_Cooldown_Params
{
	struct FTimespan                                   Time_Left;                                                // (Parm)
};

// Function ItemCooldownMeter.ItemCooldownMeter_C.Update
struct UItemCooldownMeter_C_Update_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
