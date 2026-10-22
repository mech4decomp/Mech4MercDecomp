/* FUN_00547c40 — null-check wrapper, calls FUN_005484DF if arg non-null */
#include "mw4/common.h"

__declspec(naked) void func_00547c40(void)
{
    

extern void __cdecl FUN_1004084dc(void);
__asm {
mov  eax, [esp+4]
        test eax, eax
        jz   skip
        push eax
        call FUN_1004084dc
        pop  ecx
skip:
        ret
    }


}
