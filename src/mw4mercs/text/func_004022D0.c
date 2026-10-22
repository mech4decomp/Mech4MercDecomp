/*
 * FUN_004022D0 (8 B) — __stdcall thunk: calls FUN_004022E0, ret 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004022e0(void);

__declspec(naked) void FUN_004022D0(void)
{
    __asm {
        call    FUN_004022e0
        ret     0xc
    }
}
