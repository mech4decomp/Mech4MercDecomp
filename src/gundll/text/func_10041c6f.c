// FUN_10041c6f (0x10041C6F) __cdecl
extern int __cdecl FUN_10041bc7(void *);
extern void __cdecl FUN_10041bbb(void *);
extern void __cdecl FUN_10041ba0(void *, void *);
extern int __cdecl FUN_10041b14(void *, int);
extern void __cdecl FUN_10041be2(void *, int);

__declspec(naked) void func_10041c6f(void)
{
    __asm {
        PUSH EBP
        MOV EBP,ESP
        SUB ESP,0x18
        MOV EAX,dword ptr [EBP + 0x8]
        PUSH EBX
        PUSH ESI
        PUSH EDI
        MOVZX ECX,word ptr [EAX + 0xa]
        MOV EBX,ECX
        AND ECX,0x8000
        MOV dword ptr [EBP + 0x8],ECX
        MOV ECX,dword ptr [EAX + 0x6]
        MOV dword ptr [EBP - 0xc],ECX
        MOV ECX,dword ptr [EAX + 0x2]
        MOVZX EAX,word ptr [EAX]
        MOV EDI,dword ptr [EBP + 0x10]
        AND EBX,0x7fff
        SUB EBX,0x3fff
        MOV dword ptr [EBP - 0x8],ECX
        SHL EAX,0x10
        CMP EBX,0xffffc001
        MOV dword ptr [EBP - 0x4],EAX
        JNZ L_cdc
        LEA EAX,[EBP - 0xc]
        XOR ESI,ESI
        PUSH EAX
        CALL FUN_10041bc7
        TEST EAX,EAX
        POP ECX
        JNZ L_d9b
        LEA EAX,[EBP - 0xc]
        PUSH EAX
        CALL FUN_10041bbb
        POP ECX
L_cd4:
        PUSH 0x2
L_cd6:
        POP EAX
        JMP L_d9d
L_cdc:
        LEA EAX,[EBP - 0xc]
        PUSH EAX
        LEA EAX,[EBP - 0x18]
        PUSH EAX
        CALL FUN_10041ba0
        PUSH dword ptr [EDI + 0x8]
        LEA EAX,[EBP - 0xc]
        PUSH EAX
        CALL FUN_10041b14
        ADD ESP,0x10
        TEST EAX,EAX
        JZ L_cfd
        INC EBX
L_cfd:
        MOV EAX,dword ptr [EDI + 0x4]
        MOV ECX,EAX
        SUB ECX,dword ptr [EDI + 0x8]
        CMP EBX,ECX
        JGE L_d15
        LEA EAX,[EBP - 0xc]
        PUSH EAX
        CALL FUN_10041bbb
        POP ECX
        JMP L_d51
L_d15:
        CMP EBX,EAX
        JG L_d58
        SUB EAX,EBX
        MOV ESI,EAX
        LEA EAX,[EBP - 0x18]
        PUSH EAX
        LEA EAX,[EBP - 0xc]
        PUSH EAX
        CALL FUN_10041ba0
        LEA EAX,[EBP - 0xc]
        PUSH ESI
        PUSH EAX
        CALL FUN_10041be2
        PUSH dword ptr [EDI + 0x8]
        LEA EAX,[EBP - 0xc]
        PUSH EAX
        CALL FUN_10041b14
        MOV EAX,dword ptr [EDI + 0xc]
        INC EAX
        PUSH EAX
        LEA EAX,[EBP - 0xc]
        PUSH EAX
        CALL FUN_10041be2
        ADD ESP,0x20
L_d51:
        XOR ESI,ESI
        JMP L_cd4
L_d58:
        CMP EBX,dword ptr [EDI]
        JL L_d84
        LEA EAX,[EBP - 0xc]
        PUSH EAX
        CALL FUN_10041bbb
        PUSH dword ptr [EDI + 0xc]
        OR byte ptr [EBP - 0x9],0x80
        LEA EAX,[EBP - 0xc]
        PUSH EAX
        CALL FUN_10041be2
        MOV ESI,dword ptr [EDI + 0x14]
        ADD ESP,0xc
        ADD ESI,dword ptr [EDI]
        PUSH 0x1
        JMP L_cd6
L_d84:
        PUSH dword ptr [EDI + 0xc]
        MOV ESI,dword ptr [EDI + 0x14]
        AND byte ptr [EBP - 0x9],0x7f
        LEA EAX,[EBP - 0xc]
        PUSH EAX
        ADD ESI,EBX
        CALL FUN_10041be2
        POP ECX
        POP ECX
L_d9b:
        XOR EAX,EAX
L_d9d:
        PUSH 0x1f
        POP ECX
        SUB ECX,dword ptr [EDI + 0xc]
        MOV EDI,dword ptr [EDI + 0x10]
        SHL ESI,CL
        MOV ECX,dword ptr [EBP + 0x8]
        NEG ECX
        SBB ECX,ECX
        AND ECX,0x80000000
        OR ESI,ECX
        OR ESI,dword ptr [EBP - 0xc]
        CMP EDI,0x40
        JNZ L_dcc
        MOV ECX,dword ptr [EBP + 0xc]
        MOV EDX,dword ptr [EBP - 0x8]
        MOV dword ptr [ECX + 0x4],ESI
        MOV dword ptr [ECX],EDX
        JMP L_dd6
L_dcc:
        CMP EDI,0x20
        JNZ L_dd6
        MOV ECX,dword ptr [EBP + 0xc]
        MOV dword ptr [ECX],ESI
L_dd6:
        POP EDI
        POP ESI
        POP EBX
        LEAVE
        RET
    }
}
