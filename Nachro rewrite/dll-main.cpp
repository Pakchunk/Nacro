#pragma once
#include "SDK.hpp"
#include "Global.h"
#include "Hooks.h"
#include "Player.h"

namespace ddl = SDK;


DWORD MainThread(LPVOID param)
{
	Utils::CreateConsoleWindow();

	if (!InitGlobalVariables())
		Utils::ThrowErrorExit("Inizialisation of global variables failed!");

	CommitAbilityPatch();

	Player::EnableConsole();

	if (MH_Initialize() != MH_OK)
		Utils::ThrowErrorExit("Mihook initialisation failed!");

	std::cout << "Creating hooks" << std::endl;

	if (!Hooks::CreateHooks())
		Utils::ThrowErrorExit("Creating PE and GC hooks failed!");

	std::cout << "Hooks are placed" << std::endl;
	

	
	return NULL;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID idk)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		CreateThread(0, 0, MainThread, hModule, 0, 0);
	}
	return TRUE;
}