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

// Function HUD_TeamInfo.HUD_TeamInfo_C.HandleTeamHitInfoChanged
struct UHUD_TeamInfo_C_HandleTeamHitInfoChanged_Params
{
	TArray<float>                                      HealthFractions;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      ShieldFractions;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HUD_TeamInfo.HUD_TeamInfo_C.ClearContents
struct UHUD_TeamInfo_C_ClearContents_Params
{
};

// Function HUD_TeamInfo.HUD_TeamInfo_C.AppendTeamMember
struct UHUD_TeamInfo_C_AppendTeamMember_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (Parm, OutParm, ReferenceParm)
};

// Function HUD_TeamInfo.HUD_TeamInfo_C.ShiftTeamMembers
struct UHUD_TeamInfo_C_ShiftTeamMembers_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamInfo.HUD_TeamInfo_C.HandleTeamMemberChanged
struct UHUD_TeamInfo_C_HandleTeamMemberChanged_Params
{
	struct FFortTeamMemberInfo                         Member_Info;                                              // (Parm)
};

// Function HUD_TeamInfo.HUD_TeamInfo_C.HandleTeamMemberRemoved
struct UHUD_TeamInfo_C_HandleTeamMemberRemoved_Params
{
	int                                                Member_Index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamInfo.HUD_TeamInfo_C.Construct
struct UHUD_TeamInfo_C_Construct_Params
{
};

// Function HUD_TeamInfo.HUD_TeamInfo_C.HandlePartyLeft
struct UHUD_TeamInfo_C_HandlePartyLeft_Params
{
};

// Function HUD_TeamInfo.HUD_TeamInfo_C.ExecuteUbergraph_HUD_TeamInfo
struct UHUD_TeamInfo_C_ExecuteUbergraph_HUD_TeamInfo_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
