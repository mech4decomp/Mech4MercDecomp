/*
 * FUN_006cda10 (276 B) — Line tokenizer: reads a line from a source buffer
 * (DAT_0082f324..[DAT_0082ee84+0x10]), strips comments/whitespace, lowercases
 * identifiers, and writes the token into the DAT_0083f1e8 buffer. Returns
 * &DAT_0083f1e8 on success, 0 when exhausted.
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0082ee84;                       /* source buffer object */
extern char *g_0082f324;                       /* current read position */
extern unsigned int g_0082f334;                /* line counter */
extern void __cdecl FUN_006bfa50(const char *);

__declspec(naked) void FUN_006cda10(void)
{
    __asm {
        mov     eax, dword ptr [g_0082ee84]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 0x10]
        push    esi
        mov     esi, dword ptr [g_0082f324]
        cmp     esi, ebp
        push    edi
        mov     edi, 0x83f1e8
        jae     L_exit0
L_loop:
        inc     dword ptr [g_0082f334]
L_skipws:
        mov     al, byte ptr [esi]
        cmp     al, 0x20
        jz      L_skipws_inc
        cmp     al, 0x9
        jnz     L_after_ws
L_skipws_inc:
        inc     esi
        jmp     L_skipws
L_after_ws:
        cmp     esi, ebp
        jnc     L_after_line
L_after_ws_body:
        mov     al, byte ptr [esi]
        cmp     al, 0xd
        jz      L_after_line
        cmp     al, 0x22
        jnz     L_not_quote
        mov     bl, byte ptr [esi + 0x1]
        mov     byte ptr [edi], al
        inc     edi
        inc     esi
        cmp     bl, al
        jz      L_quote_end
L_quote_loop:
        cmp     esi, ebp
        jnc     L_quote_store
        cmp     bl, 0xd
        jnz     L_quote_store
        push    0x79e5c4
        call    FUN_006bfa50
        add     esp, 0x4
L_quote_store:
        mov     byte ptr [edi], bl
        mov     bl, byte ptr [esi + 0x1]
        inc     edi
        inc     esi
        cmp     bl, 0x22
        jnz     L_quote_loop
L_quote_end:
        mov     cl, byte ptr [esi]
        mov     byte ptr [edi], cl
L_inc_edi_esi:
        inc     edi
L_inc_esi:
        inc     esi
        cmp     esi, ebp
        jc      L_after_ws_body
L_after_line:
        cmp     edi, 0x83f1e8
        jz      L_check_cr
        cmp     byte ptr [edi - 0x1], 0x20
        jnz     L_check_cr
        dec     edi
        mov     byte ptr [edi], 0xd
L_check_cr:
        cmp     esi, ebp
        jnc     L_check_empty
        cmp     byte ptr [esi], 0xd
        jnz     L_check_empty
        inc     esi
        cmp     esi, ebp
        jnc     L_check_empty
        cmp     byte ptr [esi], 0xa
        jnz     L_check_empty
        inc     esi
L_check_empty:
        cmp     edi, 0x83f1e8
        jnz     L_return_token
        cmp     esi, ebp
        jc      L_loop
L_exit0:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret
L_not_quote:
        cmp     al, 0x2f
        jnz     L_not_slash
        mov     dl, byte ptr [esi + 0x1]
        cmp     dl, al
        lea     ecx, [esi + 0x1]
        jnz     L_store_al
        cmp     ecx, ebp
        jnc     L_inc_esi
        mov     eax, ecx
L_comment_loop:
        cmp     byte ptr [eax], 0xd
        jz      L_inc_esi
        inc     esi
        inc     eax
        cmp     eax, ebp
        jc      L_comment_loop
        jmp     L_inc_esi
L_not_slash:
        cmp     al, 0x9
        jz      L_space
        cmp     al, 0x20
        jz      L_space
        cmp     al, 0x41
        jl      L_store_al
        cmp     al, 0x5a
        jg      L_store_al
        add     al, 0x20
L_store_al:
        mov     byte ptr [edi], al
        jmp     L_inc_edi_esi
L_space:
        mov     byte ptr [edi], 0x20
        inc     edi
L_space_loop:
        mov     al, byte ptr [esi + 0x1]
        cmp     al, 0x20
        jz      L_space_inc
        cmp     al, 0x9
        jnz     L_inc_esi
L_space_inc:
        inc     esi
        jmp     L_space_loop
L_return_token:
        mov     byte ptr [edi], 0x0
        pop     edi
        mov     dword ptr [g_0082f324], esi
        pop     esi
        pop     ebp
        mov     eax, 0x83f1e8
        pop     ebx
        ret
    }
}
