/*
 * FUN_00406930 (8 B) — __stdcall thunk: calls FUN_007016F0, ret 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007016f0(void);

__declspec(naked) void FUN_00406930(void)
{
    __asm {
        call    FUN_007016f0
        ret     0xc
    }
}
