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

// Function Parent_Tree.Parent_Tree_C.RemoveTestWind
struct AParent_Tree_C_RemoveTestWind_Params
{
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Parent_Tree.Parent_Tree_C.AddTestWind
struct AParent_Tree_C_AddTestWind_Params
{
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Parent_Tree.Parent_Tree_C.FX_UpdateEmitterParameters
struct AParent_Tree_C_FX_UpdateEmitterParameters_Params
{
};

// Function Parent_Tree.Parent_Tree_C.FX_UpdateEmitterStates
struct AParent_Tree_C_FX_UpdateEmitterStates_Params
{
};

// Function Parent_Tree.Parent_Tree_C.UserConstructionScript
struct AParent_Tree_C_UserConstructionScript_Params
{
};

// Function Parent_Tree.Parent_Tree_C.ReceiveDestroyed
struct AParent_Tree_C_ReceiveDestroyed_Params
{
};

// Function Parent_Tree.Parent_Tree_C.ChangeWindIntensity
struct AParent_Tree_C_ChangeWindIntensity_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time_It_Takes_To_Reach_New_Intensity;                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Parent_Tree.Parent_Tree_C.ExecuteUbergraph_Parent_Tree
struct AParent_Tree_C_ExecuteUbergraph_Parent_Tree_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
