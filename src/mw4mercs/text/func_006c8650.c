/*
 * FUN_006C8650 — wrapper: calls FUN_006C8EE0 with ECX = param1.
 *
 * __cdecl, RET 0x4.
 *   [ESP+4] = param1 (this for callee)
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* FUN_006C8EE0 — __fastcall (ECX = param1), conditional update. */
extern void __fastcall texture_cond_update(void);

__declspec(naked) void __stdcall func_006c8650(int param1)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        call    texture_cond_update
        ret     4
    }
}
