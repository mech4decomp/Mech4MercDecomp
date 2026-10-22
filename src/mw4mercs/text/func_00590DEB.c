/*
 * FUN_00590DEB (5 B) — .text data stub: `pop esi; pop ebx; pop ecx; ret; nop`.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_00590DEB(void)
{
    __asm {
        pop     esi
        pop     ebx
        pop     ecx
        ret
        nop
    }
}
