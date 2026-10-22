#include "mw4/common.h"

// 0x0052DFF0 - 29 bytes
// __thiscall - destructor, calls FUN_0052E150, frees field at offset 0x354
extern void __stdcall FUN_0052e150(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall func_0052dff0(void)
{
    __asm {
        push esi
        mov  esi, ecx
        call FUN_0052e150
        mov  esi, [esi+0x354]
        test esi, esi
        jz   skip
        push esi
        call FUN_004084e0
        add  esp, 4
skip:
        pop  esi
        ret
    }
}
