/*
 * FUN_004307a0 (52 B) — __thiscall, RET 0x8. MLR: copies 6 dwords from a
 * source into either +0x2c or +0x70 (and sets +0x11=2) depending on arg2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004307a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0xc]
        test    esi, esi
        push    edi
        jnz     L_bd
        mov     esi, dword ptr [esp+0xc]
        lea     edi, [ecx+0x2c]
        mov     ecx, 6
        rep     movsd
        pop     edi
        pop     esi
        ret     0x8
L_bd:
        mov     esi, dword ptr [esp+0xc]
        mov     byte ptr [ecx+0x11], 2
        lea     edi, [ecx+0x70]
        mov     ecx, 6
        rep     movsd
        pop     edi
        pop     esi
        ret     0x8
    }
}
