/*
 * FUN_00649eb0 (7 B) — Decrements the counter at 0x805914.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_805914;

__declspec(naked) void __cdecl FUN_00649eb0(void)
{
    __asm {
        dec     dword ptr [g_805914]
        ret
    }
}
