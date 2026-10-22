/*
 * FUN_004D8DF0 (20 B) — Calls FUN_00416A90(param_1, param_1 + 0x14)
 * with ECX += 0x10.
 *
 * __fastcall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00416a90(int param1, int param2);

__declspec(naked) void __fastcall FUN_004d8df0(void)
{
    __asm {
        mov     eax, [esp + 4]
        lea     edx, [eax + 0x14]
        push    edx
        push    eax
        add     ecx, 0x10
        call    FUN_00416a90
        ret     4
    }
}
