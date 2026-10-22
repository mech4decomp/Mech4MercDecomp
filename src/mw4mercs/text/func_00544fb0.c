/* FUN_00544fb0 — thiscall: if [this+0x3080] non-null, call it with arg2 */
#include "mw4/common.h"

__declspec(naked) void func_00544fb0(void)
{
    

extern void __cdecl FUN_0061bcc6(void);
__asm {
mov  ecx, [ecx+0x3080]
        test ecx, ecx
        jz   skip
        mov  eax, [esp+8]
        push eax
        call FUN_0061bcc6
skip:
        ret  8
    }


}
