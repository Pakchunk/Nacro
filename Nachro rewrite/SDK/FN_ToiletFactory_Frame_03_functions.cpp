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

// Function ToiletFactory_Frame_03.ToiletFactory_Frame_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToiletFactory_Frame_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToiletFactory_Frame_03.ToiletFactory_Frame_03_C.UserConstructionScript");

	AToiletFactory_Frame_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToiletFactory_Frame_03.ToiletFactory_Frame_03_C.OnLoot
// (Event, Public, BlueprintEvent)

void AToiletFactory_Frame_03_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToiletFactory_Frame_03.ToiletFactory_Frame_03_C.OnLoot");

	AToiletFactory_Frame_03_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToiletFactory_Frame_03.ToiletFactory_Frame_03_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void AToiletFactory_Frame_03_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToiletFactory_Frame_03.ToiletFactory_Frame_03_C.OnLootRepeat");

	AToiletFactory_Frame_03_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToiletFactory_Frame_03.ToiletFactory_Frame_03_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void AToiletFactory_Frame_03_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToiletFactory_Frame_03.ToiletFactory_Frame_03_C.OnBeginSearch");

	AToiletFactory_Frame_03_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToiletFactory_Frame_03.ToiletFactory_Frame_03_C.ExecuteUbergraph_ToiletFactory_Frame_03
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AToiletFactory_Frame_03_C::ExecuteUbergraph_ToiletFactory_Frame_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToiletFactory_Frame_03.ToiletFactory_Frame_03_C.ExecuteUbergraph_ToiletFactory_Frame_03");

	AToiletFactory_Frame_03_C_ExecuteUbergraph_ToiletFactory_Frame_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
