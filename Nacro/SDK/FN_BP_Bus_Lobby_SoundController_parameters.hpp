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

// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.UserConstructionScript
struct ABP_Bus_Lobby_SoundController_C_UserConstructionScript_Params
{
};

// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.ReceiveBeginPlay
struct ABP_Bus_Lobby_SoundController_C_ReceiveBeginPlay_Params
{
};

// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.ReceiveTick
struct ABP_Bus_Lobby_SoundController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.On Game Phase Step Changed
struct ABP_Bus_Lobby_SoundController_C_On_Game_Phase_Step_Changed_Params
{
	EAthenaGamePhaseStep                               GamePhaseStep;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.ExecuteUbergraph_BP_Bus_Lobby_SoundController
struct ABP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
