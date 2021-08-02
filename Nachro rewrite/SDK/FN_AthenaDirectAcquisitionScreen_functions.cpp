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

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Focus");

	UAthenaDirectAcquisitionScreen_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.GenerateOfferWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StorefrontName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FCatalogOffer*          Offer                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UFortMtxOfferData**      DisplayAsset                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UFortDirectAcquisitionOfferWidgetBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFortDirectAcquisitionOfferWidgetBase* UAthenaDirectAcquisitionScreen_C::GenerateOfferWidget(struct FName* StorefrontName, struct FCatalogOffer* Offer, class UFortMtxOfferData** DisplayAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.GenerateOfferWidget");

	UAthenaDirectAcquisitionScreen_C_GenerateOfferWidget_Params params;
	params.StorefrontName = StorefrontName;
	params.Offer = Offer;
	params.DisplayAsset = DisplayAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::NoOffersAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.NoOffersAvailable");

	UAthenaDirectAcquisitionScreen_C_NoOffersAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::OnStartReadingOffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnStartReadingOffers");

	UAthenaDirectAcquisitionScreen_C_OnStartReadingOffers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::OnOffersGenerated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnOffersGenerated");

	UAthenaDirectAcquisitionScreen_C_OnOffersGenerated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnActivated");

	UAthenaDirectAcquisitionScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaDirectAcquisitionScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionScreen_C::ExecuteUbergraph_AthenaDirectAcquisitionScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaDirectAcquisitionScreen");

	UAthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
