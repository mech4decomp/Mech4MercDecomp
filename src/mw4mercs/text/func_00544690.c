/* FUN_00544690 (34 B) — Toggle byte in array at this + index*8248 + 0x3540 */
#include "mw4/common.h"

__declspec(naked) void func_00544690(void)
{
    __asm {
        mov     eax, [esp+4]
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        lea     eax, [ecx+edx*8+0x3540]
        cmp     byte ptr [eax], 0
        setz    cl
        mov     [eax], cl
        ret     4
    }
}
