/*
 * thunk_FUN_004f1c20 (5 B) — JMP to FUN_004F1C20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void thunk_FUN_004f1c20(void)
{
    __asm {
        _emit 0xE9
        _emit 0x2B
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
    }
}
