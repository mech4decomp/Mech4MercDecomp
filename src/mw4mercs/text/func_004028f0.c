/*
 * FUN_004028f0 (13 B) - Trivial thunk: calls FUN_006f6760, returns 1.
 * __stdcall, RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f6760(void);

__declspec(naked) void FUN_004028f0(void)
{
    __asm {
        call    FUN_006f6760
        mov     eax, 1
        ret     0xc
    }
}
