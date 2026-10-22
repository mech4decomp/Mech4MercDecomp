/*
 * FUN_006C86B0 — wrapper: calls FUN_006C9210(param2, param3) with ECX = param1.
 *
 * __cdecl, RET 0xC.
 *   [ESP+4] = param1 (this for callee)
 *   [ESP+8] = param2 (x)
 *   [ESP+C] = param3 (y)
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* FUN_006C9210 — texture_get_pixel: __thiscall (ECX = this), RET 0x8.
 *   [ESP+4] = x
 *   [ESP+8] = y */
extern int __stdcall texture_get_pixel(int x, int y);

__declspec(naked) int __stdcall func_006c86b0(int param1, int x, int y)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0xc]
        call    texture_get_pixel
        ret     0xc
    }
}
