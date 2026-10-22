/* func_004bccf0.c — MLR ElementRenderer SwitchElement registration (__cdecl) */
#include <stddef.h>

extern int g_7da9e8;
extern int g_7daad0;
extern int g_7daadc;
extern int g_7daad4;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void func_004bccf0(void)
{
    __asm {
        mov eax, dword ptr [g_7da9e8]
        push esi
        push eax
        push 0x0
        push 0x7713b0
        call FUN_006f4710
        push 0x18
        mov dword ptr [g_7daad0], eax
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz L_bcd3f
        mov ecx, dword ptr [g_7daadc]
        push ecx
        push 0x771390
        push 0x85
        mov ecx, esi
        call FUN_004151c0
        mov dword ptr [esi+0x14], 0x4bcee0
        mov dword ptr [g_7daad4], esi
        pop esi
        ret
L_bcd3f:
        mov dword ptr [g_7daad4], 0x0
        pop esi
        ret
    }
}
