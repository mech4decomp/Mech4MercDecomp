/*
 * FUN_004ADCDC (100 B) — __stdcall, 1 arg (ret 4), ecx=this. Jump-table
 * dispatch on [ecx] (0..0xb) returning a pointer into the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern unsigned long g_4add40[];

__declspec(naked) void FUN_004ADCDC(void)
{
    __asm {
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [ecx]
        cmp     eax, 0xb
        ja      l_default
        jmp     dword ptr [eax*4 + g_4add40]
    l_0:
        mov     edx, dword ptr [esp + 4]
        xor     eax, eax
        test    edx, edx
        setne   al
        dec     eax
        and     eax, ecx
        ret     4
    l_1:
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jne     l_1b
        lea     eax, [ecx + 4]
        ret     4
    l_1b:
        lea     eax, [ecx + 0x10]
        ret     4
    l_2:
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jne     l_2b
        lea     eax, [ecx + 4]
        ret     4
    l_2b:
        lea     eax, [ecx + 0xc]
        ret     4
    l_3:
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jne     l_3b
        lea     eax, [ecx + 4]
        ret     4
    l_3b:
        lea     eax, [ecx + 0x18]
        ret     4
    l_default:
        xor     eax, eax
        ret     4
    }
}
