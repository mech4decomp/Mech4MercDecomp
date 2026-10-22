/*
 * FUN_004F08D0 (28 B) — Conditional virtual dispatch.
 *
 * __thiscall (ECX = this), RET 8, 2 stack params.
 * If byte at [this+0x28] != 0, calls vcall+0x28 on [this+0x24]
 * with both params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004f08d0(void)
{
    __asm {
        MOV  AL, [ECX + 0x28]
        TEST AL, AL
        JZ   l_done
        MOV  EDX, [ESP + 0x8]
        MOV  ECX, [ECX + 0x24]
        MOV  EAX, [ECX]
        PUSH EDX
        MOV  EDX, [ESP + 0x8]
        PUSH EDX
        CALL dword ptr [EAX + 0x28]
    l_done:
        RET  0x8
    }
}
