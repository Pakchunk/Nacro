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

// Function ItemCount.ItemCount_C.SetBrushAndTextStyle
struct UItemCount_C_SetBrushAndTextStyle_Params
{
	TEnumAsByte<EFortBrushSize>                        InBrushSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCount.ItemCount_C.UpdateOverrideState
struct UItemCount_C_UpdateOverrideState_Params
{
};

// Function ItemCount.ItemCount_C.SetOverrideValue
struct UItemCount_C_SetOverrideValue_Params
{
	int                                                OverrrideValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCount.ItemCount_C.SetIsBeingPreviewed
struct UItemCount_C_SetIsBeingPreviewed_Params
{
	bool                                               BeingPreviewed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCount.ItemCount_C.SetItemDefinition
struct UItemCount_C_SetItemDefinition_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCount.ItemCount_C.Construct
struct UItemCount_C_Construct_Params
{
};

// Function ItemCount.ItemCount_C.PreConstruct
struct UItemCount_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCount.ItemCount_C.ExecuteUbergraph_ItemCount
struct UItemCount_C_ExecuteUbergraph_ItemCount_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
