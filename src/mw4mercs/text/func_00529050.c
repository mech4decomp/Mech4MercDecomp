// FUN_00529050 (70 bytes)
#include <windows.h>

extern int   DAT_007d2d30;   /* 0x007D2D30 — global flag pointer */
extern float DAT_007b220c;   /* 0x007B220C — threshold constant */

__declspec(naked) void func_00529050(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007d2d30]
        fld     dword ptr [eax + 0x30]
        fsub    dword ptr [eax + 0x34]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     l_ret0
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 4]
        mov     dword ptr [ecx], 1
        mov     eax, 1
        ret     8
    l_ret0:
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [edx + 4]
        mov     dword ptr [eax], 0
        mov     eax, 1
        ret     8
    }
}
