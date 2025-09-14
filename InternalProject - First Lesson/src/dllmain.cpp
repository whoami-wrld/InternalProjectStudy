#include <iostream>
#include "Windows.h"


void console()
{
    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);
    freopen_s(&f, "CONIN$", "r", stdin);
    std::cout << "Console Created!" << std::endl;

    while (true)
    {
        std::string input;
        std::cin >> input;

        if (input == "exit")
        {
            break;
        }

        if (input == "msg")
        {
            std::cout << "We are here!" << std::endl;
        }
    }

    FreeConsole();
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        // Isso aqui e executado, esse case, quando a injecao e finalizada, ou seja, agora somos parte do programa.
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)console, nullptr, 0, nullptr);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

