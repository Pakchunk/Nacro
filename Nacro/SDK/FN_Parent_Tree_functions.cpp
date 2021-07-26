// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Parent_Tree.Parent_Tree_C.RemoveTestWind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AParent_Tree_C::RemoveTestWind(float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_Tree.Parent_Tree_C.RemoveTestWind");

	AParent_Tree_C_RemoveTestWind_Params params;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_Tree.Parent_Tree_C.AddTestWind
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)

void AParent_Tree_C::AddTestWind(float BlendTime, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_Tree.Parent_Tree_C.AddTestWind");

	AParent_Tree_C_AddTestWind_Params params;
	params.BlendTime = BlendTime;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_Tree.Parent_Tree_C.FX_UpdateEmitterParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AParent_Tree_C::FX_UpdateEmitterParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_Tree.Parent_Tree_C.FX_UpdateEmitterParameters");

	AParent_Tree_C_FX_UpdateEmitterParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_Tree.Parent_Tree_C.FX_UpdateEmitterStates
// (Public, BlueprintCallable, BlueprintEvent)

void AParent_Tree_C::FX_UpdateEmitterStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_Tree.Parent_Tree_C.FX_UpdateEmitterStates");

	AParent_Tree_C_FX_UpdateEmitterStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_Tree.Parent_Tree_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AParent_Tree_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_Tree.Parent_Tree_C.UserConstructionScript");

	AParent_Tree_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_Tree.Parent_Tree_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AParent_Tree_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_Tree.Parent_Tree_C.ReceiveDestroyed");

	AParent_Tree_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_Tree.Parent_Tree_C.ChangeWindIntensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time_It_Takes_To_Reach_New_Intensity (Parm, ZeroConstructor, IsPlainOldData)

void AParent_Tree_C::ChangeWindIntensity(float Intensity, float Time_It_Takes_To_Reach_New_Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_Tree.Parent_Tree_C.ChangeWindIntensity");

	AParent_Tree_C_ChangeWindIntensity_Params params;
	params.Intensity = Intensity;
	params.Time_It_Takes_To_Reach_New_Intensity = Time_It_Takes_To_Reach_New_Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_Tree.Parent_Tree_C.ExecuteUbergraph_Parent_Tree
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AParent_Tree_C::ExecuteUbergraph_Parent_Tree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_Tree.Parent_Tree_C.ExecuteUbergraph_Parent_Tree");

	AParent_Tree_C_ExecuteUbergraph_Parent_Tree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
