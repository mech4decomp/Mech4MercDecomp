/*
 * FUN_004CECD0 (28 B) — __thiscall helper.
 * Calls FUN_004CED10 with a 16-bit field from param_1, then increments
 * this->field_24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004ced10(void);

__declspec(naked) void __stdcall FUN_004cecd0(void)
{
    __asm {
        PUSH ESI
        MOV ESI, ECX
        MOV ECX, dword ptr [ESP + 0x8]
        XOR EAX, EAX
        MOV AX, word ptr [ECX + 0x16]
        MOV ECX, ESI
        PUSH EAX
        CALL FUN_004ced10
        INC dword ptr [ESI + 0x24]
        POP ESI
        RET 0x4
    }
}
