/*
 * FUN_006CD6F0 — zero-initializes 0x100 dwords at 0x0083EDE8,
 *   then sets DAT_0083F5E8 = 0.
 *
 * __cdecl, RET 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __cdecl func_006cd6f0(void)
{
    __asm {
        push    edi
        xor     eax, eax
        mov     ecx, 0x100
        mov     edi, 0x83ede8
        rep stosd
        _emit 0xA3
        _emit 0xE8
        _emit 0xF5
        _emit 0x83
        _emit 0x00
        pop     edi
        ret
    }
}
