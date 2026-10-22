/* Auto-generated inline asm for FUN_00590310 (0x00590310) */
#include "mw4/common.h"

__declspec(naked) void __fastcall FUN_00590310(void *this)
{
    __asm {
        mov         edx, dword ptr [ecx + 0x5b8]
        xor         eax, eax
        cmp         edx, 1
        setnz       al
        mov         dword ptr [ecx + 0x5b8], eax
        ret
    }
}
