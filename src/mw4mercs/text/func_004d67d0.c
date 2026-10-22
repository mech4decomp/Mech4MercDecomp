/*
 * FUN_004D67D0 (16 B) — Thunk: pushes param, adds 0x14 to this (ECX),
 * then calls FUN_004179B0.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004179b0(void);

__declspec(naked) void __fastcall FUN_004d67d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        add     ecx, 0x14
        call    FUN_004179b0
        ret     4
    }
}
