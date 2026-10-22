/*
 * FUN_0051C420 (99 B) — __stdcall, 3 args (ret 0xc). Resolves an object
 * via an obfuscated pointer and returns an indexed field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_00416b60(void);
extern unsigned long g_7dab44;
extern unsigned long g_7dab40;

__declspec(naked) void FUN_0051C420(void)
{
    __asm {
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x44]
        xor     eax, eax
        xor     edx, 0x85739531
        je      l_1
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x34]
        test    esi, esi
        pop     esi
        je      l_1
        mov     eax, dword ptr [ecx + 0x44]
        mov     ecx, dword ptr [ecx + 0x44]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x34]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x34]
        add     eax, 0x58
        push    eax
        add     ecx, 0x18
        call    FUN_00416b60
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x38]
        mov     eax, dword ptr [eax + edx*4]
    l_1:
        ret     0xc
    }
}
