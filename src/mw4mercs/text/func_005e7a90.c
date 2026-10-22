// func_005e7a90 - thiscall: set byte at [this+0x41c] to 0 (RET 0x4)

#include "mw4/common.h"

__declspec(naked) void __stdcall func_005e7a90(void)
{
    __asm {
        mov     byte ptr [ecx + 0x41c], 0
        ret     4
    }
}
