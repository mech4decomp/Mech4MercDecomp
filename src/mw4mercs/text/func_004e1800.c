/*
 * FUN_004E1800 (16 B) — Thunk: passes address of first stack param
 * to FUN_00416b60 with ECX = this + 0x50.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00416b60(void);

__declspec(naked) void __fastcall FUN_004e1800(void)
{
    __asm {
        lea     eax, [esp + 4]
        push    eax
        add     ecx, 0x50
        call    FUN_00416b60
        ret     4
    }
}
