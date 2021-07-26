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

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Teleport
struct APlayerPawn_Generic_Parent_C_Teleport_Params
{
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (Parm)
	bool                                               TeleportOut_;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Default_PlayLength;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.UserConstructionScript
struct APlayerPawn_Generic_Parent_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.GameplayCue.Teleport.Out
struct APlayerPawn_Generic_Parent_C_GameplayCue_Teleport_Out_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay
struct APlayerPawn_Generic_Parent_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.GameplayCue.Teleport.In
struct APlayerPawn_Generic_Parent_C_GameplayCue_Teleport_In_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent
struct APlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
