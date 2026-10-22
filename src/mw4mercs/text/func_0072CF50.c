/*
 * FUN_0072CF50 (100 B) — ORs an alpha byte (shifted to 0xff000000) into a
 * set of color/state globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern unsigned long g_881a58;
extern unsigned long g_8825ac;
extern unsigned long g_882598;
extern unsigned long g_88259c;
extern unsigned long g_882568;
extern unsigned long g_8825a0;
extern unsigned long g_88256c;
extern unsigned long g_8825a4;
extern unsigned long g_882570;
extern unsigned long g_8825a8;
extern unsigned long g_882574;
extern unsigned long g_882578;

__declspec(naked) void FUN_0072CF50(void)
{
    __asm {
        cmp     dword ptr [g_881a58], 2
        jne     l_1
        mov     eax, 0xff000000
        jmp     l_2
    l_1:
        mov     eax, dword ptr [g_8825ac]
        and     eax, 0xff
        shl     eax, 0x18
    l_2:
        mov     ecx, dword ptr [g_882598]
        mov     edx, dword ptr [g_88259c]
        or      ecx, eax
        mov     dword ptr [g_882568], ecx
        mov     ecx, dword ptr [g_8825a0]
        or      edx, eax
        or      ecx, eax
        mov     dword ptr [g_88256c], edx
        mov     edx, dword ptr [g_8825a4]
        mov     dword ptr [g_882570], ecx
        mov     ecx, dword ptr [g_8825a8]
        or      edx, eax
        or      ecx, eax
        mov     dword ptr [g_882574], edx
        mov     dword ptr [g_882578], ecx
        ret
    }
}
