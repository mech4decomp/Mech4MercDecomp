/*
 * FUN_00523E80 (70 B) — __stdcall, 3 args (ret 0xc).
 *
 * Validates an index (0..0x17), then reads a byte from a table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_00523E80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jge     l_ok1
        xor     eax, eax
        ret     0xc

    l_ok1:
        cmp     eax, 0x18
        jl      l_ok2
        xor     eax, eax
        ret     0xc

    l_ok2:
        mov     edx, dword ptr [DAT_007dab44]
        imul    eax, eax, 0x22ac
        mov     ecx, dword ptr [edx]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0xc]
        xor     ecx, ecx
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + eax + 0x205f34]
        mov     eax, ecx
        ret     0xc
    }
}
