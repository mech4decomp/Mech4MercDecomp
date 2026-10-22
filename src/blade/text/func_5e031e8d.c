/*
 * FUN_5e031e8d (55 B) - locale setup (variant).
 * Computes (strlen(s)==3) flag, calls EnumSystemLocalesA.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_5e77aaec;   /* DAT_5e77aaec (string) */
extern int   g_5e77aadc;   /* DAT_5e77aadc */
extern int   g_5e77aaf0;   /* DAT_5e77aaf0 */
extern int (*g_5e0350f0)(void);  /* IAT: EnumSystemLocalesA */
extern int __cdecl FUN_5e02e6b0(void);  /* _strlen */

__declspec(naked) void FUN_5e031e8d(void)
{
    __asm {
        push    dword ptr [g_5e77aaec]
        call    FUN_5e02e6b0
        sub     eax, 3
        pop     ecx
        neg     eax
        sbb     eax, eax
        push    1
        inc     eax
        push    0x5e031ec4
        mov     dword ptr [g_5e77aadc], eax
        call    dword ptr [g_5e0350f0]
        test    byte ptr [g_5e77aaf0], 4
        jnz     L_ec3
        and     dword ptr [g_5e77aaf0], 0
    L_ec3:
        ret
    }
}
