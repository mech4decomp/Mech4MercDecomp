/* FUN_00551870 — thiscall: copy 12 bytes (3 dwords) from [arg1] to [this] */
#include "mw4/common.h"

__declspec(naked) void func_00551870(void)
{
    __asm {
        mov  eax, ecx
        mov  ecx, [esp+4]
        mov  edx, [ecx]
        mov  [eax], edx
        mov  edx, [ecx+4]
        mov  ecx, [ecx+8]
        mov  [eax+4], edx
        mov  [eax+8], ecx
        ret  4
    }
}
