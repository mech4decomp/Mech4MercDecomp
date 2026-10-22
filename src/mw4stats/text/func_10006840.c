/*
 * FUN_10006840 (223 B) - __thiscall (ECX = this, param_1 at [esp+0x28]).
 * Parses a wide-char string (skipping a BOM), builds a stats entry via
 * FUN_10006e60 / FUN_10008c40, and frees the linked list on failure.
 * RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210f4; /* IAT: wcslen */
extern void *g_100210ec; /* IAT: free */
extern void __cdecl FUN_10006e60(void);
extern void __cdecl FUN_10008c40(void);

__declspec(naked) void __cdecl FUN_10006840(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x28]
        push    edi
        mov     edi, dword ptr [ecx + 4]
        test    esi, esi
        jz      L_f2
        mov     ax, word ptr [esi]
        test    ax, ax
        jz      L_f2
        cmp     ax, 0xfffe
        jz      L_6d
        cmp     ax, 0xfeff
        jnz     L_70
    L_6d:
        add     esi, 2
    L_70:
        push    esi
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        lea     eax, [edi + 0xc]
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0xc], edi
        push    0
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], 3
        call    FUN_10006e60
        mov     ecx, dword ptr [edi + 0x1024]
        mov     ebx, dword ptr [esp + 0x14]
        or      ebx, ecx
        push    esi
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x28], 0
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_10008c40
        test    eax, eax
        mov     dword ptr [edi + 0x1020], eax
        jnz     L_914
        mov     esi, dword ptr [edi + 4]
        test    esi, esi
        jz      L_df
        mov     ebx, dword ptr [g_100210ec]
    L_d1:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    ebx
        add     esp, 0x4
        test    esi, esi
        jnz     L_d1
    L_df:
        mov     eax, dword ptr [edi + 0x10]
        mov     dword ptr [edi + 4], 0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x1c
        ret     4
    L_f2:
        mov     esi, dword ptr [edi + 4]
        test    esi, esi
        jz      L_90d
        mov     ebx, dword ptr [g_100210ec]
    L_8ff:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    ebx
        add     esp, 0x4
        test    esi, esi
        jnz     L_8ff
    L_90d:
        mov     dword ptr [edi + 4], 0
    L_914:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x1c
        ret     4
    }
}
