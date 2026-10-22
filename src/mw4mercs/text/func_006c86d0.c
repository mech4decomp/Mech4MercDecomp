/*
 * FUN_006C86D0 — setter: stores byte param at param1+0x1C.
 *
 * __cdecl, RET 0x8.
 *   [ESP+4] = param1 (object pointer)
 *   [ESP+8] = byte value
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006c86d0(int obj, unsigned char val)
{
    __asm {
        mov     al, byte ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        mov     byte ptr [ecx + 0x1c], al
        ret     8
    }
}
