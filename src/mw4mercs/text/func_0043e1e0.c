/*
 * FUN_0043e1e0 (52 B) — MLR mesh copy helper (__thiscall, RET 0x8).
 * Copies 6 dwords (24 bytes) into one of two member arrays depending on a flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0043e1e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        push    edi
        jnz     L_e1fd
        mov     esi, dword ptr [esp + 0xc]
        lea     edi, [ecx + 0x2c]
        mov     ecx, 0x6
        rep movsd
        pop     edi
        pop     esi
        ret     0x8
L_e1fd:
        mov     esi, dword ptr [esp + 0xc]
        mov     byte ptr [ecx + 0x11], 0x2
        lea     edi, [ecx + 0x6c]
        mov     ecx, 0x6
        rep movsd
        pop     edi
        pop     esi
        ret     0x8
    }
}
