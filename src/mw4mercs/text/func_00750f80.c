/*
 * FUN_00750F80 (325 B) — Builds a format-string in global buffer
 * DAT_008b9950 by appending display-mode tags ("ALLOWMODEX ", ...)
 * selected by flag bits in param_1.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8b9950;                  /* DAT_008b9950 string buffer */
extern char g_7ad24c[];                /* "ALLOWMODEX " */
extern char g_7ad23c[];                /* "ALLOWREBOOT " */
extern char g_7ad230[];                /* "EXCLUSIVE " */
extern char g_7ad224[];                /* "FULLSCREEN " */
extern char g_7ac2f0[];                /* "NORMAL " */
extern char g_7ad210[];                /* "NOWINDOWCHANGES " */

__declspec(naked) char *__stdcall FUN_00750F80(unsigned char param_1)
{
    __asm {
        mov     dl, byte ptr [esp + 0x4]
        test    dl, 0x40
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8b9950], 0x0
        jz      L_fc0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ad24c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9950
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_fc0:
        test    dl, 0x2
        jz      L_ff2
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ad23c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9950
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_ff2:
        test    dl, 0x10
        jz      L_1024
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ad230
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9950
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_1024:
        test    dl, 0x1
        jz      L_1056
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ad224
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9950
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_1056:
        test    dl, 0x8
        jz      L_1088
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ac2f0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9950
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_1088:
        test    dl, 0x4
        jz      L_10ba
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ad210
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9950
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
L_10ba:
        pop     edi
        pop     esi
        mov     eax, offset g_8b9950
        pop     ebx
        ret     0x4
    }
}
