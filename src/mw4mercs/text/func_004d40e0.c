/*
 * FUN_004D40E0 (3 B) — __stdcall no-op (RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004d40e0(void)
{
    __asm {
        ret 4
    }
}
