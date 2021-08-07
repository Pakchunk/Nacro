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

// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveBulletIcon
struct UMissionObjectiveWidgetProviderInterface_C_GetObjectiveBulletIcon_Params
{
	struct FSlateBrush                                 BulletIcon;                                               // (Parm, OutParm)
};

// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveContentWidgetClass
struct UMissionObjectiveWidgetProviderInterface_C_GetObjectiveContentWidgetClass_Params
{
	class UClass*                                      Objective_WIdget_Class;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
