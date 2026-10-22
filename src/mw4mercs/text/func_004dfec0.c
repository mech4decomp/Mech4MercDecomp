/*
 * FUN_004DFEC0 (16 B) — Thunk: passes param to FUN_00417530
 * with ECX = this + 0x10.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00417530(void);

__declspec(naked) void __fastcall FUN_004dfec0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        add     ecx, 0x10
        call    FUN_00417530
        ret     4
    }
}
