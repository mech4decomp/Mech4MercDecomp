#include "mw4/common.h"

// 0x0052BC60 - 30 bytes
// __thiscall - destructor with delete flag, calls FUN_00415380
extern void __stdcall FUN_00415380(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall func_0052bc60(void)
{
    __asm {
        push esi
        mov  esi, ecx
        call FUN_00415380
        test byte ptr [esp+8], 1
        jz   skip
        push esi
        call FUN_004084e0
        add  esp, 4
skip:
        mov  eax, esi
        pop  esi
        ret  4
    }
}
