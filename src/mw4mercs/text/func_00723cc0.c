/*
 * FUN_00723cc0 (3 B) — empty function, RET 0x8 (__stdcall, 8 bytes of args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00723cc0(void)
{
    __asm {
        ret     8
    }
}
