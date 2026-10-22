/*
 * FUN_00649f90 (32 B) — Decrements the counter at 0x805914 by 1, and if
 * the flag at 0x7b5a2e is set, by a further 6 (total -7).
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_805914;
extern char g_7b5a2e;

__declspec(naked) void __cdecl FUN_00649f90(void)
{
    __asm {
        mov     eax, dword ptr [g_805914]
        mov     cl, byte ptr [g_7b5a2e]
        dec     eax
        test    cl, cl
        jz      l_a9
        add     eax, -0x6
        mov     dword ptr [g_805914], eax
        ret
    l_a9:
        dec     eax
        mov     dword ptr [g_805914], eax
        ret
    }
}
