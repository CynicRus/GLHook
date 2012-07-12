#include "main.h"
#include "GLHook.hpp"

GL_EXPORT BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
        {
            DisableThreadLibraryCalls(hinstDLL);
            return Initialize();
        }
        break;

        case DLL_PROCESS_DETACH:
        {
            MessageBox(NULL, "Hook Detached.", "Terminating.", 0);
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
