// func_005e8280 - cleanup: destroy global object at 0x007f2574 and null it

#include "mw4/common.h"

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(int);

__declspec(naked) void __stdcall func_005e8280(void)
{
    

extern int DAT_007f2574;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2574]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L1:
        mov dword ptr [DAT_007f2574], 0x0
        pop     esi
        ret
    }


}
