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

// Function InputReflector.InputReflector_C.OnButtonAdded
struct UInputReflector_C_OnButtonAdded_Params
{
	class UCommonButton**                              AddedButton;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCommonInputActionHandlerData*              Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function InputReflector.InputReflector_C.ClearButtons
struct UInputReflector_C_ClearButtons_Params
{
};

// Function InputReflector.InputReflector_C.Construct
struct UInputReflector_C_Construct_Params
{
};

// Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector
struct UInputReflector_C_ExecuteUbergraph_InputReflector_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
