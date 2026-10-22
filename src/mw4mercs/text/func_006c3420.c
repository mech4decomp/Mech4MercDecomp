/*
 * FUN_006C3420 — save/restore globals around FUN_006C3450 call.
 *
 * Saves DAT_0082f320 and DAT_0082f308, calls FUN_006C3450,
 * then restores the saved values.
 *
 * __cdecl, no stack params.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

int __stdcall FUN_006c3450(void);

__declspec(naked) void __stdcall func_006c3420(void)
{
    __asm {
        push    esi
        _emit 0x8B
        _emit 0x35
        _emit 0x20
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        push    edi
        _emit 0x8B
        _emit 0x3D
        _emit 0x08
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        call    FUN_006c3450
        _emit 0x89
        _emit 0x3D
        _emit 0x08
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        pop     edi
        _emit 0x89
        _emit 0x35
        _emit 0x20
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        pop     esi
        ret
    }
}
