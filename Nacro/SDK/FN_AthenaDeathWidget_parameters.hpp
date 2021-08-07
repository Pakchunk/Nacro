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

// Function AthenaDeathWidget.AthenaDeathWidget_C.UpdateFollowNextTeammateVisibility
struct UAthenaDeathWidget_C_UpdateFollowNextTeammateVisibility_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.AddTeamMemberIndicator
struct UAthenaDeathWidget_C_AddTeamMemberIndicator_Params
{
	class AFortPlayerStateAthena*                      Player_State;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team_Member_Index;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.AnyTeamMembersStillAlive
struct UAthenaDeathWidget_C_AnyTeamMembersStillAlive_Params
{
	class AFortPlayerControllerAthena*                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AnyAlive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.OnWinnerAnnounced
struct UAthenaDeathWidget_C_OnWinnerAnnounced_Params
{
	struct FString                                     Winner;                                                   // (Parm, ZeroConstructor)
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.HideExtraStuffForSpectating
struct UAthenaDeathWidget_C_HideExtraStuffForSpectating_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.OnViewTargetChanged
struct UAthenaDeathWidget_C_OnViewTargetChanged_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.OnPlaceChanged
struct UAthenaDeathWidget_C_OnPlaceChanged_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.OnPawnDied
struct UAthenaDeathWidget_C_OnPawnDied_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (Parm, OutParm, ReferenceParm)
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
struct UAthenaDeathWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.OnActivated
struct UAthenaDeathWidget_C_OnActivated_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.Construct
struct UAthenaDeathWidget_C_Construct_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.On Kill Feed Updated
struct UAthenaDeathWidget_C_On_Kill_Feed_Updated_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.TeamMemberChanged
struct UAthenaDeathWidget_C_TeamMemberChanged_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.BndEvt__FollowNextTeammate_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
struct UAthenaDeathWidget_C_BndEvt__FollowNextTeammate_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.ExecuteUbergraph_AthenaDeathWidget
struct UAthenaDeathWidget_C_ExecuteUbergraph_AthenaDeathWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
