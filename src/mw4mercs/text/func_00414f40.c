/*
 * FUN_00414f40 (35 B) — archive object release.
 *
 * Frees g_007b8c00 (FUN_004084e0), clears it, and resets g_007b21fc to -1.
 *
 * Calling convention: __cdecl, 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_004084e0 — free
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern int  g_007b8c00;
extern int  g_007b21fc;

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_00414f40(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c00]
        push    eax
        call    FUN_004084e0            ; free(g_007b8c00)
        add     esp, 4
        mov     dword ptr [g_007b8c00], 0
        mov     dword ptr [g_007b21fc], 0xffffffff
        ret
    }
}
