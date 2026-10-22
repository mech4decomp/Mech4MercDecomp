/*
 * FUN_006CBEA0 — string pixel-width calculator.
 *
 * __fastcall method on the log context object (g_log_ctx).
 * Takes one stack param: pointer to string to measure.
 * Returns total pixel width of the string.
 *
 * If has_width_table (offset 0x3A) is set, sums per-char widths
 * from width_table[96] at offset 0x3B for printable chars (0x20..0x7F).
 * Otherwise returns strlen(string) * char_width (offset 0x28).
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

int __declspec(naked) __fastcall texture_string_pixel_width(void *edx_unused, LogCtx *this, const char *str)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xc]     /* str param */
        test    esi, esi
        push    edi
        mov     ebp, ecx                        /* this in ebp */
        jnz     l_not_null
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebp
        ret     4

    l_not_null:
        mov     al, byte ptr [ebp + 0x3a]       /* has_width_table */
        test    al, al
        jz      l_no_width_table

        /* Has width table: iterate chars, sum widths for printable range */
        or      ecx, 0xffffffff
        xor     eax, eax
        push    ebx
        xor     ebx, ebx                        /* total = 0 */
        xor     edx, edx                        /* i = 0 */
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx                             /* ecx = strlen */
        jz      l_done_has_table

    l_char_loop:
        mov     al, byte ptr [edx + esi]        /* al = str[i] */
        cmp     al, 0x20
        jl      l_skip_char                     /* < 0x20: skip */
        movsx   eax, al
        cmp     eax, 0x80
        jge     l_skip_char                     /* >= 0x80: skip */
        movsx   eax, byte ptr [eax + ebp + 0x1b] /* width_table[ch - 0x20] */
        add     ebx, eax                        /* total += width */

    l_skip_char:
        or      ecx, 0xffffffff
        xor     eax, eax
        inc     edx                             /* i++ */
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx                             /* ecx = strlen */
        cmp     edx, ecx
        jc      l_char_loop                     /* while i < strlen */

    l_done_has_table:
        mov     eax, ebx                        /* return total */
        pop     ebx
        pop     edi
        pop     esi
        pop     ebp
        ret     4

    l_no_width_table:
        /* No width table: return strlen * char_width */
        xor     eax, eax
        or      ecx, 0xffffffff
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx                             /* ecx = strlen */
        pop     edi
        mov     eax, ecx
        imul    eax, dword ptr [ebp + 0x28]     /* strlen * char_width */
        pop     esi
        pop     ebp
        ret     4
    }
}
