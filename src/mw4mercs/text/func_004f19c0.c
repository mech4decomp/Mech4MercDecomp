/*
 * FUN_004F19C0 (16 B) — Thunk: pushes param, adds 0x20 to this (ECX),
 * then calls FUN_004179B0.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004179b0(void);

__declspec(naked) void __fastcall FUN_004f19c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        add     ecx, 0x20
        call    FUN_004179b0
        ret     4
    }
}
