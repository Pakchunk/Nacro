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

// Function Announcement_Tutorial.Announcement_Tutorial_C.ContinueTutorial
struct UAnnouncement_Tutorial_C_ContinueTutorial_Params
{
};

// Function Announcement_Tutorial.Announcement_Tutorial_C.CheckContinueTutorial
struct UAnnouncement_Tutorial_C_CheckContinueTutorial_Params
{
	struct FFortClientAnnouncementData_Tutorial        TutorialData;                                             // (Parm)
};

// Function Announcement_Tutorial.Announcement_Tutorial_C.GetLightboxVisibility
struct UAnnouncement_Tutorial_C_GetLightboxVisibility_Params
{
	struct FFortClientAnnouncementData_Tutorial        FortClientAnnouncementData_Tutorial;                      // (ConstParm, Parm, OutParm, ReferenceParm)
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Announcement_Tutorial.Announcement_Tutorial_C.RefreshTextLines
struct UAnnouncement_Tutorial_C_RefreshTextLines_Params
{
};

// Function Announcement_Tutorial.Announcement_Tutorial_C.UpdateTutorialData
struct UAnnouncement_Tutorial_C_UpdateTutorialData_Params
{
	struct FFortClientAnnouncementData_Tutorial        TutorialData;                                             // (Parm)
};

// Function Announcement_Tutorial.Announcement_Tutorial_C.AddTextLine
struct UAnnouncement_Tutorial_C_AddTextLine_Params
{
	struct FText                                       Text;                                                     // (Parm)
	bool                                               Transparent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleUpdateTutorial
struct UAnnouncement_Tutorial_C_HandleUpdateTutorial_Params
{
	struct FFortClientAnnouncementData_Tutorial        TutorialData;                                             // (Parm)
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Tutorial.Announcement_Tutorial_C.Construct
struct UAnnouncement_Tutorial_C_Construct_Params
{
};

// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingShowUI
struct UAnnouncement_Tutorial_C_HandleClientEvent_OnboardingShowUI_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingHideUI
struct UAnnouncement_Tutorial_C_HandleClientEvent_OnboardingHideUI_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Announcement_Tutorial.Announcement_Tutorial_C.ResetTutorialAnnoucementWidget
struct UAnnouncement_Tutorial_C_ResetTutorialAnnoucementWidget_Params
{
};

// Function Announcement_Tutorial.Announcement_Tutorial_C.ExecuteUbergraph_Announcement_Tutorial
struct UAnnouncement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
