/*
 * FUN_006A6CA0 (8 B) — __stdcall thunk: calls FUN_00415020, ret 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415020(void);

__declspec(naked) void FUN_006A6CA0(void)
{
    __asm {
        call    FUN_00415020
        ret     0xc
    }
}
