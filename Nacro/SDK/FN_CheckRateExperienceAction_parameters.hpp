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

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.UserConstructionScript
struct ACheckRateExperienceAction_C_UserConstructionScript_Params
{
};

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.HandleClientEvent_FinishedModalQueue
struct ACheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.Execute
struct ACheckRateExperienceAction_C_Execute_Params
{
	struct FFortScriptedActionParams*                  Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.ExecuteUbergraph_CheckRateExperienceAction
struct ACheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
