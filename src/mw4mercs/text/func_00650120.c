// FUN_00650120 - AblSymTableHeap malloc symbol + insert into tree (0x650120, 678 B)

extern unsigned int g_8058b4;   // 0x008058b4
extern unsigned int g_8058c0;   // 0x008058c0
extern void *__cdecl FUN_006f3c80(unsigned int, unsigned int);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void *__cdecl FUN_0061ee80(unsigned int, unsigned int, unsigned int);
extern void __cdecl FUN_0064c940(unsigned int, unsigned int);
extern void __cdecl FUN_0064c920(unsigned int, unsigned int);
extern void __cdecl FUN_00562f10(unsigned int, const char *);

__declspec(naked) unsigned int func_00650120(void)
{
    __asm {
        SUB ESP, 0x14
        PUSH EBX
        PUSH EBP
        PUSH ESI
        MOV ESI, dword ptr [g_8058b4]
        MOV EAX, dword ptr [ESI + 0xc]
        TEST EAX, EAX
        PUSH EDI
        JZ loc_65025c
        PUSH EAX
        PUSH 0x4c
        CALL FUN_006f3c80
        MOV EDI, dword ptr [ESI + 0x14]
        MOV EBP, dword ptr [ESI + 0x18]
        CMP EDI, EBP
        MOV dword ptr [ESP + 0x14], EAX
        JZ loc_650163
        TEST EDI, EDI
        JZ loc_650158
        MOV dword ptr [EDI], EAX
        MOV EAX, dword ptr [ESP + 0x14]
loc_650158:
        ADD EDI, 0x4
        MOV dword ptr [ESI + 0x14], EDI
        JMP loc_6501fb
loc_650163:
        MOV EBX, dword ptr [ESI + 0x10]
        MOV EAX, EDI
        SUB EAX, EBX
        SAR EAX, 0x2
        CMP EAX, 0x1
        MOV dword ptr [ESP + 0x1c], 0x1
        MOV dword ptr [ESP + 0x18], EAX
        LEA ECX, [ESP + 0x1c]
        JC loc_650186
        LEA ECX, [ESP + 0x18]
loc_650186:
        MOV ECX, dword ptr [ECX]
        ADD ECX, EAX
        MOV dword ptr [ESP + 0x1c], ECX
        JZ loc_6501a6
        LEA EAX, [ECX*0x4 + 0x0]
        PUSH EAX
        CALL FUN_004084d0
        ADD ESP, 0x4
        MOV dword ptr [ESP + 0x10], EAX
        JMP loc_6501ae
loc_6501a6:
        MOV dword ptr [ESP + 0x10], 0x0
loc_6501ae:
        MOV ECX, dword ptr [ESP + 0x10]
        PUSH ECX
        PUSH EDI
        PUSH EBX
        CALL FUN_0061ee80
        ADD ESP, 0xc
        TEST EAX, EAX
        JZ loc_6501c7
        MOV EDX, dword ptr [ESP + 0x14]
        MOV dword ptr [EAX], EDX
loc_6501c7:
        ADD EAX, 0x4
        PUSH EAX
        PUSH EDI
        PUSH EDI
        CALL FUN_0061ee80
        SUB EBP, EBX
        SAR EBP, 0x2
        PUSH EBP
        PUSH EBX
        MOV EDI, EAX
        CALL FUN_0064c940
        MOV EAX, dword ptr [ESP + 0x24]
        MOV ECX, dword ptr [ESP + 0x30]
        LEA EDX, [EAX + ECX*0x4]
        MOV dword ptr [ESI + 0x10], EAX
        MOV EAX, dword ptr [ESP + 0x28]
        ADD ESP, 0x14
        MOV dword ptr [ESI + 0x14], EDI
        MOV dword ptr [ESI + 0x18], EDX
loc_6501fb:
        TEST EAX, EAX
        MOV EBX, EAX
        MOV dword ptr [ESP + 0x18], EBX
        JNZ loc_650214
loc_650205:
        PUSH 0x792ef4
        PUSH 0x0
        CALL FUN_00562f10
        ADD ESP, 0x8
loc_650214:
        MOV EBP, dword ptr [g_8058b4]
        MOV EAX, dword ptr [EBP + 0xc]
        TEST EAX, EAX
        JZ loc_65030c
        MOV EDI, dword ptr [ESP + 0x28]
        PUSH EAX
        OR ECX, 0xffffffff
        XOR EAX, EAX
        REPNE SCASB
        NOT ECX
        PUSH ECX
        CALL FUN_006f3c80
        MOV EDI, dword ptr [EBP + 0x14]
        MOV ESI, dword ptr [EBP + 0x18]
        CMP EDI, ESI
        MOV dword ptr [ESP + 0x1c], EAX
        JZ loc_65026a
        TEST EDI, EDI
        JZ loc_65024d
        MOV dword ptr [EDI], EAX
loc_65024d:
        ADD EDI, 0x4
        MOV dword ptr [EBP + 0x14], EDI
        MOV EBP, dword ptr [ESP + 0x1c]
        JMP loc_65030e
loc_65025c:
        MOV dword ptr [ESP + 0x18], 0x0
        MOV EBX, dword ptr [ESP + 0x18]
        JMP loc_650205
loc_65026a:
        MOV EBX, dword ptr [EBP + 0x10]
        MOV EAX, EDI
        SUB EAX, EBX
        SAR EAX, 0x2
        CMP EAX, 0x1
        MOV dword ptr [ESP + 0x10], 0x1
        MOV dword ptr [ESP + 0x20], EAX
        LEA ECX, [ESP + 0x10]
        JC loc_65028d
        LEA ECX, [ESP + 0x20]
loc_65028d:
        MOV ECX, dword ptr [ECX]
        ADD ECX, EAX
        MOV dword ptr [ESP + 0x20], ECX
        JZ loc_6502ad
        LEA EAX, [ECX*0x4 + 0x0]
        PUSH EAX
        CALL FUN_004084d0
        ADD ESP, 0x4
        MOV dword ptr [ESP + 0x10], EAX
        JMP loc_6502b5
loc_6502ad:
        MOV dword ptr [ESP + 0x10], 0x0
loc_6502b5:
        MOV ECX, dword ptr [ESP + 0x10]
        PUSH ECX
        PUSH EDI
        PUSH EBX
        CALL FUN_0061ee80
        ADD ESP, 0xc
        TEST EAX, EAX
        JZ loc_6502ce
        MOV EDX, dword ptr [ESP + 0x1c]
        MOV dword ptr [EAX], EDX
loc_6502ce:
        ADD EAX, 0x4
        PUSH EAX
        PUSH EDI
        PUSH EDI
        CALL FUN_0061ee80
        SUB ESI, EBX
        ADD ESP, 0xc
        SAR ESI, 0x2
        PUSH ESI
        LEA ESI, [EBP + 0x18]
        PUSH EBX
        MOV ECX, ESI
        MOV EDI, EAX
        CALL FUN_0064c920
        MOV EAX, dword ptr [ESP + 0x10]
        MOV ECX, dword ptr [ESP + 0x20]
        MOV EBX, dword ptr [ESP + 0x18]
        LEA EDX, [EAX + ECX*0x4]
        MOV dword ptr [EBP + 0x10], EAX
        MOV dword ptr [EBP + 0x14], EDI
        MOV EBP, dword ptr [ESP + 0x1c]
        MOV dword ptr [ESI], EDX
        JMP loc_65030e
loc_65030c:
        XOR EBP, EBP
loc_65030e:
        TEST EBP, EBP
        MOV dword ptr [EBX + 0x10], EBP
        JNZ loc_650323
        PUSH 0x792ebc
        PUSH EBP
        CALL FUN_00562f10
        ADD ESP, 0x8
loc_650323:
        MOV EDI, dword ptr [ESP + 0x28]
        OR ECX, 0xffffffff
        XOR EAX, EAX
        REPNE SCASB
        NOT ECX
        SUB EDI, ECX
        MOV EAX, ECX
        SHR ECX, 0x2
        MOV ESI, EDI
        MOV EDI, EBP
        REP MOVSD
        MOV ECX, EAX
        AND ECX, 0x3
        REP MOVSB
        MOV CL, byte ptr [g_8058c0]
        XOR EAX, EAX
        MOV byte ptr [EBX + 0x44], CL
        MOV ECX, dword ptr [ESP + 0x2c]
        MOV EDI, dword ptr [ECX]
        CMP EDI, EAX
        MOV dword ptr [EBX], EAX
        MOV dword ptr [EBX + 0x4], EAX
        MOV dword ptr [EBX + 0x8], EAX
        MOV dword ptr [EBX + 0xc], EAX
        MOV dword ptr [EBX + 0x14], EAX
        MOV dword ptr [EBX + 0x18], EAX
        MOV dword ptr [EBX + 0x1c], EAX
        MOV dword ptr [EBX + 0x20], EAX
        MOV dword ptr [EBX + 0x3c], EAX
        MOV dword ptr [EBX + 0x48], EAX
        JZ loc_6503b7
loc_650376:
        MOV ESI, dword ptr [EDI + 0x10]
        MOV EAX, dword ptr [ESP + 0x28]
loc_65037d:
        MOV DL, byte ptr [EAX]
        MOV CL, DL
        CMP DL, byte ptr [ESI]
        JNZ loc_6503a1
        TEST CL, CL
        JZ loc_65039d
        MOV DL, byte ptr [EAX + 0x1]
        MOV CL, DL
        CMP DL, byte ptr [ESI + 0x1]
        JNZ loc_6503a1
        ADD EAX, 0x2
        ADD ESI, 0x2
        TEST CL, CL
        JNZ loc_65037d
loc_65039d:
        XOR EAX, EAX
        JMP loc_6503a6
loc_6503a1:
        SBB EAX, EAX
        SBB EAX, -0x1
loc_6503a6:
        TEST EAX, EAX
        MOV ECX, EDI
        JL loc_6503af
        LEA ECX, [EDI + 0x8]
loc_6503af:
        MOV EAX, EDI
        MOV EDI, dword ptr [ECX]
        TEST EDI, EDI
        JNZ loc_650376
loc_6503b7:
        POP EDI
        POP ESI
        MOV dword ptr [EBX + 0x4], EAX
        POP EBP
        MOV dword ptr [ECX], EBX
        MOV EAX, EBX
        POP EBX
        ADD ESP, 0x14
        RET
    }
}
