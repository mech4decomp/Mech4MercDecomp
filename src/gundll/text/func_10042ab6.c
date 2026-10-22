// FUN_10042ab6 (0x10042AB6) __cdecl
extern void *__cdecl FUN_10038512(void);
extern int __cdecl FUN_10042c38(int, int);
extern void __cdecl FUN_10039b19(int);
extern void __cdecl FUN_10039b7a(int);
extern void __cdecl FUN_1003838d(int);
extern int g_10075734;
extern int g_10075730;
extern int g_10075738;
extern int g_1007572c;
extern int g_10051e58;
extern int g_10051e5c;

__declspec(naked) void func_10042ab6(void)
{
    __asm {
        PUSH EBP
        MOV EBP,ESP
        SUB ESP,0xc
        MOV EAX,dword ptr [EBP + 0x8]
        AND dword ptr [EBP - 0x4],0x0
        DEC EAX
        PUSH EBX
        PUSH ESI
        DEC EAX
        PUSH EDI
        JZ L_2b31
        DEC EAX
        DEC EAX
        JZ L_2b14
        SUB EAX,0x4
        JZ L_2b14
        SUB EAX,0x3
        JZ L_2b14
        SUB EAX,0x4
        JZ L_2b07
        SUB EAX,0x6
        JZ L_2afa
        DEC EAX
        JZ L_2aed
        OR EAX,0xffffffff
        JMP L_2c33
L_2aed:
        MOV EBX,dword ptr [g_10075734]
        MOV EDI,offset g_10075734
        JMP L_2b3c
L_2afa:
        MOV EBX,dword ptr [g_10075730]
        MOV EDI,offset g_10075730
        JMP L_2b3c
L_2b07:
        MOV EBX,dword ptr [g_10075738]
        MOV EDI,offset g_10075738
        JMP L_2b3c
L_2b14:
        CALL FUN_10038512
        MOV ESI,EAX
        PUSH dword ptr [ESI + 0x50]
        PUSH dword ptr [EBP + 0x8]
        CALL FUN_10042c38
        MOV EDI,EAX
        POP ECX
        ADD EDI,0x8
        POP ECX
        MOV EBX,dword ptr [EDI]
        JMP L_2b4e
L_2b31:
        MOV EBX,dword ptr [g_1007572c]
        MOV EDI,offset g_1007572c
L_2b3c:
        PUSH 0x1
        MOV dword ptr [EBP - 0x4],0x1
        CALL FUN_10039b19
        MOV ESI,dword ptr [EBP + 0x8]
        POP ECX
L_2b4e:
        CMP EBX,0x1
        JNZ L_2b69
        CMP dword ptr [EBP - 0x4],0x0
        JZ L_2c31
        PUSH EBX
        CALL FUN_10039b7a
        POP ECX
        JMP L_2c31
L_2b69:
        XOR ECX,ECX
        CMP EBX,ECX
        JNZ L_2b83
        CMP dword ptr [EBP - 0x4],ECX
        JZ L_2b7c
        PUSH 0x1
        CALL FUN_10039b7a
        POP ECX
L_2b7c:
        PUSH 0x3
        CALL FUN_1003838d
L_2b83:
        MOV EAX,dword ptr [EBP + 0x8]
        CMP EAX,0x8
        JZ L_2b95
        CMP EAX,0xb
        JZ L_2b95
        CMP EAX,0x4
        JNZ L_2bb0
L_2b95:
        MOV EDX,dword ptr [ESI + 0x54]
        CMP EAX,0x8
        MOV dword ptr [EBP - 0x8],EDX
        MOV dword ptr [ESI + 0x54],ECX
        JNZ L_2bec
        MOV EDX,dword ptr [ESI + 0x58]
        MOV dword ptr [ESI + 0x58],0x8c
        MOV dword ptr [EBP - 0xc],EDX
L_2bb0:
        CMP EAX,0x8
        JNZ L_2bec
        MOV ECX,dword ptr [g_10051e58]
        MOV EAX,[g_10051e5c]
        ADD EAX,ECX
        CMP ECX,EAX
        JGE L_2bee
        LEA EAX,[ECX + ECX*0x2]
        SHL EAX,0x2
L_2bcc:
        MOV EDX,dword ptr [ESI + 0x50]
        ADD EAX,0xc
        AND dword ptr [EDX + EAX*0x1 + -0x4],0x0
        MOV EDX,dword ptr [g_10051e58]
        MOV EDI,dword ptr [g_10051e5c]
        INC ECX
        ADD EDI,EDX
        CMP ECX,EDI
        JL L_2bcc
        JMP L_2bee
L_2bec:
        MOV dword ptr [EDI],ECX
L_2bee:
        CMP dword ptr [EBP - 0x4],0x0
        JZ L_2bfc
        PUSH 0x1
        CALL FUN_10039b7a
        POP ECX
L_2bfc:
        CMP dword ptr [EBP + 0x8],0x8
        JNZ L_2c0d
        PUSH dword ptr [ESI + 0x58]
        PUSH 0x8
        CALL EBX
        POP ECX
        POP ECX
        JMP L_2c1f
L_2c0d:
        PUSH dword ptr [EBP + 0x8]
        CALL EBX
        CMP dword ptr [EBP + 0x8],0xb
        POP ECX
        JZ L_2c1f
        CMP dword ptr [EBP + 0x8],0x4
        JNZ L_2c31
L_2c1f:
        MOV EAX,dword ptr [EBP - 0x8]
        CMP dword ptr [EBP + 0x8],0x8
        MOV dword ptr [ESI + 0x54],EAX
        JNZ L_2c31
        MOV EAX,dword ptr [EBP - 0xc]
        MOV dword ptr [ESI + 0x58],EAX
L_2c31:
        XOR EAX,EAX
L_2c33:
        POP EDI
        POP ESI
        POP EBX
        LEAVE
        RET
    }
}
