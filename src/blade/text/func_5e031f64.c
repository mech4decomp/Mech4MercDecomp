/*
 * FUN_5e031f64 (102 B) - resolve a codepage name ("ACP"/"OCP") to a
 * locale info value and pass it through FUN_5e0336e1.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_5e77aaf4;   /* DAT_5e77aaf4 */
extern int (*g_5e77aaf8)(void);  /* IAT: locale info fn */
extern int __cdecl FUN_5e0317d0(void);  /* _strcmp */
extern void __cdecl FUN_5e0336e1(void);

__declspec(naked) void FUN_5e031f64(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        push    esi
        mov     esi, dword ptr [ebp+8]
        test    esi, esi
        jz      L_fa2
        cmp     byte ptr [esi], 0
        jz      L_fa2
        push    0x5e036d5c
        push    esi
        call    FUN_5e0317d0
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_fa2
        push    0x5e036d58
        push    esi
        call    FUN_5e0317d0
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_fc0
        lea     eax, [ebp-8]
        push    8
        push    eax
        push    0xb
        jmp     L_fad
    L_fa2:
        lea     eax, [ebp-8]
        push    8
        push    eax
        push    0x1004
    L_fad:
        push    dword ptr [g_5e77aaf4]
        call    dword ptr [g_5e77aaf8]
        test    eax, eax
        jz      L_fc7
        lea     esi, [ebp-8]
    L_fc0:
        push    esi
        call    FUN_5e0336e1
        pop     ecx
    L_fc7:
        pop     esi
        leave
        ret
    }
}
