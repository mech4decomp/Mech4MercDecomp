/*
 * FUN_00720860 (403 B) — hex-dump / memory formatting helper.
 *
 * Iterates over a memory range, formatting each dword via sprintf (IAT) and
 * appending to a string buffer (param_3). Uses IsBadReadPtr (IAT) and
 * repne scasb / rep movsd / rep movsb.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__cdecl *g_76b128)(void);   /* IsBadReadPtr IAT */
extern void (__cdecl *g_76b420)(void);   /* sprintf IAT */
extern char g_7a4f7c[];                  /* "\n                 " */
extern char g_7a4fa4[];                  /* "???????? " */
extern char g_7a4f9c[];                  /* "%08X " */
extern char g_77a078[];                  /* "\n" */

__declspec(naked) void __stdcall FUN_00720860(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [esp + 0x1c]
        push    ebx
        mov     ebx, dword ptr [esp + 0x24]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        add     eax, edi
        cmp     edi, eax
        mov     esi, edi
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x2c], eax
        jnc     L_20996
L_20887:
        lea     eax, [edi + 0x20]
        cmp     esi, eax
        jz      L_20895
        lea     ecx, [edi + 0x40]
        cmp     esi, ecx
        jnz     L_208f0
L_20895:
        mov     edx, offset g_7a4f7c
        test    edx, edx
        jz      L_208f0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        mov     edx, dword ptr [ebx + 0x4]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax*1]
        cmp     esi, ecx
        jle     L_208bd
        sub     ecx, edx
        mov     eax, ecx
L_208bd:
        mov     edx, dword ptr [ebx + 0x8]
        mov     edi, dword ptr [ebx + 0x4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 0x2
        add     edi, edx
        mov     esi, offset g_7a4f7c
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebx + 0x4]
        mov     esi, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x28]
        lea     eax, [ecx + eax*1 - 0x1]
        mov     dword ptr [ebx + 0x4], eax
        mov     byte ptr [eax + edx*1], 0x0
L_208f0:
        push    0x4
        push    esi
        call    dword ptr [g_76b128]
        test    eax, eax
        jz      L_20912
        lea     eax, [esp + 0x14]
        push    offset g_7a4fa4
        push    eax
        call    dword ptr [g_76b420]
        add     esp, 0x8
        jmp     L_20928
L_20912:
        mov     ecx, dword ptr [esi]
        push    ecx
        lea     edx, [esp + 0x18]
        push    offset g_7a4f9c
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0xc
L_20928:
        lea     eax, [esp + 0x14]
        test    eax, eax
        jz      L_20983
        mov     edx, dword ptr [ebx + 0x4]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x14]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax*1]
        cmp     esi, ecx
        jle     L_20951
        sub     ecx, edx
        mov     eax, ecx
L_20951:
        mov     edx, dword ptr [ebx + 0x8]
        mov     edi, dword ptr [ebx + 0x4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 0x2
        add     edi, edx
        lea     esi, [esp + 0x14]
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebx + 0x4]
        mov     edi, dword ptr [esp + 0x28]
        mov     esi, dword ptr [esp + 0x10]
        lea     eax, [ecx + eax*1 - 0x1]
        mov     dword ptr [ebx + 0x4], eax
        mov     byte ptr [eax + edx*1], 0x0
L_20983:
        mov     eax, dword ptr [esp + 0x2c]
        add     esi, 0x4
        cmp     esi, eax
        mov     dword ptr [esp + 0x10], esi
        jc      L_20887
L_20996:
        mov     ecx, offset g_77a078
        test    ecx, ecx
        jz      L_209e9
        mov     edx, dword ptr [ebx + 0x4]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax*1]
        cmp     esi, ecx
        jle     L_209be
        sub     ecx, edx
        mov     eax, ecx
L_209be:
        mov     edx, dword ptr [ebx + 0x8]
        mov     edi, dword ptr [ebx + 0x4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 0x2
        add     edi, edx
        mov     esi, offset g_77a078
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebx + 0x4]
        lea     eax, [ecx + eax*1 - 0x1]
        mov     dword ptr [ebx + 0x4], eax
        mov     byte ptr [eax + edx*1], 0x0
L_209e9:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0xc
    }
}
