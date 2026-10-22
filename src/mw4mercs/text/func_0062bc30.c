/*
 * FUN_0062bc30 (24 B) — ABL/game-logic memcpy helper. Copies 7 dwords
 * (0x1c bytes) from [ESP+0x10] to [ESP+0x8] if the destination is
 * non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0062bc30(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        test    edi, edi
        jz      L_62bc46
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, 0x7
        rep movsd
        pop     esi
L_62bc46:
        pop     edi
        ret
    }
}
