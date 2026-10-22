/*
 * thunk_FUN_1001c460 (5 B) - E9 rel32 jump thunk to FUN_1001c460.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c460(void);

__declspec(naked) void FUN_1001ca20(void)
{
    __asm {
        jmp     FUN_1001c460
    }
}
