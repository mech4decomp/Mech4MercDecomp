/*
 * FUN_006F3950 (1 B) — No-op function (single RET).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f3950(void)
{
    __asm {
        ret
    }
}
