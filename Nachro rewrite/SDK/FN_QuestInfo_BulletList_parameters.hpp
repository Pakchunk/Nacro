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

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.AddEntryWithBrush
struct UQuestInfo_BulletList_C_AddEntryWithBrush_Params
{
	struct FText                                       EntryText;                                                // (Parm)
	struct FSlateBrush                                 EntryIconBrush;                                           // (Parm)
};

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.InitDesignView
struct UQuestInfo_BulletList_C_InitDesignView_Params
{
};

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.AddEntry
struct UQuestInfo_BulletList_C_AddEntry_Params
{
	struct FText                                       EntryText;                                                // (Parm)
};

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.PreConstruct
struct UQuestInfo_BulletList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.Construct
struct UQuestInfo_BulletList_C_Construct_Params
{
};

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.ExecuteUbergraph_QuestInfo_BulletList
struct UQuestInfo_BulletList_C_ExecuteUbergraph_QuestInfo_BulletList_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
