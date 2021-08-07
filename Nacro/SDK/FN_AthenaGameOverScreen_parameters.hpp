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

// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Died
struct UAthenaGameOverScreen_C_On_Player_Died_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Won
struct UAthenaGameOverScreen_C_On_Player_Won_Params
{
};

// Function AthenaGameOverScreen.AthenaGameOverScreen_C.HandleRevived
struct UAthenaGameOverScreen_C_HandleRevived_Params
{
};

// Function AthenaGameOverScreen.AthenaGameOverScreen_C.Construct
struct UAthenaGameOverScreen_C_Construct_Params
{
};

// Function AthenaGameOverScreen.AthenaGameOverScreen_C.Clear GameOver Screen
struct UAthenaGameOverScreen_C_Clear_GameOver_Screen_Params
{
};

// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Team Won
struct UAthenaGameOverScreen_C_On_Team_Won_Params
{
};

// Function AthenaGameOverScreen.AthenaGameOverScreen_C.ExecuteUbergraph_AthenaGameOverScreen
struct UAthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
