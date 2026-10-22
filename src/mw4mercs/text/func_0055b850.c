/* FUN_0055b850 (35 B) — Copy 3 globals into this+0x5BC/0x5C0/0x5C4 */
#include "mw4/common.h"

__declspec(naked) void func_0055b850(void)
{
    

extern int DAT_007b8d88;
extern int DAT_007b8d8c;
extern int DAT_007b8d90;
__asm {
mov eax, dword ptr [DAT_007b8d88]
        mov edx, dword ptr [DAT_007b8d8c]
        mov     [ecx+0x5BC], eax
        mov eax, dword ptr [DAT_007b8d90]
        mov     [ecx+0x5C0], edx
        mov     [ecx+0x5C4], eax
        ret
    }


}
