// FUN_1003c8be (0x1003C8BE) __cdecl
extern void __cdecl FUN_1003efcc(int, int, int, int, int, int, int);
extern void __cdecl FUN_1003a220(int, int, int, int, int, int, int, int);
extern int g_10076864;
extern void *g_1004913c;
extern int g_10076a84;
extern char g_10076981[];
extern char g_10076880[];

__declspec(naked) void func_1003c8be(void)
{
    __asm {
        PUSH EBP
        MOV EBP,ESP
        SUB ESP,0x514
        LEA EAX,[EBP - 0x14]
        PUSH ESI
        PUSH EAX
        PUSH dword ptr [g_10076864]
        CALL dword ptr [g_1004913c]
        CMP EAX,0x1
        JNZ L_c9f7
        XOR EAX,EAX
        MOV ESI,0x100
L_c8e8:
        MOV byte ptr [EBP + EAX*0x1 - 0x114],AL
        INC EAX
        CMP EAX,ESI
        JC L_c8e8
        MOV AL,byte ptr [EBP - 0xe]
        MOV byte ptr [EBP - 0x114],0x20
        TEST AL,AL
        JZ L_c939
        PUSH EBX
        PUSH EDI
        LEA EDX,[EBP - 0xd]
L_c907:
        MOVZX ECX,byte ptr [EDX]
        MOVZX EAX,AL
        CMP EAX,ECX
        JA L_c92e
        SUB ECX,EAX
        LEA EDI,[EBP + EAX*0x1 - 0x114]
        INC ECX
        MOV EAX,0x20202020
        MOV EBX,ECX
        SHR ECX,0x2
        REP STOSD
        MOV ECX,EBX
        AND ECX,0x3
        REP STOSB
L_c92e:
        INC EDX
        INC EDX
        MOV AL,byte ptr [EDX - 0x1]
        TEST AL,AL
        JNZ L_c907
        POP EDI
        POP EBX
L_c939:
        PUSH 0x0
        LEA EAX,[EBP - 0x514]
        PUSH dword ptr [g_10076a84]
        PUSH dword ptr [g_10076864]
        PUSH EAX
        LEA EAX,[EBP - 0x114]
        PUSH ESI
        PUSH EAX
        PUSH 0x1
        CALL FUN_1003efcc
        PUSH 0x0
        LEA EAX,[EBP - 0x214]
        PUSH dword ptr [g_10076864]
        PUSH ESI
        PUSH EAX
        LEA EAX,[EBP - 0x114]
        PUSH ESI
        PUSH EAX
        PUSH ESI
        PUSH dword ptr [g_10076a84]
        CALL FUN_1003a220
        PUSH 0x0
        LEA EAX,[EBP - 0x314]
        PUSH dword ptr [g_10076864]
        PUSH ESI
        PUSH EAX
        LEA EAX,[EBP - 0x114]
        PUSH ESI
        PUSH EAX
        PUSH 0x200
        PUSH dword ptr [g_10076a84]
        CALL FUN_1003a220
        ADD ESP,0x5c
        XOR EAX,EAX
        LEA ECX,[EBP - 0x514]
L_c9b4:
        MOV DX,word ptr [ECX]
        TEST DL,0x1
        JZ L_c9d2
        OR byte ptr [EAX + g_10076981],0x10
        MOV DL,byte ptr [EBP + EAX*0x1 - 0x214]
L_c9ca:
        MOV byte ptr [EAX + g_10076880],DL
        JMP L_c9ee
L_c9d2:
        TEST DL,0x2
        JZ L_c9e7
        OR byte ptr [EAX + g_10076981],0x20
        MOV DL,byte ptr [EBP + EAX*0x1 - 0x314]
        JMP L_c9ca
L_c9e7:
        AND byte ptr [EAX + g_10076880],0x0
L_c9ee:
        INC EAX
        INC ECX
        INC ECX
        CMP EAX,ESI
        JC L_c9b4
        JMP L_ca40
L_c9f7:
        XOR EAX,EAX
        MOV ESI,0x100
L_c9fe:
        CMP EAX,0x41
        JC L_ca1c
        CMP EAX,0x5a
        JA L_ca1c
        OR byte ptr [EAX + g_10076981],0x10
        MOV CL,AL
        ADD CL,0x20
L_ca14:
        MOV byte ptr [EAX + g_10076880],CL
        JMP L_ca3b
L_ca1c:
        CMP EAX,0x61
        JC L_ca34
        CMP EAX,0x7a
        JA L_ca34
        OR byte ptr [EAX + g_10076981],0x20
        MOV CL,AL
        SUB CL,0x20
        JMP L_ca14
L_ca34:
        AND byte ptr [EAX + g_10076880],0x0
L_ca3b:
        INC EAX
        CMP EAX,ESI
        JC L_c9fe
L_ca40:
        POP ESI
        LEAVE
        RET
    }
}
