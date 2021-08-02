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

// Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsRandomly
struct UBluGloRequestHandler_C_BuildLocationsRandomly_Params
{
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsFromQueryLocations
struct UBluGloRequestHandler_C_BuildLocationsFromQueryLocations_Params
{
	TArray<struct FVector>                             QueryResultLocations;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.EQSQueryFinished
struct UBluGloRequestHandler_C_EQSQueryFinished_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.InitializeBluGloRequestHandler
struct UBluGloRequestHandler_C_InitializeBluGloRequestHandler_Params
{
	int                                                NumBluGloToSpawn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToSpawnFrom;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (Parm, IsPlainOldData)
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.ExecuteUbergraph_BluGloRequestHandler
struct UBluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.OnBluGloQueryFinished__DelegateSignature
struct UBluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature_Params
{
	class AActor*                                      ActorToSpawnFrom;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (Parm, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
