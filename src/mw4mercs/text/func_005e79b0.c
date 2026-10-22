// func_005e79b0 - cdecl: destroy the global building object and null it out
// FUN_00501b40 = destructor (thiscall); FUN_004084e0 = operator delete.

#include "mw4/common.h"

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall func_005e79b0(void)
{
    

extern int DAT_007f2568;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2568]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L1:
        mov dword ptr [DAT_007f2568], 0x0
        pop     esi
        ret
    }


}
