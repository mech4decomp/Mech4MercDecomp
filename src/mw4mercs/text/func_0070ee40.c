/*
 * FUN_0070EE40 (37 B) — __stdcall (RET 0xC) memcpy helper.
 *
 * Copies count bytes from src to dst using REP MOVSD (count/4 dwords)
 * then REP MOVSB (count%4 bytes). If count <= 0, returns immediately.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0070ee40(void *dst, void *src, int count)
{
    __asm {
        mov     ecx, dword ptr [esp + 0xC]
        test    ecx, ecx
        jbe     Lret
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        mov     eax, ecx
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
Lret:
        ret     0xC
    }
}
