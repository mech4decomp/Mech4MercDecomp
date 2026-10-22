/*
 * FUN_006CE450 — save/restore DAT_0082f31c around calls, returns result.
 *
 * Saves DAT_0082f31c, calls FUN_006CE300, then FUN_006CE280.
 * If FUN_006CE280 returns non-zero, captures DAT_0082f31c.
 * Calls FUN_006CE3B0, restores DAT_0082f31c, returns captured value.
 *
 * __cdecl, no stack params.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

void __stdcall FUN_006ce300(void);
int __stdcall FUN_006ce280(void);
void __stdcall FUN_006ce3b0(void);

__declspec(naked) int __stdcall func_006ce450(void)
{
    __asm {
        push    esi
        push    edi
        _emit 0x8B
        _emit 0x3D
        _emit 0x1C
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        call    FUN_006ce300
        xor     esi, esi
        call    FUN_006ce280
        test    eax, eax
        jz      L_skip
        _emit 0x8B
        _emit 0x35
        _emit 0x1C
        _emit 0xF3
        _emit 0x82
        _emit 0x00
    L_skip:
        call    FUN_006ce3b0
        _emit 0x89
        _emit 0x3D
        _emit 0x1C
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    }
}
