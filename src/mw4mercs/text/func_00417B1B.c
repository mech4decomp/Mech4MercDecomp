/*
 * FUN_00417B1B (10 B) — alignment pad (5 nops) + tail-jump to FUN_00417B30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417b30(void);

__declspec(naked) void FUN_00417B1B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        jmp     FUN_00417b30
    }
}
