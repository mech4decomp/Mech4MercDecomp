/*
 * FUN_005124B0 (92 B true extent; 96 B block w/ trailing nop pad) —
 * __stdcall, 3 args (ret 0xc). State-machine returning a status code.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern unsigned long g_7dd268;
extern unsigned long g_7dab44;
extern unsigned long g_7dab40;

__declspec(naked) void FUN_005124B0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dd268]
        mov     cl, byte ptr [eax + 0x28]
        test    cl, cl
        je      l_1
        xor     eax, eax
        ret     0xc
    l_1:
        mov     eax, dword ptr [eax + 0x24]
        cmp     eax, 2
        jne     l_2
        mov     eax, 0xc
        ret     0xc
    l_2:
        test    eax, eax
        jne     l_3
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0xc0]
        neg     al
        sbb     eax, eax
        and     eax, 0xffffffde
        add     eax, 0x25
        ret     0xc
    l_3:
        dec     eax
        neg     eax
        sbb     eax, eax
        and     eax, 0xffffffdf
        add     eax, 0x23
        ret     0xc
    }
}
