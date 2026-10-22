/* FUN_0055e3f0 (36 B) — Constructor/destructor, sets vtable to 0x0077CABC */
#include "mw4/common.h"

__declspec(naked) void func_0055e3f0(void)
{
    

extern void __cdecl FUN_10050094c(void);
extern void __cdecl FUN_1004084cf(void);
__asm {
push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x0077CABC
        call FUN_10050094c
        test    byte ptr [esp+8], 1
        jz      skip
        push    esi
        call FUN_1004084cf
        add     esp, 4
skip:
        mov     eax, esi
        pop     esi
        ret     4
    }


}
