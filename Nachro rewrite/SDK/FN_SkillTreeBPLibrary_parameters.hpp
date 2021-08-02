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

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeIconSizeByMagnitude
struct USkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude_Params
{
	EFortHomebaseNodeMagnitude                         Node_Magnitude;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        Icon_Size;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeShapeByDisplayType
struct USkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType_Params
{
	EFortHomebaseNodeDisplayType                       Display_Type;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSquare;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsExitNode;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeSizeByMagnitude
struct USkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude_Params
{
	EFortHomebaseNodeMagnitude                         Node_Magnitude;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EFortHomebaseNodeDisplayType                       Display_Type;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     World_Context;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_DynamicData
struct USkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData_Params
{
	class UObject*                                     World_Context;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHomebaseNodeState                          NodeState;                                                // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeCostTint
struct USkillTreeBPLibrary_C_GetSkillTreeNodeCostTint_Params
{
	struct FHomebaseNode                               HomebaseNode;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NodeTintColour;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_StaticData
struct USkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData_Params
{
	class UObject*                                     World_Context;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHomebaseNode                               NodeData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFortSkillTreeNodeDisplayData               DisplayData;                                              // (Parm)
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
