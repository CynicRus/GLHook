#include "main.h"
#include "GLHook.hpp"

GL_EXPORT BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
        {
            DisableThreadLibraryCalls(hinstDLL);
            MessageBeep(0);

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
