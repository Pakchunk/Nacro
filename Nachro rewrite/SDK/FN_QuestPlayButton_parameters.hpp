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

// Function QuestPlayButton.QuestPlayButton_C.OnLobbyDisconnected
struct UQuestPlayButton_C_OnLobbyDisconnected_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.UpdateQuestStatus
struct UQuestPlayButton_C_UpdateQuestStatus_Params
{
	bool                                               bInCanPlayQuest;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.GetActiveTileType
struct UQuestPlayButton_C_GetActiveTileType_Params
{
	EFortTheaterMapTileType                            TileType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.CalculateCritMissionDifficulty
struct UQuestPlayButton_C_CalculateCritMissionDifficulty_Params
{
	float                                              OverrideMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutDifficultyMin;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDifficultyMax;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.SetPlayButtonEnable
struct UQuestPlayButton_C_SetPlayButtonEnable_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.CanPlayQuest
struct UQuestPlayButton_C_CanPlayQuest_Params
{
	bool                                               CanPlay;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.CanNavigateToQuestObjective
struct UQuestPlayButton_C_CanNavigateToQuestObjective_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.AttemptPlayQuest
struct UQuestPlayButton_C_AttemptPlayQuest_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.AttemptNavigationToQuestObjective
struct UQuestPlayButton_C_AttemptNavigationToQuestObjective_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.SetQuest
struct UQuestPlayButton_C_SetQuest_Params
{
	class UFortQuestItem*                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.Construct
struct UQuestPlayButton_C_Construct_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
struct UQuestPlayButton_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.ForceClick
struct UQuestPlayButton_C_ForceClick_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingStarted
struct UQuestPlayButton_C_OnMatchmakingStarted_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingCompleted
struct UQuestPlayButton_C_OnMatchmakingCompleted_Params
{
	EMatchmakingCompleteResult                         Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.OnPlayerStateChanged
struct UQuestPlayButton_C_OnPlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function QuestPlayButton.QuestPlayButton_C.Destruct
struct UQuestPlayButton_C_Destruct_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.Tick
struct UQuestPlayButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.ExecuteUbergraph_QuestPlayButton
struct UQuestPlayButton_C_ExecuteUbergraph_QuestPlayButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
