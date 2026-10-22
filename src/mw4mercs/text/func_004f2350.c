/*
 * FUN_004F2350 (3 B) — __stdcall no-op (RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004f2350(void)
{
    __asm {
        ret 4
    }
}
