/*
 * thunk_FUN_100339a0 (5 B) - E9 rel32 jump thunk to FUN_100339a0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100339a0(void);

__declspec(naked) void FUN_10033e20(void)
{
    __asm {
        jmp     FUN_100339a0
    }
}
