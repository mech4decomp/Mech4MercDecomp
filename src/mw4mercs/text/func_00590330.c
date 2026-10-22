/* Auto-generated inline asm for FUN_00590330 (0x00590330) */
#include "mw4/common.h"

__declspec(naked) unsigned char __fastcall FUN_00590330(void *this)
{
    __asm {
        mov         edx, dword ptr [ecx + 0x5b8]
        xor         eax, eax
        cmp         edx, 1
        setz        al
        ret
    }
}
