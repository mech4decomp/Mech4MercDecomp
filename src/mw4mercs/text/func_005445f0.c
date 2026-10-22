/* FUN_005445f0 (40 B) — Access array at this + index*0x22AC + 0x205D24, virtual call */
#include "mw4/common.h"

__declspec(naked) void func_005445f0(void)
{
    __asm {
        mov     eax, [esp+4]
        imul    eax, eax, 0x22AC
        push    esi
        mov     esi, [eax+ecx+0x205D24]
        mov     edx, [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [edx+0xC]
        mov     dword ptr [esi+8], 0xFFFFFFEC
        mov     eax, esi
        pop     esi
        ret     4
    }
}
