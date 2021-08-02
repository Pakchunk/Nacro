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

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnRemove
struct AGCNL_PurpleStuff_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnActive
struct AGCNL_PurpleStuff_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.UserConstructionScript
struct AGCNL_PurpleStuff_C_UserConstructionScript_Params
{
};

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveBeginPlay
struct AGCNL_PurpleStuff_C_ReceiveBeginPlay_Params
{
};

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveTick
struct AGCNL_PurpleStuff_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ExecuteUbergraph_GCNL_PurpleStuff
struct AGCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
