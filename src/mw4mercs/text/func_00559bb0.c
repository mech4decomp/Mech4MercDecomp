/* FUN_00559bb0 (34 B) — thiscall, calls method on sub-object at this+0x6C8 */
#include "mw4/common.h"

__declspec(naked) void func_00559bb0(void)
{
    

extern void __cdecl FUN_10041fd7c(void);
extern void __cdecl FUN_10041fd71(void);
extern void __cdecl FUN_1004ebeca(void);
__asm {
push    esi
        lea     esi, [ecx+0x6C8]
        mov     ecx, esi
        call FUN_10041fd7c
        test    eax, eax
        jz      skip
        mov     ecx, esi
        call FUN_10041fd71
        mov     ecx, eax
        call FUN_1004ebeca
skip:
        pop     esi
        ret
    }


}
