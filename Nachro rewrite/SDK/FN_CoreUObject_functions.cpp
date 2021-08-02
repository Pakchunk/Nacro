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

std::string UObject::GetName() const
{
	std::string name(Name.GetName());
	if (Name.Number > 0)
	{
		name += '_' + std::to_string(Name.Number);
	}

	auto pos = name.rfind('/');
	if (pos == std::string::npos)
	{
		return name;
	}
	
	return name.substr(pos + 1);
}

typedef void(__fastcall* fGetFullName)(const SDK::UObject*, SDK::FString*, SDK::UObject*);
fGetFullName GetObjectFullName = reinterpret_cast<fGetFullName>(reinterpret_cast<uintptr_t>(GetModuleHandle(0)) + 0x13D1D40);

std::string UObject::GetFullNameOld() const
{
	std::string name;

	if (Class != nullptr)
	{
		std::string temp;
		for (auto p = Outer; p; p = p->Outer)
		{
			temp = p->GetName() + "." + temp;
		}

		name = Class->GetName();
		name += " ";
		name += temp;
		name += GetName();
	}

	return name;
}

std::string UObject::GetFullName() const
{
	if (this == nullptr)
		return "";

	FString outName;
	GetObjectFullName(this, &outName, nullptr);

	std::string name = outName.ToString();


	size_t first = name.find_first_of("/");
	size_t second = name.find_last_of("/");

	size_t eraseLength = second - first;

	if(name.length() > eraseLength)
		name.erase(first, eraseLength + 1);

	if (name.find(":") != std::string::npos)
		name.replace(name.find(":"), 1, ".");
	
	return name;

	/*
	size_t delFirst = 0;
	for (size_t pos = 0; pos < name.size(); pos++)
	{
		if (name[pos] == '/')
		{
			delFirst = pos;
			break;
		}
	}
	if (delFirst != name.size() - 1)
	{
		size_t delSecond = 0;
		for (size_t pos = name.size() - 1; pos >= 0; pos--)
		{
			if (name[pos] == '/')
			{
				delSecond = pos;
				break;
			}
		}
		size_t eraseLength = delSecond - (delFirst - 1);
		name.erase(delFirst, eraseLength);
	}
	*/
}

bool UObject::IsA(UClass* cmp) const
{
	for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
	{
		if (super == cmp)
		{
			return true;
		}
	}

	return false;
}

// Function CoreUObject.Object.ExecuteUbergraph
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UObject::ExecuteUbergraph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoreUObject.Object.ExecuteUbergraph");

	UObject_ExecuteUbergraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
