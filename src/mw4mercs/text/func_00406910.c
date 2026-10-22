/*
 * FUN_00406910 (8 B) — __stdcall thunk: calls FUN_007016E0, ret 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007016e0(void);

__declspec(naked) void FUN_00406910(void)
{
    __asm {
        call    FUN_007016e0
        ret     0xc
    }
}
