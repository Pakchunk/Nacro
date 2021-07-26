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

// Function MusicManager.MusicManager_C.ResetMusicBools
struct AMusicManager_C_ResetMusicBools_Params
{
};

// Function MusicManager.MusicManager_C.UserConstructionScript
struct AMusicManager_C_UserConstructionScript_Params
{
};

// Function MusicManager.MusicManager_C.OnDayPhaseChanged
struct AMusicManager_C_OnDayPhaseChanged_Params
{
	TEnumAsByte<EFortDayPhase>*                        CurrentDayPhase;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortDayPhase>*                        PreviousDayPhase;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAtCreation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.OnUpdateMusic
struct AMusicManager_C_OnUpdateMusic_Params
{
};

// Function MusicManager.MusicManager_C.PlayAmbientMusic
struct AMusicManager_C_PlayAmbientMusic_Params
{
};

// Function MusicManager.MusicManager_C.ReceiveBeginPlay
struct AMusicManager_C_ReceiveBeginPlay_Params
{
};

// Function MusicManager.MusicManager_C.StartMusic
struct AMusicManager_C_StartMusic_Params
{
};

// Function MusicManager.MusicManager_C.StopMusic
struct AMusicManager_C_StopMusic_Params
{
};

// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
struct AMusicManager_C_ExecuteUbergraph_MusicManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
