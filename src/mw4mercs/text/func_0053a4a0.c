#include "mw4/common.h"

// 0x0053A4A0 - 25 bytes
// __thiscall - copies 3 dword fields from arg to this
__declspec(naked) void __fastcall func_0053a4a0(void)
{
    __asm {
        mov  eax, ecx
        mov  ecx, [esp+4]
        mov  edx, [ecx+4]
        mov  [eax+4], edx
        mov  edx, [ecx]
        mov  ecx, [ecx+8]
        mov  [eax], edx
        mov  [eax+8], ecx
        ret  4
    }
}
