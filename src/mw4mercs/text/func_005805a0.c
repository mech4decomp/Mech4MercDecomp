/* Auto-generated inline asm for FUN_005805a0 (0x005805A0, 18 bytes) */

#include "mw4/common.h"

__declspec(naked) void __cdecl FUN_005805a0(void)
{
    

extern void __cdecl FUN_1004084dc(void);
__asm {
mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jz label_skip
        push eax
        call FUN_1004084dc
        pop ecx
label_skip:
        ret 0x8
    }


}
