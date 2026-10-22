/*
 * FUN_5e0321a0 (33 B) - counts leading alphabetic characters in a string
 * (A-Z or a-z), stopping at the first non-letter.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e0321a0(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        xor     eax, eax
    L21a6:
        mov     cl, byte ptr [edx]
        inc     edx
        cmp     cl, 0x41
        jl      L21b3
        cmp     cl, 0x5a
        jle     L21bd
    L21b3:
        cmp     cl, 0x61
        jl      L21c0
        cmp     cl, 0x7a
        jg      L21c0
    L21bd:
        inc     eax
        jmp     L21a6
    L21c0:
        ret
    }
}
