#include "main.h"
#include "GLHook.hpp"

void DLL_EXPORT SomeFunction(const LPCSTR sometext)
{
    MessageBox(NULL, "Attached", sometext, 0);
}

GL_EXPORT BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
        {
            DisableThreadLibraryCalls(OriginalGL);
            SomeFunction("DLL Loaded.");
            return Initialize();
        }
        break;

        case DLL_PROCESS_DETACH:
        {
            return DeInitialize();
        }
        break;
/*
        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
*/  }
    return TRUE; // succesful
}
