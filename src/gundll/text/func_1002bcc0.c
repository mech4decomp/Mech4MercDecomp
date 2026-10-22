// FUN_1002bcc0 (0x1002BCC0) __stdcall
extern void *__cdecl FUN_10001d50(int);
extern void __cdecl FUN_10001d60(void *);
extern int __cdecl FUN_10037bf0(int, int);
extern char g_10049b60;
extern char g_10049c60;

__declspec(naked) void func_1002bcc0(void)
{
    __asm {
        SUB ESP,0x10
        MOV EDX,dword ptr [ESP + 0x18]
        PUSH EBX
        MOV EBX,dword ptr [ESP + 0x18]
        MOV EAX,dword ptr [EBX]
        PUSH EBP
        PUSH ESI
        PUSH EDI
        LEA ECX,[ESP + 0x10]
        PUSH ECX
        PUSH EDX
        XOR EBP,EBP
        PUSH EBX
        MOV dword ptr [ESP + 0x1c],EBP
        MOV dword ptr [ESP + 0x28],EBP
        CALL dword ptr [EAX + 0x28]
        MOV ESI,EAX
        CMP ESI,EBP
        JL L_be2d
        MOV EAX,dword ptr [ESP + 0x10]
        CMP EAX,EBP
        JNZ L_bd0f
        MOV EAX,dword ptr [ESP + 0x30]
        MOV ECX,dword ptr [ESP + 0x34]
        MOV dword ptr [EAX],EBP
        POP EDI
        MOV EAX,ESI
        POP ESI
        MOV dword ptr [ECX],EBP
        POP EBP
        POP EBX
        ADD ESP,0x10
        RET 0x14
L_bd0f:
        LEA EDX,[EAX*0x8 + 0x0]
        PUSH EDX
        CALL FUN_10001d50
        MOV EDX,EAX
        ADD ESP,0x4
        CMP EDX,EBP
        MOV dword ptr [ESP + 0x18],EDX
        JNZ L_bd33
        MOV ESI,0x8007000e
        JMP L_be20
L_bd33:
        MOV EAX,dword ptr [ESP + 0x10]
        LEA ECX,[EAX + EAX*0x1]
        XOR EAX,EAX
        MOV EDI,EDX
        REP STOSD
        MOV EAX,dword ptr [ESP + 0x10]
        TEST EAX,EAX
        MOV dword ptr [ESP + 0x24],EBP
        JBE L_bded
L_bd52:
        MOV EDI,EDX
        MOV EAX,dword ptr [ESP + 0x28]
        MOV ECX,dword ptr [EBX]
        LEA EDX,[ESP + 0x14]
        PUSH EDX
        PUSH EBP
        PUSH EAX
        PUSH EBX
        CALL dword ptr [ECX + 0x2c]
        MOV ESI,EAX
        TEST ESI,ESI
        JL L_be1a
        MOV EAX,dword ptr [ESP + 0x14]
        MOV ECX,dword ptr [EBX]
        LEA EDX,[ESP + 0x1c]
        PUSH EDX
        PUSH EAX
        PUSH EBX
        CALL dword ptr [ECX]
        MOV ESI,EAX
        TEST ESI,ESI
        JL L_be1a
        MOV ECX,dword ptr [ESP + 0x2c]
        MOV EDX,dword ptr [ESP + 0x1c]
        PUSH ECX
        PUSH EDX
        CALL FUN_10037bf0
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_bdd1
        MOV EDX,dword ptr [ESP + 0x14]
        MOV EAX,dword ptr [EBX]
        LEA ECX,[EDI + 0x4]
        PUSH ECX
        PUSH offset g_10049b60
        PUSH EDX
        PUSH EBX
        CALL dword ptr [EAX + 0xc]
        MOV ESI,EAX
        TEST ESI,ESI
        JL L_be1a
        MOV ECX,dword ptr [ESP + 0x14]
        MOV EAX,dword ptr [EBX]
        PUSH EDI
        PUSH offset g_10049c60
        PUSH ECX
        PUSH EBX
        CALL dword ptr [EAX + 0x14]
        MOV ESI,EAX
        TEST ESI,ESI
        JL L_be1a
        INC dword ptr [ESP + 0x24]
L_bdd1:
        MOV EAX,dword ptr [ESP + 0x10]
        INC EBP
        ADD EDI,0x8
        CMP EBP,EAX
        /* __emit: MSVC6 miscomputes backward JC rel32 (off-by-2) when a call-reloc sits between branch and target */
        __emit 0x0F
        __emit 0x82
        __emit 0x71
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        MOV EAX,dword ptr [ESP + 0x24]
        TEST EAX,EAX
        JNZ L_bdfa
        MOV EDX,dword ptr [ESP + 0x18]
L_bded:
        PUSH EDX
        CALL FUN_10001d60
        ADD ESP,0x4
        XOR EAX,EAX
        JMP L_bdfe
L_bdfa:
        MOV EAX,dword ptr [ESP + 0x18]
L_bdfe:
        MOV EDX,dword ptr [ESP + 0x30]
        MOV ECX,dword ptr [ESP + 0x24]
        MOV dword ptr [EDX],EAX
        MOV EAX,dword ptr [ESP + 0x34]
        POP EDI
        MOV dword ptr [EAX],ECX
        MOV EAX,ESI
        POP ESI
        POP EBP
        POP EBX
        ADD ESP,0x10
        RET 0x14
L_be1a:
        MOV EDX,dword ptr [ESP + 0x18]
        XOR EBP,EBP
L_be20:
        CMP EDX,EBP
        JZ L_be2d
        PUSH EDX
        CALL FUN_10001d60
        ADD ESP,0x4
L_be2d:
        POP EDI
        MOV EAX,ESI
        POP ESI
        POP EBP
        POP EBX
        ADD ESP,0x10
        RET 0x14
    }
}
