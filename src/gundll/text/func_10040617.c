/*
 * FUN_10040617 (57 B) - __cdecl. Hex-string parser: folds each
 * character 'a'-'f' (-> -0x27) or 'A'-'F' (-> -7) into a running
 * base-16 accumulator, returning the parsed value.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_10040617(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        xor     eax, eax
    L_loop:
        mov     cl, byte ptr [edx]
        inc     edx
        test    cl, cl
        jz      L_done
        cmp     cl, 0x61
        jl      L_upper
        cmp     cl, 0x66
        jg      L_upper
        add     cl, 0xd9
        jmp     L_accum
    L_upper:
        cmp     cl, 0x41
        jl      L_accum
        cmp     cl, 0x46
        jg      L_accum
        add     cl, 0xf9
    L_accum:
        add     eax, 0x0ffffffd
        movsx   ecx, cl
        shl     eax, 0x4
        add     eax, ecx
        jmp     L_loop
    L_done:
        ret
    }
}
