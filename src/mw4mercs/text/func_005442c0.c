// func_005442C0 - bit test helper (test bit at position in 64-bit value)
// __stdcall: int func_005442C0(int bit_pos, const unsigned int* bits)
// Returns 0 if bit_pos < 0x83 or >= 0xC3, otherwise tests the bit in the 64-bit value

#include "mw4/common.h"

__declspec(naked) int __stdcall func_005442C0(int bit_pos, const unsigned int* bits)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        lea     ecx, [eax - 0x83]
        test    ecx, ecx
        jge     L1
        xor     eax, eax
        ret     8
    L1:
        cmp     ecx, 0x40
        jl      L2
        xor     eax, eax
        ret     8
    L2:
        cmp     ecx, 0x20
        jl      L3
        mov     edx, dword ptr [esp + 8]
        sub     ecx, 0x20
        mov     eax, 1
        shl     eax, cl
        mov     ecx, dword ptr [edx + 4]
        add     edx, 4
        and     eax, ecx
        ret     8
    L3:
        mov     edx, dword ptr [esp + 8]
        mov     eax, 1
        shl     eax, cl
        and     eax, dword ptr [edx]
        ret     8
    }
}
