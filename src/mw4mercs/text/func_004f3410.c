/*
 * FUN_004F3410 (16 B) — Thunk: passes param to FUN_004179b0
 * with ECX = this + 0x24.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004179b0(void);

__declspec(naked) void __fastcall FUN_004f3410(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        add     ecx, 0x24
        call    FUN_004179b0
        ret     4
    }
}
