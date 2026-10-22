/*
 * FUN_00402660 (594 B) - SetFilterParam: parses a filter parameter string and
 * sets the corresponding global filter flag. __stdcall, 3 args (RET 0xc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fabf0(void);

extern int  *g_76b318;   /* atoi IAT */
extern char *g_76b320;   /* strncpy IAT */
extern char *g_76b2ac;   /* _stricmp IAT */

extern char g_7b7b70;
extern char g_7b7b71;
extern char g_7b7b72;
extern char g_7b7b73;
extern char g_7b7b74;
extern char g_7b7b75;
extern char g_7b7c60;
extern char g_7b7c61;
extern char g_7b7c62;
extern char g_7b7bdf;
extern int  g_7b7c64;
extern int  g_7b7b78;

__declspec(naked) void FUN_00402660(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [ebp + 0xc], 2
        push    ebx
        push    esi
        push    edi
        jnz     L_402814
        mov     eax, dword ptr [ebp + 0x10]
        mov     esi, dword ptr [eax + 4]
        cmp     esi, -2
        mov     edi, dword ptr [eax]
        mov     dword ptr [ebp + 0xc], 0
        jl      L_40268c
        cmp     esi, 0x270f
        jle     L_40269d
L_40268c:
        mov     esi, dword ptr [esi]
        push    esi
        mov     dword ptr [ebp + 0xc], esi
        call    dword ptr [g_76b318]
        add     esp, 4
        mov     esi, eax
L_40269d:
        mov     ebx, dword ptr [g_76b2ac]
        push    0x76b8d4
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_4026c5
        test    esi, esi
        pop     edi
        setnz   al
        pop     esi
        mov     byte ptr [g_7b7b70], al
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0xc
L_4026c5:
        push    0x76b8c8
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_4026e6
        test    esi, esi
        pop     edi
        setnz   cl
        pop     esi
        mov     byte ptr [g_7b7b71], cl
        pop     ebx
        pop     ebp
        ret     0xc
L_4026e6:
        push    0x76b8bc
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_402707
        test    esi, esi
        pop     edi
        setnz   dl
        pop     esi
        mov     byte ptr [g_7b7b72], dl
        pop     ebx
        pop     ebp
        ret     0xc
L_402707:
        push    0x76b8b4
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_402729
        test    esi, esi
        pop     edi
        setnz   al
        pop     esi
        mov     byte ptr [g_7b7b73], al
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0xc
L_402729:
        push    0x76b8a8
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_40274a
        test    esi, esi
        pop     edi
        setnz   cl
        pop     esi
        mov     byte ptr [g_7b7b74], cl
        pop     ebx
        pop     ebp
        ret     0xc
L_40274a:
        push    0x76b89c
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_40276b
        test    esi, esi
        pop     edi
        setnz   dl
        pop     esi
        mov     byte ptr [g_7b7b75], dl
        pop     ebx
        pop     ebp
        ret     0xc
L_40276b:
        push    0x76b890
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_40278d
        test    esi, esi
        pop     edi
        setnz   al
        pop     esi
        mov     byte ptr [g_7b7c60], al
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0xc
L_40278d:
        push    0x76b884
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_4027ae
        test    esi, esi
        pop     edi
        setnz   cl
        pop     esi
        mov     byte ptr [g_7b7c62], cl
        pop     ebx
        pop     ebp
        ret     0xc
L_4027ae:
        push    0x76b878
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_4027cf
        test    esi, esi
        pop     edi
        setnz   dl
        pop     esi
        mov     byte ptr [g_7b7c61], dl
        pop     ebx
        pop     ebp
        ret     0xc
L_4027cf:
        push    0x76b86c
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_40281e
        cmp     esi, 1
        jl      L_4027f5
        cmp     esi, 6
        jg      L_4027f5
        pop     edi
        mov     dword ptr [g_7b7c64], esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_4027f5:
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jnz     L_402801
        mov     eax, 0x76b9a0
L_402801:
        push    eax
        push    0x76b94c
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L_402814
        int     3
L_402814:
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        pop     ebp
        ret     0xc
L_40281e:
        push    0x76b864
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_40286f
        test    esi, esi
        jl      L_402846
        cmp     esi, 0x270f
        jg      L_402846
        pop     edi
        mov     dword ptr [g_7b7b78], esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_402846:
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jnz     L_402852
        mov     eax, 0x76b9a0
L_402852:
        push    eax
        push    0x76b900
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L_402814
        int     3
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        pop     ebp
        ret     0xc
L_40286f:
        push    0x76b858
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_402814
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jnz     L_4028a5
        push    0x76b8dc
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      L_402814
        int     3
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        pop     ebp
        ret     0xc
L_4028a5:
        push    0x63
        push    eax
        push    0x7b7b7c
        call    dword ptr [g_76b320]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     byte ptr [g_7b7bdf], 0
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
