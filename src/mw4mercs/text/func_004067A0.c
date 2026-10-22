/*
 * FUN_004067A0 (8 B) — __stdcall thunk: calls FUN_006FDF90, ret 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fdf90(void);

__declspec(naked) void FUN_004067A0(void)
{
    __asm {
        call    FUN_006fdf90
        ret     0xc
    }
}
