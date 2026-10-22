/*
 * FUN_5e031d7a (86 B) - locale setup (variant of FUN_5e031aef).
 * Computes (strlen(s)==3) flag, sets mode, calls EnumSystemLocalesA.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_5e77aae8;   /* DAT_5e77aae8 (string) */
extern int   g_5e77aae4;   /* DAT_5e77aae4 */
extern int   g_5e77aae0;   /* DAT_5e77aae0 */
extern int   g_5e77aaf0;   /* DAT_5e77aaf0 */
extern int (*g_5e0350f0)(void);  /* IAT: EnumSystemLocalesA */
extern int __cdecl FUN_5e02e6b0(void);  /* _strlen */
extern int __cdecl FUN_5e0321a0(void);

__declspec(naked) void FUN_5e031d7a(void)
{
    __asm {
        push    dword ptr [g_5e77aae8]
        call    FUN_5e02e6b0
        sub     eax, 3
        pop     ecx
        neg     eax
        sbb     eax, eax
        inc     eax
        mov     dword ptr [g_5e77aae4], eax
        jz      L_da1
        mov     dword ptr [g_5e77aae0], 2
        jmp     L_db2
    L_da1:
        push    dword ptr [g_5e77aae8]
        call    FUN_5e0321a0
        pop     ecx
        mov     dword ptr [g_5e77aae0], eax
    L_db2:
        push    1
        push    0x5e031dd0
        call    dword ptr [g_5e0350f0]
        test    byte ptr [g_5e77aaf0], 4
        jnz     L_dcf
        and     dword ptr [g_5e77aaf0], 0
    L_dcf:
        ret
    }
}
