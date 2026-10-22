/*
 * FUN_004DD0A0 (30 B) — String comparison helper (__stdcall, RET 4).
 *
 * Compares param_1 with "General" via _stricmp.
 * Returns 4 if equal, 0 if not.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_0076b2ac;   /* _imp___stricmp */

__declspec(naked) int __stdcall FUN_004dd0a0(void)
{
    __asm {
        mov     eax, [esp + 0x04]       ; eax = param1
        push    0x770d3c                ; "General"
        push    eax
        call    dword ptr [DAT_0076b2ac] ; _stricmp
        add     esp, 8
        neg     eax
        sbb     eax, eax
        and     eax, 0xfffffffb
        add     eax, 4
        ret
    }
}
