/*
 * FUN_006C8660 — getter: returns *(param1 + 0x08).
 *
 * __cdecl, RET 0x4.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) int __stdcall func_006c8660(int obj)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 8]
        ret     4
    }
}
