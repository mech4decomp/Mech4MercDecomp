/*
 * FUN_00649f10 (8 B) — Subtracts 4 from the counter at 0x805914.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_805914;

__declspec(naked) void __cdecl FUN_00649f10(void)
{
    __asm {
        sub     dword ptr [g_805914], 0x4
        ret
    }
}
