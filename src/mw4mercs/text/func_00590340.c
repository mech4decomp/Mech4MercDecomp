/* Auto-generated inline asm for FUN_00590340 (0x00590340) */
#include "mw4/common.h"

__declspec(naked) void __fastcall FUN_00590340(void *this)
{
    __asm {
        mov         eax, dword ptr [ecx + 0x5b8]
        sub         eax, 2
        neg         eax
        sbb         eax, eax
        and         eax, 2
        mov         dword ptr [ecx + 0x5b8], eax
        ret
    }
}
