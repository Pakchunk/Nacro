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

// Function StoreMain_Root.StoreMain_Root_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.HandleBack");

	UStoreMain_Root_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function StoreMain_Root.StoreMain_Root_C.AboutToEnterChat
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::AboutToEnterChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.AboutToEnterChat");

	UStoreMain_Root_C_AboutToEnterChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.AboutToPushDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::AboutToPushDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.AboutToPushDetails");

	UStoreMain_Root_C_AboutToPushDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.IsOffersScrollBoxActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::IsOffersScrollBoxActive(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.IsOffersScrollBoxActive");

	UStoreMain_Root_C_IsOffersScrollBoxActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function StoreMain_Root.StoreMain_Root_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.SetFocus");

	UStoreMain_Root_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.AddOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMtxStoreOfferBase*  MtxOffer                       (Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::AddOffer(class UFortMtxStoreOfferBase* MtxOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.AddOffer");

	UStoreMain_Root_C_AddOffer_Params params;
	params.MtxOffer = MtxOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)

void UStoreMain_Root_C::NoOffersAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable");

	UStoreMain_Root_C_NoOffersAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnActivated");

	UStoreMain_Root_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnMtxOfferGenerated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortMtxStoreOfferBase** MtxOffer                       (Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::OnMtxOfferGenerated(class UFortMtxStoreOfferBase** MtxOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnMtxOfferGenerated");

	UStoreMain_Root_C_OnMtxOfferGenerated_Params params;
	params.MtxOffer = MtxOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)

void UStoreMain_Root_C::OnOffersGenerated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated");

	UStoreMain_Root_C_OnOffersGenerated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)

void UStoreMain_Root_C::OnStartReadingOffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers");

	UStoreMain_Root_C_OnStartReadingOffers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnDeactivated");

	UStoreMain_Root_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMain_Root_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.Destruct");

	UStoreMain_Root_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMain_Root_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.Construct");

	UStoreMain_Root_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::ExecuteUbergraph_StoreMain_Root(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root");

	UStoreMain_Root_C_ExecuteUbergraph_StoreMain_Root_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
