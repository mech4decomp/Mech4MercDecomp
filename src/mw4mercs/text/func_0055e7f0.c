/* FUN_0055e7f0 (41 B) — Multiply two ints (as floats) by constants and store back */
#include "mw4/common.h"

extern float DAT_007ddd84;
extern float DAT_007ddd80;
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0075db4b(void);

__declspec(naked) void func_0055e7f0(void)
{
    __asm {
        push    esi
        mov     esi, [esp+8]
        fild    dword ptr [esi]
        fmul    dword ptr [DAT_007ddd84]
        call    FUN_0075db4a
        mov     [esi], eax
        mov     esi, [esp+12]
        fild    dword ptr [esi]
        fmul    dword ptr [DAT_007ddd80]
        call    FUN_0075db4b
        mov     [esi], eax
        pop     esi
        ret
    }
}
