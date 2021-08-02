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

// Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id
struct UHorizontalTabList_C_Get_Tab_From_Id_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.ChangeInputBindings
struct UHorizontalTabList_C_ChangeInputBindings_Params
{
	struct FDataTableRowHandle                         NextBinding;                                              // (Parm)
	struct FDataTableRowHandle                         PreviousBinding;                                          // (Parm)
};

// Function HorizontalTabList.HorizontalTabList_C.Construct
struct UHorizontalTabList_C_Construct_Params
{
};

// Function HorizontalTabList.HorizontalTabList_C.Handle OnInputMethodChanged
struct UHorizontalTabList_C_Handle_OnInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.PreConstruct
struct UHorizontalTabList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.Previous Visibility
struct UHorizontalTabList_C_Previous_Visibility_Params
{
};

// Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated
struct UHorizontalTabList_C_HandleTabCreated_Params
{
	struct FName*                                      TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton**                              TabButton;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.CustomEvent_1
struct UHorizontalTabList_C_CustomEvent_1_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList
struct UHorizontalTabList_C_ExecuteUbergraph_HorizontalTabList_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
