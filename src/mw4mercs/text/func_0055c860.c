/* FUN_0055c860 — thiscall: set [this]=arg1, [this+4]=arg2, [this+8]=0 */
#include "mw4/common.h"

__declspec(naked) void func_0055c860(void)
{
    __asm {
        mov  edx, [esp+8]
        mov  eax, ecx
        mov  ecx, [esp+4]
        mov  [eax], ecx
        mov  [eax+4], edx
        mov  dword ptr [eax+8], 0
        ret  8
    }
}
