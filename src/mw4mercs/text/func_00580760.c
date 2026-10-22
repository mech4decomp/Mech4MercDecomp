/* FUN_00580760 - 232 bytes, __thiscall vector insertion (variant) */
extern void *FUN_004084d0(int);
extern void FUN_004084e0(void *);

void __declspec(naked) __fastcall FUN_00580760(void)
{
    __asm {
        PUSH    ECX
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        MOV     ESI, [ESP + 0x1C]
        MOV     EBX, ECX
        MOV     EBP, [EBX]
        PUSH    EDI
        MOV     EDI, [EBX + 0x4]
        MOV     EAX, EDI
        SUB     EAX, EBP
        SAR     EAX, 0x2
        CMP     EAX, ESI
        MOV     [ESP + 0x10], EAX
        LEA     ECX, [ESP + 0x20]
        JC      label_580787
        LEA     ECX, [ESP + 0x10]
label_580787:
        MOV     ECX, [ECX]
        ADD     ECX, EAX
        MOV     [ESP + 0x10], ECX
        JZ      label_5807A7
        LEA     EAX, [ECX*4 + 0]
        PUSH    EAX
        CALL    FUN_004084d0
        ADD     ESP, 0x4
        MOV     [ESP + 0x20], EAX
        JMP     label_5807AF
label_5807A7:
        MOV     dword ptr [ESP + 0x20], 0
label_5807AF:
        MOV     EDX, [ESP + 0x18]
        CMP     EBP, EDX
        MOV     EAX, [ESP + 0x20]
        JZ      label_5807CF
label_5807BB:
        MOV     ECX, EBP
label_5807BD:
        TEST    EAX, EAX
        JZ      label_5807C5
        MOV     EBP, [ECX]
        MOV     [EAX], EBP
label_5807C5:
        ADD     ECX, 0x4
        ADD     EAX, 0x4
        CMP     ECX, EDX
        JNZ     label_5807BD
label_5807CF:
        CMP     ESI, 0x1
        JNZ     label_5807E5
        TEST    EAX, EAX
        JZ      label_5807E0
        MOV     ECX, [ESP + 0x1C]
        MOV     ECX, [ECX]
        MOV     [EAX], ECX
label_5807E0:
        ADD     EAX, 0x4
        JMP     label_5807FD
label_5807E5:
        TEST    ESI, ESI
        JBE     label_5807FD
        MOV     ECX, ESI
        MOV     ESI, [ESP + 0x1C]
label_5807EF:
        TEST    EAX, EAX
        JZ      label_5807F7
        MOV     EBP, [ESI]
        MOV     [EAX], EBP
label_5807F7:
        ADD     EAX, 0x4
        DEC     ECX
        JNZ     label_5807EF
label_5807FD:
        CMP     EDX, EDI
        MOV     ESI, EAX
        JZ      label_58081A
        MOV     ECX, EDX
        SUB     ECX, EAX
label_580807:
        TEST    ESI, ESI
        JZ      label_580810
        MOV     EDX, [ECX + ESI]
        MOV     [ESI], EDX
label_580810:
        ADD     ESI, 0x4
        LEA     EAX, [ECX + ESI]
        CMP     EAX, EDI
        JNZ     label_580807
label_58081A:
        MOV     EAX, [EBX]
        TEST    EAX, EAX
        MOV     [ESP + 0x1C], EAX
        JZ      label_58082D
        PUSH    EAX
        CALL    FUN_004084e0
        ADD     ESP, 0x4
label_58082D:
        MOV     EAX, [ESP + 0x20]
        MOV     ECX, [ESP + 0x10]
        POP     EDI
        MOV     [EBX + 0x4], ESI
        POP     ESI
        LEA     EDX, [EAX + ECX*4]
        POP     EBP
        MOV     [EBX], EAX
        MOV     [EBX + 0x8], EDX
        POP     EBX
        POP     ECX
        RET     0xC
    }
}
