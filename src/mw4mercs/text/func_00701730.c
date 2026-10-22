/*
 * thunk_FUN_00701790 (5 B) — unconditional jump thunk to FUN_00701790.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00701790(void);

__declspec(naked) void thunk_FUN_00701790(void)
{
    __asm {
        jmp     FUN_00701790
    }
}
