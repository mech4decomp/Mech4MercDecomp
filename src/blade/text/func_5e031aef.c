/*
 * FUN_5e031aef (135 B) - locale/string setup.
 * Computes (strlen(s)==3) flags for two strings, sets a mode value,
 * then calls EnumSystemLocalesA with a callback and validates a flag.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_5e77aae8;   /* DAT_5e77aae8 (string) */
extern char *g_5e77aaec;   /* DAT_5e77aaec (string) */
extern int   g_5e77aae4;   /* DAT_5e77aae4 */
extern int   g_5e77aad8;   /* DAT_5e77aad8 */
extern int   g_5e77aadc;   /* DAT_5e77aadc */
extern int   g_5e77aae0;   /* DAT_5e77aae0 */
extern int   g_5e77aaf0;   /* DAT_5e77aaf0 */
extern int (*g_5e0350f0)(void);  /* IAT: EnumSystemLocalesA */
extern int __cdecl FUN_5e02e6b0(void);  /* _strlen */
extern int __cdecl FUN_5e0321a0(void);

__declspec(naked) void FUN_5e031aef(void)
{
    __asm {
        push    dword ptr [g_5e77aae8]
        call    FUN_5e02e6b0
        push    dword ptr [g_5e77aaec]
        sub     eax, 3
        neg     eax
        sbb     eax, eax
        inc     eax
        mov     dword ptr [g_5e77aae4], eax
        call    FUN_5e02e6b0
        sub     eax, 3
        pop     ecx
        neg     eax
        sbb     eax, eax
        and     dword ptr [g_5e77aad8], 0
        inc     eax
        cmp     dword ptr [g_5e77aae4], 0
        pop     ecx
        mov     dword ptr [g_5e77aadc], eax
        jz      L_b3d
        mov     dword ptr [g_5e77aae0], 2
        jmp     L_b4e
    L_b3d:
        push    dword ptr [g_5e77aae8]
        call    FUN_5e0321a0
        pop     ecx
        mov     dword ptr [g_5e77aae0], eax
    L_b4e:
        push    1
        push    0x5e031b76
        call    dword ptr [g_5e0350f0]
        mov     eax, dword ptr [g_5e77aaf0]
        test    ah, 1
        jz      L_b6e
        test    ah, 2
        jz      L_b6e
        test    al, 7
        jnz     L_b75
    L_b6e:
        and     dword ptr [g_5e77aaf0], 0
    L_b75:
        ret
    }
}
