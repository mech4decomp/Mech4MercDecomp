/* FUN_005a8230 - 0x005a8230, size 66 B. __cdecl cleanup: frees global
 * object (0x7f2080), calls virtual method on 0x7f2084, releases it. */
#include <windows.h>

extern int g_7f2080;        /* 0x007f2080 */
extern int g_7f2084;        /* 0x007f2084 */
extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_005a8230(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_7f2080]
        test esi, esi
        jz L5a824b
        mov ecx, esi
        call FUN_00501b40
        push esi
        call FUN_004084e0
        add esp, 0x4
L5a824b:
        mov ecx, dword ptr [g_7f2084]
        mov eax, dword ptr [ecx]
        mov dword ptr [g_7f2080], 0
        call dword ptr [eax+8]
        mov ecx, dword ptr [g_7f2084]
        test ecx, ecx
        pop esi
        jz L5a8271
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx]
L5a8271:
        ret
    }
}
