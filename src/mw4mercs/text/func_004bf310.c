/*
 * FUN_004BF310 (85 B) — Calls FUN_004C6960 on param_1, then calls virtual
 * method at vtable+0x24 to read a count, then iterates calling virtual
 * method at vtable+0x04 on each element.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c6960(void *param);

__declspec(naked) void FUN_004bf310(void)
{
    __asm {
        PUSH    EBX
        PUSH    ESI
        PUSH    EDI
        MOV     EDI, [ESP + 0x10]
        MOV     EBX, ECX
        PUSH    EDI
        CALL    FUN_004c6960
        MOV     EAX, [EBX + 0x148]
        MOV     EDX, [EDI]
        MOV     [ESP + 0x10], EAX
        PUSH    0x02
        LEA     EAX, [ESP + 0x14]
        PUSH    EAX
        MOV     ECX, EDI
        _emit   0xFF
        _emit   0x52
        _emit   0x24
        XOR     ESI, ESI
        CMP     WORD PTR [ESP + 0x10], SI
        JBE     l_done
        MOV     EBX, [EBX + 0x144]
    l_loop:
        MOV     ECX, ESI
        AND     ECX, 0xFFFF
        MOV     ECX, [EBX + ECX * 4]
        MOV     EDX, [ECX]
        PUSH    EDI
        _emit   0xFF
        _emit   0x52
        _emit   0x04
        INC     ESI
        CMP     SI, WORD PTR [ESP + 0x10]
        JC      l_loop
    l_done:
        POP     EDI
        POP     ESI
        POP     EBX
        RET     0x04
    }
}
