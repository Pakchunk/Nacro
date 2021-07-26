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

// Function AthenaCompass.AthenaCompass_C.UpdateMarker
struct UAthenaCompass_C_UpdateMarker_Params
{
	class UImage*                                      MarkerImage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MarkerWorldPosition;                                      // (Parm, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, IsPlainOldData)
	struct FVector                                     PawnLocation;                                             // (Parm, IsPlainOldData)
};

// Function AthenaCompass.AthenaCompass_C.UpdateCompassMaterial
struct UAthenaCompass_C_UpdateCompassMaterial_Params
{
	struct FRotator                                    InRot;                                                    // (Parm, IsPlainOldData)
};

// Function AthenaCompass.AthenaCompass_C.Construct
struct UAthenaCompass_C_Construct_Params
{
};

// Function AthenaCompass.AthenaCompass_C.Tick
struct UAthenaCompass_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCompass.AthenaCompass_C.ExecuteUbergraph_AthenaCompass
struct UAthenaCompass_C_ExecuteUbergraph_AthenaCompass_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
