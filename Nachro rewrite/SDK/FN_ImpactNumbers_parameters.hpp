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

// Function ImpactNumbers.ImpactNumbers_C.Set Material Pararmeters
struct AImpactNumbers_C_Set_Material_Pararmeters_Params
{
	struct FFortDamageNumberInfo                       NewDamageHitInfoStruct;                                   // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  CameraTransform;                                          // (Parm, IsPlainOldData)
	struct FVector                                     NumberLocation;                                           // (Parm, IsPlainOldData)
};

// Function ImpactNumbers.ImpactNumbers_C.init a new number set
struct AImpactNumbers_C_init_a_new_number_set_Params
{
	struct FFortDamageNumberInfo                       NewDamageHitInfoStruct;                                   // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutCameraTransform;                                       // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutNumberLocation;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function ImpactNumbers.ImpactNumbers_C.UserConstructionScript
struct AImpactNumbers_C_UserConstructionScript_Params
{
};

// Function ImpactNumbers.ImpactNumbers_C.OnNewDamageNumber
struct AImpactNumbers_C_OnNewDamageNumber_Params
{
	struct FFortDamageNumberInfo*                      NewDamageNumberInfo;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ImpactNumbers.ImpactNumbers_C.ExecuteUbergraph_ImpactNumbers
struct AImpactNumbers_C_ExecuteUbergraph_ImpactNumbers_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
