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

// Function LCD_Constr_PortoPotty.LCD_Constr_PortoPotty_C.UserConstructionScript
struct ALCD_Constr_PortoPotty_C_UserConstructionScript_Params
{
};

// Function LCD_Constr_PortoPotty.LCD_Constr_PortoPotty_C.OnLoot
struct ALCD_Constr_PortoPotty_C_OnLoot_Params
{
};

// Function LCD_Constr_PortoPotty.LCD_Constr_PortoPotty_C.OnDeathPlayEffects
struct ALCD_Constr_PortoPotty_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function LCD_Constr_PortoPotty.LCD_Constr_PortoPotty_C.ExecuteUbergraph_LCD_Constr_PortoPotty
struct ALCD_Constr_PortoPotty_C_ExecuteUbergraph_LCD_Constr_PortoPotty_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
