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

// Function Results_Summary.Results_Summary_C.Focus
struct UResults_Summary_C_Focus_Params
{
};

// Function Results_Summary.Results_Summary_C.InitializeRewards
struct UResults_Summary_C_InitializeRewards_Params
{
	TArray<class UFortItem*>                           Items;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InTotalMissionPoints;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Summary.Results_Summary_C.DoDesignTimeRandomization
struct UResults_Summary_C_DoDesignTimeRandomization_Params
{
};

// Function Results_Summary.Results_Summary_C.Initialize
struct UResults_Summary_C_Initialize_Params
{
	class UFortUIScoreReport*                          InScoreReport;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           InRewardItems;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InTotalMissionPoints;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Summary.Results_Summary_C.InitializeLootChest
struct UResults_Summary_C_InitializeLootChest_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Summary.Results_Summary_C.PreConstruct
struct UResults_Summary_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Summary.Results_Summary_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature
struct UResults_Summary_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Summary.Results_Summary_C.ExecuteUbergraph_Results_Summary
struct UResults_Summary_C_ExecuteUbergraph_Results_Summary_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Summary.Results_Summary_C.OnReturnClicked__DelegateSignature
struct UResults_Summary_C_OnReturnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
