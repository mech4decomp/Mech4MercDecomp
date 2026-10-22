// FUN_0064f060 - ABL extern function call helper with timing/logging (0x64f060, 651 B)

extern unsigned int g_8058c0;   // 0x008058c0
extern unsigned int g_80592c;   // 0x0080592c
extern unsigned int g_80d994;   // 0x0080d994
extern unsigned int g_805918;   // 0x00805918
extern unsigned int g_805908;   // 0x00805908
extern unsigned int g_805930;   // 0x00805930
extern unsigned int g_8058e0;   // 0x008058e0
extern unsigned int g_80d984;   // 0x0080d984
extern unsigned int g_7f2ba8;   // 0x007f2ba8
extern unsigned int g_805950;   // 0x00805950
extern unsigned int g_805934;   // 0x00805934
extern unsigned char g_805958;  // 0x00805958
extern unsigned char g_7b5a38;  // 0x007b5a38
extern double g_7b5a40;         // 0x007b5a40
extern unsigned int g_7f299c;   // 0x007f299c
extern double g_77b648;         // 0x0077b648
extern char g_76cb8c[];         // 0x0076cb8c (string " ")
extern void *g_76b420;          // 0x0076b420 (IAT sprintf)

extern void __cdecl FUN_0064a220(unsigned int, unsigned int);
extern void __cdecl FUN_0064f320(unsigned int);
extern void __cdecl FUN_0061fca0(unsigned int);
extern double __cdecl FUN_00707e90(void);
extern void __cdecl FUN_0064a6b0(unsigned int);
extern void __cdecl FUN_0064a890(const char *);

__declspec(naked) unsigned int func_0064f060(void)
{
    __asm {
        SUB ESP, 0x414
        MOV ECX, dword ptr [g_8058c0]
        MOV EDX, dword ptr [g_80592c]
        PUSH EBX
        XOR EAX, EAX
        PUSH EBP
        MOV EBP, dword ptr [ESP + 0x420]
        MOV AL, byte ptr [EBP + 0x44]
        PUSH ESI
        PUSH EDI
        MOV EDI, dword ptr [g_80d994]
        MOV dword ptr [ESP + 0x20], ECX
        MOV ESI, EAX
        MOV EAX, dword ptr [EBP + 0x40]
        INC ESI
        INC EDI
        TEST EAX, EAX
        MOV dword ptr [g_80d994], EDI
        LEA EDI, [EDX + 0x4]
        JZ loc_64f0b6
        MOV EDX, dword ptr [g_8058e0]
        CMP EAX, dword ptr [EDX + 0x40]
        JZ loc_64f0b6
        PUSH -0x1
        MOV byte ptr [ESP + 0x17], 0x1
        PUSH -0x1
        JMP loc_64f0bd
loc_64f0b6:
        PUSH ESI
        MOV byte ptr [ESP + 0x17], 0x0
        PUSH ECX
loc_64f0bd:
        CALL FUN_0064a220
        MOV EAX, dword ptr [g_805918]
        MOVSX ECX, byte ptr [EAX]
        ADD ESP, 0x8
        INC EAX
        CMP ECX, 0x6
        MOV dword ptr [g_805908], ECX
        MOV dword ptr [g_805918], EAX
        JNZ loc_64f0fb
        PUSH EBP
        CALL FUN_0064f320
        MOV EAX, dword ptr [g_805918]
        MOVSX ECX, byte ptr [EAX]
        ADD ESP, 0x4
        INC EAX
        MOV dword ptr [g_805908], ECX
        MOV dword ptr [g_805918], EAX
loc_64f0fb:
        DEC EAX
        MOV dword ptr [EDI + 0xc], EAX
        MOV AL, byte ptr [ESP + 0x13]
        XOR EBX, EBX
        TEST AL, AL
        MOV dword ptr [g_8058c0], ESI
        MOV dword ptr [g_805930], EDI
        MOV dword ptr [ESP + 0x14], EBX
        JZ loc_64f164
        MOV EAX, dword ptr [EBP + 0x40]
        MOV EBX, dword ptr [g_80d984]
        MOV ECX, dword ptr [g_7f2ba8]
        TEST ECX, ECX
        MOV EDX, dword ptr [EAX + 0x20]
        MOV dword ptr [ESP + 0x14], EBX
        MOV dword ptr [g_80d984], EAX
        MOV dword ptr [g_805950], EDX
        JZ loc_64f149
        PUSH EAX
        CALL FUN_0061fca0
        MOV EAX, dword ptr [g_80d984]
loc_64f149:
        MOV ECX, dword ptr [EAX + 0x24]
        MOV dword ptr [g_805934], ECX
        MOV CL, byte ptr [EAX + 0x2c]
        TEST CL, CL
        SETZ DL
        MOV byte ptr [g_805958], DL
        MOV byte ptr [EAX + 0x2c], 0x1
loc_64f164:
        MOV AL, byte ptr [g_7b5a38]
        TEST AL, AL
        MOV dword ptr [ESP + 0x18], 0x0
        MOV dword ptr [ESP + 0x1c], 0x0
        JZ loc_64f186
        CALL FUN_00707e90
        FSTP qword ptr [ESP + 0x18]
loc_64f186:
        PUSH EBP
        CALL FUN_0064a6b0
        MOV AL, byte ptr [g_7b5a38]
        ADD ESP, 0x4
        TEST AL, AL
        JZ loc_64f27f
        CALL FUN_00707e90
        FSUB qword ptr [ESP + 0x18]
        FST qword ptr [ESP + 0x18]
        FCOMP qword ptr [g_7b5a40]
        __emit 0xDF  /* __emit: FNSTSW AX no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit 0xE0
        __emit 0xF6  /* __emit: TEST AH,imm8 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x41
        JNZ loc_64f27f
        MOV EAX, dword ptr [g_7f299c]
        PUSH EAX
        LEA ECX, [ESP + 0x28]
        PUSH 0x792e08
        PUSH ECX
        CALL dword ptr [g_76b420]
        MOV EDX, dword ptr [g_80d994]
        ADD ESP, 0xc
        TEST EDX, EDX
        JLE loc_64f212
loc_64f1dd:
        OR ECX, 0xffffffff
        XOR EAX, EAX
        MOV EDI, offset g_76cb8c
        REPNE SCASB
        NOT ECX
        SUB EDI, ECX
        MOV ESI, EDI
        LEA EBX, [ESP + 0x24]
        MOV EDI, EBX
        MOV EBX, ECX
        OR ECX, 0xffffffff
        REPNE SCASB
        MOV ECX, EBX
        SHR ECX, 0x2
        DEC EDI
        REP MOVSD
        MOV ECX, EBX
        AND ECX, 0x3
        DEC EDX
        REP MOVSB
        JNZ loc_64f1dd
        MOV EBX, dword ptr [ESP + 0x14]
loc_64f212:
        FLD qword ptr [ESP + 0x18]
        MOV EDX, dword ptr [EBP + 0x10]
        FMUL qword ptr [g_77b648]
        MOV EAX, dword ptr [g_80d984]
        SUB ESP, 0x8
        ADD EAX, 0x4
        FSTP qword ptr [ESP]
        PUSH EDX
        PUSH EAX
        LEA ECX, [ESP + 0x234]
        PUSH 0x792de4
        PUSH ECX
        CALL dword ptr [g_76b420]
        OR ECX, 0xffffffff
        XOR EAX, EAX
        LEA EDI, [ESP + 0x23c]
        REPNE SCASB
        NOT ECX
        SUB EDI, ECX
        MOV ESI, EDI
        LEA EDX, [ESP + 0x3c]
        MOV EDI, EDX
        MOV EDX, ECX
        OR ECX, 0xffffffff
        REPNE SCASB
        MOV ECX, EDX
        SHR ECX, 0x2
        DEC EDI
        REP MOVSD
        MOV ECX, EDX
        LEA EAX, [ESP + 0x3c]
        AND ECX, 0x3
        PUSH EAX
        REP MOVSB
        CALL FUN_0064a890
        ADD ESP, 0x1c
loc_64f27f:
        MOV AL, byte ptr [ESP + 0x13]
        TEST AL, AL
        JZ loc_64f2b4
        MOV ECX, dword ptr [EBX + 0x20]
        MOV dword ptr [g_805950], ECX
        MOV ECX, dword ptr [g_7f2ba8]
        TEST ECX, ECX
        MOV dword ptr [g_80d984], EBX
        JZ loc_64f2a6
        PUSH EBX
        CALL FUN_0061fca0
loc_64f2a6:
        MOV EDX, dword ptr [g_80d984]
        MOV EAX, dword ptr [EDX + 0x24]
        MOV dword ptr [g_805934], EAX
loc_64f2b4:
        MOV EAX, dword ptr [g_805918]
        MOVSX EDX, byte ptr [EAX]
        MOV ECX, dword ptr [ESP + 0x20]
        INC EAX
        MOV dword ptr [g_805918], EAX
        MOV EAX, dword ptr [g_80d994]
        POP EDI
        DEC EAX
        POP ESI
        MOV dword ptr [g_80d994], EAX
        MOV EAX, dword ptr [EBP + 0x3c]
        POP EBP
        MOV dword ptr [g_8058c0], ECX
        MOV dword ptr [g_805908], EDX
        POP EBX
        ADD ESP, 0x414
        RET
    }
}
