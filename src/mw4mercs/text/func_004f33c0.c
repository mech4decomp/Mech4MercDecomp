/*
 * FUN_004F33C0 (16 B) — Thunk: passes param to FUN_004164b0
 * with ECX = this + 0x2c.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004164b0(void);

__declspec(naked) void __fastcall FUN_004f33c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        add     ecx, 0x2c
        call    FUN_004164b0
        ret     4
    }
}
