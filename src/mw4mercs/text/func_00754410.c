/*
 * FUN_00754410 (751 B) — AGP/PCI graphics hardware detection via the registry.
 * Enumerates PCI devices, matches against a known table, and builds a
 * descriptive string (with AGP miniport driver status) into DAT_008bbe08.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fc4b0(void);
extern void __cdecl FUN_00708a60(void);

extern void *g_76b014;   /* RegOpenKeyA */
extern void *g_76b010;   /* RegEnumKeyExA */
extern void *g_76b00c;   /* RegCloseKey */
extern void *g_76b088;   /* GetWindowsDirectoryA */
extern void *g_76b2b0;   /* _strnicmp */

extern char DAT_008aa9e4;
extern char DAT_008bbd08[];
extern char DAT_008bbe08[];
extern int PTR_7b7768[];
extern int PTR_7b776c[];
extern int PTR_7b7770[];
extern int PTR_7b7834[];
extern char str_7adf00[];
extern char str_7adea0[];
extern char str_7adee0[];
extern char str_7adec4[];
extern char str_7adeac[];
extern char str_7ade8c[];
extern char str_7ade84[];
extern char str_7ade54[];
extern char str_7ade2c[];
extern char str_7ade04[];
extern char str_7adddc[];

__declspec(naked) void __cdecl FUN_00754410(void)
{
    __asm {
        sub     esp, 0x11c
        xor     eax, eax
        push    ebx
        push    ebp
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0xc], eax
        mov     al, byte ptr [DAT_008aa9e4]
        push    esi
        test    al, al
        push    edi
        lea     eax, [esp + 0x10]
        push    eax
        jz      L_5456f
        push    offset str_7adf00
        push    0x80000002
        call    dword ptr [g_76b014]
        test    eax, eax
        jnz     L_546ef
        mov     ebp, dword ptr [g_76b2b0]
L_54454:
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, ecx
        inc     ecx
        mov     dword ptr [esp + 0x18], ecx
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0
        push    0
        push    0
        lea     edx, [esp + 0x2c]
        push    edx
        push    offset DAT_008bbd08
        push    eax
        mov     eax, dword ptr [esp + 0x2c]
        push    eax
        mov     dword ptr [esp + 0x3c], 0x100
        call    dword ptr [g_76b010]
        test    eax, eax
        jnz     L_544fa
        xor     ebx, ebx
        mov     esi, offset PTR_7b7768
L_54493:
        mov     edx, dword ptr [esi]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    edx
        push    offset DAT_008bbd08
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jz      L_544bf
        add     esi, 0xc
        inc     ebx
        cmp     esi, offset PTR_7b7834
        jc      L_54493
        jmp     L_54454
L_544bf:
        or      ecx, 0xffffffff
        lea     edx, [ebx + ebx*2]
        shl     edx, 2
        mov     edi, dword ptr [edx + PTR_7b776c]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, offset DAT_008bbe08
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx + PTR_7b7770]
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_54454
L_544fa:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    dword ptr [g_76b00c]
        cmp     dword ptr [esp + 0x14], 1
        jnz     L_546ef
        push    0x104
        lea     eax, [esp + 0x2c]
        push    eax
        call    dword ptr [g_76b088]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset str_7adee0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x28]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        lea     eax, [esp + 0x28]
        and     ecx, 3
        push    eax
        rep     movsb
        call    FUN_006fc4b0
        test    al, al
        mov     edi, offset str_7adec4
        jz      L_546c7
        mov     edi, offset str_7adeac
        jmp     L_546c7
L_5456f:
        push    offset str_7adea0
        push    0x80000002
        call    dword ptr [g_76b014]
        test    eax, eax
        jnz     L_546ef
        mov     ebp, dword ptr [g_76b2b0]
L_5458d:
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, ecx
        inc     ecx
        mov     dword ptr [esp + 0x18], ecx
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0
        push    0
        push    0
        lea     edx, [esp + 0x2c]
        push    edx
        push    offset DAT_008bbd08
        push    eax
        mov     eax, dword ptr [esp + 0x2c]
        push    eax
        mov     dword ptr [esp + 0x3c], 0x100
        call    dword ptr [g_76b010]
        test    eax, eax
        jnz     L_54633
        xor     ebx, ebx
        mov     esi, offset PTR_7b7768
L_545cc:
        mov     edx, dword ptr [esi]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    edx
        push    offset DAT_008bbd08
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jz      L_545f8
        add     esi, 0xc
        inc     ebx
        cmp     esi, offset PTR_7b7834
        jc      L_545cc
        jmp     L_5458d
L_545f8:
        or      ecx, 0xffffffff
        lea     edx, [ebx + ebx*2]
        shl     edx, 2
        mov     edi, dword ptr [edx + PTR_7b776c]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, offset DAT_008bbe08
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx + PTR_7b7770]
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_5458d
L_54633:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    dword ptr [g_76b00c]
        cmp     dword ptr [esp + 0x14], 1
        jnz     L_546ef
        push    0x104
        lea     eax, [esp + 0x2c]
        push    eax
        call    dword ptr [g_76b088]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset str_7ade8c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x28]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        lea     eax, [esp + 0x28]
        and     ecx, 3
        push    eax
        rep     movsb
        call    FUN_006fc4b0
        test    al, al
        jnz     L_5469c
        mov     edi, offset str_7adec4
        jmp     L_546c7
L_5469c:
        push    1
        push    offset str_7ade84
        push    offset str_7ade54
        call    FUN_00708a60
        test    eax, eax
        jnz     L_546b8
        mov     edi, offset str_7ade2c
        jmp     L_546c7
L_546b8:
        cmp     byte ptr [eax], 0
        mov     edi, offset str_7ade04
        jz      L_546c7
        mov     edi, offset str_7adddc
L_546c7:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset DAT_008bbe08
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_546ef:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset DAT_008bbe08
        pop     ebx
        add     esp, 0x11c
        ret
    }
}
