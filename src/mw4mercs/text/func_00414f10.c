/*
 * FUN_00414f10 (48 B) — archive object allocator.
 *
 * Allocates a node via FUN_004084c0(1, g_007b8810); if non-null, calls the
 * ctor FUN_00414f70 and stores the result in g_007b8c00; else clears it.
 *
 * Calling convention: __cdecl, 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_004084c0 — alloc
 *   FUN_00414f70 — ctor
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern int g_007b8810;
extern int g_007b8c00;

extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00414f70(void);

__declspec(naked) void func_00414f10(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    1
        call    FUN_004084c0            ; alloc(1, g_007b8810)
        mov     esi, eax
        add     esp, 8
        test    esi, esi
        jz      set_zero
        call    FUN_00414f70            ; ctor()
        mov     dword ptr [g_007b8c00], esi
        pop     esi
        ret
    set_zero:
        mov     dword ptr [g_007b8c00], 0
        pop     esi
        ret
    }
}
