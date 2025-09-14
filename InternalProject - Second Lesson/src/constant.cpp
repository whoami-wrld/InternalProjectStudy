#include "constant.h"

HMODULE hModule = GetModuleHandle(nullptr);
uintptr_t exeBaseAddress = (uintptr_t)GetModuleHandle(nullptr);
Player* localPlayerPtr = *(Player**)(exeBaseAddress + 0x0017E0A8);