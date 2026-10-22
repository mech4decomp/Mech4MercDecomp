/*
 * FUN_005DB9F0 (30 B) - Destructor wrapper.
 *
 * __thiscall (ECX = this), RET 4 (one stack param = flags).
 * Calls FUN_005DBA10 (sub-object destructor), then if (flags & 1)
 * frees this via FUN_004084E0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_005dba10(void *this);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) int __fastcall FUN_005db9f0(void *this, char flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005dba10
        test    byte ptr [esp + 8], 1
        jz      l_done
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
