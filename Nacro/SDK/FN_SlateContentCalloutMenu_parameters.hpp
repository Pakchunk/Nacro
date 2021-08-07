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

// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.Get Size Box
struct USlateContentCalloutMenu_C_Get_Size_Box_Params
{
	class USizeBox*                                    Size_Box;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.Construct
struct USlateContentCalloutMenu_C_Construct_Params
{
};

// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.ExecuteUbergraph_SlateContentCalloutMenu
struct USlateContentCalloutMenu_C_ExecuteUbergraph_SlateContentCalloutMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
