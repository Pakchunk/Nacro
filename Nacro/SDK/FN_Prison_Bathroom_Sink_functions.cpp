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

// Function Prison_Bathroom_Sink.Prison_Bathroom_Sink_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrison_Bathroom_Sink_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prison_Bathroom_Sink.Prison_Bathroom_Sink_C.UserConstructionScript");

	APrison_Bathroom_Sink_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prison_Bathroom_Sink.Prison_Bathroom_Sink_C.OnLoot
// (Event, Public, BlueprintEvent)

void APrison_Bathroom_Sink_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prison_Bathroom_Sink.Prison_Bathroom_Sink_C.OnLoot");

	APrison_Bathroom_Sink_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prison_Bathroom_Sink.Prison_Bathroom_Sink_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void APrison_Bathroom_Sink_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prison_Bathroom_Sink.Prison_Bathroom_Sink_C.OnLootRepeat");

	APrison_Bathroom_Sink_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prison_Bathroom_Sink.Prison_Bathroom_Sink_C.ExecuteUbergraph_Prison_Bathroom_Sink
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APrison_Bathroom_Sink_C::ExecuteUbergraph_Prison_Bathroom_Sink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prison_Bathroom_Sink.Prison_Bathroom_Sink_C.ExecuteUbergraph_Prison_Bathroom_Sink");

	APrison_Bathroom_Sink_C_ExecuteUbergraph_Prison_Bathroom_Sink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
