/*
 * FUN_5e03479d (312 B) — grows/reallocates a string table. Given a table
 * pointer (param_1) and a new element count (param_2), returns a table with
 * room for the requested count, copying existing entries. Handles the
 * NULL-table and zero-count cases, and falls back to a raw allocation path.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e0391b0;                 /* size threshold */
extern int g_5e77ae20;                 /* allocator context */
extern int g_5e77aa38;                 /* fallback flag */
extern int (*g_5e035024)(void);        /* IAT */
extern int (*g_5e0350a8)(void);        /* IAT */
extern void __cdecl FUN_5e02b6e4(void);
extern void __cdecl FUN_5e02b69c(void);
extern void __cdecl FUN_5e02c830(void);
extern void __cdecl FUN_5e02c919(void);
extern void __cdecl FUN_5e02d124(void);
extern void __cdecl FUN_5e02cc6f(void);
extern void __cdecl FUN_5e02ed40(void);
extern void __cdecl FUN_5e02c944(void);
extern void __cdecl FUN_5e02c891(void);
extern void __cdecl FUN_5e02d844(void);

__declspec(naked) void FUN_5e03479d(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp + 8]
        push    esi
        push    edi
        test    ebx, ebx
        jnz     L_7b8
        push    dword ptr [ebp + 0xc]
        call    FUN_5e02b6e4
        pop     ecx
        jmp     L_8d0
    L_7b8:
        mov     esi, dword ptr [ebp + 0xc]
        test    esi, esi
        jnz     L_7cd
        push    ebx
        call    FUN_5e02b69c
        pop     ecx
    L_7c6:
        xor     eax, eax
        jmp     L_8d0
    L_7cd:
        xor     edi, edi
        cmp     esi, -0x20
        ja      L_8b1
        push    9
        call    FUN_5e02c830
        push    ebx
        call    FUN_5e02c919
        pop     ecx
        mov     dword ptr [ebp + 0xc], eax
        test    eax, eax
        pop     ecx
        jz      L_886
        cmp     esi, dword ptr [g_5e0391b0]
        ja      L_83c
        push    esi
        push    ebx
        push    eax
        call    FUN_5e02d124
        add     esp, 0xc
        test    eax, eax
        jz      L_80d
        mov     edi, ebx
        jmp     L_838
    L_80d:
        push    esi
        call    FUN_5e02cc6f
        mov     edi, eax
        pop     ecx
        test    edi, edi
        jz      L_83c
        mov     eax, dword ptr [ebx - 4]
        dec     eax
        cmp     eax, esi
        jc      L_824
        mov     eax, esi
    L_824:
        push    eax
        push    ebx
        push    edi
        call    FUN_5e02ed40
        push    ebx
        push    dword ptr [ebp + 0xc]
        call    FUN_5e02c944
        add     esp, 0x14
    L_838:
        test    edi, edi
        jnz     L_87c
    L_83c:
        test    esi, esi
        jnz     L_843
        push    1
        pop     esi
    L_843:
        add     esi, 0xf
        and     esi, 0xfffffff0
        push    esi
        push    0
        push    dword ptr [g_5e77ae20]
        call    dword ptr [g_5e035024]
        mov     edi, eax
        test    edi, edi
        jz      L_87c
        mov     eax, dword ptr [ebx - 4]
        dec     eax
        cmp     eax, esi
        jc      L_868
        mov     eax, esi
    L_868:
        push    eax
        push    ebx
        push    edi
        call    FUN_5e02ed40
        push    ebx
        push    dword ptr [ebp + 0xc]
        call    FUN_5e02c944
        add     esp, 0x14
    L_87c:
        push    9
        call    FUN_5e02c891
        pop     ecx
        jmp     L_8ad
    L_886:
        push    9
        call    FUN_5e02c891
        test    esi, esi
        pop     ecx
        jnz     L_895
        push    1
        pop     esi
    L_895:
        add     esi, 0xf
        and     esi, 0xfffffff0
        push    esi
        push    ebx
        push    0
        push    dword ptr [g_5e77ae20]
        call    dword ptr [g_5e0350a8]
        mov     edi, eax
    L_8ad:
        test    edi, edi
        jnz     L_8ce
    L_8b1:
        cmp     dword ptr [g_5e77aa38], 0
        jz      L_8ce
        push    esi
        call    FUN_5e02d844
        test    eax, eax
        pop     ecx
        jnz     L_7cd
        jmp     L_7c6
    L_8ce:
        mov     eax, edi
    L_8d0:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
