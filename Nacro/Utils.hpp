#pragma once

#include "SDK.hpp"
#include "Memory.hpp"
#include "ATLCONV.H"
#include <algorithm>


class Utils
{
public:

	template<typename T>
	__forceinline static T* Offset(uintptr_t offset)
	{
		return reinterpret_cast<T*>(reinterpret_cast<uintptr_t>(GetModuleHandle(0)) + offset);
	}

	static DWORD SleepExit(LPVOID)
	{
		Sleep(5000);
		ExitProcess(0);
	}

	inline static void ThrowErrorExit(LPCSTR sErrorMessage)
	{
		MessageBoxA(nullptr, sErrorMessage, "Fatal Error! || Nacro", MB_ICONERROR);
		CreateThread(0, 0, SleepExit, 0, 0, 0);
	}

	inline static void ThrowError(LPCSTR sErrorMessage)
	{
		MessageBoxA(nullptr, sErrorMessage, "Error! || Nacro", MB_ICONERROR);
	}

	inline static void CreateConsoleWindow()
	{
		AllocConsole();
		ShowWindow(GetConsoleWindow(), SW_SHOW);
		FILE* fp;
		freopen_s(&fp, "CONOIN$", "r", stdin);
		freopen_s(&fp, "CONOUT$", "w", stdout);
		freopen_s(&fp, "CONOUT$", "w", stderr);
	}

	inline static bool StartsWithToLower(std::string String, std::string StartsWithStr)
	{
		transform(String.begin(), String.end(), String.begin(), tolower);

		if (String.find(StartsWithStr) == 0)
			return true;
		else
			return false;
	}

	inline static std::string ToLower(std::string Str)
	{
		transform(Str.begin(), Str.end(), Str.begin(), tolower);
		return Str;
	}

	inline static void PatchAbilities()
	{
		auto AbilityPatch = Memory::FindPattern("\xC0\x0F\x84\x3C\x02\x00\x00\x0F\x2F\xF7\x0F\x86\xF5\x00\x00\x00", "xxxxxxxxxxxxxxxx");
		if (AbilityPatch)
		{
			DWORD dwProtection;
			VirtualProtect(AbilityPatch, 16, PAGE_EXECUTE_READWRITE, &dwProtection);

			reinterpret_cast<uint8_t*>(AbilityPatch)[2] = 0x85;
			reinterpret_cast<uint8_t*>(AbilityPatch)[11] = 0x8D;

			DWORD dwTemp;
			VirtualProtect(AbilityPatch, 16, dwProtection, &dwTemp);
		}
	}
};