// func_005e8350 - thiscall(1 arg): destructor; calls FUN_005e8450, frees if flag&1

#include "mw4/common.h"

extern void __cdecl FUN_005e8450(void);
extern void __cdecl FUN_004084e0(int);

__declspec(naked) void __stdcall func_005e8350(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005e8450
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
