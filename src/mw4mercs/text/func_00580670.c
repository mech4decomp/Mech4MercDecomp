/* FUN_00580670 - 225 bytes, __thiscall vector insertion */
extern void *FUN_004084d0(int);
extern void FUN_004084e0(void *);

void __declspec(naked) __fastcall FUN_00580670(void)
{
    __asm {
        SUB     ESP, 0x8
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        MOV     ESI, ECX
        MOV     EBX, [ESI + 0x4]
        MOV     ECX, [ESP + 0x20]
        PUSH    EDI
        MOV     EDI, [ESI]
        MOV     EAX, EBX
        SUB     EAX, EDI
        SAR     EAX, 0x2
        CMP     EAX, ECX
        MOV     [ESP + 0x14], ESI
        MOV     [ESP + 0x10], EAX
        LEA     ECX, [ESP + 0x24]
        JC      label_58069D
        LEA     ECX, [ESP + 0x10]
label_58069D:
        MOV     ECX, [ECX]
        ADD     ECX, EAX
        MOV     [ESP + 0x10], ECX
        JZ      label_5806BB
        LEA     EAX, [ECX*4 + 0]
        PUSH    EAX
        CALL    FUN_004084d0
        ADD     ESP, 0x4
        MOV     EBP, EAX
        JMP     label_5806BD
label_5806BB:
        XOR     EBP, EBP
label_5806BD:
        MOV     EAX, [ESP + 0x1C]
        SUB     EAX, EDI
        SAR     EAX, 0x2
        TEST    EAX, EAX
        MOV     EDX, EBP
        JLE     label_5806DB
        MOV     ECX, EDI
        SUB     ECX, EBP
label_5806D0:
        MOV     EDI, [ECX + EDX]
        MOV     [EDX], EDI
        ADD     EDX, 0x4
        DEC     EAX
        JNZ     label_5806D0
label_5806DB:
        MOV     ECX, [ESP + 0x24]
        CMP     ECX, 0x1
        JNZ     label_5806F5
        TEST    EDX, EDX
        JZ      label_5806F0
        MOV     ECX, [ESP + 0x20]
        MOV     EAX, [ECX]
        MOV     [EDX], EAX
label_5806F0:
        ADD     EDX, 0x4
        JMP     label_58070A
label_5806F5:
        TEST    ECX, ECX
        JBE     label_58070A
        MOV     EAX, [ESP + 0x20]
        MOV     EAX, [EAX]
        MOV     EDI, EDX
        REP STOSD
        MOV     ECX, [ESP + 0x24]
        LEA     EDX, [EDX + ECX*4]
label_58070A:
        SUB     EBX, [ESP + 0x1C]
        SAR     EBX, 0x2
        MOV     EAX, EBX
        TEST    EAX, EAX
        MOV     EDI, EDX
        JLE     label_580728
        MOV     ESI, [ESP + 0x1C]
        MOV     ECX, EAX
        REP MOVSD
        MOV     ESI, [ESP + 0x14]
        LEA     EDI, [EDX + EAX*4]
label_580728:
        MOV     EAX, [ESI]
        TEST    EAX, EAX
        JZ      label_580737
        PUSH    EAX
        CALL    FUN_004084e0
        ADD     ESP, 0x4
label_580737:
        MOV     EDX, [ESP + 0x10]
        MOV     [ESI + 0x4], EDI
        LEA     EAX, [EBP + EDX*4]
        POP     EDI
        MOV     [ESI], EBP
        MOV     [ESI + 0x8], EAX
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x8
        RET     0xC
    }
}
