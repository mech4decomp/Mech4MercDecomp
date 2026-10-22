/*
 * FUN_004BC720 (79 B) — Loop over this->field_154 array, calling virtual
 * method at vtable+0x24 on each pair of elements.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004bcf30(void *param);

__declspec(naked) void FUN_004bc720(void)
{
    __asm {
        PUSH    EBX
        MOV     EBX, [ESP + 0x08]
        PUSH    ESI
        MOV     ESI, ECX
        PUSH    EBX
        CALL    FUN_004bcf30
        MOV     EAX, [ESI + 0x158]
        TEST    AX, AX
        JBE     l_done
        MOV     ESI, [ESI + 0x154]
        PUSH    EBP
        AND     EAX, 0xFFFF
        PUSH    EDI
        LEA     EDI, [ESI + 0x04]
        MOV     EBP, EAX
    l_loop:
        MOV     EAX, [EBX]
        PUSH    0x04
        PUSH    ESI
        MOV     ECX, EBX
        _emit   0xFF
        _emit   0x50
        _emit   0x24
        MOV     EDX, [EAX]
        PUSH    0x04
        PUSH    EDI
        MOV     ECX, EAX
        _emit   0xFF
        _emit   0x52
        _emit   0x24
        ADD     ESI, 0x08
        ADD     EDI, 0x08
        DEC     EBP
        JNZ     l_loop
        POP     EDI
        POP     EBP
    l_done:
        POP     ESI
        POP     EBX
        RET     0x04
    }
}
