/*
 * THUNK_00733320 (5 B) — thunk: JMP FUN_00733310.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00733310(void);

__declspec(naked) void FUN_00733310(void)
{
    __asm {
        jmp     FUN_00733310
    }
}
