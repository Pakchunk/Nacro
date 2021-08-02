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

// Function Announcement_Layout.Announcement_Layout_C.CreateAnnouncementWidget
struct UAnnouncement_Layout_C_CreateAnnouncementWidget_Params
{
	class UClass*                                      NewWidgetClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceCreateUI;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortAnnouncementWidget*                     NewWidget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Layout.Announcement_Layout_C.SwapAnnouncementUIContent
struct UAnnouncement_Layout_C_SwapAnnouncementUIContent_Params
{
	class AFortClientAnnouncement*                     NewAnnouncement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Layout.Announcement_Layout_C.Construct
struct UAnnouncement_Layout_C_Construct_Params
{
};

// Function Announcement_Layout.Announcement_Layout_C.OnStartNewAnnouncement
struct UAnnouncement_Layout_C_OnStartNewAnnouncement_Params
{
	class AFortClientAnnouncement*                     NewAnnouncement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Layout.Announcement_Layout_C.ExecuteUbergraph_Announcement_Layout
struct UAnnouncement_Layout_C_ExecuteUbergraph_Announcement_Layout_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
