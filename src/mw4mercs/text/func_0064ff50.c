// FUN_0064ff50 - ABL binary tree string search (0x64ff50, 97 B)

__declspec(naked) unsigned int func_0064ff50(void)
{
    __asm {
        PUSH EBX
        PUSH EBP
        PUSH ESI
        PUSH EDI
        MOV EDI, dword ptr [ESP + 0x18]
        TEST EDI, EDI
        JZ loc_64ffa3
        MOV EBP, dword ptr [ESP + 0x14]
loc_64ff60:
        MOV ESI, dword ptr [EDI + 0x10]
        MOV ECX, EBP
loc_64ff65:
        MOV AL, byte ptr [ECX]
        MOV BL, byte ptr [ESI]
        MOV DL, AL
        CMP AL, BL
        JNZ loc_64ff8d
        TEST DL, DL
        JZ loc_64ff89
        MOV AL, byte ptr [ECX + 0x1]
        MOV BL, byte ptr [ESI + 0x1]
        MOV DL, AL
        CMP AL, BL
        JNZ loc_64ff8d
        ADD ECX, 0x2
        ADD ESI, 0x2
        TEST DL, DL
        JNZ loc_64ff65
loc_64ff89:
        XOR ECX, ECX
        JMP loc_64ff92
loc_64ff8d:
        SBB ECX, ECX
        SBB ECX, -0x1
loc_64ff92:
        TEST ECX, ECX
        JZ loc_64ffaa
        JGE loc_64ff9c
        MOV EDI, dword ptr [EDI]
        JMP loc_64ff9f
loc_64ff9c:
        MOV EDI, dword ptr [EDI + 0x8]
loc_64ff9f:
        TEST EDI, EDI
        JNZ loc_64ff60
loc_64ffa3:
        POP EDI
        POP ESI
        POP EBP
        XOR EAX, EAX
        POP EBX
        RET
loc_64ffaa:
        MOV EAX, EDI
        POP EDI
        POP ESI
        POP EBP
        POP EBX
        RET
    }
}
