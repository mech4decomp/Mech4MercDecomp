/*
 * FUN_0049A520 (48 B) — __thiscall, RET 0x4.
 * MLR particle/flare subsystem. Copies a 0x40-byte particle record (12 dwords
 * via rep movsd + 4 trailing dwords) from the source to the destination.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

__declspec(naked) void FUN_0049a520(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, ecx
        push    esi
        push    edi
        mov     esi, edx
        mov     ecx, 0xc
        mov     edi, eax
        rep movsd
        mov     ecx, dword ptr [edx + 0x30]
        mov     dword ptr [eax + 0x30], ecx
        mov     ecx, dword ptr [edx + 0x34]
        mov     dword ptr [eax + 0x34], ecx
        mov     ecx, dword ptr [edx + 0x38]
        mov     edx, dword ptr [edx + 0x3c]
        pop     edi
        mov     dword ptr [eax + 0x38], ecx
        mov     dword ptr [eax + 0x3c], edx
        pop     esi
        ret     0x4
    }
}
