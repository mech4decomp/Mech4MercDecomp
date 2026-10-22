/*
 * FUN_00406900 (8 B) — __stdcall thunk: calls FUN_007016B0, ret 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007016b0(void);

__declspec(naked) void FUN_00406900(void)
{
    __asm {
        call    FUN_007016b0
        ret     0xc
    }
}
