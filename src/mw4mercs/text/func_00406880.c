/*
 * FUN_00406880 (8 B) — __stdcall thunk: calls FUN_007014C0, ret 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007014c0(void);

__declspec(naked) void FUN_00406880(void)
{
    __asm {
        call    FUN_007014c0
        ret     0xc
    }
}
