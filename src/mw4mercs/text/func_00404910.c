/*
 * FUN_00404910 (13 B) -- thunk: calls FUN_004c94f0, masks the returned
 * byte to 0xff, and returns __stdcall with 3 dwords of args (RET 0xc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c94f0(void);

__declspec(naked) void FUN_00404910(void)
{
    __asm {
        call    FUN_004c94f0
        and     eax, 0xff
        ret     0xc
    }
}
