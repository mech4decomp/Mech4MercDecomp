/*
 * FUN_004D7440 (26 B) — Scalar deleting destructor (hardcoded delete).
 *
 * __stdcall RET 4, 1 stack param (this).
 * Calls vcall+0xC on this, then calls FUN_004084E0(this) to free.
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) int __stdcall FUN_004d7440(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, [ESP + 0x8]
        MOV  EAX, [ESI]
        PUSH ESI
        CALL dword ptr [EAX + 0xC]
        PUSH ESI
        CALL FUN_004084e0
        ADD  ESP, 0x4
        MOV  AL, 0x1
        POP  ESI
        RET  0x4
    }
}
