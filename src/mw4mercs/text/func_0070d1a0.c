/*
 * FUN_0070d1a0 (28 B) — closes the spew file handle (g_007b70e0) via
 * CloseHandle if it is not INVALID_HANDLE_VALUE, then resets it to -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b70e0;           /* 0x007b70e0 spew file handle */
extern void *g_76b0ec;           /* IAT: CloseHandle */

__declspec(naked) void FUN_0070d1a0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b70e0]
        cmp     eax, -0x1
        jz      Lbb
        push    eax
        call    dword ptr [g_76b0ec]   /* CloseHandle */
        mov     dword ptr [g_007b70e0], 0xffffffff
Lbb:
        ret
    }
}
