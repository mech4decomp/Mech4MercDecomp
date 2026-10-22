/*
 * FUN_00536fb0 (38 B) — Conditional dispatch to FUN_005182C0.
 *
 * If global pointer at 0x007D3468 is non-null, calls FUN_005182C0 with
 * four arguments from the stack.
 * Returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_005182c0(int a, int b, int c, int d);
extern int DAT_007dd268;

__declspec(naked) void FUN_00536fb0(void)
{
    __asm {
        mov     ecx, dword ptr [DAT_007dd268]
        test    ecx, ecx
        jz      l_done
        mov     eax, [esp + 0x10]
        mov     edx, [esp + 0x0C]
        push    eax
        mov     eax, [esp + 0x0C]
        push    edx
        mov     edx, [esp + 0x0C]
        push    eax
        push    edx
        call    FUN_005182c0
    l_done:
        ret     16
    }
}
