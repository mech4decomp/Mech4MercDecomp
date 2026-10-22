/*
 * thunk_FUN_004b5dd0 (5 B) — JMP to FUN_004B5DD0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall thunk_FUN_004b5dd0(void)
{
    __asm {
        _emit 0xE9
        _emit 0x6B
        _emit 0x11
        _emit 0xFD
        _emit 0xFF
    }
}
