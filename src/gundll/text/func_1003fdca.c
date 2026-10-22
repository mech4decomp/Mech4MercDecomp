// FUN_1003fdca (0x1003FDCA) __thiscall
extern int __cdecl FUN_100404fb(void);
extern void __cdecl FUN_1003ff47(int, int, int);
extern void __cdecl FUN_1003ff9f(void);
extern void __cdecl FUN_1004022a(void);
extern void __cdecl FUN_1004033d(void);
extern void __cdecl FUN_100403fa(void);
extern int __cdecl FUN_10040414(int);
extern void __cdecl FUN_100439cd(int, int, int);

extern void *g_10075718;
extern int g_10049170;
extern int g_10075708;
extern char g_10054510;
extern int g_1007570c;
extern char g_10054458;
extern int g_10075710;
extern void *g_1004916c;
extern int g_100756f8;
extern void *g_10049168;
extern int g_10075714;

__declspec(naked) void func_1003fdca(void)
{
    __asm {
        PUSH EBX
        XOR EBX,EBX
        CMP dword ptr [g_10075718],EBX
        PUSH ESI
        PUSH EDI
        JNZ L_fdf6
        CALL FUN_100404fb
        TEST EAX,EAX
        JZ L_fdec
        MOV EAX,[g_10049170]
        MOV [g_10075718],EAX
        JMP L_fdf6
L_fdec:
        MOV dword ptr [g_10075718],0x10040531
L_fdf6:
        MOV ESI,dword ptr [ESP + 0x10]
        CMP ESI,EBX
        JZ L_fe82
        MOV dword ptr [g_10075708],ESI
        CMP byte ptr [ESI],BL
        JZ L_fe20
        PUSH offset g_10075708
        PUSH 0x40
        PUSH offset g_10054510
        CALL FUN_1003ff47
        ADD ESP,0xc
L_fe20:
        LEA EAX,[ESI + 0x40]
        CMP EAX,EBX
        MOV [g_1007570c],EAX
        JZ L_fe49
        CMP byte ptr [EAX],BL
        JZ L_fe49
        PUSH offset g_1007570c
        PUSH 0x16
        PUSH offset g_10054458
        CALL FUN_1003ff47
        MOV EAX,[g_1007570c]
        ADD ESP,0xc
L_fe49:
        MOV ECX,dword ptr [g_10075708]
        MOV dword ptr [g_10075710],EBX
        CMP ECX,EBX
        JZ L_fe73
        CMP byte ptr [ECX],BL
        JZ L_fe73
        CMP EAX,EBX
        JZ L_fe6c
        CMP byte ptr [EAX],BL
        JZ L_fe6c
        CALL FUN_1003ff9f
        JMP L_fe87
L_fe6c:
        CALL FUN_1004022a
        JMP L_fe87
L_fe73:
        CMP EAX,EBX
        JZ L_fe82
        CMP byte ptr [EAX],BL
        JZ L_fe82
        CALL FUN_1004033d
        JMP L_fe87
L_fe82:
        CALL FUN_100403fa
L_fe87:
        CMP dword ptr [g_10075710],EBX
        JZ L_ff41
        ADD ESI,0x80
        PUSH ESI
        CALL FUN_10040414
        MOV EDI,EAX
        POP ECX
        CMP EDI,EBX
        JZ L_ff41
        MOVZX EAX,DI
        PUSH EAX
        CALL dword ptr [g_1004916c]
        TEST EAX,EAX
        JZ L_ff41
        PUSH 0x1
        PUSH dword ptr [g_100756f8]
        CALL dword ptr [g_10049168]
        TEST EAX,EAX
        JZ L_ff41
        MOV EAX,dword ptr [ESP + 0x14]
        CMP EAX,EBX
        JZ L_feef
        MOV CX,word ptr [g_100756f8]
        MOV word ptr [EAX],CX
        MOV CX,word ptr [g_10075714]
        MOV word ptr [EAX + 0x2],CX
        MOV word ptr [EAX + 0x4],DI
L_feef:
        MOV ESI,dword ptr [ESP + 0x18]
        CMP ESI,EBX
        JZ L_ff3c
        PUSH 0x40
        PUSH ESI
        PUSH 0x1001
        PUSH dword ptr [g_100756f8]
        CALL dword ptr [g_10075718]
        TEST EAX,EAX
        JZ L_ff41
        LEA EAX,[ESI + 0x40]
        PUSH 0x40
        PUSH EAX
        PUSH 0x1002
        PUSH dword ptr [g_10075714]
        CALL dword ptr [g_10075718]
        TEST EAX,EAX
        JZ L_ff41
        ADD ESI,0x80
        PUSH 0xa
        PUSH ESI
        PUSH EDI
        CALL FUN_100439cd
        ADD ESP,0xc
L_ff3c:
        PUSH 0x1
        POP EAX
        JMP L_ff43
L_ff41:
        XOR EAX,EAX
L_ff43:
        POP EDI
        POP ESI
        POP EBX
        RET
    }
}
