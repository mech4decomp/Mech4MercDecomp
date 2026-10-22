// FUN_100428d2 (0x100428D2) __cdecl
extern void *__cdecl FUN_10038512(void);
extern void *__cdecl FUN_1003c3c5(int);
extern void __cdecl FUN_1003ca70(int, int, int);
extern int __cdecl FUN_10042c38(int, int);
extern void __cdecl FUN_10039b19(int);
extern void *__cdecl FUN_10042786(void);
extern void __cdecl FUN_10039b7a(int);
extern void *__cdecl FUN_1004277d(void);
extern char g_10051de0;
extern int g_10051e60;
extern int g_10051e64;
extern int g_1007573c;
extern char g_10042a54;
extern void *g_10049180;
extern int g_10075734;
extern int g_10075730;
extern int g_10075738;
extern int g_1007572c;
extern void *g_100490e4;

__declspec(naked) void func_100428d2(void)
{
    __asm {
        PUSH EBP
        MOV EBP,ESP
        PUSH EBX
        PUSH ESI
        MOV ESI,dword ptr [EBP + 0xc]
        PUSH EDI
        CMP ESI,0x4
        JZ L_2a08
        CMP ESI,0x3
        JZ L_2a08
        MOV EBX,dword ptr [EBP + 0x8]
        CMP EBX,0x2
        JZ L_29a0
        CMP EBX,0x15
        JZ L_29a0
        CMP EBX,0x16
        JZ L_29a0
        CMP EBX,0xf
        JZ L_29a0
        CMP EBX,0x8
        JZ L_2927
        CMP EBX,0x4
        JZ L_2927
        CMP EBX,0xb
        JNZ L_2a08
L_2927:
        CALL FUN_10038512
        MOV ESI,EAX
        MOV EDI,offset g_10051de0
        CMP dword ptr [ESI + 0x50],EDI
        JNZ L_295f
        PUSH dword ptr [g_10051e60]
        CALL FUN_1003c3c5
        TEST EAX,EAX
        POP ECX
        MOV dword ptr [ESI + 0x50],EAX
        JZ L_2a08
        PUSH dword ptr [g_10051e60]
        PUSH EDI
        PUSH EAX
        CALL FUN_1003ca70
        ADD ESP,0xc
L_295f:
        PUSH dword ptr [ESI + 0x50]
        PUSH EBX
        CALL FUN_10042c38
        POP ECX
        TEST EAX,EAX
        POP ECX
        JZ L_2a08
        MOV EDI,dword ptr [EAX + 0x8]
L_2975:
        CMP dword ptr [EAX + 0x4],EBX
        JNZ L_2a50
        MOV ECX,dword ptr [EBP + 0xc]
        MOV dword ptr [EAX + 0x8],ECX
        MOV ECX,dword ptr [g_10051e64]
        MOV EDX,dword ptr [ESI + 0x50]
        ADD EAX,0xc
        LEA ECX,[ECX + ECX*0x2]
        LEA ECX,[EDX + ECX*0x4]
        CMP EAX,ECX
        JNC L_2a50
        JMP L_2975
L_29a0:
        PUSH 0x1
        POP EDI
        PUSH EDI
        CALL FUN_10039b19
        CMP EBX,0x2
        POP ECX
        JZ L_29b4
        CMP EBX,0x15
        JNZ L_29d3
L_29b4:
        CMP dword ptr [g_1007573c],0x0
        JNZ L_29d3
        PUSH EDI
        PUSH offset g_10042a54
        CALL dword ptr [g_10049180]
        CMP EAX,EDI
        JNZ L_29f2
        MOV dword ptr [g_1007573c],EDI
L_29d3:
        DEC EBX
        DEC EBX
        JZ L_2a37
        SUB EBX,0xd
        JZ L_2a29
        SUB EBX,0x6
        JZ L_2a1b
        DEC EBX
        JNZ L_2a45
        MOV EDI,dword ptr [g_10075734]
        MOV dword ptr [g_10075734],ESI
        JMP L_2a48
L_29f2:
        CALL dword ptr [g_100490e4]
        MOV ESI,EAX
        CALL FUN_10042786
        PUSH EDI
        MOV dword ptr [EAX],ESI
        CALL FUN_10039b7a
        POP ECX
L_2a08:
        CALL FUN_1004277d
        MOV dword ptr [EAX],0x16
        OR EAX,0xffffffff
L_2a16:
        POP EDI
        POP ESI
        POP EBX
        POP EBP
        RET
L_2a1b:
        MOV EDI,dword ptr [g_10075730]
        MOV dword ptr [g_10075730],ESI
        JMP L_2a48
L_2a29:
        MOV EDI,dword ptr [g_10075738]
        MOV dword ptr [g_10075738],ESI
        JMP L_2a48
L_2a37:
        MOV EDI,dword ptr [g_1007572c]
        MOV dword ptr [g_1007572c],ESI
        JMP L_2a48
L_2a45:
        MOV EDI,dword ptr [EBP + 0xc]
L_2a48:
        PUSH 0x1
        CALL FUN_10039b7a
        POP ECX
L_2a50:
        MOV EAX,EDI
        JMP L_2a16
    }
}
