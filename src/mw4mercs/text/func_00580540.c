/* Auto-generated inline asm for FUN_00580540 (0x00580540, 24 bytes) */

#include "mw4/common.h"

__declspec(naked) void FUN_00580540(void)
{
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov dl, byte ptr [edx]
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax], ecx
        mov byte ptr [eax + 0x8], dl
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        ret 0x4
    }
}
