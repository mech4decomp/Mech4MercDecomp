/*
 * FUN_006CE280 — parse a token from a linked-list token stream.
 *
 * __cdecl, no stack params. Returns pointer to token data or 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) int __stdcall func_006ce280(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0x24
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        xor     eax, eax
        mov     ax, word ptr [ecx]
        cmp     eax, 0xfffe
        _emit 0xA3
        _emit 0x34
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        jl      L_parse
    L_next_block:
        jnz     L_ret0
        mov     ecx, dword ptr [ecx + 4]
        xor     eax, eax
        mov     ax, word ptr [ecx]
        _emit 0x89
        _emit 0x0D
        _emit 0x24
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        cmp     eax, 0xfffe
        _emit 0xA3
        _emit 0x34
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        jge     L_next_block
    L_parse:
        mov     eax, dword ptr [ecx + 4]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0xc]
        push    esi
        lea     esi, [ecx + 0xc]
        _emit 0xA3
        _emit 0x30
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        _emit 0xA3
        _emit 0x2C
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        lea     eax, [ecx + 0xd]
        _emit 0x89
        _emit 0x35
        _emit 0x14
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0x1C
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        lea     edx, [ecx + 8]
        _emit 0x89
        _emit 0x15
        _emit 0x18
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        xor     edx, edx
        mov     dx, word ptr [ecx + 2]
        _emit 0xA3
        _emit 0x28
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        pop     esi
        add     edx, eax
        _emit 0x89
        _emit 0x15
        _emit 0x24
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        ret
    L_ret0:
        xor     eax, eax
        ret
    }
}
