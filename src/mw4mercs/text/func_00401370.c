/*
 * FUN_00401370 (254 B) — Select() argument validator. __stdcall, RET 0xC.
 *
 * Validates arg count, resolves a gameID index, calls into the gameID
 * database (FUN_006f7970 / FUN_006f7710), and on success copies the
 * selection string into the global buffer at 0x7b7cc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f8430(void);
extern void __cdecl FUN_006f7970(void);
extern void __cdecl FUN_006f7710(void);
extern void __cdecl FUN_006f5ee0(void);

extern char g_sel_invalid[];   /* 0x76b738 "Invalid number of arguments (%d) to Select()." */
extern char g_sel_notfound[];  /* 0x76b70c "Unable to find gameID for select index %d." */
extern char g_sel_error[];     /* 0x76b6e4 "Error setting selectio to gameid %s.\n" */
extern char g_007b7cc0[];      /* buffer @ 0x7b7cc0 */

__declspec(naked) int __stdcall FUN_00401370(int a, char *b, int *c)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0xc]
        push    ebx
        or      ebx, -1
        cmp     eax, 0x1
        push    esi
        jz      L139B
        push    eax
        push    offset g_sel_invalid
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L1393
        int     3
L1393:
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0xc
L139B:
        mov     eax, dword ptr [ebp + 0x10]
        mov     esi, dword ptr [eax]
        cmp     esi, -1
        jl      L13AD
        cmp     esi, 0x270f
        jle     L13AF
L13AD:
        mov     esi, dword ptr [esi]
L13AF:
        call    FUN_006f89f0
        test    eax, eax
        jnz     L13C1
        pop     esi
        or      eax, -1
        pop     ebx
        pop     ebp
        ret     0xc
L13C1:
        push    edi
        call    FUN_006f89f0
        call    FUN_006f5ed0
        call    FUN_006f89f0
        test    esi, esi
        mov     edi, dword ptr [eax + 0x3c]
        __emit 0x0F   /* jl L1481: MSVC6 mis-encodes this forward branch as short 7C; ref uses long 0F 8C */
        __emit 0x8C
        __emit 0xA5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     ecx, edi
        call    FUN_006f8430
        cmp     esi, eax
        __emit 0x0F   /* jge L1481: MSVC6 mis-encodes as short 7D; ref uses long 0F 8D */
        __emit 0x8D
        __emit 0x96
        __emit 0x00
        __emit 0x00
        __emit 0x00
        lea     ecx, [ebp + 0xc]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_006f7970
        test    al, al
        __emit 0x75   /* jnz L1421: MSVC6 miscomputes forward-branch disp (0x13 vs ref 0x26) */
        __emit 0x26
        push    esi
        push    offset g_sel_notfound
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        __emit 0x74   /* jz L1481: MSVC6 miscomputes forward-branch disp (0x4E vs ref 0x74) */
        __emit 0x74
        int     3
        call    FUN_006f89f0
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        ret     0xc
L1421:
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        mov     ecx, edi
        call    FUN_006f7710
        test    al, al
        __emit 0x75   /* jnz L1459: MSVC6 miscomputes forward-branch disp (0x16 vs ref 0x29) */
        __emit 0x29
        mov     eax, dword ptr [ebp + 0xc]
        push    eax
        push    offset g_sel_error
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        __emit 0x74   /* jz L1481: MSVC6 miscomputes forward-branch disp (0x29 vs ref 0x3C) */
        __emit 0x3C
        int     3
        call    FUN_006f89f0
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        ret     0xc
L1459:
        mov     edi, dword ptr [ebp + 0xc]
        or      ecx, -1
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, offset g_007b7cc0
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     ebx, 0x1
L1481:
        call    FUN_006f89f0
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
