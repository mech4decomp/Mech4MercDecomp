// func_005e8450 - thiscall: set vtable 0x78960c, tail-jump to FUN_005f89d0

#include "mw4/common.h"

extern void __cdecl FUN_005f89d0(void);

__declspec(naked) void __stdcall func_005e8450(void)
{
    __asm {
        mov     dword ptr [ecx], 0x78960c
        jmp     FUN_005f89d0
    }
}
