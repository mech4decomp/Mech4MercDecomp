/*
 * FUN_004DC460 (3 B) — __stdcall no-op (RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004dc460(void)
{
    __asm {
        ret 4
    }
}
