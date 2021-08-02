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

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.UpdateVisibility
struct UQuestTalkingHeadWidget_C_UpdateVisibility_Params
{
};

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleShouldBlockSubtitlePortraitChanged
struct UQuestTalkingHeadWidget_C_HandleShouldBlockSubtitlePortraitChanged_Params
{
	bool                                               ShouldBlockSubtitlePortrait;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadEnd
struct UQuestTalkingHeadWidget_C_HandleTalkingHeadEnd_Params
{
};

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadBegin
struct UQuestTalkingHeadWidget_C_HandleTalkingHeadBegin_Params
{
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Subtitle;                                                 // (Parm)
	EFortAnnouncementDisplayPreference                 DisplayPreference;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadSubtitle
struct UQuestTalkingHeadWidget_C_SetTalkingHeadSubtitle_Params
{
	struct FText                                       Subtitle;                                                 // (Parm)
};

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadName
struct UQuestTalkingHeadWidget_C_SetTalkingHeadName_Params
{
	struct FText                                       Title;                                                    // (Parm)
};

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadImage
struct UQuestTalkingHeadWidget_C_SetTalkingHeadImage_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.Construct
struct UQuestTalkingHeadWidget_C_Construct_Params
{
};

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.ExecuteUbergraph_QuestTalkingHeadWidget
struct UQuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
