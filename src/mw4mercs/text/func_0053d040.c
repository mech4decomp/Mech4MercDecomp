#include "mw4/common.h"

// 0x0053D040 - 27 bytes
// __thiscall - computes index = arg1 * 1031, sets byte at this + index*8 + 0x3544 = 0
__declspec(naked) void __fastcall func_0053d040(void)
{
    
__asm {
mov  eax, [esp+4]
        mov  edx, eax
        shl  edx, 7
        add  edx, eax
        shl  edx, 3
        sub  edx, eax
        mov  byte ptr [ecx+edx*8+0x3544], 0
        ret  8
    }


}
