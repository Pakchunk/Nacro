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

// Function XpBoosts.XpBoosts_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Activate");

	UXpBoosts_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Update Total Boosts
// (Public, BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::Update_Total_Boosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Update Total Boosts");

	UXpBoosts_C_Update_Total_Boosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Unbind Party Delegates
// (Public, BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::Unbind_Party_Delegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Unbind Party Delegates");

	UXpBoosts_C_Unbind_Party_Delegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.HandleOnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewMemberState                 (Parm)

void UXpBoosts_C::HandleOnTeamMemberStateChanged(const struct FFortTeamMemberInfo& NewMemberState)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.HandleOnTeamMemberStateChanged");

	UXpBoosts_C_HandleOnTeamMemberStateChanged_Params params;
	params.NewMemberState = NewMemberState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Update Total Boost Amounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::Update_Total_Boost_Amounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Update Total Boost Amounts");

	UXpBoosts_C_Update_Total_Boost_Amounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.HandleRemotePlayerRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RemovedIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UXpBoosts_C::HandleRemotePlayerRemoved(int RemovedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.HandleRemotePlayerRemoved");

	UXpBoosts_C_HandleRemotePlayerRemoved_Params params;
	params.RemovedIndex = RemovedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Bind Party Delegates
// (Public, BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::Bind_Party_Delegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Bind Party Delegates");

	UXpBoosts_C_Bind_Party_Delegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Update Current Boosts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::Update_Current_Boosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Update Current Boosts");

	UXpBoosts_C_Update_Current_Boosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBoosts_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Construct");

	UXpBoosts_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Give Boost Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        Player_to_Boost                (Parm)

void UXpBoosts_C::Give_Boost_Clicked(const struct FUniqueNetIdRepl& Player_to_Boost)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Give Boost Clicked");

	UXpBoosts_C_Give_Boost_Clicked_Params params;
	params.Player_to_Boost = Player_to_Boost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.On Party Left
// (BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::On_Party_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.On Party Left");

	UXpBoosts_C_On_Party_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.On Party Joined
// (BlueprintCallable, BlueprintEvent)

void UXpBoosts_C::On_Party_Joined()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.On Party Joined");

	UXpBoosts_C_On_Party_Joined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BoostAmount                    (Parm, ZeroConstructor, IsPlainOldData)

void UXpBoosts_C::Xp_Boost_Changed(int BoostAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.Xp Boost Changed");

	UXpBoosts_C_Xp_Boost_Changed_Params params;
	params.BoostAmount = BoostAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoosts.XpBoosts_C.ExecuteUbergraph_XpBoosts
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UXpBoosts_C::ExecuteUbergraph_XpBoosts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoosts.XpBoosts_C.ExecuteUbergraph_XpBoosts");

	UXpBoosts_C_ExecuteUbergraph_XpBoosts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
