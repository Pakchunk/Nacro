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

// Function HUD.HUD_C.CheckHUDElementVisibility
struct UHUD_C_CheckHUDElementVisibility_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                HUDElementTagToCheck;                                     // (Parm)
	class UWidget*                                     HUDElement;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HUD.HUD_C.OnHUDElementVisibilityChanged
struct UHUD_C_OnHUDElementVisibilityChanged_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (Parm, OutParm, ReferenceParm)
};

// Function HUD.HUD_C.OnManagementTabSelected
struct UHUD_C_OnManagementTabSelected_Params
{
	struct FName                                       TabName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.PopContentWidgetInternal
struct UHUD_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (Parm)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD.HUD_C.CreateInterestIndicatorWidget
struct UHUD_C_CreateInterestIndicatorWidget_Params
{
};

// Function HUD.HUD_C.HandleOnPointOfInterestRemoved
struct UHUD_C_HandleOnPointOfInterestRemoved_Params
{
	class AActor*                                      PointOfInterest;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.HandleOnPointOfInterestAdded
struct UHUD_C_HandleOnPointOfInterestAdded_Params
{
	class AActor*                                      PointOfInterest;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // (Parm)
	class UTexture2D*                                  DisplayImage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.ShowPicker
struct UHUD_C_ShowPicker_Params
{
	EFortPickerMode                                    Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InitialOption;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreFirstAccept;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.OnHordeTierCompleteWidgetFinished
struct UHUD_C_OnHordeTierCompleteWidgetFinished_Params
{
};

// Function HUD.HUD_C.HandleHordeTierComplete
struct UHUD_C_HandleHordeTierComplete_Params
{
	EFortCompletionResult                              Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.HandleFocusChat
struct UHUD_C_HandleFocusChat_Params
{
};

// Function HUD.HUD_C.ToggleTopLevelMenu
struct UHUD_C_ToggleTopLevelMenu_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.ToggleChat
struct UHUD_C_ToggleChat_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.SetPersistentHUDContentVisibility
struct UHUD_C_SetPersistentHUDContentVisibility_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.HandleIndicatorModeChanged
struct UHUD_C_HandleIndicatorModeChanged_Params
{
	bool                                               InidicatorsEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.SetCursorModeContent
struct UHUD_C_SetCursorModeContent_Params
{
	class UUserWidget*                                 CustomWidget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HUD.HUD_C.SetGameMode
struct UHUD_C_SetGameMode_Params
{
};

// Function HUD.HUD_C.OnPlayerTargetingChanged
struct UHUD_C_OnPlayerTargetingChanged_Params
{
	bool                                               IsTargeting;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.HandleKeybindsChanged
struct UHUD_C_HandleKeybindsChanged_Params
{
};

// Function HUD.HUD_C.HandleZoneCompleted
struct UHUD_C_HandleZoneCompleted_Params
{
};

// Function HUD.HUD_C.OnHandleAction
struct UHUD_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (Parm, OutParm)
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.SetQuickbarSizes
struct UHUD_C_SetQuickbarSizes_Params
{
};

// Function HUD.HUD_C.HandleQuickbarSlotFocusSlotChanged
struct UHUD_C_HandleQuickbarSlotFocusSlotChanged_Params
{
	EFortQuickBars                                     Quickbar_Index;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.HandleCursorModeChanged
struct UHUD_C_HandleCursorModeChanged_Params
{
	bool                                               IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentCustomWidget;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A
struct UHUD_C_OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A_Params
{
};

// Function HUD.HUD_C.OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A
struct UHUD_C_OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A_Params
{
};

// Function HUD.HUD_C.OnEnterState
struct UHUD_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.QuestsCompleted
struct UHUD_C_QuestsCompleted_Params
{
	TArray<class UFortQuestItem*>                      Quests;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HUD.HUD_C.Construct
struct UHUD_C_Construct_Params
{
};

// Function HUD.HUD_C.LoadingScreenChanged
struct UHUD_C_LoadingScreenChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.EndOfDayRecapStarted
struct UHUD_C_EndOfDayRecapStarted_Params
{
	struct FEndOfDayRecap                              EndOfDayRecap;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function HUD.HUD_C.EndOfDayRecapEnded
struct UHUD_C_EndOfDayRecapEnded_Params
{
};

// Function HUD.HUD_C.PushContentWidgetInternal
struct UHUD_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (Parm)
};

// Function HUD.HUD_C.Destruct
struct UHUD_C_Destruct_Params
{
};

// Function HUD.HUD_C.HandleInputMethodChanged
struct UHUD_C_HandleInputMethodChanged_Params
{
	bool                                               UsingGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
struct UHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params
{
};

// Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
struct UHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params
{
};

// Function HUD.HUD_C.ExecuteUbergraph_HUD
struct UHUD_C_ExecuteUbergraph_HUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
