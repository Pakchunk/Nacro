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

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Get Current Boost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Boost_Amount                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UXpBoostDailyBonus_C::Get_Current_Boost(int* Boost_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostDailyBonus.XpBoostDailyBonus_C.Get Current Boost");

	UXpBoostDailyBonus_C_Get_Current_Boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Boost_Amount != nullptr)
		*Boost_Amount = params.Boost_Amount;
}


// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Update Daily Bonus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UXpBoostDailyBonus_C::Update_Daily_Bonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostDailyBonus.XpBoostDailyBonus_C.Update Daily Bonus");

	UXpBoostDailyBonus_C_Update_Daily_Bonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBoostDailyBonus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostDailyBonus.XpBoostDailyBonus_C.Construct");

	UXpBoostDailyBonus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostDailyBonus.XpBoostDailyBonus_C.ExecuteUbergraph_XpBoostDailyBonus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UXpBoostDailyBonus_C::ExecuteUbergraph_XpBoostDailyBonus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostDailyBonus.XpBoostDailyBonus_C.ExecuteUbergraph_XpBoostDailyBonus");

	UXpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
