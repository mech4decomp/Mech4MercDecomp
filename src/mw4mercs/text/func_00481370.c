/*
 * FUN_00481370 (30 B) — Scalar destructor wrapper.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags byte).
 * Calls FUN_00481560, then conditionally frees this if flags & 1.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00481560(void *this);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) void *__fastcall FUN_00481370(void *this, unsigned char flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00481560
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
