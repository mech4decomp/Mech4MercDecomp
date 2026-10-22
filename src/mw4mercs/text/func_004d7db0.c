/*
 * FUN_004d7db0 (74 B) — __thiscall socket teardown. Closes both sockets
 * (+0x17d8/+0x17dc) if valid, resets them to -1, zeroes +0x17e0, and calls
 * WSACleanup (FUN_005008d0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075dfb0(void);   /* closesocket */
extern void __cdecl FUN_005008d0(void);   /* WSACleanup */

__declspec(naked) void FUN_004d7db0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x17d8]
        cmp     eax, -1
        jz      skip1
        push    eax
        call    FUN_0075dfb0
        mov     dword ptr [esi+0x17d8], -1
skip1:
        mov     eax, dword ptr [esi+0x17dc]
        cmp     eax, -1
        jz      skip2
        push    eax
        call    FUN_0075dfb0
        mov     dword ptr [esi+0x17dc], -1
skip2:
        mov     dword ptr [esi+0x17e0], 0
        call    FUN_005008d0
        pop     esi
        ret
    }
}
