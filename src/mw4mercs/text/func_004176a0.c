/*
 * thunk_FUN_00415c40 (5 B) — unconditional jump thunk to FUN_00415c40
 * (container node unlink helper).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415c40(void *p);

__declspec(naked) void thunk_FUN_00415c40(void)
{
    __asm {
        jmp     FUN_00415c40
    }
}
