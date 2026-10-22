/*
 * 40 bytes — thiscall setter: copies 12 bytes from parameter into object fields.
 * Sets a validity flag at this+0x9B0 to 1.
 * ret 4 (one stack param).
 */

#include <windows.h>

__declspec(naked) void FUN_0058B690(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx + 0x9B4], edx
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [ecx + 0x9B8], edx
        mov     dword ptr [ecx + 0x9BC], eax
        mov     byte ptr [ecx + 0x9B0], 1
        ret     4
    }
}
