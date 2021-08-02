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

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleMaximizeShowing
struct UAthenaQuickbarSecondary_C_HandleMaximizeShowing_Params
{
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleShowHideRail
struct UAthenaQuickbarSecondary_C_HandleShowHideRail_Params
{
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleMinimizeHiding
struct UAthenaQuickbarSecondary_C_HandleMinimizeHiding_Params
{
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleKeyBindsChange
struct UAthenaQuickbarSecondary_C_HandleKeyBindsChange_Params
{
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Show Secondary Quickbar Rail
struct UAthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Maximize
struct UAthenaQuickbarSecondary_C_Maximize_Params
{
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Minimize
struct UAthenaQuickbarSecondary_C_Minimize_Params
{
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleKeybindsChanged
struct UAthenaQuickbarSecondary_C_HandleKeybindsChanged_Params
{
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleInputMethodChanged_Bind
struct UAthenaQuickbarSecondary_C_HandleInputMethodChanged_Bind_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Destruct
struct UAthenaQuickbarSecondary_C_Destruct_Params
{
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.OnQuickBarSlotFocusChanged_Bind
struct UAthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Construct
struct UAthenaQuickbarSecondary_C_Construct_Params
{
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.OnQuickbarContentsChanged
struct UAthenaQuickbarSecondary_C_OnQuickbarContentsChanged_Params
{
	EFortQuickBars*                                    QuickbarIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.ExecuteUbergraph_AthenaQuickbarSecondary
struct UAthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
