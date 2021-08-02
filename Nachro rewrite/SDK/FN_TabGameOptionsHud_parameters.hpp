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

// Function TabGameOptionsHud.TabGameOptionsHud_C.Construct
struct UTabGameOptionsHud_C_Construct_Params
{
};

// Function TabGameOptionsHud.TabGameOptionsHud_C.UpdateOptionsTab
struct UTabGameOptionsHud_C_UpdateOptionsTab_Params
{
};

// Function TabGameOptionsHud.TabGameOptionsHud_C.CenterOnTab
struct UTabGameOptionsHud_C_CenterOnTab_Params
{
};

// Function TabGameOptionsHud.TabGameOptionsHud_C.BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature
struct UTabGameOptionsHud_C_BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGameOptionsHud.TabGameOptionsHud_C.HUD Changed
struct UTabGameOptionsHud_C_HUD_Changed_Params
{
	int                                                Selected_Index;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Gameplay_Tag;                                             // (Parm)
};

// Function TabGameOptionsHud.TabGameOptionsHud_C.ExecuteUbergraph_TabGameOptionsHud
struct UTabGameOptionsHud_C_ExecuteUbergraph_TabGameOptionsHud_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
