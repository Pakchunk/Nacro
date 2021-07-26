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

// Function AthenaPickupManager.AthenaPickupManager_C.UpdateKeybinds
struct UAthenaPickupManager_C_UpdateKeybinds_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.RefreshCounts
struct UAthenaPickupManager_C_RefreshCounts_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.HandleItemPickedUp
struct UAthenaPickupManager_C_HandleItemPickedUp_Params
{
	class UFortWorldItem*                              NewItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPickupManager.AthenaPickupManager_C.HandleMessageExpired
struct UAthenaPickupManager_C_HandleMessageExpired_Params
{
	class UFortUIMessageItemWidget*                    Message_Item;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPickupManager.AthenaPickupManager_C.TryGetNextItem
struct UAthenaPickupManager_C_TryGetNextItem_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.Construct
struct UAthenaPickupManager_C_Construct_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemsChanged
struct UAthenaPickupManager_C_HandleWorldItemsChanged_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemListChanged
struct UAthenaPickupManager_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaPickupManager.AthenaPickupManager_C.Destruct
struct UAthenaPickupManager_C_Destruct_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.HandleBuildingMaterialChanged
struct UAthenaPickupManager_C_HandleBuildingMaterialChanged_Params
{
};

// Function AthenaPickupManager.AthenaPickupManager_C.ExecuteUbergraph_AthenaPickupManager
struct UAthenaPickupManager_C_ExecuteUbergraph_AthenaPickupManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
