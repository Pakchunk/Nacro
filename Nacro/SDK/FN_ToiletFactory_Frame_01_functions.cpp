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

// Function ToiletFactory_Frame_01.ToiletFactory_Frame_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToiletFactory_Frame_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToiletFactory_Frame_01.ToiletFactory_Frame_01_C.UserConstructionScript");

	AToiletFactory_Frame_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToiletFactory_Frame_01.ToiletFactory_Frame_01_C.OnLoot
// (Event, Public, BlueprintEvent)

void AToiletFactory_Frame_01_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToiletFactory_Frame_01.ToiletFactory_Frame_01_C.OnLoot");

	AToiletFactory_Frame_01_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToiletFactory_Frame_01.ToiletFactory_Frame_01_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void AToiletFactory_Frame_01_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToiletFactory_Frame_01.ToiletFactory_Frame_01_C.OnLootRepeat");

	AToiletFactory_Frame_01_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToiletFactory_Frame_01.ToiletFactory_Frame_01_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void AToiletFactory_Frame_01_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToiletFactory_Frame_01.ToiletFactory_Frame_01_C.OnBeginSearch");

	AToiletFactory_Frame_01_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToiletFactory_Frame_01.ToiletFactory_Frame_01_C.ExecuteUbergraph_ToiletFactory_Frame_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AToiletFactory_Frame_01_C::ExecuteUbergraph_ToiletFactory_Frame_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToiletFactory_Frame_01.ToiletFactory_Frame_01_C.ExecuteUbergraph_ToiletFactory_Frame_01");

	AToiletFactory_Frame_01_C_ExecuteUbergraph_ToiletFactory_Frame_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
