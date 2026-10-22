/*
 * FUN_5e034557 (391 B) — string-table insertion helper. Finds the '=' in the
 * input key, lazily initializes the global string table (g_5e77a8a4 /
 * g_5e77a8ac) via FUN_5e034736 / FUN_5e02b6e4, inserts the key/value into the
 * table, and optionally duplicates the value string.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a8a4;                 /* string table ptr */
extern int g_5e77a8a8;                 /* string table sentinel */
extern int g_5e77a8ac;                 /* secondary table ptr */
extern int (*g_5e03510c)(void);        /* IAT */
extern void __cdecl FUN_5e0348d5(void);
extern void __cdecl FUN_5e034736(void);
extern void __cdecl FUN_5e034241(void);
extern void __cdecl FUN_5e02b6e4(void);
extern void __cdecl FUN_5e0346de(void);
extern void __cdecl FUN_5e02b69c(void);
extern void __cdecl FUN_5e03479d(void);
extern void __cdecl FUN_5e02e6b0(void);
extern void __cdecl FUN_5e02e220(void);

__declspec(naked) void FUN_5e034557(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        push    ebx
        push    esi
        push    edi
        xor     edi, edi
        cmp     dword ptr [ebp + 8], edi
        jz      L_5bb
        push    0x3d
        push    dword ptr [ebp + 8]
        call    FUN_5e0348d5
        mov     esi, eax
        pop     ecx
        cmp     esi, edi
        pop     ecx
        mov     dword ptr [ebp - 8], esi
        jz      L_5bb
        cmp     dword ptr [ebp + 8], esi
        jz      L_5bb
        mov     eax, dword ptr [g_5e77a8a4]
        xor     ebx, ebx
        cmp     byte ptr [esi + 1], bl
        setz    bl
        cmp     eax, dword ptr [g_5e77a8a8]
        jnz     L_5a1
        push    eax
        call    FUN_5e034736
        pop     ecx
        mov     dword ptr [g_5e77a8a4], eax
    L_5a1:
        cmp     eax, edi
        jnz     L_5f9
        cmp     dword ptr [ebp + 0xc], edi
        jz      L_5c3
        cmp     dword ptr [g_5e77a8ac], edi
        jz      L_5c3
        call    FUN_5e034241
        test    eax, eax
        jz      L_5f9
    L_5bb:
        or      eax, -1
    L_5be:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    L_5c3:
        cmp     ebx, edi
        jnz     L_6d7
        push    4
        call    FUN_5e02b6e4
        cmp     eax, edi
        pop     ecx
        mov     dword ptr [g_5e77a8a4], eax
        jz      L_5bb
        mov     dword ptr [eax], edi
        cmp     dword ptr [g_5e77a8ac], edi
        jnz     L_5f9
        push    4
        call    FUN_5e02b6e4
        cmp     eax, edi
        pop     ecx
        mov     dword ptr [g_5e77a8ac], eax
        jz      L_5bb
        mov     dword ptr [eax], edi
    L_5f9:
        sub     esi, dword ptr [ebp + 8]
        mov     edi, dword ptr [g_5e77a8a4]
        mov     dword ptr [ebp - 4], edi
        push    esi
        push    dword ptr [ebp + 8]
        call    FUN_5e0346de
        mov     esi, eax
        pop     ecx
        test    esi, esi
        pop     ecx
        jl      L_659
        cmp     dword ptr [edi], 0
        jz      L_659
        test    ebx, ebx
        jz      L_651
        push    dword ptr [edi + esi*4]
        lea     edi, [edi + esi*4]
        call    FUN_5e02b69c
        pop     ecx
    L_62b:
        cmp     dword ptr [edi], 0
        jz      L_63b
        mov     eax, dword ptr [edi + 4]
        inc     esi
        mov     dword ptr [edi], eax
        add     edi, 4
        jmp     L_62b
    L_63b:
        mov     eax, esi
        shl     eax, 2
        push    eax
        push    dword ptr [ebp - 4]
        call    FUN_5e03479d
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_68b
        jmp     L_686
    L_651:
        mov     eax, dword ptr [ebp + 8]
        mov     dword ptr [edi + esi*4], eax
        jmp     L_68b
    L_659:
        test    ebx, ebx
        jnz     L_6d7
        test    esi, esi
        jge     L_663
        neg     esi
    L_663:
        lea     eax, [esi*4 + 8]
        push    eax
        push    edi
        call    FUN_5e03479d
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_5bb
        mov     ecx, dword ptr [ebp + 8]
        mov     dword ptr [eax + esi*4], ecx
        and     dword ptr [eax + esi*4 + 4], 0
    L_686:
        mov     dword ptr [g_5e77a8a4], eax
    L_68b:
        cmp     dword ptr [ebp + 0xc], 0
        jz      L_6d7
        push    dword ptr [ebp + 8]
        call    FUN_5e02e6b0
        inc     eax
        inc     eax
        push    eax
        call    FUN_5e02b6e4
        mov     esi, eax
        pop     ecx
        test    esi, esi
        pop     ecx
        jz      L_6d7
        push    dword ptr [ebp + 8]
        push    esi
        call    FUN_5e02e220
        mov     eax, esi
        pop     ecx
        sub     eax, dword ptr [ebp + 8]
        pop     ecx
        add     eax, dword ptr [ebp - 8]
        and     byte ptr [eax], 0
        inc     eax
        neg     ebx
        sbb     ebx, ebx
        not     ebx
        and     ebx, eax
        push    ebx
        push    esi
        call    dword ptr [g_5e03510c]
        push    esi
        call    FUN_5e02b69c
        pop     ecx
    L_6d7:
        xor     eax, eax
        jmp     L_5be
    }
}
