/*
 * FUN_10038473 (26 B) - __cdecl. Calls each non-null function pointer in
 * the [param_1, param_2) range.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_10038473(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
L_loop:
        cmp     esi, dword ptr [esp + 0xc]
        jnc     L_done
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_next
        call    eax
L_next:
        add     esi, 4
        jmp     L_loop
L_done:
        pop     esi
        ret
    }
}
