/*
 * FUN_00461670 (52 B) — MLR __thiscall setter. Copies 6 dwords from the
 * source into either [this+0x2c] (param_2==0) or [this+0x74] (else),
 * setting [this+0x11]=2 in the latter case.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00461670(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0xc]
        test    esi, esi
        push    edi
        jnz     L8D
        mov     esi, dword ptr [esp+0xc]
        lea     edi, [ecx+0x2c]
        mov     ecx, 0x6
        rep     movsd
        pop     edi
        pop     esi
        ret     0x8
L8D:
        mov     esi, dword ptr [esp+0xc]
        mov     byte ptr [ecx+0x11], 0x2
        lea     edi, [ecx+0x74]
        mov     ecx, 0x6
        rep     movsd
        pop     edi
        pop     esi
        ret     0x8
    }
}
