/*
 * FUN_5e0348d5 (151 B) — searches a string for a character (or 2-byte
 * sequence) using a character-class table. If the fast path is disabled
 * (g_5e77abfc == 0) it delegates to _strchr (FUN_5e0349b0); otherwise it
 * walks the string honoring lead-byte pairs and returns a pointer to the
 * match (or NULL).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77abfc;                 /* fast-path enable flag */
extern char g_5e77ad01;                /* character-class table */
extern void __cdecl FUN_5e0349b0(void);
extern void __cdecl FUN_5e02c830(void);
extern void __cdecl FUN_5e02c891(void);

__declspec(naked) void FUN_5e0348d5(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [g_5e77abfc], 0
        push    ebx
        push    esi
        jnz     L_8f2
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 8]
        call    FUN_5e0349b0
        pop     ecx
        pop     ecx
        jmp     L_968
    L_8f2:
        push    0x19
        call    FUN_5e02c830
        mov     esi, dword ptr [ebp + 8]
        pop     ecx
    L_8fd:
        movzx   bx, byte ptr [esi]
        test    bx, bx
        jz      L_950
        movzx   eax, bl
        test    byte ptr [eax + g_5e77ad01], 4
        jz      L_92c
        mov     al, byte ptr [esi + 1]
        inc     esi
        test    al, al
        jz      L_937
        movzx   ecx, bx
        movzx   eax, al
        shl     ecx, 8
        or      ecx, eax
        cmp     dword ptr [ebp + 0xc], ecx
        jz      L_943
        jmp     L_934
    L_92c:
        movzx   eax, bx
        cmp     dword ptr [ebp + 0xc], eax
        jz      L_950
    L_934:
        inc     esi
        jmp     L_8fd
    L_937:
        push    0x19
        call    FUN_5e02c891
        pop     ecx
        xor     eax, eax
        jmp     L_968
    L_943:
        push    0x19
        call    FUN_5e02c891
        pop     ecx
        lea     eax, [esi - 1]
        jmp     L_968
    L_950:
        push    0x19
        call    FUN_5e02c891
        mov     eax, dword ptr [ebp + 0xc]
        pop     ecx
        movzx   ecx, bx
        sub     eax, ecx
        neg     eax
        sbb     eax, eax
        not     eax
        and     eax, esi
    L_968:
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
