/* func_004dae60.c - FUN_004dae60 (158 B) - __thiscall, RET 0x8
 * Frees object at this+0x12c (and its inner ptr), rotates this+0x130 into
 * 0x12c, calls FUN_004e2690 if bit9 of this+0x10 set, FUN_004dabc0, stores
 * two args, and calls FUN_004db210 if this+0xc8 flag set.
 */
#include <stddef.h>

extern int g_7dab44;   /* [0x007dab44] */
extern int g_7dab40;   /* [0x007dab40] */
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_004e2690(void);
extern void __cdecl FUN_004dabc0(void);
extern void __cdecl FUN_004db210(void);

__declspec(naked) void func_004dae60(void)
{
    __asm {
        PUSH ESI
        MOV ESI,ECX
        PUSH EDI
        MOV EDI,dword ptr [ESI + 0x12c]
        TEST EDI,EDI
        JZ skip_free
        MOV EAX,dword ptr [EDI]
        TEST EAX,EAX
        JZ free_outer
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP,0x4
free_outer:
        PUSH EDI
        CALL FUN_004084e0
        ADD ESP,0x4
skip_free:
        MOV ECX,dword ptr [ESI + 0x10]
        MOV EAX,dword ptr [ESI + 0x130]
        SHR ECX,0x9
        TEST CL,0x1
        MOV dword ptr [ESI + 0x12c],EAX
        MOV dword ptr [ESI + 0x130],0x0
        JZ skip_2690
        MOV EDX,dword ptr [g_7dab44]
        MOV ECX,dword ptr [g_7dab40]
        MOV EAX,dword ptr [EDX]
        XOR EAX,ECX
        MOV ECX,dword ptr [EAX + 0x1c]
        PUSH ESI
        XOR ECX,0x85739531
        CALL FUN_004e2690
skip_2690:
        MOV ECX,ESI
        CALL FUN_004dabc0
        MOV ECX,dword ptr [ESP + 0xc]
        MOV AL,byte ptr [ESI + 0xc8]
        TEST AL,AL
        MOV EDX,dword ptr [ESP + 0x10]
        MOV dword ptr [ESI + 0xe4],ECX
        MOV dword ptr [ESI + 0xe8],EDX
        JZ done
        MOV ECX,ESI
        MOV byte ptr [ESI + 0xc8],0x0
        CALL FUN_004db210
done:
        POP EDI
        POP ESI
        RET 0x8
    }
}
