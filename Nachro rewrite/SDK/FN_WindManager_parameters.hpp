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

// Function WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool
struct AWindManager_C_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Params
{
	struct FVector                                     Wind_location;                                            // (Parm, IsPlainOldData)
	bool                                               Storm_Cyl_Mesh_Match;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Wind_Cyl_Mesh_Array_Match_Index;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.SetWindMatVariables
struct AWindManager_C_SetWindMatVariables_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_AnimatedCylinderCenter;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnimatedCylinderCenter;                                   // (Parm, IsPlainOldData)
	bool                                               Set_Animating_Wind_Magnitude;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Animating_Wind_Magnitude;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Static_Wind_Magnitude;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Static_Wind_Magnitude;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_CylinderCenter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CylinderCenter;                                           // (Parm, IsPlainOldData)
	bool                                               Set_WindVector;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WindVector;                                               // (Parm, IsPlainOldData)
	bool                                               Set_WindCrossVector;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WindCrossVector;                                          // (Parm, IsPlainOldData)
	bool                                               Set_OverallOuterRadius;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverallOuterRadius;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_OverallInnerRadius;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverallInnerRadius;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Wind_Still_0_or_Animating_1;                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Wind_Still_0_or_Animating_1;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Circular_Shader_;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Circular_Shader_;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.UpdateWindDeltaCyl
struct AWindManager_C_UpdateWindDeltaCyl_Params
{
	float                                              Static_Cylinder_Outer_Radius;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Wind_Circular_;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.RemoveWindCylinder
struct AWindManager_C_RemoveWindCylinder_Params
{
	struct FFortWindImpulseCylinder                    WindImpulseCylinder;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WindManager.WindManager_C.UpdateStormWindCylinder
struct AWindManager_C_UpdateStormWindCylinder_Params
{
	struct FFortWindImpulseCylinder                    Wind_Impulse;                                             // (Parm)
	struct FFortWindImpulseCylinderDelta               Wind_Delta;                                               // (Parm)
};

// Function WindManager.WindManager_C.Calculate Camera Position
struct AWindManager_C_Calculate_Camera_Position_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneCaptureComponent2D*                    Scene_Capture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WindManager.WindManager_C.SetRenderOnlyAssets
struct AWindManager_C_SetRenderOnlyAssets_Params
{
	class UPrimitiveComponent*                         InComponent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.InitializeOrthoSettings
struct AWindManager_C_InitializeOrthoSettings_Params
{
};

// Function WindManager.WindManager_C.UserConstructionScript
struct AWindManager_C_UserConstructionScript_Params
{
};

// Function WindManager.WindManager_C.Add Render To Texture Particle
struct AWindManager_C_Add_Render_To_Texture_Particle_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WindManager.WindManager_C.OnWorldReady
struct AWindManager_C_OnWorldReady_Params
{
};

// Function WindManager.WindManager_C.ReceiveTick
struct AWindManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.Register player for render to texture purposes
struct AWindManager_C_Register_player_for_render_to_texture_purposes_Params
{
	class APlayerPawn_Generic_C*                       Player_Pawn_Generic;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.AddWindParticleSystemComponent
struct AWindManager_C_AddWindParticleSystemComponent_Params
{
	class UParticleSystemComponent**                   ParticleSystemComponent;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.OnWindImpulseCylinderCreation
struct AWindManager_C_OnWindImpulseCylinderCreation_Params
{
	struct FFortWindImpulseCylinder*                   WindImpulseCylinder;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFortWindImpulseCylinderDelta*              WindImpulseCylinderDelta;                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WindManager.WindManager_C.OnWindImpulseCylinderDeath
struct AWindManager_C_OnWindImpulseCylinderDeath_Params
{
	struct FFortWindImpulseCylinder*                   WindImpulseCylinder;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete
struct AWindManager_C_OnWindImpulseCylinderDeltaComplete_Params
{
	struct FFortWindImpulseCylinder*                   WindImpulseCylinder;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WindManager.WindManager_C.SpawnTestWind
struct AWindManager_C_SpawnTestWind_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseMagnitude;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.Play Water Splash Particle System At Location
struct AWindManager_C_Play_Water_Splash_Particle_System_At_Location_Params
{
	struct FTransform                                  Particle_Transform;                                       // (Parm, IsPlainOldData)
};

// Function WindManager.WindManager_C.Add Wind Component
struct AWindManager_C_Add_Wind_Component_Params
{
	class UPrimitiveComponent*                         InComponent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.ReceiveBeginPlay
struct AWindManager_C_ReceiveBeginPlay_Params
{
};

// Function WindManager.WindManager_C.Update Test
struct AWindManager_C_Update_Test_Params
{
	float                                              NewMagnitude;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.ExecuteUbergraph_WindManager
struct AWindManager_C_ExecuteUbergraph_WindManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
