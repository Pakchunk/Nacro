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

// Function Node.Node_C.SetHighContrastMode
struct UNode_C_SetHighContrastMode_Params
{
	bool                                               ActivateHighContrast;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Node.Node_C.PreConstruct
struct UNode_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Node.Node_C.Construct
struct UNode_C_Construct_Params
{
};

// Function Node.Node_C.ExecuteUbergraph_Node
struct UNode_C_ExecuteUbergraph_Node_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
