/*
 * FUN_006CB240 — default-path log dispatch handler (mode != 2 and != 4).
 *
 * __thiscall method on the log context object (g_log_ctx).
 * Takes one stack param: pointer to formatted log string buffer.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* ---- external globals ---- */
extern int g_log_w;          /* 0x0082F358 */
extern int g_log_h;          /* 0x0082F35C */
extern int g_log_zero_a;     /* 0x0082F368 */
extern int g_log_zero_b;     /* 0x0082F36C */
extern int g_log_state_8;    /* 0x0082F374 */
extern int g_log_state_c;    /* 0x0082F378 */
extern int g_log_mode;       /* 0x0082F384 */
extern void *g_log_surface;  /* 0x0082F380 */

/* ---- external functions ---- */
extern void __fastcall FUN_006cb9f0(void *edx_unused, void *this, int *params, int x, int y, void *surface);

void __declspec(naked) __fastcall FUN_006cb240(void *edx_unused, LogCtx *this, const char *buf)
{
    __asm {
        /* Prologue */
        sub     esp, 0x24
        push    ebp
        mov     ebp, ecx                    /* this in ebp */
        push    esi
        mov     esi, dword ptr [esp + 0x30] /* buf param */
        push    edi
        or      ecx, 0xffffffff
        xor     edx, edx
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0x14], edx /* i = 0 */
        jz      l_epilogue_early            /* if len == 0, skip */

        push    ebx

l_char_loop:
        /* CL = buf[i] */
        mov     cl, byte ptr [edx + esi]

        /* Check for '\n' */
        cmp     cl, 0x0a
        jnz     l_not_newline
        mov     ecx, dword ptr [g_log_h]
        mov     eax, dword ptr [ebp + 0x2c]
        add     ecx, eax
        mov     dword ptr [g_log_h], ecx
        mov     ecx, dword ptr [g_log_zero_a]
        mov     dword ptr [g_log_w], ecx
        jmp     l_loop_next

l_not_newline:
        /* Check for '\t' */
        cmp     cl, 0x09
        jnz     l_not_tab
        mov     eax, dword ptr [g_log_w]
        mov     esi, dword ptr [ebp + 0x28]
        cdq
        lea     edi, [esi * 4]
        idiv    edi
        inc     eax
        imul    eax, esi
        shl     eax, 2
        mov     dword ptr [g_log_w], eax

l_not_tab:
        /* cVar4 = cl - 0x20 */
        sub     cl, 0x20
        mov     byte ptr [esp + 0x13], cl
        js      l_loop_next                 /* if < 0, skip */
        cmp     cl, 0x60
        jge     l_loop_next                 /* if >= 0x60, skip */

        /* Printable char: compute glyph metrics */
        movsx   ebx, cl                     /* uVar8 = cl */
        mov     eax, ebx
        cdq
        and     edx, 0x1f
        add     eax, edx
        mov     edx, ebx
        sar     eax, 5                      /* row = uVar8 / 32 */
        and     edx, 0x8000001f
        mov     dword ptr [esp + 0x14], ebx /* save uVar8 */
        jns     l_row_ok
        dec     edx
        or      edx, 0xffffffe0
        inc     edx
l_row_ok:                                   /* col = uVar8 % 32 */

        mov     edi, dword ptr [ebp + 0x28] /* char_width */
        mov     esi, dword ptr [ebp + 0x2c] /* line_height */
        mov     ecx, edi
        imul    ecx, edx                    /* local_18 = char_width * col */
        mov     edx, esi
        imul    edx, eax                    /* local_14 = line_height * row */
        mov     dword ptr [esp + 0x20], edx
        mov     dl, byte ptr [ebp + 0x3a]   /* has_width_table */
        test    dl, dl
        mov     dword ptr [esp + 0x1c], ecx /* local_18 */
        mov     dword ptr [esp + 0x24], 0   /* local_10 = 0 */
        jz      l_no_width_table
        movsx   ebx, byte ptr [ebx + ebp + 0x3b] /* width_table[uVar8] */
        jmp     l_got_width
l_no_width_table:
        mov     ebx, edi                    /* use char_width */
l_got_width:
        add     ecx, ebx                    /* local_c = local_18 + width */
        inc     eax
        imul    eax, esi                    /* local_8 = (row+1) * line_height */
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [g_log_mode]
        cmp     eax, 4
        mov     dword ptr [esp + 0x28], ecx /* local_c */
        mov     dword ptr [esp + 0x30], 0   /* local_4 = 0 */
        ja      l_switch_done               /* > 4 -> skip switch */
        jmp     dword ptr [eax * 4 + 0x6CB5E4]

        /* --- case 0 --- */
l_case_0:
        test    dl, dl
        jz      l_case_0_check
        mov     eax, dword ptr [esp + 0x14] /* uVar8 */
        movsx   edi, byte ptr [eax + ebp + 0x3b]
l_case_0_check:
        mov     eax, dword ptr [g_log_w]
        mov     ecx, dword ptr [g_log_state_8]
        add     edi, eax
        cmp     edi, ecx
        jg      l_loop_next
        cmp     eax, dword ptr [g_log_zero_a]
        jl      l_loop_next
        mov     eax, dword ptr [g_log_h]
        mov     ecx, dword ptr [g_log_state_c]
        add     esi, eax
        cmp     esi, ecx
        jg      l_loop_next
        cmp     eax, dword ptr [g_log_zero_b]
        jl      l_loop_next
        jmp     l_switch_done

        /* --- case 1 and 2 --- */
l_case_1:
l_case_2:
        test    dl, dl
        jz      l_case_12_check
        mov     ecx, dword ptr [esp + 0x14]
        movsx   edi, byte ptr [ecx + ebp + 0x3b]
l_case_12_check:
        mov     ecx, dword ptr [g_log_w]
        mov     eax, dword ptr [g_log_state_8]
        add     edi, ecx
        cmp     edi, eax
        jle     l_case_12_no_wrap_x
        mov     eax, dword ptr [g_log_h]
        mov     edx, dword ptr [g_log_zero_a]
        add     eax, esi
        mov     dword ptr [g_log_h], eax
        mov     dword ptr [g_log_w], edx
        jmp     l_case_12_check_y
l_case_12_no_wrap_x:
        mov     eax, dword ptr [g_log_zero_a]
        cmp     ecx, eax
        jge     l_case_12_check_y
        mov     dword ptr [g_log_w], eax
l_case_12_check_y:
        mov     ecx, dword ptr [g_log_h]
        mov     eax, dword ptr [g_log_state_c]
        add     esi, ecx
        inc     eax
        cmp     esi, eax
        jle     l_case_12_no_wrap_y
        mov     ecx, dword ptr [g_log_zero_b]
        mov     dword ptr [g_log_h], ecx
        jmp     l_switch_done
l_case_12_no_wrap_y:
        mov     eax, dword ptr [g_log_zero_b]
        cmp     ecx, eax
        jge     l_switch_done
        jmp     l_clamp_y

        /* --- case 3 (scroll) --- */
l_case_3:
        mov     ecx, dword ptr [g_log_w]
        mov     eax, dword ptr [g_log_state_8]
        add     edi, ecx
        cmp     edi, eax
        jle     l_case_3_no_wrap_x
        mov     eax, dword ptr [g_log_h]
        mov     edx, dword ptr [g_log_zero_a]
        add     eax, esi
        mov     dword ptr [g_log_h], eax
        mov     dword ptr [g_log_w], edx
        jmp     l_case_3_check_y
l_case_3_no_wrap_x:
        mov     eax, dword ptr [g_log_zero_a]
        cmp     ecx, eax
        jge     l_case_3_check_y
        mov     dword ptr [g_log_w], eax
l_case_3_check_y:
        mov     eax, dword ptr [g_log_h]
        mov     ebx, dword ptr [g_log_state_c]
        lea     ecx, [esi + eax]
        cmp     ecx, ebx
        jle     l_case_3_no_scroll
        mov     edx, dword ptr [g_log_zero_b]
        lea     eax, [esi + edx]
        cmp     eax, ebx
        jge     l_case_3_scroll_done
l_scroll_loop:
        mov     edx, dword ptr [g_log_surface]
        mov     ecx, dword ptr [edx + 0x0c]
        mov     edx, dword ptr [edx + 0x18]
        mov     esi, ecx
        mov     edi, eax
        imul    esi, eax
        sub     edi, dword ptr [ebp + 0x2c]
        add     esi, edx
        imul    edi, ecx
        add     edi, edx
        mov     edx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        inc     eax
        cmp     eax, ebx
        rep     movsb
        jl      l_scroll_loop
l_case_3_scroll_done:
        mov     al, byte ptr [ebp + 0x3a]
        test    al, al
        jz      l_clear_use_cw
        mov     eax, dword ptr [esp + 0x14]
        movsx   eax, byte ptr [eax + ebp + 0x3b]
        jmp     l_clear_got_width
l_clear_use_cw:
        mov     eax, dword ptr [ebp + 0x28]
l_clear_got_width:
        mov     edx, dword ptr [g_log_h]
        sub     edx, eax
        cmp     edx, ebx
        jge     l_clear_done
l_clear_loop:
        mov     esi, dword ptr [g_log_surface]
        mov     ecx, dword ptr [esi + 0x0c]
        mov     edi, ecx
        imul    edi, edx
        add     edi, dword ptr [esi + 0x18]
        mov     esi, ecx
        shr     ecx, 2
        xor     eax, eax
        rep     stosd
        mov     ecx, esi
        and     ecx, 3
        inc     edx
        cmp     edx, ebx
        rep     stosb
        jl      l_clear_loop
l_clear_done:
        mov     eax, dword ptr [g_log_h]
        sub     eax, dword ptr [ebp + 0x2c]
        mov     dword ptr [g_log_h], eax
l_case_3_no_scroll:
        mov     ecx, dword ptr [g_log_zero_b]
        cmp     eax, ecx
        jge     l_switch_done
        mov     dword ptr [g_log_h], ecx
        jmp     l_switch_done

        /* --- case 4 --- */
l_case_4:
        test    dl, dl
        jz      l_case_4_check
        mov     ecx, dword ptr [esp + 0x14]
        movsx   edi, byte ptr [ecx + ebp + 0x3b]
l_case_4_check:
        mov     ecx, dword ptr [g_log_w]
        mov     eax, dword ptr [g_log_state_8]
        add     edi, ecx
        cmp     edi, eax
        jle     l_case_4_no_wrap_x
        mov     eax, dword ptr [g_log_h]
        mov     edx, dword ptr [g_log_zero_a]
        add     eax, esi
        mov     dword ptr [g_log_h], eax
        mov     dword ptr [g_log_w], edx
        jmp     l_case_4_check_y
l_case_4_no_wrap_x:
        mov     eax, dword ptr [g_log_zero_a]
        cmp     ecx, eax
        jge     l_case_4_check_y
        mov     dword ptr [g_log_w], eax
l_case_4_check_y:
        mov     ecx, dword ptr [g_log_h]
        mov     eax, dword ptr [g_log_state_c]
        add     esi, ecx
        cmp     esi, eax
        mov     eax, dword ptr [g_log_zero_b]
        jg      l_clamp_y
        cmp     ecx, eax
        jge     l_switch_done
l_clamp_y:
        mov     dword ptr [g_log_h], eax

l_switch_done:
        /* Check if char is printable (c != 0) */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      l_advance_x

        /* Call FUN_006CB9F0(this, &params, g_log_w, g_log_h, g_log_surface) */
        mov     ecx, dword ptr [g_log_surface]
        mov     edx, dword ptr [g_log_h]
        mov     eax, dword ptr [g_log_w]
        push    ecx
        push    edx
        push    eax
        lea     ecx, dword ptr [esp + 0x28]
        push    ecx
        mov     ecx, ebp
        call    FUN_006cb9f0

l_advance_x:
        /* Advance X by char width */
        mov     al, byte ptr [ebp + 0x3a]
        test    al, al
        jz      l_advance_no_wt
        mov     edx, dword ptr [esp + 0x14]
        movsx   eax, byte ptr [edx + ebp + 0x3b]
        add     dword ptr [g_log_w], eax
        jmp     l_loop_next
l_advance_no_wt:
        mov     eax, dword ptr [g_log_w]
        mov     ecx, dword ptr [ebp + 0x28]
        add     eax, ecx
        mov     dword ptr [g_log_w], eax

l_loop_next:
        /* i++, check if done */
        mov     edx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x38]
        or      ecx, 0xffffffff
        inc     edx
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        cmp     edx, ecx
        mov     dword ptr [esp + 0x18], edx
        jc      l_char_loop

        pop     ebx

l_epilogue_early:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x24
        ret     4
    }
}
