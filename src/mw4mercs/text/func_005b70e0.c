/*
 * FUN_005b70e0 (41 B) — __cdecl, no params.
 *
 * Calls FUN_00415040(100); returns 0 if <0x47, 3 if >0x60,
 * else 1 + (result > 0x59).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00415040(int value);

__declspec(naked) void __cdecl FUN_005b70e0(void)
{
    __asm {
        push    0x64
        call    FUN_00415040
        add     esp, 0x4
        cmp     eax, 0x46
        jg      L1
        xor     eax, eax
        ret
L1:
        cmp     eax, 0x61
        jl      L2
        mov     eax, 0x3
        ret
L2:
        xor     ecx, ecx
        cmp     eax, 0x5a
        setge   cl
        inc     ecx
        mov     eax, ecx
        ret
    }
}
