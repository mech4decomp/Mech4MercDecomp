/*
 * FUN_004F88D0 (13 B) — Thunk: pushes its single parameter and
 * calls FUN_004DA960.
 *
 * __stdcall, RET 4 (one DWORD param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004da960(void);

__declspec(naked) void __stdcall FUN_004f88d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004da960
        ret     4
    }
}
