/*
 * FUN_100012b3 (26 B) — iterate function-pointer table [start,end),
 * calling each non-null entry.
 *
 * __cdecl, 2 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_100012b3(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
L_b8:
        cmp     esi, dword ptr [esp + 0xC]
        jnc     L_cb
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_c6
        call    eax
L_c6:
        add     esi, 4
        jmp     L_b8
L_cb:
        pop     esi
        ret
    }
}
