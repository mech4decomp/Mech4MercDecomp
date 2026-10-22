/*
 * FUN_004D8CE0 (3 B) — __stdcall no-op (RET 0x10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004d8ce0(void)
{
    __asm {
        ret 0x10
    }
}
