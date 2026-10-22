/*
 * FUN_100012bd (26 B) — walks a table of function pointers from
 * param_1 (exclusive) up to param_2, calling each non-null entry.
 * __cdecl, 2 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_100012bd (26 B) -- __cdecl.
 * Walk a table of function pointers from start (exclusive) up to (but not
 * through) end, calling each non-null entry -- teardown/init-table iterator.
 */

__declspec(naked) void __cdecl FUN_100012bd(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
L_c2:
        cmp     esi, dword ptr [esp + 0xC]
        jnc     L_d5
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_d0
        call    eax
L_d0:
        add     esi, 4
        jmp     L_c2
L_d5:
        pop     esi
        ret
    }
}
