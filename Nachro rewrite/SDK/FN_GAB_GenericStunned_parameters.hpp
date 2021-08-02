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

// Function GAB_GenericStunned.GAB_GenericStunned_C.K2_OnEndAbility
struct UGAB_GenericStunned_C_K2_OnEndAbility_Params
{
};

// Function GAB_GenericStunned.GAB_GenericStunned_C.K2_ActivateAbilityFromEvent
struct UGAB_GenericStunned_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_GenericStunned.GAB_GenericStunned_C.ExecuteUbergraph_GAB_GenericStunned
struct UGAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
