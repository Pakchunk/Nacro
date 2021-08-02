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

// Function QuestUpdateEntry.QuestUpdateEntry_C.GetNumDisplayedObjectives
struct UQuestUpdateEntry_C_GetNumDisplayedObjectives_Params
{
	int                                                NumObjectives;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.CreateObjectiveEntryWidget
struct UQuestUpdateEntry_C_CreateObjectiveEntryWidget_Params
{
	class UFortQuestObjectiveInfo*                     Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastAchievedCount;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.OnDisappearAnimationFinished
struct UQuestUpdateEntry_C_OnDisappearAnimationFinished_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.OnPostUpdatesDelayFinished
struct UQuestUpdateEntry_C_OnPostUpdatesDelayFinished_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.HaveAllUpdatesFinished
struct UQuestUpdateEntry_C_HaveAllUpdatesFinished_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.IsUpdateActive
struct UQuestUpdateEntry_C_IsUpdateActive_Params
{
	struct FDynamicQuestUpdateInfo                     Update;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.GetObjectiveWidget
struct UQuestUpdateEntry_C_GetObjectiveWidget_Params
{
	class UFortQuestObjectiveInfo*                     QuestObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestObjectiveEntry_C*                      ObjectiveWidget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateStarted
struct UQuestUpdateEntry_C_HasUpdateStarted_Params
{
	struct FDynamicQuestUpdateInfo                     Update;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.OnUpdateFinished
struct UQuestUpdateEntry_C_OnUpdateFinished_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateFinished
struct UQuestUpdateEntry_C_HasUpdateFinished_Params
{
	struct FDynamicQuestUpdateInfo                     Update;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.CanStartUpdate
struct UQuestUpdateEntry_C_CanStartUpdate_Params
{
	int                                                UpdateIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.TryStartUpdates
struct UQuestUpdateEntry_C_TryStartUpdates_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.OnAppearAnimationFinished
struct UQuestUpdateEntry_C_OnAppearAnimationFinished_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.CanAddUpdate
struct UQuestUpdateEntry_C_CanAddUpdate_Params
{
	struct FDynamicQuestUpdateInfo                     UpdateToAdd;                                              // (Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.OnReceiveQuestUpdate
struct UQuestUpdateEntry_C_OnReceiveQuestUpdate_Params
{
	struct FDynamicQuestUpdateInfo                     QuestUpdateInfo;                                          // (Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.Tick
struct UQuestUpdateEntry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.Construct
struct UQuestUpdateEntry_C_Construct_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.ExecuteUbergraph_QuestUpdateEntry
struct UQuestUpdateEntry_C_ExecuteUbergraph_QuestUpdateEntry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.AllQuestUpdatesFinished__DelegateSignature
struct UQuestUpdateEntry_C_AllQuestUpdatesFinished__DelegateSignature_Params
{
	class UQuestUpdateEntry_C*                         UpdateWidget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
