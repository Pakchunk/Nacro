#pragma once
#include "SDK.hpp"
#include "Pattern.h"
#include "ATLCONV.H"


class Utils
{
public:
	
	template<typename T>
	__forceinline static T* Offset(uintptr_t offset)
	{
		return reinterpret_cast<T*>(reinterpret_cast<uintptr_t>(GetModuleHandle(0)) + offset);
	}

	inline static void ThrowErrorExit(LPCSTR sErrorMessage)
	{
		USES_CONVERSION;
		LPWSTR ErrorMessage = A2W(sErrorMessage);
		MessageBox(0, ErrorMessage, 0, MB_OK);
		exit(EXIT_FAILURE);
	}
	
	inline static void ThrowError(LPCSTR sErrorMessage)
	{
		USES_CONVERSION;
		LPWSTR ErrorMessage = A2W(sErrorMessage);
		MessageBox(0, ErrorMessage, 0, MB_OK);
	}

	inline static void CreateConsoleWindow()
	{
		AllocConsole();
		FILE* dummyFile;
		freopen_s(&dummyFile, "CONOUT$", "w", stdout);
		//freopen_s(&dummyFile, "CONOUT$", "w", stderr);
		//freopen_s(&dummyFile, "CONIN$", "w", stdout);
		
	}

	__forceinline static uintptr_t FindPattern(std::string pattern)
	{
		return Pattern::Find(pattern);
	}
};

 

