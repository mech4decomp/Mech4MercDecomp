/*
 * FUN_00488620 (30 B) — Destructor with optional free.
 *
 * __thiscall (ECX = this), RET 0x04 (1 stack param: flags byte).
 * Calls FUN_00488640 to clean up, then optionally frees this if flags & 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00488640(void *this);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __fastcall FUN_00488620(void *param1)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00488640
        test    byte ptr [esp + 0x08], 0x01
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     0x04
    }
}
