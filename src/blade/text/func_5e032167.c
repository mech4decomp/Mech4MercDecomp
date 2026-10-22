/*
 * FUN_5e032167 (57 B) - hex-string parser. Converts a string of hex digits
 * (a-f/A-F/0-9) into an integer, folding the a-f/A-F letters down to
 * 0-5 before accumulating.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e032167(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        xor     eax, eax
    L216d:
        mov     cl, byte ptr [edx]
        inc     edx
        test    cl, cl
        jz      L219f
        cmp     cl, 0x61
        jl      L2183
        cmp     cl, 0x66
        jg      L2183
        add     cl, 0xd9
        jmp     L2190
    L2183:
        cmp     cl, 0x41
        jl      L2190
        cmp     cl, 0x46
        jg      L2190
        add     cl, 0xf9
    L2190:
        add     eax, 0xffffffd
        movsx   ecx, cl
        shl     eax, 4
        add     eax, ecx
        jmp     L216d
    L219f:
        ret
    }
}
