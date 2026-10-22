/*
 * FUN_004B56A0 (67 B) — Copy 16 bytes from param_3 into indexed slot in
 * this->field_150 array, then call FUN_004BF380(param_1, param_2).
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004bf380(int a, int b);

__declspec(naked) void FUN_004b56a0(void)
{
    __asm {
        MOV     EAX, [ESP + 0x04]
        PUSH    ESI
        MOV     ESI, [ESP + 0x10]
        PUSH    EDI
        MOV     EDI, [ECX + 0x150]
        MOV     EDX, EAX
        AND     EDX, 0xFFFF
        SHL     EDX, 0x4
        ADD     EDX, EDI
        MOV     EDI, [ESI]
        MOV     [EDX], EDI
        MOV     EDI, [ESI + 0x04]
        MOV     [EDX + 0x04], EDI
        MOV     EDI, [ESI + 0x08]
        MOV     ESI, [ESI + 0x0C]
        MOV     [EDX + 0x08], EDI
        MOV     [EDX + 0x0C], ESI
        MOV     EDX, [ESP + 0x10]
        PUSH    EDX
        PUSH    EAX
        CALL    FUN_004bf380
        POP     EDI
        POP     ESI
        RET     0x0C
    }
}
