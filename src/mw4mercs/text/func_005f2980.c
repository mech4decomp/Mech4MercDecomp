/*
 * FUN_005f2980 (24 B) — __thiscall. Initializes a small object (this=ECX):
 *   zeroes fields 0x0/0x4/0x8 and stores a byte from *arg into field 0x8.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

__declspec(naked) void FUN_005f2980(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 8], dl
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        ret     4
    }
}
