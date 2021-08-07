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

// Function NewsEntry.NewsEntry_C.SetFocus
struct UNewsEntry_C_SetFocus_Params
{
};

// Function NewsEntry.NewsEntry_C.Construct
struct UNewsEntry_C_Construct_Params
{
};

// Function NewsEntry.NewsEntry_C.BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature
struct UNewsEntry_C_BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewsEntry.NewsEntry_C.ExecuteUbergraph_NewsEntry
struct UNewsEntry_C_ExecuteUbergraph_NewsEntry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewsEntry.NewsEntry_C.HandleEntrySelected__DelegateSignature
struct UNewsEntry_C_HandleEntrySelected__DelegateSignature_Params
{
	struct FText                                       BodyText;                                                 // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
