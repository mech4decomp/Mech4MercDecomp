#include "mw4/common.h"

// 0x0052B230 - 25 bytes
// __thiscall - constructor, calls FUN_00416BC0, sets vtable
extern void __stdcall FUN_00416bc0(void);

__declspec(naked) void __fastcall func_0052b230(void)
{
    __asm {
        mov  eax, [esp+4]
        push esi
        mov  esi, ecx
        push eax
        call FUN_00416bc0
        mov  dword ptr [esi], 0x00779E88
        mov  eax, esi
        pop  esi
        ret  4
    }
}
