// func_005e7b10 - thiscall: set vtable, tail-jump to FUN_005f89d0

#include "mw4/common.h"

extern void __cdecl FUN_005f89d0(void);

__declspec(naked) void __stdcall func_005e7b10(void)
{
    __asm {
        mov     dword ptr [ecx], 0x7894ac
        jmp     FUN_005f89d0
    }
}
