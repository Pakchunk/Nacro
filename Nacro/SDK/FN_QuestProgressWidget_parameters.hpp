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

// Function QuestProgressWidget.QuestProgressWidget_C.Update
struct UQuestProgressWidget_C_Update_Params
{
	int                                                Required;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Achieved;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
