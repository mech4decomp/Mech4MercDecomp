/*
 * FUN_5e031b76 (516 B) - locale enumeration callback (EnumSystemLocalesA).
 * Queries locale info via an IAT function pointer, sets a set of global
 * flags/mode values based on string matches.
 *
 * __stdcall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_5e77aae8;   /* DAT_5e77aae8 (string) */
extern char *g_5e77aaec;   /* DAT_5e77aaec (string) */
extern int   g_5e77aae4;   /* DAT_5e77aae4 */
extern int   g_5e77aae0;   /* DAT_5e77aae0 */
extern int   g_5e77aadc;   /* DAT_5e77aadc */
extern int   g_5e77aad8;   /* DAT_5e77aad8 */
extern int   g_5e77aaf0;   /* DAT_5e77aaf0 */
extern char  g_5e77aaf1;   /* DAT_5e77aaf1 (byte) */
extern int   g_5e77aaf4;   /* DAT_5e77aaf4 */
extern int (*g_5e77aaf8)(void);  /* IAT: locale info fn */
extern int __cdecl FUN_5e032167(void);
extern int __cdecl FUN_5e033510(void);
extern int __cdecl FUN_5e0335e0(void);
extern int __cdecl FUN_5e02e6b0(void);  /* _strlen */
extern int __cdecl FUN_5e031fca(void);
extern int __cdecl FUN_5e031fe9(void);

__declspec(naked) void FUN_5e031b76(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x78
        push    ebx
        push    esi
        push    edi
        push    dword ptr [ebp+8]
        call    FUN_5e032167
        pop     ecx
        mov     esi, eax
        lea     eax, [ebp-0x78]
        push    0x78
        push    eax
        mov     eax, dword ptr [g_5e77aadc]
        neg     eax
        sbb     eax, eax
        and     ax, 0xf005
        add     eax, 0x1002
        push    eax
        push    esi
        call    dword ptr [g_5e77aaf8]
        test    eax, eax
        jz      L_cc5
        lea     eax, [ebp-0x78]
        push    eax
        push    dword ptr [g_5e77aaec]
        call    FUN_5e033510
        pop     ecx
        mov     ebx, 0xfffff002
        test    eax, eax
        pop     ecx
        mov     edi, 0x1001
        jnz     L_c91
        lea     eax, [ebp-0x78]
        push    0x78
        push    eax
        mov     eax, dword ptr [g_5e77aae4]
        neg     eax
        sbb     eax, eax
        and     eax, ebx
        add     eax, edi
        push    eax
        push    esi
        call    dword ptr [g_5e77aaf8]
        test    eax, eax
        jz      L_cc5
        lea     eax, [ebp-0x78]
        push    eax
        push    dword ptr [g_5e77aae8]
        call    FUN_5e033510
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_c24
        or      word ptr [g_5e77aaf0], 0x304
        mov     dword ptr [g_5e77aaf4], esi
    L_c1c:
        mov     dword ptr [g_5e77aad8], esi
        jmp     L_c91
    L_c24:
        test    byte ptr [g_5e77aaf0], 2
        jnz     L_c91
        mov     eax, dword ptr [g_5e77aae0]
        test    eax, eax
        jz      L_c70
        push    eax
        lea     eax, [ebp-0x78]
        push    eax
        push    dword ptr [g_5e77aae8]
        call    FUN_5e0335e0
        add     esp, 0xc
        test    eax, eax
        jnz     L_c70
        push    dword ptr [g_5e77aae8]
        or      dword ptr [g_5e77aaf0], 2
        mov     dword ptr [g_5e77aaf4], esi
        call    FUN_5e02e6b0
        cmp     eax, dword ptr [g_5e77aae0]
        pop     ecx
        jnz     L_c91
        jmp     L_c1c
    L_c70:
        test    byte ptr [g_5e77aaf0], 1
        jnz     L_c91
        push    esi
        call    FUN_5e031fca
        test    eax, eax
        pop     ecx
        jz      L_c91
        or      dword ptr [g_5e77aaf0], 1
        mov     dword ptr [g_5e77aaf4], esi
    L_c91:
        mov     ecx, dword ptr [g_5e77aaf0]
        mov     eax, 0x300
        and     ecx, eax
        cmp     ecx, eax
        jz      L_d66
        lea     eax, [ebp-0x78]
        push    0x78
        push    eax
        mov     eax, dword ptr [g_5e77aae4]
        neg     eax
        sbb     eax, eax
        and     eax, ebx
        add     eax, edi
        push    eax
        push    esi
        call    dword ptr [g_5e77aaf8]
        test    eax, eax
        jnz     L_cd4
    L_cc5:
        and     dword ptr [g_5e77aaf0], 0
        push    1
        pop     eax
        jmp     L_d73
    L_cd4:
        lea     eax, [ebp-0x78]
        push    eax
        push    dword ptr [g_5e77aae8]
        call    FUN_5e033510
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_d1a
        or      byte ptr [g_5e77aaf1], 2
        xor     edi, edi
        cmp     dword ptr [g_5e77aae4], edi
        jnz     L_d51
        cmp     dword ptr [g_5e77aae0], edi
        jz      L_d51
        push    dword ptr [g_5e77aae8]
        call    FUN_5e02e6b0
        cmp     eax, dword ptr [g_5e77aae0]
        pop     ecx
        jnz     L_d51
        push    1
        jmp     L_d45
    L_d1a:
        xor     edi, edi
        cmp     dword ptr [g_5e77aae4], edi
        jnz     L_d66
        mov     eax, dword ptr [g_5e77aae0]
        cmp     eax, edi
        jz      L_d66
        push    eax
        lea     eax, [ebp-0x78]
        push    eax
        push    dword ptr [g_5e77aae8]
        call    FUN_5e0335e0
        add     esp, 0xc
        test    eax, eax
        jnz     L_d66
        push    edi
    L_d45:
        push    esi
        call    FUN_5e031fe9
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_d66
    L_d51:
        or      byte ptr [g_5e77aaf1], 1
        cmp     dword ptr [g_5e77aad8], edi
        jnz     L_d66
        mov     dword ptr [g_5e77aad8], esi
    L_d66:
        mov     eax, dword ptr [g_5e77aaf0]
        not     eax
        shr     eax, 2
        and     eax, 1
    L_d73:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret     4
    }
}
