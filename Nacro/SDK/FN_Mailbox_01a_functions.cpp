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

// Function Mailbox_01a.Mailbox_01a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMailbox_01a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_01a.Mailbox_01a_C.UserConstructionScript");

	AMailbox_01a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mailbox_01a.Mailbox_01a_C.OnLoot
// (Event, Public, BlueprintEvent)

void AMailbox_01a_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_01a.Mailbox_01a_C.OnLoot");

	AMailbox_01a_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mailbox_01a.Mailbox_01a_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void AMailbox_01a_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_01a.Mailbox_01a_C.OnLootRepeat");

	AMailbox_01a_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mailbox_01a.Mailbox_01a_C.ExecuteUbergraph_Mailbox_01a
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMailbox_01a_C::ExecuteUbergraph_Mailbox_01a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_01a.Mailbox_01a_C.ExecuteUbergraph_Mailbox_01a");

	AMailbox_01a_C_ExecuteUbergraph_Mailbox_01a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
