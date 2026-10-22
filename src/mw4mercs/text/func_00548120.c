/* FUN_00548120 — copy pointer from [arg2] to [arg1] if arg1 non-null */
#include "mw4/common.h"

__declspec(naked) void func_00548120(void)
{
    __asm {
        mov  eax, [esp+4]
        test eax, eax
        jz   skip
        mov  ecx, [esp+8]
        mov  edx, [ecx]
        mov  [eax], edx
skip:
        ret
    }
}
