/*
 * FUN_004BBEF0 (17 B) — __stdcall thunk: pushes arg0, calls FUN_004C6960,
 * ret 4; then 3 nops + ret (alignment pad).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c6960(void);

__declspec(naked) void FUN_004BBEF0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004c6960
        ret     4
        nop
        nop
        nop
        ret
    }
}
