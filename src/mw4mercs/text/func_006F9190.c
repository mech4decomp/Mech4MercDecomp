/*
 * FUN_006F9190 (10 B) — calls FUN_006F91A0 then tail-jumps to FUN_006F91B0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f91a0(void);
extern void __cdecl FUN_006f91b0(void);

__declspec(naked) void FUN_006F9190(void)
{
    __asm {
        call    FUN_006f91a0
        jmp     FUN_006f91b0
    }
}
