#include <windows.h>

BOOL WINAPI DllMain(HANDLE hDll, DWORD dwReason, LPVOID lpReserved)
{
    switch (dwReason)
    {
        case DLL_PROCESS_ATTACH:
            MessageBox(NULL, "DLL_PROCESS_ATTACH", "Attached Proc, Arb Code Ex OR DLL Hijack Completed", MB_ICONERROR | MB_OK);
            break;
        case DLL_PROCESS_DETACH:
            MessageBox(NULL, "DLL_PROCESS_DETACH", "Detach Proc, Arb Code Ex OR DLL Hijack Completed", MB_ICONERROR | MB_OK);
            break;
        case DLL_THREAD_ATTACH:
            MessageBox(NULL, "DLL_THREAD_ATTACH", "Attached Thread, Arb Code Ex OR DLL Hijack Completed", MB_ICONERROR | MB_OK);
            break;
        case DLL_THREAD_DETACH:
            MessageBox(NULL, "DLL_THREAD_DETACH", "Detach Thread, Arb Code Ex OR DLL Hijack Completed", MB_ICONERROR | MB_OK);
            break;
    }
    return TRUE;
}

__declspec(dllexport) void StartW()
{
    MessageBox(NULL, "StartW Function Called", "Exported StartW called OK, Code Ex OR Hijack Completed", MB_ICONERROR | MB_OK);
}
// Compile Windows MinGW
// gcc msgDLL2.c --shared -o msgDLL2.dll
