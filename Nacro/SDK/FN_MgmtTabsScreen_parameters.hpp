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

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleMgmtMenuTabChangeRequested
struct UMgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested_Params
{
	struct FName                                       TabName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleDamageReceived
struct UMgmtTabsScreen_C_HandleDamageReceived_Params
{
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleCursorModeChanged
struct UMgmtTabsScreen_C_HandleCursorModeChanged_Params
{
	bool                                               IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentCustomWidget;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.OnActivated
struct UMgmtTabsScreen_C_OnActivated_Params
{
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
struct UMgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.Construct
struct UMgmtTabsScreen_C_Construct_Params
{
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.Destruct
struct UMgmtTabsScreen_C_Destruct_Params
{
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowQuests
struct UMgmtTabsScreen_C_HandleShowQuests_Params
{
	EFortUIFeature                                     ChangedFeature;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowObjectives
struct UMgmtTabsScreen_C_HandleShowObjectives_Params
{
	EFortUIFeature                                     ChangedFeature;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.ExecuteUbergraph_MgmtTabsScreen
struct UMgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
