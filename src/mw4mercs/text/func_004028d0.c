/*
 * FUN_004028d0 (13 B) - Trivial thunk: calls FUN_006f65c0, returns low byte.
 * __stdcall, RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f65c0(void);

__declspec(naked) void FUN_004028d0(void)
{
    __asm {
        call    FUN_006f65c0
        and     eax, 0xff
        ret     0xc
    }
}
