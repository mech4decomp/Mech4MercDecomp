/*
 * FUN_004E69A0 (37 B) — thiscall method.
 *
 * __thiscall (ECX = this), RET 0 (void return).
 * Calls FUN_004E7760(this->field_28), checks if result == 2.
 * If not 2, calls FUN_004E7A90(this) and checks result.
 * Returns 1 if result != 0 or result == 2, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004E7760(int);
extern int __cdecl FUN_004E7A90(int);

__declspec(naked) int __fastcall FUN_004e69a0(void)
{
    __asm {
        PUSH EBX
        PUSH ESI
        MOV ESI, ECX
        MOV ECX, DWORD PTR [ESI + 0x28]
        XOR BL, BL
        CALL FUN_004E7760
        CMP EAX, 2
        JZ l_ret0
        MOV ECX, ESI
        CALL FUN_004E7A90
        TEST EAX, EAX
        MOV AL, 1
        JNZ l_done
    l_ret0:
        MOV AL, BL
    l_done:
        POP ESI
        POP EBX
        RET
    }
}
