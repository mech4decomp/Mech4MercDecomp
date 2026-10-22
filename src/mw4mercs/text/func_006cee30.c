/*
 * FUN_006CEE30 — zero-initialize 0x80 entries of 12-byte structs at 0x83F600.
 *
 * Each iteration zeros one dword and advances by 12 bytes (3 dwords).
 *
 * __cdecl, no stack params.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006cee30(void)
{
    __asm {
        mov     eax, 0x83f600
        mov     ecx, 0x80
    L_loop:
        mov     dword ptr [eax], 0
        add     eax, 0xc
        dec     ecx
        jnz     L_loop
        ret
    }
}
