/*
 * thunk_FUN_006977c0 (5 B) — jmp thunk to FUN_006977c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006977c0(void);

__declspec(naked) void thunk_FUN_006977c0(void)
{
    __asm {
        jmp     FUN_006977c0
    }
}
