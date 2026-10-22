/*
 * FUN_00487810 (30 B) — Scalar destructor wrapper (__thiscall, RET 4).
 *
 * Calls FUN_004878A0, then conditionally frees this if flags & 1.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004878a0(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void *__fastcall FUN_00487810(void *this, unsigned char flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004878a0
        test    byte ptr [esp + 8], 1
        jz      l_return
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_return:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
