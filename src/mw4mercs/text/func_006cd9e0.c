/*
 * FUN_006CD9E0 — frees two allocations and nullifies the global pointer.
 *   Frees DAT_0082EE84->field_0C via FUN_006F4230.
 *   Frees DAT_0082EE84 via FUN_006F4230.
 *   Sets DAT_0082EE84 = NULL.
 *
 * __cdecl, RET 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* FUN_006F4230 — gos_Free: __stdcall, RET 4. */
extern void __stdcall gos_free(void *ptr);

__declspec(naked) void __cdecl func_006cd9e0(void)
{
    __asm {
        _emit 0xA1
        _emit 0x84
        _emit 0xEE
        _emit 0x82
        _emit 0x00
        mov     ecx, dword ptr [eax + 0xc]
        push    ecx
        call    gos_free
        _emit 0x8B
        _emit 0x15
        _emit 0x84
        _emit 0xEE
        _emit 0x82
        _emit 0x00
        push    edx
        call    gos_free
        _emit 0xC7
        _emit 0x05
        _emit 0x84
        _emit 0xEE
        _emit 0x82
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        ret
    }
}
