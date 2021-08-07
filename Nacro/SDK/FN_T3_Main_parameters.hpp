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

// Function T3_Main.T3_Main_C.Construct
struct UT3_Main_C_Construct_Params
{
};

// Function T3_Main.T3_Main_C.PreConstruct
struct UT3_Main_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function T3_Main.T3_Main_C.ExecuteUbergraph_T3_Main
struct UT3_Main_C_ExecuteUbergraph_T3_Main_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
