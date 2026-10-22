/* Auto-generated inline asm for FUN_00580560 (0x00580560, 14 bytes) */

#include "mw4/common.h"

__declspec(naked) void FUN_00580560(void)
{
    

extern void __cdecl FUN_1004084de(void);
__asm {
mov eax, dword ptr [ecx]
        test eax, eax
        jz label_skip
        push eax
        call FUN_1004084de
        pop ecx
label_skip:
        ret
    }


}
