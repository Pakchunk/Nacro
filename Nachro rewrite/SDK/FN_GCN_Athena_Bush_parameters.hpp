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

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnActive
struct AGCN_Athena_Bush_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnRemove
struct AGCN_Athena_Bush_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.UserConstructionScript
struct AGCN_Athena_Bush_C_UserConstructionScript_Params
{
};

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.ReceiveTick
struct AGCN_Athena_Bush_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.On Player Step
struct AGCN_Athena_Bush_C_On_Player_Step_Params
{
};

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.ExecuteUbergraph_GCN_Athena_Bush
struct AGCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
