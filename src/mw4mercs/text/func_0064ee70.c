// FUN_0064ee70 - ABL extern function call helper (0x64ee70, 494 B)
// __thiscall-style: param_1 = ABL function object.

extern unsigned int g_8058c0;   // 0x008058c0
extern unsigned int g_80592c;   // 0x0080592c
extern unsigned int g_80d994;   // 0x0080d994
extern unsigned int g_805918;   // 0x00805918
extern unsigned int g_805908;   // 0x00805908
extern unsigned int g_805930;   // 0x00805930
extern unsigned int g_80d9b4;   // 0x0080d9b4
extern unsigned int g_80d9bc;   // 0x0080d9bc
extern unsigned int g_80d9b0;   // 0x0080d9b0
extern unsigned int g_80d9b8;   // 0x0080d9b8
extern unsigned char g_7dde2c;  // 0x007dde2c
extern void *g_76b0c8;          // 0x0076b0c8 (IAT GetProcAddress)

extern void __cdecl FUN_0064a220(unsigned int, unsigned int);
extern void __cdecl FUN_0064f4b0(unsigned int);
extern int __cdecl FUN_006fabf0(const char *);

__declspec(naked) unsigned int func_0064ee70(void)
{
    __asm {
        PUSH EBP
        MOV EBP, ESP
        SUB ESP, 0x10
        MOV EAX, dword ptr [g_8058c0]
        MOV EDX, dword ptr [g_80592c]
        PUSH EBX
        MOV EBX, dword ptr [EBP + 0x8]
        XOR ECX, ECX
        MOV CL, byte ptr [EBX + 0x44]
        PUSH ESI
        PUSH EDI
        MOV EDI, dword ptr [g_80d994]
        MOV dword ptr [EBP + -0x10], EAX
        MOV ESI, ECX
        INC ESI
        INC EDI
        PUSH ESI
        MOV dword ptr [g_80d994], EDI
        PUSH EAX
        LEA EDI, [EDX + 0x4]
        CALL FUN_0064a220
        MOV EAX, dword ptr [g_805918]
        MOVSX ECX, byte ptr [EAX]
        ADD ESP, 0x8
        INC EAX
        CMP ECX, 0x6
        MOV dword ptr [g_805908], ECX
        MOV dword ptr [g_805918], EAX
        JNZ loc_64eee2
        PUSH EBX
        CALL FUN_0064f4b0
        MOV EAX, dword ptr [g_805918]
        MOVSX ECX, byte ptr [EAX]
        ADD ESP, 0x4
        INC EAX
        MOV dword ptr [g_805908], ECX
        MOV dword ptr [g_805918], EAX
loc_64eee2:
        DEC EAX
        MOV dword ptr [EDI + 0xc], EAX
        MOV EAX, dword ptr [EBX + 0x34]
        TEST EAX, EAX
        MOV dword ptr [g_8058c0], ESI
        MOV dword ptr [g_805930], EDI
        JNZ loc_64ef08
        MOV EDX, dword ptr [EBX + 0x10]
        PUSH EDX
        PUSH 0x0
        CALL dword ptr [g_76b0c8]
        MOV dword ptr [EBX + 0x34], EAX
loc_64ef08:
        MOV EAX, dword ptr [EBX + 0x34]
        MOV dword ptr [EBP + -0xc], EAX
        MOV EAX, dword ptr [EBX + 0x28]
        XOR ECX, ECX
        TEST EAX, EAX
        MOV dword ptr [EBP + 0x8], ECX
        JZ loc_64f025
loc_64ef1e:
        MOV EDI, EAX
        MOV EAX, dword ptr [EDI + 0xc]
        CMP EAX, ECX
        JZ loc_64ef30
loc_64ef27:
        MOV EDI, EAX
        MOV EAX, dword ptr [EDI + 0xc]
        CMP EAX, ECX
        JNZ loc_64ef27
loc_64ef30:
        MOV AL, byte ptr [g_7dde2c]
        TEST AL, AL
        MOV ESI, dword ptr [EDI + 0x3c]
        JZ loc_64ef75
        CMP dword ptr [EDI + 0x18], 0x4
        JZ loc_64ef54
        PUSH 0x792db4
        CALL FUN_006fabf0
        ADD ESP, 0x4
        TEST EAX, EAX
        JZ loc_64ef54
        INT 3
loc_64ef54:
        MOV AL, byte ptr [g_7dde2c]
        TEST AL, AL
        JZ loc_64ef75
        CMP dword ptr [ESI + 0x4], 0x3
        JNZ loc_64ef75
        PUSH 0x792d7c
        CALL FUN_006fabf0
        ADD ESP, 0x4
        TEST EAX, EAX
        JZ loc_64ef75
        INT 3
loc_64ef75:
        MOV ECX, dword ptr [EBP + 0x8]
        MOV EAX, dword ptr [g_80d9b4]
        ADD ECX, 0x4
        CMP ESI, EAX
        MOV dword ptr [EBP + 0x8], ECX
        JNZ loc_64ef9e
        MOV EAX, dword ptr [g_80592c]
        MOV ECX, dword ptr [EAX]
        SUB EAX, 0x4
        MOV dword ptr [EBP + -0x4], ECX
        MOV dword ptr [g_80592c], EAX
        PUSH dword ptr [EBP + -0x4]
        JMP loc_64f018
loc_64ef9e:
        CMP ESI, dword ptr [g_80d9bc]
        JNZ loc_64efbd
        MOV EAX, dword ptr [g_80592c]
        MOV EDX, dword ptr [EAX]
        SUB EAX, 0x4
        MOV dword ptr [EBP + -0x8], EDX
        MOV dword ptr [g_80592c], EAX
        PUSH dword ptr [EBP + -0x8]
        JMP loc_64f018
loc_64efbd:
        CMP ESI, dword ptr [g_80d9b0]
        JNZ loc_64efdc
        MOV EAX, dword ptr [g_80592c]
        MOV ECX, dword ptr [EAX]
        SUB EAX, 0x4
        MOV dword ptr [EBP + -0x8], ECX
        MOV dword ptr [g_80592c], EAX
        PUSH dword ptr [EBP + -0x8]
        JMP loc_64f018
loc_64efdc:
        CMP ESI, dword ptr [g_80d9b8]
        JNZ loc_64effd
        MOV EAX, dword ptr [g_80592c]
        XOR EDX, EDX
        MOV DL, byte ptr [EAX]
        SUB EAX, 0x4
        MOV dword ptr [g_80592c], EAX
        MOV dword ptr [EBP + -0x8], EDX
        PUSH dword ptr [EBP + -0x8]
        JMP loc_64f018
loc_64effd:
        MOV AL, byte ptr [g_7dde2c]
        TEST AL, AL
        JZ loc_64f018
        PUSH 0x792d4c
        CALL FUN_006fabf0
        ADD ESP, 0x4
        TEST EAX, EAX
        JZ loc_64f018
        INT 3
loc_64f018:
        MOV EAX, dword ptr [EBX + 0x28]
        CMP EDI, EAX
        MOV ECX, EDI
        JNZ loc_64ef1e
loc_64f025:
        MOV EAX, dword ptr [EBP + -0xc]
        CALL EAX
        ADD ESP, dword ptr [EBP + 0x8]
        MOV EAX, dword ptr [EBP + -0x10]
        MOV dword ptr [g_8058c0], EAX
        MOV EAX, dword ptr [g_805918]
        MOVSX ECX, byte ptr [EAX]
        INC EAX
        MOV dword ptr [g_805918], EAX
        MOV EAX, dword ptr [g_80d994]
        DEC EAX
        POP EDI
        MOV dword ptr [g_80d994], EAX
        MOV EAX, dword ptr [EBX + 0x3c]
        POP ESI
        MOV dword ptr [g_805908], ECX
        POP EBX
        MOV ESP, EBP
        POP EBP
        RET
    }
}
