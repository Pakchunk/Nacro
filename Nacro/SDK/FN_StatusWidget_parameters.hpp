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

// Function StatusWidget.StatusWidget_C.UpdateLoginStatusText
struct UStatusWidget_C_UpdateLoginStatusText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StatusWidget.StatusWidget_C.SetStatusText
struct UStatusWidget_C_SetStatusText_Params
{
	struct FText                                       Status;                                                   // (Parm)
};

// Function StatusWidget.StatusWidget_C.SetTitleText
struct UStatusWidget_C_SetTitleText_Params
{
	struct FText                                       TitleText;                                                // (Parm)
};

// Function StatusWidget.StatusWidget_C.Construct
struct UStatusWidget_C_Construct_Params
{
};

// Function StatusWidget.StatusWidget_C.Destruct
struct UStatusWidget_C_Destruct_Params
{
};

// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
struct UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
