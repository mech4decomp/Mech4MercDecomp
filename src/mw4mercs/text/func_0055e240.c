/* FUN_0055e240 — thiscall constructor, sets vtable to 0x00773328 */
#include "mw4/common.h"

__declspec(naked) void func_0055e240(void)
{
    

extern void __cdecl FUN_10041fc80(void);
__asm {
push esi
        mov  esi, ecx
        push 0
        call FUN_10041fc80
        mov  dword ptr [esi], 0x00773328
        mov  eax, esi
        pop  esi
        ret  4
    }


}
