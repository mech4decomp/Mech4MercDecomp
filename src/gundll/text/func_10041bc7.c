/*
 * FUN_10041bc7 (27 B) - __cdecl. Returns 1 if the first 3 dwords at
 * param_1 are all zero, else 0.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_10041bc7(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        xor     ecx, ecx
L_loop:
        cmp     dword ptr [eax], 0
        jnz     L_zero
        inc     ecx
        add     eax, 4
        cmp     ecx, 3
        jl      L_loop
        push    1
        pop     eax
        ret
L_zero:
        xor     eax, eax
        ret
    }
}
