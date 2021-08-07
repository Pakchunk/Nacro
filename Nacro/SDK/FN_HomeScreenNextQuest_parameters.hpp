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

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.HandleBeyondCutOffQuest
struct UHomeScreenNextQuest_C_HandleBeyondCutOffQuest_Params
{
};

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.ConfigureScreenForEvent
struct UHomeScreenNextQuest_C_ConfigureScreenForEvent_Params
{
};

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.UpdateSceenBasedOnQuestMapShown
struct UHomeScreenNextQuest_C_UpdateSceenBasedOnQuestMapShown_Params
{
};

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.UpdateButtonBasedOnEventStatus
struct UHomeScreenNextQuest_C_UpdateButtonBasedOnEventStatus_Params
{
	bool                                               EventIsActive;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature
struct UHomeScreenNextQuest_C_BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.Handle Event Flags Changed
struct UHomeScreenNextQuest_C_Handle_Event_Flags_Changed_Params
{
	TArray<struct FString>                             ActiveEventFlags;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.Construct
struct UHomeScreenNextQuest_C_Construct_Params
{
};

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.HandleTabSwitch
struct UHomeScreenNextQuest_C_HandleTabSwitch_Params
{
};

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.OnActivated
struct UHomeScreenNextQuest_C_OnActivated_Params
{
};

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.ExecuteUbergraph_HomeScreenNextQuest
struct UHomeScreenNextQuest_C_ExecuteUbergraph_HomeScreenNextQuest_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
