// func_005e7af0 - thiscall: 1 arg (RET 0x4); calls FUN_005f88e0 and FUN_005e7a90

#include "mw4/common.h"

extern void __cdecl FUN_005f88e0(void);
extern void __cdecl FUN_005e7a90(void);

__declspec(naked) void __stdcall func_005e7af0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_005f88e0
        push    edi
        mov     ecx, esi
        call    FUN_005e7a90
        pop     edi
        pop     esi
        ret     4
    }
}
