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

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleCursorModeChanged
struct UPinnedSchematicItemWidget_C_HandleCursorModeChanged_Params
{
	bool                                               CursorModeEnabled;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentWidget;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.UnbindDelegates
struct UPinnedSchematicItemWidget_C_UnbindDelegates_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ClearPinnedSchematic
struct UPinnedSchematicItemWidget_C_ClearPinnedSchematic_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleItemChanged
struct UPinnedSchematicItemWidget_C_HandleItemChanged_Params
{
	bool                                               ItemChanged;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AmmoChanged;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IngredientsChanged;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetupIngredients
struct UPinnedSchematicItemWidget_C_SetupIngredients_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleWorldItemListChanged
struct UPinnedSchematicItemWidget_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleOnSchematicUnlocked
struct UPinnedSchematicItemWidget_C_HandleOnSchematicUnlocked_Params
{
	class UFortSchematicItem*                          Schematic;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.BindDelegates
struct UPinnedSchematicItemWidget_C_BindDelegates_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetPinnedSchematic
struct UPinnedSchematicItemWidget_C_SetPinnedSchematic_Params
{
	class UFortSchematicItem*                          NewPinnedSchematic;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.Refresh
struct UPinnedSchematicItemWidget_C_Refresh_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.PinButton_Clicked
struct UPinnedSchematicItemWidget_C_PinButton_Clicked_Params
{
	class UFortBaseButton*                             NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ExecuteUbergraph_PinnedSchematicItemWidget
struct UPinnedSchematicItemWidget_C_ExecuteUbergraph_PinnedSchematicItemWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
