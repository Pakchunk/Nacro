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

// Function Mailbox_02.Mailbox_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMailbox_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_02.Mailbox_02_C.UserConstructionScript");

	AMailbox_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mailbox_02.Mailbox_02_C.OnLoot
// (Event, Public, BlueprintEvent)

void AMailbox_02_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_02.Mailbox_02_C.OnLoot");

	AMailbox_02_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mailbox_02.Mailbox_02_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void AMailbox_02_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_02.Mailbox_02_C.OnLootRepeat");

	AMailbox_02_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mailbox_02.Mailbox_02_C.ExecuteUbergraph_Mailbox_02
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMailbox_02_C::ExecuteUbergraph_Mailbox_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mailbox_02.Mailbox_02_C.ExecuteUbergraph_Mailbox_02");

	AMailbox_02_C_ExecuteUbergraph_Mailbox_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
