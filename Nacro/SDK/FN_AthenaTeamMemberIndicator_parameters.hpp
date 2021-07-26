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

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Talking Changed
struct UAthenaTeamMemberIndicator_C_On_Team_Talking_Changed_Params
{
	TArray<bool>                                       Team_Talking;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Reviving Changed
struct UAthenaTeamMemberIndicator_C_On_Team_Reviving_Changed_Params
{
	TArray<bool>                                       Team_Reviving;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team DBNO Changed
struct UAthenaTeamMemberIndicator_C_On_Team_DBNO_Changed_Params
{
	TArray<bool>                                       DBNOStates;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Construct
struct UAthenaTeamMemberIndicator_C_Construct_Params
{
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Tick
struct UAthenaTeamMemberIndicator_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Destruct
struct UAthenaTeamMemberIndicator_C_Destruct_Params
{
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Update Pawn
struct UAthenaTeamMemberIndicator_C_Update_Pawn_Params
{
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator
struct UAthenaTeamMemberIndicator_C_ExecuteUbergraph_AthenaTeamMemberIndicator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
