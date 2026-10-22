/* FUN_00548140 (41 B) — Copy dwords from arg1 to arg3, count = (arg2-arg1)/4 */
/* Byte-identical to FUN_00548170 — likely a linker alias */
#include "mw4/common.h"

__declspec(naked) void func_00548140(void)
{
    __asm {
        mov     eax, [esp+8]
        push    esi
        mov     esi, [esp+8]
        sub     eax, esi
        sar     eax, 2
        test    eax, eax
        jle     skip
        mov     edx, [esp+16]
        push    edi
        mov     ecx, eax
        mov     edi, edx
        rep movsd
        pop     edi
        lea     eax, [edx+eax*4]
        pop     esi
        ret
skip:
        mov     eax, [esp+16]
        pop     esi
        ret
    }
}
