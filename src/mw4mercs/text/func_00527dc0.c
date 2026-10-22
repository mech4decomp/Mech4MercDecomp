#include "mw4/common.h"

// 0x00527DC0 - 26 bytes
// __stdcall - getter from global struct at 0x007D5230, offset 0x44
__declspec(naked) void __stdcall func_00527dc0(void)
{
    

extern int DAT_007dd230;
__asm {
mov  eax, [esp+4]
        mov  ecx, [eax+4]
        // mov edx, dword ptr [0x007D5230]
        mov edx, dword ptr [DAT_007dd230]
        mov  eax, [edx+0x44]
        mov  [ecx], eax
        mov  eax, 1
        ret  8
    }


}
