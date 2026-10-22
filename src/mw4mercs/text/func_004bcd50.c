/* func_004bcd50.c — MLR ElementRenderer SwitchElement teardown (__cdecl) */
#include <stddef.h>

extern int g_7daad4;
extern int g_7daad0;

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void func_004bcd50(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_7daad4]
        test esi, esi
        jz L_bcd6b
        mov ecx, esi
        call FUN_00415200
        push esi
        call FUN_004084e0
        add esp, 0x4
L_bcd6b:
        mov eax, dword ptr [g_7daad0]
        push 0x1
        push eax
        mov dword ptr [g_7daad4], 0x0
        call FUN_006f4850
        mov dword ptr [g_7daad0], 0x0
        pop esi
        ret
    }
}
