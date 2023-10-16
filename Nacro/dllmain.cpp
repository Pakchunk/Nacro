#include <iostream>
#include <Windows.h>
#include "Hooks.hpp"
#include "Memory.hpp"
#include "Globals.hpp"
#include "Utils.hpp"

void* EngineVersion;

DWORD MainThread(LPVOID)
{
	auto Pattern = reinterpret_cast<DWORD_PTR>(Memory::FindPattern("\x40\x53\x48\x83\xEC\x20\x48\x8B\xD9\xE8\x00\x00\x00\x00\x48\x8B\xC8\x41\xB8\x04\x00\x00\x00\x48\x8B\xD3", "xxxxxxxxxx????xxxxxxxxxxxx"));
	if (!Pattern)
		Utils::ThrowErrorExit("Please make sure you have injected into the FortniteClient-Win64-Shipping process.");

	if (!reinterpret_cast<FString * (__fastcall*)(void*)>(Pattern)(&EngineVersion)->ToString().find("3700114"))
		Utils::ThrowErrorExit("Nacro only supports Fortnite 1.7.2, please make sure you have launched the correct build.");

	Globals::InitGlobalsFrontend();
	Hooks::CreateHooks();

	static_cast<AFortGameModeFrontEnd*>(Globals::GEngine->GameViewport->World->AuthorityGameMode)->Say
	(L"Welcome to Nacro!\nCreated by ozne, Fischsalat, and absoluteSpacehead.");

	return NULL;
}

BOOL __stdcall DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
		case DLL_PROCESS_ATTACH:
			Utils::CreateConsoleWindow();
			CreateThread(0, 0, MainThread, 0, 0, 0);
			break;
		case DLL_PROCESS_DETACH:
			FreeLibraryAndExitThread(hModule, 0);
			break;
	}

	return TRUE;
}

