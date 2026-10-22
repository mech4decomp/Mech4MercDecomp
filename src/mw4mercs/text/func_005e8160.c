// func_005e8160 - thiscall: return field at [this+0x2fc]

#include "mw4/common.h"

__declspec(naked) void __stdcall func_005e8160(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x2fc]
        ret
    }
}
