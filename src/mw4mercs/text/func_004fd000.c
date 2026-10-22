/*
 * FUN_004FD000 (27 B) — Array element accessor.
 *
 * __thiscall (ECX = this), RET 8, 2 stack params (index1, index2).
 * Returns *(this + 0x10 + index1 * 8) + index2 * 28 (0x1C).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_004fd000(void)
{
    __asm {
        MOV  EAX, [ESP + 0x8]
        LEA  EDX, [EAX * 8]
        SUB  EDX, EAX
        MOV  EAX, [ESP + 0x4]
        MOV  ECX, [ECX + EAX * 8 + 0x10]
        LEA  EAX, [ECX + EDX * 4]
        RET  0x8
    }
}
