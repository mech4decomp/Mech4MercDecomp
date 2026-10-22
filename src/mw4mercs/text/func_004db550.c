/* func_004db550.c - FUN_004db550 (210 B) - BID file loader
 * Parses a BID file (param_2), reads its length, allocates a buffer into
 * param_1+0x30/0x2c, asserts the length matches, and copies data.
 */
#include <stddef.h>

extern void __cdecl FUN_00412570(void *);
extern void __cdecl FUN_004125e0(void *);
extern void __cdecl FUN_00412740(void *);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_0041de80(void *);
extern void __cdecl FUN_006cee90(void *);
extern void __cdecl FUN_004084d0(void *);
extern void __cdecl FUN_006fab90(void *);
extern void __cdecl FUN_0041e110(void *);
extern void __cdecl FUN_0041dec0(void *);

__declspec(naked) void func_004db550(void)
{
    __asm {
        PUSH EBP
        MOV EBP,ESP
        SUB ESP,0x34
        PUSH EBX
        MOV EBX,dword ptr [EBP + 0xc]
        PUSH ESI
        PUSH EDI
        PUSH EBX
        LEA ECX,[EBP + 0xc]
        CALL FUN_00412570
        MOV EAX,dword ptr [EBP + 0xc]
        PUSH 0x773488
        PUSH EAX
        LEA ECX,[EBP - 0x4]
        CALL FUN_004125e0
        PUSH EAX
        LEA ECX,[EBP + 0xc]
        CALL FUN_00412740
        MOV EAX,dword ptr [EBP - 0x4]
        TEST EAX,EAX
        JZ skip_free1
        MOV CL,byte ptr [EAX - 0x1]
        DEC EAX
        DEC CL
        MOV byte ptr [EAX],CL
        JNZ skip_free1
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP,0x4
skip_free1:
        LEA ECX,[EBP + 0xc]
        CALL FUN_004128e0
        MOV ECX,dword ptr [EBP + 0xc]
        PUSH 0x0
        PUSH ECX
        LEA ECX,[EBP - 0x34]
        CALL FUN_0041de80
        MOV EDI,dword ptr [EBP + 0x8]
        MOV ECX,EDI
        CALL FUN_006cee90
        MOV ESI,EAX
        PUSH ESI
        CALL FUN_004084d0
        MOV EDX,dword ptr [EBP - 0x24]
        MOV ECX,dword ptr [EBP - 0x18]
        MOV dword ptr [EDI + 0x30],EAX
        SUB EDX,dword ptr [EBP - 0x20]
        ADD EDX,ECX
        ADD ESP,0x4
        CMP ESI,EDX
        MOV dword ptr [EDI + 0x2c],ESI
        JZ skip_assert
        PUSH EBX
        PUSH 0x773468
        CALL FUN_006fab90
        ADD ESP,0x8
        TEST EAX,EAX
        JZ skip_assert
        int 3
skip_assert:
        MOV EAX,dword ptr [EDI + 0x30]
        PUSH ESI
        PUSH EAX
        LEA ECX,[EBP - 0x34]
        CALL FUN_0041e110
        LEA ECX,[EBP - 0x34]
        CALL FUN_0041dec0
        MOV EAX,dword ptr [EBP + 0xc]
        TEST EAX,EAX
        POP EDI
        POP ESI
        POP EBX
        JZ skip_free2
        MOV CL,byte ptr [EAX - 0x1]
        DEC EAX
        DEC CL
        MOV byte ptr [EAX],CL
        JNZ skip_free2
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP,0x4
skip_free2:
        MOV ESP,EBP
        POP EBP
        RET
    }
}
