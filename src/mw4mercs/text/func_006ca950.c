/*
 * FUN_006CA950 — clear the texture cache head pointer.
 *
 * __cdecl (no params).
 * Uses MOV [mem],imm32 (not AND [mem],0) to match reference encoding.
 *
 * CFLAGS: /O1 (pinned)
 * Match: TBD
 */

#include <mw4/common.h>

extern void *g_cache_head;   /* 0x0083A258 */

__declspec(naked) void texture_cache_clear(void)
{
    __asm {
        mov     dword ptr [g_cache_head], 0
        ret
    }
}
