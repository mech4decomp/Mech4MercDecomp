/* FUN_00544e30 (37 B) — Set byte at this->field_307C[index*88+0x8D] to 1 */
#include "mw4/common.h"

__declspec(naked) void func_00544e30(void)
{
    
__asm {
mov     ecx, [ecx+0x307C]
        test    ecx, ecx
        jz      skip
        cmp     dword ptr [ecx + 0x1c], 0x2
        jne     skip
        mov     eax, [esp+4]
        lea     edx, [eax+eax*4]
        lea     eax, [eax+edx*2]
        mov     byte ptr [ecx+eax*8+0x8D], 1
skip:
        ret     4
    }


}
