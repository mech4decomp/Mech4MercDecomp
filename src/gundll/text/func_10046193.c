// FUN_10046193 (0x10046193) __cdecl
extern void *__cdecl FUN_10046708(int, int);
extern void *__cdecl FUN_10046372(int);
extern int __cdecl FUN_10045e7d(void);
extern void *__cdecl FUN_1003c3c5(int);
extern int __cdecl FUN_1004631a(int, int);
extern void __cdecl FUN_1003c2dc(int);
extern void *__cdecl FUN_100463d9(int, int);
extern int __cdecl FUN_1003c5f0(int);
extern void __cdecl FUN_1003c500(int, int);
extern int g_100754d4;
extern int g_100754d8;
extern int g_100754dc;
extern void *g_100491a0;

__declspec(naked) void func_10046193(void)
{
    __asm {
        PUSH EBP
        MOV EBP,ESP
        PUSH ECX
        PUSH ECX
        PUSH EBX
        PUSH ESI
        PUSH EDI
        XOR EDI,EDI
        CMP dword ptr [EBP + 0x8],EDI
        JZ L_61f7
        PUSH 0x3d
        PUSH dword ptr [EBP + 0x8]
        CALL FUN_10046708
        MOV ESI,EAX
        POP ECX
        CMP ESI,EDI
        POP ECX
        MOV dword ptr [EBP - 0x8],ESI
        JZ L_61f7
        CMP dword ptr [EBP + 0x8],ESI
        JZ L_61f7
        MOV EAX,[g_100754d4]
        XOR EBX,EBX
        CMP byte ptr [ESI + 0x1],BL
        SETZ BL
        CMP EAX,dword ptr [g_100754d8]
        JNZ L_61dd
        PUSH EAX
        CALL FUN_10046372
        POP ECX
        MOV [g_100754d4],EAX
L_61dd:
        CMP EAX,EDI
        JNZ L_6235
        CMP dword ptr [EBP + 0xc],EDI
        JZ L_61ff
        CMP dword ptr [g_100754dc],EDI
        JZ L_61ff
        CALL FUN_10045e7d
        TEST EAX,EAX
        JZ L_6235
L_61f7:
        OR EAX,0xffffffff
L_61fa:
        POP EDI
        POP ESI
        POP EBX
        LEAVE
        RET
L_61ff:
        CMP EBX,EDI
        JNZ L_6313
        PUSH 0x4
        CALL FUN_1003c3c5
        CMP EAX,EDI
        POP ECX
        MOV [g_100754d4],EAX
        JZ L_61f7
        MOV dword ptr [EAX],EDI
        CMP dword ptr [g_100754dc],EDI
        JNZ L_6235
        PUSH 0x4
        CALL FUN_1003c3c5
        CMP EAX,EDI
        POP ECX
        MOV [g_100754dc],EAX
        JZ L_61f7
        MOV dword ptr [EAX],EDI
L_6235:
        SUB ESI,dword ptr [EBP + 0x8]
        MOV EDI,dword ptr [g_100754d4]
        MOV dword ptr [EBP - 0x4],EDI
        PUSH ESI
        PUSH dword ptr [EBP + 0x8]
        CALL FUN_1004631a
        MOV ESI,EAX
        POP ECX
        TEST ESI,ESI
        POP ECX
        JL L_6295
        CMP dword ptr [EDI],0x0
        JZ L_6295
        TEST EBX,EBX
        JZ L_628d
        PUSH dword ptr [EDI + ESI*0x4]
        LEA EDI,[EDI + ESI*0x4]
        CALL FUN_1003c2dc
        POP ECX
L_6267:
        CMP dword ptr [EDI],0x0
        JZ L_6277
        MOV EAX,dword ptr [EDI + 0x4]
        INC ESI
        MOV dword ptr [EDI],EAX
        ADD EDI,0x4
        JMP L_6267
L_6277:
        MOV EAX,ESI
        SHL EAX,0x2
        PUSH EAX
        PUSH dword ptr [EBP - 0x4]
        CALL FUN_100463d9
        POP ECX
        TEST EAX,EAX
        POP ECX
        JZ L_62c7
        JMP L_62c2
L_628d:
        MOV EAX,dword ptr [EBP + 0x8]
        MOV dword ptr [EDI + ESI*0x4],EAX
        JMP L_62c7
L_6295:
        TEST EBX,EBX
        JNZ L_6313
        TEST ESI,ESI
        JGE L_629f
        NEG ESI
L_629f:
        /* __emit: MSVC6 re-bases no-base SIB lea [esi*4+8] via EBX */
        __emit 0x8D
        __emit 0x04
        __emit 0xB5
        __emit 0x08
        __emit 0x00
        __emit 0x00
        __emit 0x00
        PUSH EAX
        PUSH EDI
        CALL FUN_100463d9
        POP ECX
        TEST EAX,EAX
        POP ECX
        JZ L_61f7
        MOV ECX,dword ptr [EBP + 0x8]
        MOV dword ptr [EAX + ESI*0x4],ECX
        AND dword ptr [EAX + ESI*0x4 + 0x4],0x0
L_62c2:
        MOV [g_100754d4],EAX
L_62c7:
        CMP dword ptr [EBP + 0xc],0x0
        JZ L_6313
        PUSH dword ptr [EBP + 0x8]
        CALL FUN_1003c5f0
        INC EAX
        INC EAX
        PUSH EAX
        CALL FUN_1003c3c5
        MOV ESI,EAX
        POP ECX
        TEST ESI,ESI
        POP ECX
        JZ L_6313
        PUSH dword ptr [EBP + 0x8]
        PUSH ESI
        CALL FUN_1003c500
        MOV EAX,ESI
        POP ECX
        SUB EAX,dword ptr [EBP + 0x8]
        POP ECX
        ADD EAX,dword ptr [EBP - 0x8]
        AND byte ptr [EAX],0x0
        INC EAX
        NEG EBX
        SBB EBX,EBX
        NOT EBX
        AND EBX,EAX
        PUSH EBX
        PUSH ESI
        CALL dword ptr [g_100491a0]
        PUSH ESI
        CALL FUN_1003c2dc
        POP ECX
L_6313:
        XOR EAX,EAX
        JMP L_61fa
    }
}
