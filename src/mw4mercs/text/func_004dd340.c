/*
 * FUN_004DD340 (28 B) — Destructor / cleanup.
 *
 * __thiscall (ECX = this), RET 0 (no stack params).
 * If [this+0x18] != 0, calls FUN_004084E0 on it.
 * Then calls FUN_00415200().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00415200(void);

__declspec(naked) void __fastcall FUN_004dd340(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        MOV  EAX, [ESI + 0x18]
        TEST EAX, EAX
        JZ   l_skip
        PUSH EAX
        CALL FUN_004084e0
        ADD  ESP, 0x4
    l_skip:
        MOV  ECX, ESI
        CALL FUN_00415200
        POP  ESI
        RET
    }
}
