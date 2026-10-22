// FUN_10036520 (0x10036520) __thiscall
extern void __cdecl FUN_100333f0(void);
extern void __cdecl FUN_100340e0(void);
extern void __cdecl FUN_100339a0(void);
extern void *__cdecl FUN_10001d50(int);
extern void __cdecl FUN_10034340(void);
extern void __cdecl FUN_10001d60(void *);
extern void __cdecl FUN_10033ad0(void);
extern void __cdecl FUN_10033cc0(void);
extern char g_10048c23;
extern void *g_10049204;

__declspec(naked) void func_10036520(void)
{
    __asm {
        MOV EAX,FS:[0x0]
        PUSH -0x1
        PUSH offset g_10048c23
        PUSH EAX
        MOV dword ptr FS:[0x0],ESP
        SUB ESP,0x70
        PUSH EBX
        PUSH EBP
        PUSH ESI
        MOV ESI,dword ptr [ESP + 0x8c]
        PUSH EDI
        LEA EAX,[ESP + 0x14]
        MOV EDI,ECX
        MOV ECX,dword ptr [ESI + 0x1c]
        PUSH EAX
        PUSH ECX
        CALL FUN_100333f0
        XOR EBP,EBP
        CMP EAX,EBP
        JL L_6686
        MOV EDX,dword ptr [EDI + 0x10]
        PUSH EDX
        PUSH EBP
        LEA EAX,[ESP + 0x4c]
        PUSH EAX
        PUSH EBP
        LEA ECX,[ESP + 0x2c]
        MOV word ptr [ESP + 0x5c],BP
        MOV dword ptr [ESP + 0x58],EBP
        MOV dword ptr [ESP + 0x54],0x3
        CALL FUN_100340e0
        MOV EAX,dword ptr [ESP + 0x34]
        PUSH EBP
        PUSH EBP
        PUSH 0x8
        PUSH EBP
        LEA ECX,[ESP + 0xa0]
        PUSH ECX
        LEA EDX,[ESP + 0x48]
        PUSH EDX
        MOV dword ptr [ESP + 0xa0],EBP
        CALL dword ptr [EAX]
        MOV EBX,EAX
        CMP EBX,EBP
        JGE L_65c2
        LEA ECX,[ESP + 0x1c]
        MOV dword ptr [ESP + 0x88],0xffffffff
        CALL FUN_100339a0
        MOV EAX,EBX
        JMP L_6686
L_65c2:
        CMP dword ptr [ESI + 0x8],EBP
        JBE L_6603
        PUSH 0x14
        CALL FUN_10001d50
        ADD ESP,0x4
        MOV dword ptr [ESP + 0x10],EAX
        CMP EAX,EBP
        MOV byte ptr [ESP + 0x88],0x1
        JZ L_65f7
        MOV EDX,dword ptr [ESI + 0x8]
        PUSH EBP
        LEA ECX,[EDI + 0x4c]
        PUSH ECX
        MOV ECX,dword ptr [ESI + 0x4]
        PUSH EDX
        PUSH ECX
        MOV ECX,EAX
        CALL FUN_10034340
        JMP L_65f9
L_65f7:
        XOR EAX,EAX
L_65f9:
        MOV byte ptr [ESP + 0x88],0x0
        MOV EBP,EAX
L_6603:
        MOV EAX,dword ptr [EDI + 0x14]
        MOV EDX,dword ptr [EAX]
        PUSH EDI
        MOV EDI,dword ptr [ESP + 0x18]
        LEA ECX,[ESI + 0x18]
        PUSH ECX
        LEA ECX,[ESP + 0x3c]
        PUSH ECX
        PUSH EBP
        SUB ESP,0x8
        MOV ECX,ESP
        MOV dword ptr [ECX],EDI
        MOV DI,word ptr [ESP + 0x30]
        PUSH EAX
        MOV word ptr [ECX + 0x4],DI
        CALL dword ptr [EDX + 0x8]
        TEST EBP,EBP
        MOV BL,AL
        JZ L_663a
        PUSH EBP
        CALL FUN_10001d60
        ADD ESP,0x4
L_663a:
        CALL dword ptr [g_10049204]
        MOV EDX,dword ptr [ESP + 0x90]
        LEA ECX,[ESP + 0x1c]
        MOV dword ptr [EDX + 0x4],EAX
        CALL FUN_10033ad0
        LEA ECX,[ESP + 0x1c]
        MOV dword ptr [ESI + 0xc],EAX
        CALL FUN_10033cc0
        MOVZX EAX,AX
        LEA ECX,[ESP + 0x1c]
        MOV dword ptr [ESI + 0x10],EAX
        MOV dword ptr [ESP + 0x88],0xffffffff
        CALL FUN_100339a0
        XOR EAX,EAX
        TEST BL,BL
        SETNZ AL
        DEC EAX
        AND EAX,0x80004005
L_6686:
        MOV ECX,dword ptr [ESP + 0x80]
        POP EDI
        POP ESI
        POP EBP
        MOV dword ptr FS:[0x0],ECX
        POP EBX
        ADD ESP,0x7c
        RET 0x4
    }
}
