/*
 * FUN_004F93B0 (19 B) — Thunk: adds 0x19c to ECX, then tail-calls FUN_00416B60.
 *
 * __fastcall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00416b60(void);

__declspec(naked) void __fastcall FUN_004f93b0(void)
{
    __asm {
        mov     eax, [esp + 4]
        push    eax
        add     ecx, 0x19c
        call    FUN_00416b60
        ret     4
    }
}
