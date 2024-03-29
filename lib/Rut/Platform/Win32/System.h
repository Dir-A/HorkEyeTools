#pragma once
#include <cstdint>


namespace Rut::Platform
{
	bool AllocConsole(const wchar_t* wpTile);
	bool PutConsole(const char* cpText, size_t nSize);
	bool PutConsole(const wchar_t* wpText, size_t nSize);

	size_t CreateThread(void(*fnThread)());
}