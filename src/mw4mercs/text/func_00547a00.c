/* FUN_00547a00 — thiscall constructor, sets vtable to 0x00779CDC */
#include "mw4/common.h"

__declspec(naked) void func_00547a00(void)
{
    

extern void __cdecl FUN_100416bbd(void);
__asm {
mov  eax, [esp+4]
        push esi
        mov  esi, ecx
        push eax
        call FUN_100416bbd
        mov  dword ptr [esi], 0x00779CDC
        mov  eax, esi
        pop  esi
        ret  4
    }


}
