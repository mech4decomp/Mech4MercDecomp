/* FUN_00547c20 — thiscall: copy byte from [arg1] to [this], then dword from [arg2] to [this] */
#include "mw4/common.h"

__declspec(naked) void func_00547c20(void)
{
    __asm {
        mov  eax, ecx
        mov  ecx, [esp+4]
        mov  dl, [ecx]
        mov  ecx, [esp+8]
        mov  [eax], dl
        mov  edx, [ecx]
        mov  [eax], edx
        ret  8
    }
}
