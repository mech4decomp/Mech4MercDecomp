// func_005e8190 - stdcall(2 args): if (arg1) FUN_004084e0(arg1)

#include "mw4/common.h"

extern void __cdecl FUN_004084e0(int);

__declspec(naked) void __stdcall func_005e8190(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_004084e0
        pop     ecx
    L1:
        ret     0x8
    }
}
