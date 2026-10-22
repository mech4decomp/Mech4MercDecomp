// FUN_1002b4f0 (0x1002B4F0) __stdcall
extern void *__cdecl FUN_10001d50(int);
extern void __cdecl FUN_10001d60(void *);
extern int __cdecl FUN_10037bf0(int, int);
extern int __cdecl FUN_10002480(int, int);
extern char g_10049b58;

__declspec(naked) void func_1002b4f0(void)
{
    __asm {
        SUB ESP,0x14
        MOV EDX,dword ptr [ESP + 0x1c]
        PUSH EBX
        MOV EBX,dword ptr [ESP + 0x1c]
        MOV EAX,dword ptr [EBX]
        PUSH EBP
        PUSH ESI
        PUSH EDI
        LEA ECX,[ESP + 0x10]
        PUSH ECX
        XOR EDI,EDI
        PUSH EDX
        PUSH EBX
        MOV dword ptr [ESP + 0x1c],EDI
        MOV dword ptr [ESP + 0x20],EDI
        MOV dword ptr [ESP + 0x28],EDI
        CALL dword ptr [EAX + 0x28]
        MOV ESI,EAX
        CMP ESI,EDI
        JL L_b65a
        MOV EAX,dword ptr [ESP + 0x10]
        CMP EAX,EDI
        JNZ L_b543
        MOV EAX,dword ptr [ESP + 0x34]
        MOV ECX,dword ptr [ESP + 0x38]
        MOV dword ptr [EAX],EDI
        MOV dword ptr [ECX],EDI
        POP EDI
        MOV EAX,ESI
        POP ESI
        POP EBP
        POP EBX
        ADD ESP,0x14
        RET 0x14
L_b543:
        LEA EDX,[EAX*0x4 + 0x0]
        PUSH EDX
        CALL FUN_10001d50
        MOV EBP,EAX
        ADD ESP,0x4
        CMP EBP,EDI
        JNZ L_b563
        MOV ESI,0x8007000e
        JMP L_b64d
L_b563:
        MOV ECX,dword ptr [ESP + 0x10]
        XOR EAX,EAX
        MOV EDI,EBP
        REP STOSD
        MOV EAX,dword ptr [ESP + 0x10]
        XOR EDI,EDI
        CMP EAX,EDI
        MOV dword ptr [ESP + 0x28],EDI
        JBE L_b624
        NOP
L_b580:
        MOV EDX,dword ptr [ESP + 0x2c]
        MOV EAX,dword ptr [EBX]
        LEA ECX,[ESP + 0x18]
        PUSH ECX
        PUSH EDI
        PUSH EDX
        PUSH EBX
        CALL dword ptr [EAX + 0x2c]
        MOV ESI,EAX
        TEST ESI,ESI
        JL L_b64b
        MOV EDX,dword ptr [ESP + 0x18]
        MOV EAX,dword ptr [EBX]
        LEA ECX,[ESP + 0x14]
        PUSH ECX
        PUSH EDX
        PUSH EBX
        CALL dword ptr [EAX]
        MOV ESI,EAX
        TEST ESI,ESI
        JL L_b64b
        MOV EAX,dword ptr [ESP + 0x30]
        MOV ECX,dword ptr [ESP + 0x14]
        PUSH EAX
        PUSH ECX
        CALL FUN_10037bf0
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_b60f
        MOV ECX,dword ptr [ESP + 0x18]
        MOV EDX,dword ptr [EBX]
        MOV dword ptr [ESP + 0x20],EAX
        LEA EAX,[ESP + 0x1c]
        PUSH EAX
        PUSH offset g_10049b58
        PUSH ECX
        PUSH EBX
        CALL dword ptr [EDX + 0xc]
        MOV ESI,EAX
        TEST ESI,ESI
        JL L_b64b
        MOV EAX,dword ptr [ESP + 0x1c]
        LEA EDX,[ESP + 0x20]
        PUSH EDX
        PUSH EAX
        CALL FUN_10002480
        MOV ESI,EAX
        TEST ESI,ESI
        JL L_b64b
        MOV EAX,dword ptr [ESP + 0x28]
        MOV ECX,dword ptr [ESP + 0x20]
        MOV dword ptr [EBP + EAX*0x4],ECX
        INC EAX
        MOV dword ptr [ESP + 0x28],EAX
L_b60f:
        MOV EAX,dword ptr [ESP + 0x10]
        INC EDI
        CMP EDI,EAX
        JC L_b580
        MOV EAX,dword ptr [ESP + 0x28]
        TEST EAX,EAX
        JNZ L_b62f
L_b624:
        PUSH EBP
        CALL FUN_10001d60
        ADD ESP,0x4
        XOR EBP,EBP
L_b62f:
        MOV EDX,dword ptr [ESP + 0x34]
        MOV EAX,dword ptr [ESP + 0x38]
        MOV ECX,dword ptr [ESP + 0x28]
        MOV dword ptr [EDX],EBP
        POP EDI
        MOV dword ptr [EAX],ECX
        MOV EAX,ESI
        POP ESI
        POP EBP
        POP EBX
        ADD ESP,0x14
        RET 0x14
L_b64b:
        XOR EDI,EDI
L_b64d:
        CMP EBP,EDI
        JZ L_b65a
        PUSH EBP
        CALL FUN_10001d60
        ADD ESP,0x4
L_b65a:
        POP EDI
        MOV EAX,ESI
        POP ESI
        POP EBP
        POP EBX
        ADD ESP,0x14
        RET 0x14
    }
}
