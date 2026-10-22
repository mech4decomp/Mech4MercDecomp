/*
 * FUN_00736CD0 (805 B) - __stdcall (RET 8, 2 params). Initializes a
 * descriptor object at g_007b72d8, loads a resource by name (uppercasing
 * the name), and copies the resulting string into the object. Contains
 * inline strcpy/strlen loops and a resource-section scan.
 *
 * CFLAGS: /O1
 */

extern int g_007b72d8;
extern int g_008aa9fc;
extern int g_008aa3d0;
extern int (*g_008aa5fc)(void);
extern int g_008aa710;
extern int (*g_0076b23c)(void);
extern int (*g_0076b260)(void);
extern int (*g_0076b264)(void);
extern int (*g_0076b370)(void);
extern int (*g_0076b420)(void);
extern int (*g_0076b4f8)(void);

__declspec(naked) void FUN_00736CD0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b72d8]
        mov     ecx, dword ptr [g_008aa9fc]
        sub     esp, 0x544
        push    ebx
        xor     ebx, ebx
        cmp     ecx, ebx
        push    ebp
        mov     dword ptr [eax], 0x18
        push    esi
        mov     esi, dword ptr [esp + 0x558]
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 0x10], 0x200
        push    edi
        mov     byte ptr [eax + 0x14], bl
        je      L_ed7
        push    eax
        push    0x8aa3d0
        push    esi
        call    dword ptr [g_0076b23c]
        push    eax
        call    dword ptr [g_008aa5fc]
        test    eax, eax
        je      L_ed7
        push    0x1c
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        call    dword ptr [g_0076b260]
        test    eax, eax
        je      L_e23
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        je      L_e23
        cmp     eax, dword ptr [g_008aa710]
        je      L_e23
        push    0x104
        lea     ecx, [esp + 0x154]
        push    ecx
        push    eax
        call    dword ptr [g_0076b264]
        test    eax, eax
        je      L_e23
        lea     edx, [esp + 0x254]
        push    edx
        lea     eax, [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x35c]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0x160]
        push    eax
        call    dword ptr [g_0076b370]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x14
        xor     edx, edx
        lea     edi, [esp + 0x50]
        repne   scasb
        not     ecx
        dec     ecx
        je      L_dd1
L_dac:
        mov     al, byte ptr [esp + edx + 0x50]
        cmp     al, 0x61
        jl      L_dbe
        cmp     al, 0x7a
        jg      L_dbe
        sub     al, 0x20
        mov     byte ptr [esp + edx + 0x50], al
L_dbe:
        or      ecx, 0xffffffff
        xor     eax, eax
        inc     edx
        lea     edi, [esp + 0x50]
        repne   scasb
        not     ecx
        dec     ecx
        cmp     edx, ecx
        jb      L_dac
L_dd1:
        mov     ecx, dword ptr [g_007b72d8]
        add     ecx, 0x14
        push    ecx
        lea     edx, [esp + 0x54]
        push    edx
        lea     eax, [esp + 0x45c]
        push    0x7a6910
        push    eax
        call    dword ptr [g_0076b420]
        mov     ecx, dword ptr [g_007b72d8]
        lea     edx, [ecx + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x10
        lea     edi, [esp + 0x454]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
L_e23:
        mov     ecx, dword ptr [g_007b72d8]
        lea     edx, [ecx + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a690c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     eax, dword ptr [g_008aa3d0]
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        cmp     eax, ebx
        rep     movsb
        je      L_ea4
        push    eax
        lea     edx, [esp + 0x34]
        push    0x7a6904
        push    edx
        call    dword ptr [g_0076b4f8]
        mov     eax, dword ptr [g_007b72d8]
        or      ecx, 0xffffffff
        add     esp, 0xc
        lea     edx, [eax + 0x14]
        xor     eax, eax
        lea     edi, [esp + 0x30]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_ea4:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        mov     eax, dword ptr [esp + 0x558]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, eax
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x544
        ret     8
L_ed7:
        push    0x1c
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        call    dword ptr [g_0076b260]
        test    eax, eax
        je      L_f54
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, ebx
        je      L_f54
        push    0x104
        lea     ecx, [esp + 0x154]
        push    ecx
        push    edi
        call    dword ptr [g_0076b264]
        test    eax, eax
        je      L_f54
        mov     eax, dword ptr [edi + 0x3c]
        add     eax, edi
        xor     edx, edx
        mov     dx, word ptr [eax + 0x14]
        xor     ecx, ecx
        mov     cx, word ptr [eax + 6]
        sub     esi, edi
        mov     dword ptr [esp + 0x10], ebx
        lea     edx, [edx + eax + 0x18]
        cmp     ecx, ebx
        jle     L_f54
        lea     eax, [edx + 0x10]
L_f2b:
        mov     edi, dword ptr [eax - 4]
        mov     edx, dword ptr [eax]
        mov     ebx, dword ptr [eax - 8]
        lea     ebp, [edx + edi]
        cmp     ebp, ebx
        ja      L_f3c
        mov     edx, ebx
L_f3c:
        cmp     esi, edi
        jb      L_f44
        cmp     esi, edx
        jbe     L_f66
L_f44:
        mov     edx, dword ptr [esp + 0x10]
        inc     edx
        add     eax, 0x28
        cmp     edx, ecx
        mov     dword ptr [esp + 0x10], edx
        jl      L_f2b
L_f54:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x76b768
        pop     ebx
        add     esp, 0x544
        ret     8
L_f66:
        lea     eax, [esp + 0x354]
        push    eax
        lea     ecx, [esp + 0x54]
        push    ecx
        lea     edx, [esp + 0x25c]
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x160]
        push    ecx
        call    dword ptr [g_0076b370]
        sub     esi, edi
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x14
        xor     edx, edx
        lea     edi, [esp + 0x50]
        repne   scasb
        not     ecx
        dec     ecx
        je      L_fca
L_fa5:
        mov     al, byte ptr [esp + edx + 0x50]
        cmp     al, 0x61
        jl      L_fb7
        cmp     al, 0x7a
        jg      L_fb7
        sub     al, 0x20
        mov     byte ptr [esp + edx + 0x50], al
L_fb7:
        or      ecx, 0xffffffff
        xor     eax, eax
        inc     edx
        lea     edi, [esp + 0x50]
        repne   scasb
        not     ecx
        dec     ecx
        cmp     edx, ecx
        jb      L_fa5
L_fca:
        push    esi
        mov     esi, dword ptr [esp + 0x55c]
        lea     edx, [esp + 0x54]
        push    edx
        push    0x7a68f4
        push    esi
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x544
        ret     8
    }
}
