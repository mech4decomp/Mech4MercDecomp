/* func_004bc4a0.c — MLR ElementRenderer LOD teardown (__cdecl) */
#include <stddef.h>

extern int g_7daac8;
extern int g_7daac4;
extern int g_7daac0;

extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411dc0(void);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void func_004bc4a0(void)
{
    __asm {
        mov ecx, dword ptr [esp+0x4]
        test ecx, ecx
        jz L_c4c5
        push 0x76d9ec
        call FUN_0040eda0
        mov ecx, dword ptr [g_7daac8]
        push ecx
        push 0x771334
        mov ecx, eax
        call FUN_00411dc0
L_c4c5:
        push esi
        mov esi, dword ptr [g_7daac4]
        test esi, esi
        jz L_c4e0
        mov ecx, esi
        call FUN_00415200
        push esi
        call FUN_004084e0
        add esp, 0x4
L_c4e0:
        mov edx, dword ptr [g_7daac0]
        push 0x1
        push edx
        mov dword ptr [g_7daac4], 0x0
        call FUN_006f4850
        mov dword ptr [g_7daac0], 0x0
        pop esi
        ret
    }
}
