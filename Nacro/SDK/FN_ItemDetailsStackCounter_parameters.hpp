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

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Refresh Visibility
struct UItemDetailsStackCounter_C_Refresh_Visibility_Params
{
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Set Stack Count
struct UItemDetailsStackCounter_C_Set_Stack_Count_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Update
struct UItemDetailsStackCounter_C_Update_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.PreConstruct
struct UItemDetailsStackCounter_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Construct
struct UItemDetailsStackCounter_C_Construct_Params
{
};

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.ExecuteUbergraph_ItemDetailsStackCounter
struct UItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
