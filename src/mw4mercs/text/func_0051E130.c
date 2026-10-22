/*
 * FUN_0051E130 (47 B true extent; 98 B block incl. pad + adjacent fn) —
 * __stdcall, 3 args (ret 0xc). Resolves an object and returns a field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_00595b60(void);
extern unsigned long g_7dab44;
extern unsigned long g_7dab40;

__declspec(naked) void FUN_0051E130(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [eax + 0x44]
        xor     edx, 0x85739531
        push    ecx
        mov     ecx, dword ptr [edx + 0x34]
        call    FUN_00595b60
        mov     eax, dword ptr [eax + 0x54]
        ret     0xc
    }
}
