/*
 * FUN_004E2B20 (28 B) — Vtable-indexed array accessor.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (index).
 * Calls vcall+4 on [this+0x194], returns result + index * 12 (0xC).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_004e2b20(void)
{
    __asm {
        MOV  EAX, [ECX + 0x194]
        ADD  ECX, 0x194
        CALL dword ptr [EAX + 0x4]
        MOV  ECX, [ESP + 0x4]
        LEA  ECX, [ECX + ECX * 2]
        LEA  EAX, [EAX + ECX * 4]
        RET  0x4
    }
}
