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

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMutedChanged
struct UAthenaTeamInfo_C_HandleTeamMutedChanged_Params
{
	TArray<bool>                                       TeamMuted;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamTalkingChanged
struct UAthenaTeamInfo_C_HandleTeamTalkingChanged_Params
{
	TArray<bool>                                       TeamTalking;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberRemoved
struct UAthenaTeamInfo_C_HandleTeamMemberRemoved_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamRevivingChanged
struct UAthenaTeamInfo_C_HandleTeamRevivingChanged_Params
{
	TArray<bool>                                       TeamReviving;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberPlayerNamesChanged
struct UAthenaTeamInfo_C_HandleTeamMemberPlayerNamesChanged_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDeadChanged
struct UAthenaTeamInfo_C_HandleTeamDeadChanged_Params
{
	TArray<bool>                                       TeamDead;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDBNOChanged
struct UAthenaTeamInfo_C_HandleTeamDBNOChanged_Params
{
	TArray<bool>                                       TeamDBNO;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberAdded
struct UAthenaTeamInfo_C_HandleTeamMemberAdded_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamHitInfoChanged
struct UAthenaTeamInfo_C_HandleTeamHitInfoChanged_Params
{
	TArray<float>                                      HealthFractions;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      ShieldFractions;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.ClearContents
struct UAthenaTeamInfo_C_ClearContents_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.AppendTeamMember
struct UAthenaTeamInfo_C_AppendTeamMember_Params
{
	class AFortPlayerStateAthena*                      PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.Construct
struct UAthenaTeamInfo_C_Construct_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandlePartyLeft
struct UAthenaTeamInfo_C_HandlePartyLeft_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.PreConstruct
struct UAthenaTeamInfo_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.ExecuteUbergraph_AthenaTeamInfo
struct UAthenaTeamInfo_C_ExecuteUbergraph_AthenaTeamInfo_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
