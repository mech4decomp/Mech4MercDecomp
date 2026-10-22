/*
 * FUN_006C5A30 — token length calculator using char-class table at 0x82EBF8.
 *
 * Reads from global pointer at 0x0082F328, skips past the first char,
 * then counts consecutive token chars (non-zero in lookup table).
 * Returns the total length (including first char).
 *
 * __cdecl, no stack params.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) int __stdcall func_006c5a30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0x28
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        xor     edx, edx
        mov     dl, byte ptr [ecx + 1]
        lea     eax, [ecx + 1]
        push    ebx
        mov     bl, byte ptr [edx + 0x82ebf8]
        test    bl, bl
        jz      L_done
    L_loop:
        xor     edx, edx
        mov     dl, byte ptr [eax + 1]
        inc     eax
        mov     bl, byte ptr [edx + 0x82ebf8]
        test    bl, bl
        jnz     L_loop
    L_done:
        sub     eax, ecx
        pop     ebx
        ret
    }
}
