/*
 * FUN_00406920 (8 B) — __stdcall thunk: calls FUN_00701700, ret 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00701700(void);

__declspec(naked) void FUN_00406920(void)
{
    __asm {
        call    FUN_00701700
        ret     0xc
    }
}
