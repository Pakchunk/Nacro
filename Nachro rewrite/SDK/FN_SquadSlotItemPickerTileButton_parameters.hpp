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

// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.UpdateOverlays
struct USquadSlotItemPickerTileButton_C_UpdateOverlays_Params
{
};

// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.SetData
struct USquadSlotItemPickerTileButton_C_SetData_Params
{
	class UObject**                                    InData;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonListView**                            OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleItemSlottedToDifferentSquad
struct USquadSlotItemPickerTileButton_C_HandleItemSlottedToDifferentSquad_Params
{
	struct FHomebaseSquadSlotId*                       SquadSlotId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleSlottingRestrictionReasonsChanged
struct USquadSlotItemPickerTileButton_C_HandleSlottingRestrictionReasonsChanged_Params
{
};

// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.ExecuteUbergraph_SquadSlotItemPickerTileButton
struct USquadSlotItemPickerTileButton_C_ExecuteUbergraph_SquadSlotItemPickerTileButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
