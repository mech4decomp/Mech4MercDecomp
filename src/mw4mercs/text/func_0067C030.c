/*
 * FUN_0067C030 (16 B) — pushes 0x8000, calls FUN_0067BE90, pops, ret,
 * then 4 nops alignment pad.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0067be90(void);

__declspec(naked) void FUN_0067C030(void)
{
    __asm {
        push    0x8000
        call    FUN_0067be90
        pop     ecx
        ret
        nop
        nop
        nop
        nop
    }
}
