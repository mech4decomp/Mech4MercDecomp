/*
 * FUN_0074d330 (402 B) — DirectPlay session-flag string builder.
 *
 * Builds a space-separated string in the global buffer DAT_008ba5d4 from
 * session flags (param_2). Uses sprintf (IAT) for the timeout prefix and
 * repne scasb / rep movsd / rep movsb for appends.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__cdecl *g_76b420)(void);   /* sprintf IAT */
extern char g_8ba5d4[];
extern char g_7ab83c[];                  /* "Timeout=%d " */
extern char g_7abbb8[];                  /* "AVAILABLE " */
extern char g_7abbb0[];                  /* "ALL " */
extern char g_7ab834[];                  /* "ASYNC " */
extern char g_7abb9c[];                  /* "PASSWORDREQUIRED " */
extern char g_7abb8c[];                  /* "RETURNSTATUS " */
extern char g_7abb80[];                  /* "STOPASYNC " */

__declspec(naked) void __stdcall FUN_0074d330(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        mov     byte ptr [g_8ba5d4], 0x0
        jz      L_d353
        push    eax
        push    offset g_7ab83c
        push    offset g_8ba5d4
        call    dword ptr [g_76b420]
        add     esp, 0xc
L_d353:
        mov     edx, dword ptr [esp + 0x8]
        test    edx, edx
        push    ebx
        push    esi
        push    edi
        jnz     L_d38b
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7abbb8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba5d4
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_d38b:
        test    dl, 0x2
        jz      L_d3bd
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7abbb0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba5d4
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_d3bd:
        test    dl, 0x10
        jz      L_d3ef
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ab834
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba5d4
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_d3ef:
        test    dl, 0x1
        jz      L_d421
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7abbb8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba5d4
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_d421:
        test    dl, 0x40
        jz      L_d453
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7abb9c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba5d4
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_d453:
        test    dl, 0x80
        jz      L_d485
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7abb8c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba5d4
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_d485:
        test    dl, 0x20
        jz      L_d4b7
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7abb80
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba5d4
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
L_d4b7:
        pop     edi
        pop     esi
        mov     eax, offset g_8ba5d4
        pop     ebx
        ret     0x8
    }
}
