/* FUN_005a82d0 - 0x005a82d0, size 148 B. __thiscall constructor, RET 0x10
 * (4 args). Sets vtable 0x784f00, initializes sub-object, queries version,
 * calls a virtual method, and stores a double from FUN_00707e70. */
#include <windows.h>

extern int g_7f2084;        /* 0x007f2084 */
extern void __cdecl FUN_004d9940(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00416c80(void);
extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void* func_005a82d0(void)
{
    __asm {
        sub esp, 0x1c
        mov eax, dword ptr [esp+0x2c]
        mov edx, dword ptr [esp+0x24]
        push esi
        push eax
        mov eax, dword ptr [esp+0x28]
        mov esi, ecx
        mov ecx, dword ptr [esp+0x30]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call FUN_004d9940
        mov ecx, dword ptr [g_7f2084]
        push ecx
        lea ecx, [esp+0x10]
        mov dword ptr [esi], 0x784f00
        call FUN_00416bc0
        lea ecx, [esp+0xc]
        mov dword ptr [esp+0xc], 0x784ec0
        call FUN_00415cc0
        cmp eax, 0x5
        jbe L5a8336
        lea ecx, [esp+0xc]
        call FUN_00416c80
        lea ecx, [esp+0xc]
        call FUN_00416d00
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx+0x18]
L5a8336:
        push 0x0
        call FUN_00707e70
        fstp qword ptr [esp+4]
        mov ecx, dword ptr [g_7f2084]
        lea eax, [esp+4]
        push eax
        push esi
        call FUN_00416a90
        lea ecx, [esp+0xc]
        call FUN_00416c60
        mov eax, esi
        pop esi
        add esp, 0x1c
        ret 0x10
    }
}
