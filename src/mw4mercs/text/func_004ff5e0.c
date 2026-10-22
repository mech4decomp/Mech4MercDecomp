/*
 * FUN_004FF5E0 (28 B) — Method call with argument setup.
 *
 * __thiscall (ECX = this), RET 0 (no stack params), 1 stack param.
 * Sets [this] = param2, then calls [this+0x78](this, 1, [this+0x7C], 0, 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004ff5e0(void)
{
    __asm {
        MOV  EAX, [ESP + 0x4]
        MOV  EDX, [EAX + 0x7C]
        MOV  ECX, [ESP + 0x8]
        PUSH 0x0
        PUSH 0x0
        PUSH EDX
        PUSH 0x1
        PUSH EAX
        MOV  [EAX], ECX
        CALL dword ptr [EAX + 0x78]
        ADD  ESP, 0x14
        RET
    }
}
