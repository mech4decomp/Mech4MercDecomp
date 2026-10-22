/*
 * FUN_006CF340 — initialize a large structure (0x101C bytes).
 *
 * __fastcall (ECX = this), returns this in EAX.
 *
 * Initializes:
 *   - 0x80 entries of 0x1C-byte structs at this+0x0C (each: 6 dwords zero,
 *     7th dword = 0xFFFFFFFF)
 *   - First 3 dwords (this+0x00..0x08) = 0
 *   - 0x80 dwords at this+0xE0C = 0
 *   - 4 dwords at this+0x100C = 0
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void * __fastcall func_006cf340(void *this_ptr)
{
    __asm {
        push    esi
        mov     edx, ecx
        push    edi
        xor     ecx, ecx
        lea     eax, [edx + 0xc]
        mov     esi, 0x80
        or      edi, 0xffffffff
    L_outer:
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x18], edi
        add     eax, 0x1c
        dec     esi
        jnz     L_outer
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx + 4], ecx
        mov     dword ptr [edx + 8], ecx
        xor     eax, eax
        lea     edi, [edx + 0xe0c]
        mov     ecx, 0x80
        rep stosd
        mov     dword ptr [edx + 0x100c], eax
        mov     dword ptr [edx + 0x1010], eax
        mov     dword ptr [edx + 0x1014], eax
        pop     edi
        mov     dword ptr [edx + 0x1018], eax
        mov     eax, edx
        pop     esi
        ret
    }
}
