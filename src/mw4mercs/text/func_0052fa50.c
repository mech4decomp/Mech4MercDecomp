#include "mw4/common.h"

// 0x0052FA50 - 30 bytes
// __thiscall - destructor with delete flag, calls FUN_0052FA70
extern void __stdcall FUN_0052fa70(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall func_0052fa50(void)
{
    __asm {
        push esi
        mov  esi, ecx
        call FUN_0052fa70
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
