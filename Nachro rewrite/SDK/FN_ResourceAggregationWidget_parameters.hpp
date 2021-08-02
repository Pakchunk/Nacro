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

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ForceHideWidget
struct UResourceAggregationWidget_C_ForceHideWidget_Params
{
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.HideWidget
struct UResourceAggregationWidget_C_HideWidget_Params
{
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.TriggerAggregateAnimation
struct UResourceAggregationWidget_C_TriggerAggregateAnimation_Params
{
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.UpdateAggregateResourceCollected
struct UResourceAggregationWidget_C_UpdateAggregateResourceCollected_Params
{
	class UFortItem*                                   InPotentialResource;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ResetSourceOfResource
struct UResourceAggregationWidget_C_ResetSourceOfResource_Params
{
	class ABuildingSMActor*                            InResourceObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   InPotentialResource;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.HandleDamagedResourceObject
struct UResourceAggregationWidget_C_HandleDamagedResourceObject_Params
{
	class ABuildingSMActor*                            DamagedResourceObject;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   PotentialResource;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroyed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WeakpointDamage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.Construct
struct UResourceAggregationWidget_C_Construct_Params
{
};

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ExecuteUbergraph_ResourceAggregationWidget
struct UResourceAggregationWidget_C_ExecuteUbergraph_ResourceAggregationWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
