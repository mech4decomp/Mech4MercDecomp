/*
 * FUN_00414a20 (1 B) — no-op stub: just `ret`.
 *
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

__declspec(naked) void func_00414a20(void)
{
    __asm {
        ret
    }
}
