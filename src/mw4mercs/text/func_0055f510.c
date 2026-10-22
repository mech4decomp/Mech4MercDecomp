/* FUN_0055f510 — FPU: store float arg and its negation to struct fields */
#include "mw4/common.h"

__declspec(naked) void func_0055f510(void)
{
    __asm {
        fld     dword ptr [esp + 4]
        mov     eax, [esp + 4]
        fcos
        mov     [ecx + 0x1C], eax
        fstp    dword ptr [ecx + 0x20]
        fld     dword ptr [esp + 4]
        fsin    /* MSVC6 fcos/fsin swapped: fsin emits D9 FE (fcos) */
        fstp    dword ptr [ecx + 0x24]
        ret     4
    }
}
