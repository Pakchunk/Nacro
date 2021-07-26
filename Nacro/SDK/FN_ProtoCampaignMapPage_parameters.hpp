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

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForIncompleteQuest-Halloween Event
struct UProtoCampaignMapPage_C_CheckForIncompleteQuest_Halloween_Event_Params
{
	bool                                               TargetQuestFound;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TargetQuestPageIndex;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.SetBackgroundImage
struct UProtoCampaignMapPage_C_SetBackgroundImage_Params
{
};

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForMainQuest
struct UProtoCampaignMapPage_C_CheckForMainQuest_Params
{
	bool                                               TargetQuestFound;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TargetQuestPageIndex;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.GetMainQuest
struct UProtoCampaignMapPage_C_GetMainQuest_Params
{
	class UFortQuestItem*                              outCurentMainQuest;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.PreConstruct
struct UProtoCampaignMapPage_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.Construct
struct UProtoCampaignMapPage_C_Construct_Params
{
};

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.ExecuteUbergraph_ProtoCampaignMapPage
struct UProtoCampaignMapPage_C_ExecuteUbergraph_ProtoCampaignMapPage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
