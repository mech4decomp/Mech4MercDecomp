/*
 * FUN_006C07C0 — tokenizer: reads a token from a global string buffer.
 *
 * Advances the global pointer at 0x0082F328 past the current token,
 * skipping any trailing space. Returns the token length.
 *
 * Uses a character-class lookup table at 0x0082EBF8 (256 bytes).
 * A byte at [char + 0x82EBF8] is non-zero for token characters,
 * zero for delimiters.
 *
 * __cdecl, no stack params.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) int __stdcall func_006c07c0(void)
{
    __asm {
        ; mov ecx, dword ptr [0x0082f328]
        _emit 0x8B
        _emit 0x0D
        _emit 0x28
        _emit 0xF3
        _emit 0x82
        _emit 0x00

        inc     ecx
        xor     edx, edx
        mov     dl, byte ptr [ecx]
        push    ebx

        ; mov dword ptr [0x0082f328], ecx
        _emit 0x89
        _emit 0x0D
        _emit 0x28
        _emit 0xF3
        _emit 0x82
        _emit 0x00

        mov     eax, 1
        mov     bl, byte ptr [edx + 0x82ebf8]
        test    bl, bl
        jz      L_skip_delim

    L_token_loop:
        inc     ecx
        xor     edx, edx
        mov     dl, byte ptr [ecx]
        inc     eax
        mov     bl, byte ptr [edx + 0x82ebf8]
        test    bl, bl
        jnz     L_token_loop

        ; mov dword ptr [0x0082f328], ecx
        _emit 0x89
        _emit 0x0D
        _emit 0x28
        _emit 0xF3
        _emit 0x82
        _emit 0x00

    L_skip_delim:
        cmp     byte ptr [ecx], 0x20
        pop     ebx
        jnz     L_done
        inc     ecx

        ; mov dword ptr [0x0082f328], ecx
        _emit 0x89
        _emit 0x0D
        _emit 0x28
        _emit 0xF3
        _emit 0x82
        _emit 0x00

    L_done:
        ret
    }
}
