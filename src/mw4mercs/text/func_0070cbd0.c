/*
 * FUN_0070cbd0 (730 B) — Log/format dispatcher.
 *
 * Parses a command string against a filter table (case-insensitive match),
 * then formats a message into the global buffer DAT_0085aa74 via _vsnprintf
 * / sprintf / vsprintf and dispatches to FUN_0070d1f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aae44;
extern char g_87dd0b;
extern char g_859afc;
extern char g_859394[];
extern char g_85af78[];
extern char g_85ae73;
extern int g_7b7014;
extern char g_85897c;
extern __int64 g_858b58;
extern int g_858b5c;
extern int g_858b30;
extern int g_858b34;
extern char g_85aa74[];
extern char g_85aa72[];
extern char g_7a1a70[];
extern char g_77a078[];
extern void *g_76b394;   /* IAT: _vsnprintf */
extern void *g_76b420;   /* IAT: sprintf */
extern void *g_76b3ec;   /* IAT: vsprintf */
extern void __cdecl FUN_006fabf0(void);
extern __int64 __cdecl FUN_00707f50(void);
extern void __cdecl FUN_0070d1f0(void);

__declspec(naked) void __cdecl FUN_0070cbd0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        cmp     dword ptr [g_8aae44], 1
        push    ebx
        push    esi
        push    edi
        mov     ecx, offset g_85af78
        mov     byte ptr [ebp - 1], 0
        jnz     L_cc7c
        mov     al, byte ptr [g_87dd0b]
        test    al, al
        jnz     L_cc7c
        mov     dword ptr [ebp + 0xc], 0
    L_cc03:
        mov     byte ptr [ebp - 1], 1
    L_cc07:
        mov     al, byte ptr [g_859afc]
        test    al, al
        mov     edi, dword ptr [ebp + 0x14]
        mov     ebx, dword ptr [ebp + 0x10]
        jz      L_cd6e
        mov     al, byte ptr [g_859394]
        test    al, al
        mov     ecx, offset g_859394
        jz      L_cd6e
    L_cc2c:
        cmp     byte ptr [ecx], 0x20
        mov     esi, dword ptr [ebp + 0xc]
        jnz     L_cc3c
    L_cc34:
        mov     al, byte ptr [ecx + 1]
        inc     ecx
        cmp     al, 0x20
        jz      L_cc34
    L_cc3c:
        cmp     byte ptr [ecx], 0
        jz      L_cd6e
    L_cc45:
        mov     al, byte ptr [ecx]
        cmp     al, 0x61
        mov     dl, byte ptr [esi]
        jl      L_cc53
        cmp     al, 0x7a
        jg      L_cc53
        add     al, 0xe0
    L_cc53:
        cmp     dl, 0x61
        jl      L_cc60
        cmp     dl, 0x7a
        jg      L_cc60
        add     dl, 0xe0
    L_cc60:
        test    al, al
        jz      L_cd15
        test    dl, dl
        jz      L_cd15
        cmp     al, dl
        jnz     L_cd15
        inc     ecx
        inc     esi
        jmp     L_cc45
    L_cc7c:
        mov     edi, dword ptr [ebp + 0xc]
        test    edi, edi
        jz      L_cc03
        cmp     byte ptr [edi], 0
        jz      L_cc03
        mov     al, byte ptr [g_85af78]
        test    al, al
        jz      L_cc07
    L_cc99:
        cmp     byte ptr [ecx], 0x20
        mov     esi, edi
        jnz     L_cca8
    L_cca0:
        mov     al, byte ptr [ecx + 1]
        inc     ecx
        cmp     al, 0x20
        jz      L_cca0
    L_cca8:
        cmp     byte ptr [ecx], 0
        jz      L_cc07
    L_ccb1:
        mov     al, byte ptr [ecx]
        cmp     al, 0x61
        mov     dl, byte ptr [esi]
        jl      L_ccbf
        cmp     al, 0x7a
        jg      L_ccbf
        add     al, 0xe0
    L_ccbf:
        cmp     dl, 0x61
        jl      L_cccc
        cmp     dl, 0x7a
        jg      L_cccc
        add     dl, 0xe0
    L_cccc:
        test    al, al
        jz      L_ccdc
        test    dl, dl
        jz      L_ccdc
        cmp     al, dl
        jnz     L_ccdc
        inc     ecx
        inc     esi
        jmp     L_ccb1
    L_ccdc:
        mov     al, byte ptr [ecx]
        cmp     al, 0x2a
        jz      L_cc03
        cmp     byte ptr [esi], 0
        jnz     L_ccfb
        cmp     al, 0x20
        jz      L_cc03
        test    al, al
        jz      L_cc03
    L_ccfb:
        cmp     al, 0x20
        jz      L_cd0b
    L_ccff:
        test    al, al
        jz      L_cd0b
        mov     al, byte ptr [ecx + 1]
        inc     ecx
        cmp     al, 0x20
        jnz     L_ccff
    L_cd0b:
        cmp     byte ptr [ecx], 0
        jnz     L_cc99
        jmp     L_cc07
    L_cd15:
        mov     al, byte ptr [ecx]
        cmp     al, 0x2a
        jz      L_cd43
        cmp     byte ptr [esi], 0
        jnz     L_cd28
        cmp     al, 0x20
        jz      L_cd43
        test    al, al
        jz      L_cd43
    L_cd28:
        cmp     al, 0x20
        jz      L_cd38
    L_cd2c:
        test    al, al
        jz      L_cd38
        mov     al, byte ptr [ecx + 1]
        inc     ecx
        cmp     al, 0x20
        jnz     L_cd2c
    L_cd38:
        cmp     byte ptr [ecx], 0
        jnz     L_cc2c
        jmp     L_cd6e
    L_cd43:
        push    edi
        push    ebx
        push    0x400
        push    offset g_85aa74
        call    dword ptr [g_76b394]
        push    offset g_85aa74
        mov     byte ptr [g_85ae73], 0
        call    FUN_006fabf0
        add     esp, 0x14
        test    eax, eax
        jz      L_cd6e
        int     3
    L_cd6e:
        mov     al, byte ptr [g_87dd0b]
        test    al, al
        jnz     L_cea3
        mov     al, byte ptr [ebp - 1]
        test    al, al
        jz      L_cea3
        mov     eax, dword ptr [g_7b7014]
        test    eax, eax
        jz      L_ce04
        mov     al, byte ptr [g_85897c]
        test    al, al
        jz      L_ce04
        mov     eax, dword ptr [g_858b58]
        or      eax, dword ptr [g_858b5c]
        jz      L_ce04
        call    FUN_00707f50
        mov     ecx, dword ptr [g_858b30]
        mov     esi, dword ptr [g_858b34]
        sub     eax, ecx
        sbb     edx, esi
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], edx
        fild    qword ptr [ebp - 0xc]
        sub     esp, 8
        fild    qword ptr [g_858b58]
        fdivp   st(1), st(0)
        __emit 0xDD   /* __emit: MSVC6 rejects 'fstp qword ptr [esp]' (illegal number of operands); ref DD 1C 24 */
        __emit 0x1C
        __emit 0x24
        push    offset g_7a1a70
        push    offset g_85aa74
        call    dword ptr [g_76b420]
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_85aa74
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_85aa74
        push    ebx
        push    ecx
        call    dword ptr [g_76b3ec]
        add     esp, 0x1c
        jmp     L_ce20
    L_ce04:
        push    edi
        push    ebx
        push    0x400
        push    offset g_85aa74
        call    dword ptr [g_76b394]
        add     esp, 0x10
        mov     byte ptr [g_85ae73], 0
    L_ce20:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        mov     al, byte ptr [ebp + 8]
        not     ecx
        dec     ecx
        test    al, 1
        mov     cl, byte ptr [ecx + ebx - 1]
        jz      L_ce56
        xor     edx, edx
        cmp     cl, 0xa
        setz    dl
        push    offset g_85aa74
        mov     dword ptr [g_7b7014], edx
        call    FUN_0070d1f0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_ce56:
        cmp     cl, 0x2b
        jz      L_ce80
        push    offset g_85aa74
        mov     dword ptr [g_7b7014], 1
        call    FUN_0070d1f0
        push    offset g_77a078
        call    FUN_0070d1f0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_ce80:
        xor     eax, eax
        or      ecx, 0xffffffff
        mov     edi, offset g_85aa74
        repne   scasb
        not     ecx
        push    offset g_85aa74
        mov     byte ptr [ecx + g_85aa72], al
        mov     dword ptr [g_7b7014], eax
        call    FUN_0070d1f0
    L_cea3:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
