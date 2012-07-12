#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>

using namespace std;

HANDLE hThread;
void* pLibRemote;
DWORD hLibModule;
HMODULE hKernel32;
HANDLE hProcess;

PROCESSENTRY32 GetProcessInfo(char* ProcessName)
{
    HANDLE hSnap = NULL;
    PROCESSENTRY32 Proc32 = {0};

    if((hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0)) == INVALID_HANDLE_VALUE)
		return Proc32;

    Proc32.dwSize = sizeof(PROCESSENTRY32);
    while(Process32Next(hSnap, &Proc32))
	{
		if(!strcmp(ProcessName, Proc32.szExeFile))
		{
			CloseHandle(hSnap);
			return Proc32;
		}
    }
    CloseHandle(hSnap);
    return Proc32;
}

void Inject()
{
    char szLibPath[MAX_PATH];
	memset(szLibPath, 0, MAX_PATH);
    hKernel32 = ::GetModuleHandle("Kernel32");

    PROCESSENTRY32 RSDLL = GetProcessInfo("JagexLauncher.exe");
    hProcess = OpenProcess(PROCESS_ALL_ACCESS, false, RSDLL.th32ProcessID);
    strcat(szLibPath, "C:/Users/Brandon/Desktop/GLHook.dll");

    pLibRemote = ::VirtualAllocEx(hProcess, NULL, sizeof(szLibPath), MEM_COMMIT, PAGE_READWRITE);
    ::WriteProcessMemory(hProcess, pLibRemote, (void*)szLibPath, sizeof(szLibPath), NULL);

    hThread = ::CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE) ::GetProcAddress(hKernel32, "LoadLibraryA"), pLibRemote, 0, NULL);
    ::WaitForSingleObject(hThread, INFINITE);
    ::GetExitCodeThread(hThread, &hLibModule);
    ::CloseHandle(hThread);
    ::VirtualFreeEx(hProcess, pLibRemote, sizeof(szLibPath), MEM_RELEASE);
}

void Terminate()
{
    hThread = ::CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE) ::GetProcAddress(hKernel32, "FreeLibrary"), (void*)hLibModule, 0, NULL);
    ::WaitForSingleObject(hThread, INFINITE);
    ::CloseHandle(hThread);
}


int main()
{
	Inject();
    cin.get();
    Terminate();

	return 0;
}
