/*
 * FUN_00414B1B (15 B) — alignment pad (5 nops) + pushes [ecx+0xc],
 * calls FUN_006FBCE0, returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fbce0(void);

__declspec(naked) void FUN_00414B1B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [ecx + 0xc]
        push    eax
        call    FUN_006fbce0
        ret
    }
}
