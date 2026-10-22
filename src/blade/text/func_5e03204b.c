/*
 * FUN_5e03204b (54 B) - OS version check. Calls GetVersionExA and returns 1
 * if the platform id is 2 (Windows NT), else 0.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e0350f8;   /* IAT: GetVersionExA */

__declspec(naked) void FUN_5e03204b(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x94
        lea     eax, [ebp-0x94]
        mov     dword ptr [ebp-0x94], 0x94
        push    eax
        call    dword ptr [g_5e0350f8]
        test    eax, eax
        jz      L207d
        cmp     dword ptr [ebp-0x84], 0x2
        jnz     L207d
        push    0x1
        pop     eax
        leave
        ret
    L207d:
        xor     eax, eax
        leave
        ret
    }
}
