/*
 * FUN_004e7960 (267 B) — MLR/Adept __thiscall: iterates a list of
 * weapon/part names (via the +0x80 sub-object), lowercases each
 * (strlwr @ 0x76b304) and rejects entries whose name contains
 * "shellport" (strstr @ 0x76b298). Returns the last accepted entry
 * pointer, or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_004084e0(void);

extern int (*g_0076b298)(void);   /* strstr @ 0x0076b298 */
extern int (*g_0076b304)(void);   /* strlwr @ 0x0076b304 */

__declspec(naked) void FUN_004e7960(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        lea     ebx, [esi + 0x80]
        push    edi
        mov     ecx, ebx
        call    FUN_00416d00
        test    eax, eax
        jz      L798C
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x10]
        mov     ecx, ebx
        call    FUN_00416d00
        test    eax, eax
        jnz     L7993
L798C:
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x8]
L7993:
        mov     ecx, ebx
        call    FUN_00416d00
        mov     edx, dword ptr [esi + 0x58]
        lea     ecx, [esi + 0x58]
        mov     ebp, eax
        mov     byte ptr [esp + 0x13], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [edx + 0x10]
        test    ebp, ebp
        mov     dword ptr [esp + 0x18], eax
        jz      L7A61
L79BE:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L7A57
        mov     eax, dword ptr [esp + 0x18]
        cmp     dword ptr [esp + 0x14], eax
        jge     L7A61
        mov     esi, dword ptr [ebp + 0x44]
        test    esi, esi
        jz      L79E2
        inc     byte ptr [esi - 0x1]
L79E2:
        push    esi
        call    dword ptr [g_0076b304]
        add     esp, 0x4
        test    esi, esi
        mov     edi, eax
        jz      L7A07
        mov     cl, byte ptr [esi - 0x1]
        lea     eax, [esi - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7A07
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L7A07:
        push    0x774340
        push    edi
        call    dword ptr [g_0076b298]
        add     esp, 0x8
        test    eax, eax
        jz      L7A21
        mov     byte ptr [esp + 0x13], 0x1
        jmp     L7A47
L7A21:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x10]
        mov     ecx, ebx
        call    FUN_00416d00
        test    eax, eax
        jnz     L7A3A
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x8]
L7A3A:
        mov     ecx, ebx
        call    FUN_00416d00
        mov     ebp, eax
        inc     dword ptr [esp + 0x14]
L7A47:
        test    ebp, ebp
        jnz     L79BE
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      L7A61
L7A57:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L7A61:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xc
        ret
    }
}
