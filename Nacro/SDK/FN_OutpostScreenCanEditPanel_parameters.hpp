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

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.CenterWidget
struct UOutpostScreenCanEditPanel_C_CenterWidget_Params
{
};

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.SetMasterSwitch
struct UOutpostScreenCanEditPanel_C_SetMasterSwitch_Params
{
	bool                                               bCanEdit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Init
struct UOutpostScreenCanEditPanel_C_Init_Params
{
	class AFortPlayerControllerOutpost*                InOutpostOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature
struct UOutpostScreenCanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.Construct
struct UOutpostScreenCanEditPanel_C_Construct_Params
{
};

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleJoined
struct UOutpostScreenCanEditPanel_C_HandleJoined_Params
{
	struct FFortTeamMemberInfo                         NewTeamMemberInfo;                                        // (Parm)
};

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.HandleRemoved
struct UOutpostScreenCanEditPanel_C_HandleRemoved_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature
struct UOutpostScreenCanEditPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_71_CommonSelectedStateChanged__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.PartyUpdated
struct UOutpostScreenCanEditPanel_C_PartyUpdated_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OutpostScreenCanEditPanel.OutpostScreenCanEditPanel_C.ExecuteUbergraph_OutpostScreenCanEditPanel
struct UOutpostScreenCanEditPanel_C_ExecuteUbergraph_OutpostScreenCanEditPanel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
