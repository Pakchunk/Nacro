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

// Function QuickbarSlot.QuickbarSlot_C.UpdateItemBoxSize
struct UQuickbarSlot_C_UpdateItemBoxSize_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.UpdateItemCardsVisibility
struct UQuickbarSlot_C_UpdateItemCardsVisibility_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped
struct UQuickbarSlot_C_OnCooldownStopped_Params
{
	EFortItemCooldownType                              CooldownType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted
struct UQuickbarSlot_C_OnCooldownStarted_Params
{
	EFortItemCooldownType                              CooldownType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns
struct UQuickbarSlot_C_InitializeCooldowns_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Gamepad
struct UQuickbarSlot_C_GetKeyBindingAction_Gamepad_Params
{
	struct FName                                       KeyBindingAction;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Keyboard
struct UQuickbarSlot_C_GetKeyBindingAction_Keyboard_Params
{
	struct FName                                       Key_Binding_Action;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction
struct UQuickbarSlot_C_GetKeyBindingAction_Params
{
	struct FName                                       KeyBindingAction;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingVisibility
struct UQuickbarSlot_C_UpdateKeyBindingVisibility_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingText
struct UQuickbarSlot_C_UpdateKeyBindingText_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.Resize
struct UQuickbarSlot_C_Resize_Params
{
	EFortItemCardSize                                  Card_Size;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.Maximize
struct UQuickbarSlot_C_Maximize_Params
{
	bool                                               ShouldSkipAnimation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.Minimize
struct UQuickbarSlot_C_Minimize_Params
{
	bool                                               ShouldSkipAnimation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.SetSelected
struct UQuickbarSlot_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted
struct UQuickbarSlot_C_HandleMaximizeStarted_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished
struct UQuickbarSlot_C_HandleMinimizeFinished_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished
struct UQuickbarSlot_C_HandleMaximizeFinished_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted
struct UQuickbarSlot_C_HandleMinimizeStarted_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.Tick
struct UQuickbarSlot_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.PreConstruct
struct UQuickbarSlot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.RefreshItem
struct UQuickbarSlot_C_RefreshItem_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.Construct
struct UQuickbarSlot_C_Construct_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.SetAnimatedBoxScaleFactor
struct UQuickbarSlot_C_SetAnimatedBoxScaleFactor_Params
{
	float                                              AnimatedBoxScaleFactor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot
struct UQuickbarSlot_C_ExecuteUbergraph_QuickbarSlot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
