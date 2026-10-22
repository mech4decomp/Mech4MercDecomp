// func_005e8170 - cdecl: count nodes in a singly-linked list (next at [node])

#include "mw4/common.h"

__declspec(naked) void __cdecl func_005e8170(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        xor     eax, eax
        test    ecx, ecx
        jz      L1
    L2:
        mov     ecx, dword ptr [ecx]
        inc     eax
        test    ecx, ecx
        jnz     L2
    L1:
        ret
    }
}
