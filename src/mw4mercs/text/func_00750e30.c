/*
 * FUN_00750E30 (325 B) — Builds a format-string in global buffer
 * DAT_008b99d0 by appending capability tags ("1BIT ", "2BIT ", ...)
 * selected by flag bits in param_1.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8b99d0;                  /* DAT_008b99d0 string buffer */
extern char g_7ad208[];                /* "1BIT " */
extern char g_7ad200[];                /* "2BIT " */
extern char g_7ad1f8[];                /* "4BIT " */
extern char g_7ad1e8[];                /* "8BITENTRIES " */
extern char g_7ad1e0[];                /* "8BIT " */
extern char g_7ad1d4[];                /* "ALLOW256 " */

__declspec(naked) char *__stdcall FUN_00750E30(unsigned int param_1)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        test    dh, 0x1
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8b99d0], 0x0
        jz      L_e70
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ad208
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b99d0
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_e70:
        test    dh, 0x2
        jz      L_ea2
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ad200
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b99d0
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_ea2:
        test    dl, 0x1
        jz      L_ed4
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ad1f8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b99d0
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_ed4:
        test    dl, 0x2
        jz      L_f06
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ad1e8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b99d0
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_f06:
        test    dl, 0x4
        jz      L_f38
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ad1e0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b99d0
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_f38:
        test    dl, 0x40
        jz      L_f6a
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ad1d4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b99d0
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
L_f6a:
        pop     edi
        pop     esi
        mov     eax, offset g_8b99d0
        pop     ebx
        ret     0x4
    }
}
