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

// Function MainQuestsTile.MainQuestsTile_C.SetScrollWidget
struct UMainQuestsTile_C_SetScrollWidget_Params
{
};

// Function MainQuestsTile.MainQuestsTile_C.PopulateFilteredObjectives
struct UMainQuestsTile_C_PopulateFilteredObjectives_Params
{
	class UFortQuestItem*                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainQuestsTile.MainQuestsTile_C.HandleQuestChanged
struct UMainQuestsTile_C_HandleQuestChanged_Params
{
};

// Function MainQuestsTile.MainQuestsTile_C.Construct
struct UMainQuestsTile_C_Construct_Params
{
};

// Function MainQuestsTile.MainQuestsTile_C.HandleButtonClick
struct UMainQuestsTile_C_HandleButtonClick_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainQuestsTile.MainQuestsTile_C.HandleQuestsUpdated
struct UMainQuestsTile_C_HandleQuestsUpdated_Params
{
};

// Function MainQuestsTile.MainQuestsTile_C.PlayDialogIfRequired
struct UMainQuestsTile_C_PlayDialogIfRequired_Params
{
};

// Function MainQuestsTile.MainQuestsTile_C.ExecuteUbergraph_MainQuestsTile
struct UMainQuestsTile_C_ExecuteUbergraph_MainQuestsTile_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
