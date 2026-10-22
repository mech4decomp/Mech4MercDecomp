/*
 * FUN_004DC360 (25 B) — Destructor / cleanup.
 *
 * __thiscall (ECX = this), RET 0 (no stack params).
 * If [this+0x18] != 0, calls FUN_004CECF0(this).
 * Then calls FUN_00415380().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004cecf0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void __fastcall FUN_004dc360(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        MOV  ECX, [ESI + 0x18]
        TEST ECX, ECX
        JZ   l_skip
        PUSH ESI
        CALL FUN_004cecf0
    l_skip:
        MOV  ECX, ESI
        CALL FUN_00415380
        POP  ESI
        RET
    }
}
