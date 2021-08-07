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

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.GetHeightEstimate
struct UDefaultObjectiveContentWidget_C_GetHeightEstimate_Params
{
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleTimerComponentUpdated
struct UDefaultObjectiveContentWidget_C_HandleTimerComponentUpdated_Params
{
	class UFortMissionTimerComponent*                  InTimerComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.CreateRichTextBlock
struct UDefaultObjectiveContentWidget_C_CreateRichTextBlock_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.GetRichTextBlock
struct UDefaultObjectiveContentWidget_C_GetRichTextBlock_Params
{
	class UMissionRichText_C*                          MissionRichTextBlock;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.Update
struct UDefaultObjectiveContentWidget_C_Update_Params
{
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.Setup
struct UDefaultObjectiveContentWidget_C_Setup_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInConfigureAsHUD;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleObjectiveStatusChanged
struct UDefaultObjectiveContentWidget_C_HandleObjectiveStatusChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EFortObjectiveStatus                               NewStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleObjectiveVisibilityChanged
struct UDefaultObjectiveContentWidget_C_HandleObjectiveVisibilityChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleUpdate
struct UDefaultObjectiveContentWidget_C_HandleUpdate_Params
{
	class AFortMissionState*                           MissionState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.ExecuteUbergraph_DefaultObjectiveContentWidget
struct UDefaultObjectiveContentWidget_C_ExecuteUbergraph_DefaultObjectiveContentWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
