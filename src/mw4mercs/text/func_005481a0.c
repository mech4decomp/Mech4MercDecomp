/* FUN_005481a0 (37 B) — Copy dwords from arg1 to arg3 until arg1 == arg2 */
#include "mw4/common.h"

__declspec(naked) void func_005481a0(void)
{
    
__asm {
mov     ecx, [esp+4]
        mov     edx, [esp+8]
        cmp     ecx, edx
        mov     eax, [esp+12]
        je      done
        push    esi
loop_top:
        test    eax, eax
        je      skip_copy
        mov     esi, [ecx]
        mov     [eax], esi
skip_copy:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, edx
        jne     loop_top
        pop     esi
done:
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }

}
