// FUN_1001dae0 (0x1001DAE0) __stdcall
extern int __cdecl FUN_1003791a(int);
extern void *__cdecl FUN_10001d50(int);
extern void __cdecl FUN_10037ef1(int, int, int);
extern char g_1001dc68[];
extern char g_1001dc9c[];
extern char g_1004a948;
extern char g_1004a93c;
extern char g_1004a930;
extern char g_1004a924;

__declspec(naked) void func_1001dae0(void)
{
    __asm {
        SUB ESP,0x8
        PUSH EBX
        PUSH EBP
        PUSH ESI
        PUSH EDI
        MOV EDI,dword ptr [ESP + 0x20]
        XOR EBP,EBP
        XOR EDX,EDX
        XOR EAX,EAX
        CMP EDI,EBP
        MOV dword ptr [ESP + 0x10],EBP
        JNZ L_db09
        MOV ECX,dword ptr [ESP + 0x24]
        POP EDI
        POP ESI
        MOV dword ptr [ECX],EBP
        POP EBP
        POP EBX
        ADD ESP,0x8
        RET 0x10
L_db09:
        XOR EAX,EAX
        MOV AX,word ptr [EDI]
        XOR ECX,ECX
        CMP AX,BP
        JZ L_db3a
L_db15:
        MOVZX EAX,AX
        ADD EAX,-0x22
        CMP EAX,0x1c
        JA L_db2f
        MOVZX EAX,byte ptr [EAX + g_1001dc68]
        /* __emit: MSVC6 re-bases jmp [eax*4+imm32] dispatch via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x60
        __emit 0xDC
        __emit 0x01
        __emit 0x10
        INC EDX
L_db2f:
        MOV AX,word ptr [EDI + ECX*0x2 + 0x2]
        INC ECX
        CMP AX,BP
        JNZ L_db15
L_db3a:
        CMP EDX,EBP
        MOV EAX,dword ptr [ESP + 0x24]
        MOV ESI,ECX
        MOV dword ptr [ESP + 0x14],ESI
        JNZ L_db71
        CMP EAX,EBP
        JZ L_db4e
        MOV dword ptr [EAX],EDI
L_db4e:
        MOV ESI,dword ptr [ESP + 0x28]
        TEST ESI,ESI
        JZ L_dc54
        PUSH EDI
        CALL FUN_1003791a
        ADD ESP,0x4
        POP EDI
        MOV dword ptr [ESI],EAX
        POP ESI
        POP EBP
        XOR EAX,EAX
        POP EBX
        ADD ESP,0x8
        RET 0x10
L_db71:
        CMP EAX,EBP
        JZ L_db9e
        LEA ECX,[ECX + EDX*0x4]
        ADD EDX,ECX
        LEA EDX,[EDX + EDX*0x1 + 0x2]
        PUSH EDX
        CALL FUN_10001d50
        ADD ESP,0x4
        CMP EAX,EBP
        MOV dword ptr [ESP + 0x10],EAX
        JNZ L_db9e
        POP EDI
        POP ESI
        POP EBP
        MOV EAX,0x8007000e
        POP EBX
        ADD ESP,0x8
        RET 0x10
L_db9e:
        XOR EBX,EBX
        TEST ESI,ESI
        JBE L_dc36
L_dba8:
        MOVZX EAX,word ptr [EDI + EBP*0x2]
        ADD EAX,-0x22
        CMP EAX,0x1c
        JA L_dc14
        MOVZX EAX,byte ptr [EAX + g_1001dc9c]
        /* __emit: MSVC6 re-bases jmp [eax*4+imm32] dispatch via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x88
        __emit 0xDC
        __emit 0x01
        __emit 0x10
        MOV ESI,offset g_1004a948
        PUSH ESI
        JMP L_dbe0
        MOV ESI,offset g_1004a93c
        PUSH ESI
        JMP L_dbe0
        MOV ESI,offset g_1004a930
        PUSH ESI
        JMP L_dbe0
        MOV ESI,offset g_1004a924
        PUSH ESI
L_dbe0:
        CALL FUN_1003791a
        ADD ESP,0x4
        TEST ESI,ESI
        MOV EDI,EAX
        JZ L_dc10
        MOV EAX,dword ptr [ESP + 0x24]
        TEST EAX,EAX
        JZ L_dc08
        MOV ECX,dword ptr [ESP + 0x10]
        PUSH EDI
        LEA EDX,[ECX + EBX*0x2]
        PUSH ESI
        PUSH EDX
        CALL FUN_10037ef1
        ADD ESP,0xc
L_dc08:
        ADD EBX,EDI
        MOV EDI,dword ptr [ESP + 0x20]
        JMP L_dc29
L_dc10:
        MOV EDI,dword ptr [ESP + 0x20]
L_dc14:
        MOV EAX,dword ptr [ESP + 0x24]
        TEST EAX,EAX
        JZ L_dc28
        MOV AX,word ptr [EDI + EBP*0x2]
        MOV ECX,dword ptr [ESP + 0x10]
        MOV word ptr [ECX + EBX*0x2],AX
L_dc28:
        INC EBX
L_dc29:
        MOV EAX,dword ptr [ESP + 0x14]
        INC EBP
        CMP EBP,EAX
        JC L_dba8
L_dc36:
        MOV ECX,dword ptr [ESP + 0x24]
        TEST ECX,ECX
        JZ L_dc4a
        MOV EAX,dword ptr [ESP + 0x10]
        MOV word ptr [EAX + EBX*0x2],0x0
        MOV dword ptr [ECX],EAX
L_dc4a:
        MOV EAX,dword ptr [ESP + 0x28]
        TEST EAX,EAX
        JZ L_dc54
        MOV dword ptr [EAX],EBX
L_dc54:
        POP EDI
        POP ESI
        POP EBP
        XOR EAX,EAX
        POP EBX
        ADD ESP,0x8
        RET 0x10
    }
}
