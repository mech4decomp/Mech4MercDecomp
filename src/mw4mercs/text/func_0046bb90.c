/*
 * FUN_0046bb90 (52 B) — MLR (MidLevelRenderer) graphics library.
 * __thiscall, RET 0x8. Copies 6 dwords (24 bytes) of data into the object
 * at +0x2c (if param==0) or +0x70 (if param!=0, also sets byte +0x11 = 2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0046bb90(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0xc]
        test    esi, esi
        push    edi
        jnz     L_bbad
        mov     esi, dword ptr [esp+0xc]
        lea     edi, [ecx+0x2c]
        mov     ecx, 0x6
        rep movsd
        pop     edi
        pop     esi
        ret     0x8
L_bbad:
        mov     esi, dword ptr [esp+0xc]
        mov     byte ptr [ecx+0x11], 0x2
        lea     edi, [ecx+0x70]
        mov     ecx, 0x6
        rep movsd
        pop     edi
        pop     esi
        ret     0x8
    }
}
