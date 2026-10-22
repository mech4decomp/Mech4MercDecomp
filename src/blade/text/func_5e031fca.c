/*
 * FUN_5e031fca (31 B) - scan a 16-bit table 0x5e039cf4..0x5e039d08
 * for a match against the argument; return 0 if found, else 1.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e031fca(void)
{
    __asm {
        mov     eax, 0x5e039cf4
    L_fcf:
        mov     cx, word ptr [esp+4]
        cmp     cx, word ptr [eax]
        jz      L_fe6
        inc     eax
        inc     eax
        cmp     eax, 0x5e039d08
        jl      L_fcf
        push    1
        pop     eax
        ret
    L_fe6:
        xor     eax, eax
        ret
    }
}
