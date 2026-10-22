/*
 * FUN_5e031ec4 (134 B) - locale enumeration callback (variant).
 * Queries locale info, sets flags/mode globals.
 *
 * __stdcall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_5e77aaec;   /* DAT_5e77aaec (string) */
extern int   g_5e77aadc;   /* DAT_5e77aadc */
extern int   g_5e77aaf0;   /* DAT_5e77aaf0 */
extern int   g_5e77aaf4;   /* DAT_5e77aaf4 */
extern int   g_5e77aad8;   /* DAT_5e77aad8 */
extern int (*g_5e77aaf8)(void);  /* IAT: locale info fn */
extern int __cdecl FUN_5e032167(void);
extern int __cdecl FUN_5e033510(void);
extern int __cdecl FUN_5e031fca(void);

__declspec(naked) void FUN_5e031ec4(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x78
        push    esi
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
        jnz     L_f05
        and     dword ptr [g_5e77aaf0], eax
        push    1
        pop     eax
        jmp     L_f45
    L_f05:
        lea     eax, [ebp-0x78]
        push    eax
        push    dword ptr [g_5e77aaec]
        call    FUN_5e033510
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_f38
        push    esi
        call    FUN_5e031fca
        test    eax, eax
        pop     ecx
        jz      L_f38
        or      dword ptr [g_5e77aaf0], 4
        mov     dword ptr [g_5e77aaf4], esi
        mov     dword ptr [g_5e77aad8], esi
    L_f38:
        mov     eax, dword ptr [g_5e77aaf0]
        not     eax
        shr     eax, 2
        and     eax, 1
    L_f45:
        pop     esi
        leave
        ret     4
    }
}
