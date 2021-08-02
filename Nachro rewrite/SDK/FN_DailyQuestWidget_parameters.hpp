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

// Function DailyQuestWidget.DailyQuestWidget_C.CreateAllObjectiveWidgets
struct UDailyQuestWidget_C_CreateAllObjectiveWidgets_Params
{
};

// Function DailyQuestWidget.DailyQuestWidget_C.UpdateObjectiveWidgets
struct UDailyQuestWidget_C_UpdateObjectiveWidgets_Params
{
};

// Function DailyQuestWidget.DailyQuestWidget_C.FilterObjectives
struct UDailyQuestWidget_C_FilterObjectives_Params
{
};

// Function DailyQuestWidget.DailyQuestWidget_C.SetQuestItem
struct UDailyQuestWidget_C_SetQuestItem_Params
{
	class UFortQuestItem*                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
