/*
 * FUN_5e031dd0 (189 B) - locale enumeration callback (variant).
 * Queries locale info, sets flags/mode globals.
 *
 * __stdcall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_5e77aae8;   /* DAT_5e77aae8 (string) */
extern int   g_5e77aae4;   /* DAT_5e77aae4 */
extern int   g_5e77aae0;   /* DAT_5e77aae0 */
extern int   g_5e77aaf0;   /* DAT_5e77aaf0 */
extern int   g_5e77aaf4;   /* DAT_5e77aaf4 */
extern int   g_5e77aad8;   /* DAT_5e77aad8 */
extern int (*g_5e77aaf8)(void);  /* IAT: locale info fn */
extern int __cdecl FUN_5e032167(void);
extern int __cdecl FUN_5e033510(void);
extern int __cdecl FUN_5e0335e0(void);
extern int __cdecl FUN_5e031fe9(void);

__declspec(naked) void FUN_5e031dd0(void)
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
        mov     eax, dword ptr [g_5e77aae4]
        neg     eax
        sbb     eax, eax
        and     ax, 0xf002
        add     eax, 0x1001
        push    eax
        push    esi
        call    dword ptr [g_5e77aaf8]
        test    eax, eax
        jnz     L_e11
        and     dword ptr [g_5e77aaf0], eax
        push    1
        pop     eax
        jmp     L_e88
    L_e11:
        lea     eax, [ebp-0x78]
        push    eax
        push    dword ptr [g_5e77aae8]
        call    FUN_5e033510
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_e32
        cmp     dword ptr [g_5e77aae4], eax
        jnz     L_e68
        push    1
        jmp     L_e5c
    L_e32:
        cmp     dword ptr [g_5e77aae4], 0
        jnz     L_e7b
        mov     eax, dword ptr [g_5e77aae0]
        test    eax, eax
        jz      L_e7b
        push    eax
        lea     eax, [ebp-0x78]
        push    eax
        push    dword ptr [g_5e77aae8]
        call    FUN_5e0335e0
        add     esp, 0xc
        test    eax, eax
        jnz     L_e7b
        push    eax
    L_e5c:
        push    esi
        call    FUN_5e031fe9
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_e7b
    L_e68:
        or      dword ptr [g_5e77aaf0], 4
        mov     dword ptr [g_5e77aaf4], esi
        mov     dword ptr [g_5e77aad8], esi
    L_e7b:
        mov     eax, dword ptr [g_5e77aaf0]
        not     eax
        shr     eax, 2
        and     eax, 1
    L_e88:
        pop     esi
        leave
        ret     4
    }
}
