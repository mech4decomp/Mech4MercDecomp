// FUN_0064fd60 - AblStackHeap malloc (0x64fd60, 271 B)

extern unsigned int g_8058b4;   // 0x008058b4
extern void *__cdecl FUN_006f3c80(unsigned int, unsigned int);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void *__cdecl FUN_0061ef00(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern void __cdecl FUN_004084e0(unsigned int);
extern void __cdecl FUN_00562f10(unsigned int, const char *);

__declspec(naked) unsigned int func_0064fd60(void)
{
    __asm {
        SUB ESP, 0xc
        PUSH EBX
        MOV EBX, dword ptr [g_8058b4]
        MOV EAX, dword ptr [EBX + 0xc]
        PUSH EBP
        XOR EBP, EBP
        CMP EAX, EBP
        PUSH ESI
        JZ loc_64fe6b
        PUSH EAX
        PUSH 0x1c
        CALL FUN_006f3c80
        MOV ESI, dword ptr [EBX + 0x14]
        CMP ESI, dword ptr [EBX + 0x18]
        MOV dword ptr [ESP + 0xc], EAX
        JZ loc_64fd9e
        CMP ESI, EBP
        JZ loc_64fd93
        MOV dword ptr [ESI], EAX
loc_64fd93:
        ADD ESI, 0x4
        MOV dword ptr [EBX + 0x14], ESI
        JMP loc_64fe3f
loc_64fd9e:
        PUSH EDI
        MOV EDI, dword ptr [EBX + 0x10]
        MOV EAX, ESI
        SUB EAX, EDI
        SAR EAX, 0x2
        CMP EAX, 0x1
        MOV dword ptr [ESP + 0x14], 0x1
        MOV dword ptr [ESP + 0x18], EAX
        LEA ECX, [ESP + 0x14]
        JC loc_64fdc2
        LEA ECX, [ESP + 0x18]
loc_64fdc2:
        MOV ECX, dword ptr [ECX]
        ADD ECX, EAX
        MOV dword ptr [ESP + 0x18], ECX
        JZ loc_64fdde
        LEA EAX, [ECX*0x4 + 0x0]
        PUSH EAX
        CALL FUN_004084d0
        ADD ESP, 0x4
        MOV EBP, EAX
loc_64fdde:
        MOV ECX, dword ptr [ESP + 0x18]
        PUSH 0x0
        PUSH ECX
        PUSH EBP
        PUSH ESI
        PUSH EDI
        CALL FUN_0061ef00
        ADD ESP, 0x14
        TEST EAX, EAX
        JZ loc_64fdfa
        MOV EDX, dword ptr [ESP + 0x10]
        MOV dword ptr [EAX], EDX
loc_64fdfa:
        MOV ECX, ESI
        SUB ECX, ESI
        ADD EAX, 0x4
        SAR ECX, 0x2
        TEST ECX, ECX
        MOV EDI, EAX
        JLE loc_64fe17
        SUB ESI, EAX
loc_64fe0c:
        MOV EAX, dword ptr [ESI + EDI*0x1]
        MOV dword ptr [EDI], EAX
        ADD EDI, 0x4
        DEC ECX
        JNZ loc_64fe0c
loc_64fe17:
        MOV EAX, dword ptr [EBX + 0x10]
        TEST EAX, EAX
        JZ loc_64fe27
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP, 0x4
loc_64fe27:
        MOV ECX, dword ptr [ESP + 0x18]
        MOV EAX, dword ptr [ESP + 0x10]
        LEA EDX, [EBP + ECX*0x4]
        MOV dword ptr [EBX + 0x10], EBP
        MOV dword ptr [EBX + 0x14], EDI
        MOV dword ptr [EBX + 0x18], EDX
        XOR EBP, EBP
        POP EDI
loc_64fe3f:
        CMP EAX, EBP
        MOV ESI, EAX
        JNZ loc_64fe53
loc_64fe45:
        PUSH 0x792e58
        PUSH EBP
        CALL FUN_00562f10
        ADD ESP, 0x8
loc_64fe53:
        MOV dword ptr [ESI + 0x4], EBP
        MOV dword ptr [ESI + 0x8], EBP
        MOV dword ptr [ESI + 0xc], EBP
        MOV dword ptr [ESI], 0x1
        MOV EAX, ESI
        POP ESI
        POP EBP
        POP EBX
        ADD ESP, 0xc
        RET
loc_64fe6b:
        XOR ESI, ESI
        JMP loc_64fe45
    }
}
