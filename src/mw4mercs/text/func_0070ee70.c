/*
 * FUN_0070EE70 (49 B) — __stdcall (RET 0xC) memset helper.
 *
 * Fills dest with the byte value replicated across all 4 bytes, using
 * REP STOSD (count/4 dwords) then REP STOSB (count%4 bytes). If
 * count <= 0, returns immediately.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0070ee70(void *dest, char value, int count)
{
    __asm {
        mov     ecx, dword ptr [esp + 0xC]
        test    ecx, ecx
        jbe     Lret
        mov     al, byte ptr [esp + 8]
        push    ebx
        mov     bl, al
        mov     bh, bl
        mov     edx, ecx
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        shr     ecx, 2
        mov     eax, ebx
        shl     eax, 0x10
        mov     ax, bx
        rep     stosd
        mov     ecx, edx
        and     ecx, 3
        rep     stosb
        pop     edi
        pop     ebx
Lret:
        ret     0xC
    }
}
