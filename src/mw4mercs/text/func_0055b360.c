/* FUN_0055b360 (45 B) — Call with float constants and global pointer */
#include "mw4/common.h"

__declspec(naked) void func_0055b360(void)
{
    

extern void __cdecl FUN_1004ebcda(void);
extern void __cdecl FUN_1004ebe6e(void);
__asm {
push    0x3F4CCCCD
        push    0x3F000000
        push    0x3F800000
        push    0x3F800000
        push    0x0077DD98
        push    3
        call FUN_1004ebcda
        add     esp, 24
        push    0
        mov     ecx, eax
        call FUN_1004ebe6e
        ret
    }


}
