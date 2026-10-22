#include "mw4/common.h"

// 0x005278E0 - 28 bytes
// __stdcall - getter from global struct at 0x007D5230, byte offset 0x14
__declspec(naked) void __stdcall func_005278e0(void)
{
    

extern int DAT_007dd230;
__asm {
// mov ecx, dword ptr [0x007D5230]
        mov ecx, dword ptr [DAT_007dd230]
        mov  edx, [esp+4]
        xor  eax, eax
        mov  al, [ecx+0x14]
        mov  ecx, [edx+4]
        mov  [ecx], eax
        mov  eax, 1
        ret  8
    }


}
