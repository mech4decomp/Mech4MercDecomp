/* func_004bc290.c — MLR ElementRenderer LOD registration (__cdecl) */
#include <stddef.h>

extern int g_7da9e8;
extern int g_7daac0;
extern int g_7daad4;
extern int g_7daac4;
extern int g_7daac8;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0070f090(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411d60(void);

__declspec(naked) void func_004bc290(void)
{
    __asm {
        mov eax, dword ptr [g_7da9e8]
        push esi
        push eax
        push 0x0
        push 0x771334
        call FUN_006f4710
        push 0x18
        mov dword ptr [g_7daac0], eax
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz L_c2df
        mov ecx, dword ptr [g_7daad4]
        push ecx
        push 0x771318
        push 0x86
        mov ecx, esi
        call FUN_004151c0
        mov dword ptr [esi+0x14], 0x4bc6d0
        mov dword ptr [g_7daac4], esi
        jmp L_c2e9
L_c2df:
        mov dword ptr [g_7daac4], 0x0
L_c2e9:
        push 0x0
        push 0x0
        push 0x4bc480
        push 0x4bc470
        push 0x7712f0
        call FUN_0070f090
        push 0x0
        push 0x0
        push 0x4bc3e0
        push 0x4bc380
        push 0x7712c4
        call FUN_0070f090
        push 0x0
        push 0x0
        push 0x4bc410
        push 0x4bc3a0
        push 0x771298
        call FUN_0070f090
        push 0x0
        push 0x0
        push 0x4bc440
        push 0x4bc3c0
        push 0x77126c
        call FUN_0070f090
        mov ecx, dword ptr [esp+0x8]
        test ecx, ecx
        pop esi
        jz L_c373
        push 0x76d9ec
        call FUN_0040ecc0
        test eax, eax
        jz L_c373
        push 0x0
        push offset g_7daac8
        push 0x771334
        mov ecx, eax
        call FUN_00411d60
L_c373:
        ret
    }
}
