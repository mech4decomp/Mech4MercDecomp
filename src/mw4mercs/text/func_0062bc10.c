/*
 * FUN_0062bc10 (17 B) — ABL/game-logic helper. If [ESP+4] is non-null,
 * copies the dword at [ESP+8]'s pointed value into [ESP+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0062bc10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_62bc20
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
L_62bc20:
        ret
    }
}
