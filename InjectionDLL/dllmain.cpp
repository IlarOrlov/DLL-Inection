#include "pch.h"
#include <Windows.h>
#include <psapi.h>
#include <winuser.h>

BOOLEAN WINAPI DllMain(IN HINSTANCE hDllHandle,
    IN DWORD     nReason,
    IN LPVOID    Reserved)
{
    BOOLEAN bSuccess = TRUE;

    switch (nReason)
    {
    case DLL_PROCESS_ATTACH:

        MessageBoxW(NULL, L"Your Computer Is Injected HA HA :D", L"Hello From Injector", MB_ICONINFORMATION);
        bSuccess = TRUE;

        break;

    case DLL_PROCESS_DETACH:

        break;
    }
    return bSuccess;
}