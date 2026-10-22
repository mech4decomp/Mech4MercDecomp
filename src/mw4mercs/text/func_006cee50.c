/*
 * FUN_006CEE50 — calls FUN_0075DBBE with a string pointer.
 *
 * __cdecl, no stack params.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

void __stdcall FUN_0075dbbe(const char *str);

__declspec(naked) void __stdcall func_006cee50(void)
{
    __asm {
        push    0x6cee60
        call    FUN_0075dbbe
        pop     ecx
        ret
    }
}
