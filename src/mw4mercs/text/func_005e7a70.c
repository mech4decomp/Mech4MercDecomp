// func_005e7a70 - thiscall: destructor, 1 arg (RET 0x4)
// Calls FUN_005e7b10 (base dtor); if (arg & 1) operator delete.

#include "mw4/common.h"

extern void __cdecl FUN_005e7b10(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall func_005e7a70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005e7b10
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
