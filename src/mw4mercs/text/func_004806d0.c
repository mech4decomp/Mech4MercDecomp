/*
 * FUN_004806D0 (49 B) — Zero-initialize object fields.
 *
 * __fastcall (ECX = this). Zeroes 8 dwords at this, then
 * zeroes 2 pairs of dwords at this+0x20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_004806d0(void *param1)
{
    __asm {
        mov     eax, ecx
        xor     edx, edx
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax + 0x0c], edx
        push    esi
        mov     dword ptr [eax + 0x10], edx
        mov     dword ptr [eax + 0x14], edx
        mov     dword ptr [eax + 0x18], edx
        mov     dword ptr [eax + 0x1c], edx
        lea     ecx, [eax + 0x20]
        mov     esi, 2
    l_loop:
        mov     dword ptr [ecx], edx
        mov     dword ptr [ecx + 4], edx
        add     ecx, 8
        dec     esi
        jnz     l_loop
        pop     esi
        ret
    }
}
