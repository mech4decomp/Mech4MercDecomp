/*
 * FUN_006C8670 — getter: returns *(param1 + 0x04).
 *
 * __cdecl, RET 0x4.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) int __stdcall func_006c8670(int obj)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 4]
        ret     4
    }
}
