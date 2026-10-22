/*
 * FUN_00406770 (8 B) — __stdcall thunk: calls FUN_006FDFD0, ret 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fdfd0(void);

__declspec(naked) void FUN_00406770(void)
{
    __asm {
        call    FUN_006fdfd0
        ret     0xc
    }
}
