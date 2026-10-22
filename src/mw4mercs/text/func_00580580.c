/* Auto-generated inline asm for FUN_00580580 (0x00580580, 21 bytes) */

#include "mw4/common.h"

__declspec(naked) void FUN_00580580(void)
{
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dl, byte ptr [ecx]
        mov ecx, dword ptr [esp + 0x8]
        mov byte ptr [eax], dl
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ret 0x8
    }
}
