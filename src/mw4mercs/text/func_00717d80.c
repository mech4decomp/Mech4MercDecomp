/*
 * THUNK_00717D80 (5 B) — thunk: JMP FUN_00747900.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00747900(void);

__declspec(naked) void FUN_00747900(void)
{
    __asm {
        jmp     FUN_00747900
    }
}
