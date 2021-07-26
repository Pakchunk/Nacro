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

// Function Mailbox_01b.Mailbox_01b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMailbox_01b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_01b.Mailbox_01b_C.UserConstructionScript");

	AMailbox_01b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mailbox_01b.Mailbox_01b_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void AMailbox_01b_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_01b.Mailbox_01b_C.OnLootRepeat");

	AMailbox_01b_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mailbox_01b.Mailbox_01b_C.OnLoot
// (Event, Public, BlueprintEvent)

void AMailbox_01b_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_01b.Mailbox_01b_C.OnLoot");

	AMailbox_01b_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mailbox_01b.Mailbox_01b_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void AMailbox_01b_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_01b.Mailbox_01b_C.OnBeginSearch");

	AMailbox_01b_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mailbox_01b.Mailbox_01b_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMailbox_01b_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_01b.Mailbox_01b_C.ReceiveBeginPlay");

	AMailbox_01b_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mailbox_01b.Mailbox_01b_C.ExecuteUbergraph_Mailbox_01b
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMailbox_01b_C::ExecuteUbergraph_Mailbox_01b(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_01b.Mailbox_01b_C.ExecuteUbergraph_Mailbox_01b");

	AMailbox_01b_C_ExecuteUbergraph_Mailbox_01b_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
