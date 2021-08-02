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

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateKeyBindingText_SpecialCases
struct UAthenaQuickBarSlot_C_UpdateKeyBindingText_SpecialCases_Params
{
};

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.GetKeyBindingAction_Gamepad
struct UAthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad_Params
{
	struct FName                                       KeyBindingAction;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateKeyBindingText
struct UAthenaQuickBarSlot_C_UpdateKeyBindingText_Params
{
};

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ExecuteUbergraph_AthenaQuickBarSlot
struct UAthenaQuickBarSlot_C_ExecuteUbergraph_AthenaQuickBarSlot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
