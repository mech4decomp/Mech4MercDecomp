/* FUN_0055e7d0 — multiply two floats by constants */
#include "mw4/common.h"

extern float DAT_007ddd84;
extern float DAT_007ddd80;

__declspec(naked) void func_0055e7d0(void)
{
    __asm {
        mov  eax, [esp+4]
        fld  dword ptr [DAT_007ddd84]
        fmul dword ptr [eax]
        fstp dword ptr [eax]
        mov  eax, [esp+8]
        fld  dword ptr [DAT_007ddd80]
        fmul dword ptr [eax]
        fstp dword ptr [eax]
        ret
    }
}
