/* FUN_0055fd10 — FPU: store float arg and its negation to struct fields */
#include "mw4/common.h"

__declspec(naked) void func_0055fd10(void)
{
    
__asm {
        fld     dword ptr [esp+4]
        mov     eax, [esp+4]
        fcos
        mov     [ecx+0x1C], eax
        fstp    dword ptr [ecx+0x20]
        fld     dword ptr [esp+4]
        fsin
        fstp    dword ptr [ecx+0x24]
        ret     4
    }


}
