/*
 * FUN_0075cba0 (572 B) — command-line flag parser.
 *
 * Parses a "flag = value" token from the global command-line buffer at
 * 0x008bd2cc, lowercasing identifiers, handling quoted values, then
 * looks up the flag in a table (0x008bc9c0..0x008bc9cc) and copies the
 * value into the table's storage.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_8bd2cc;      /* current parse position (global cmdline ptr) */
extern int   g_8bc9bc;      /* table count */
extern int   g_8bc9b8;      /* table storage size */
extern char *g_8bc9c0[];    /* table: value storage pointers */
extern char *g_8bc9c4[];    /* table: flag name pointers */
extern char *g_8bc9c8[];    /* table: flag name strings */
extern int   g_8bc9cc[];    /* table: value lengths */
extern char  g_7af9e0[];    /* "flag = xxx expected" */
extern char  g_7af9d0[];    /* "Flag too long" */
extern char  g_7af9c0[];    /* "Missing Quote" */

extern void __cdecl FUN_0075c8c0(void);
extern void __cdecl FUN_0075cb40(char *s);

__declspec(naked) char *FUN_0075cba0(void)
{
    __asm {
        mov     ecx, dword ptr [g_8bd2cc]
        mov     al, byte ptr [ecx]
        sub     esp, 0x200
        cmp     al, 0x20
        push    esi
        lea     edx, [esp + 0x104]
        jz      L_cbeb
    L_cbba:
        cmp     al, 0x3d
        jz      L_cbe5
        cmp     al, 0xd
        jz      L_cbe5
        inc     ecx
        cmp     al, 0x41
        jl      L_cbcd
        cmp     al, 0x5a
        jg      L_cbcd
        add     al, 0x20
    L_cbcd:
        mov     byte ptr [edx], al
        inc     edx
        lea     eax, [esp + 0x202]
        cmp     edx, eax
        jz      L_cc63
        mov     al, byte ptr [ecx]
        cmp     al, 0x20
        jnz     L_cbba
    L_cbe5:
        mov     dword ptr [g_8bd2cc], ecx
    L_cbeb:
        mov     byte ptr [edx], 0
        call    FUN_0075c8c0
        mov     ecx, dword ptr [g_8bd2cc]
        mov     al, byte ptr [ecx]
        cmp     al, 0xd
        lea     esi, [esp + 0x4]
        jz      L_ccd7
        cmp     word ptr [ecx], 0x2f2f
        jz      L_ccd7
        cmp     al, 0x3d
        jz      L_cc23
        mov     eax, offset g_7af9e0
        pop     esi
        add     esp, 0x200
        ret
    L_cc23:
        inc     ecx
        mov     dword ptr [g_8bd2cc], ecx
        call    FUN_0075c8c0
        mov     ecx, dword ptr [g_8bd2cc]
        mov     al, byte ptr [ecx]
        cmp     al, 0x22
        jnz     L_ccaa
        inc     ecx
        mov     dword ptr [g_8bd2cc], ecx
        mov     byte ptr [esp + 0x4], al
        lea     esi, [esp + 0x5]
    L_cc4a:
        mov     al, byte ptr [ecx]
        cmp     al, 0x22
        jz      L_cc76
        cmp     al, 0xd
        jz      L_cc76
        inc     ecx
        mov     byte ptr [esi], al
        inc     esi
        lea     edx, [esp + 0x102]
        cmp     esi, edx
        jnz     L_cc4a
    L_cc63:
        mov     dword ptr [g_8bd2cc], ecx
        mov     eax, offset g_7af9d0
        pop     esi
        add     esp, 0x200
        ret
    L_cc76:
        cmp     byte ptr [ecx], 0x22
        mov     dword ptr [g_8bd2cc], ecx
        jz      L_cc8e
        mov     eax, offset g_7af9c0
        pop     esi
        add     esp, 0x200
        ret
    L_cc8e:
        mov     byte ptr [esi], 0x22
        inc     esi
        lea     eax, [esp + 0x102]
        cmp     esi, eax
        jnz     L_ccd7
        mov     eax, offset g_7af9d0
        pop     esi
        add     esp, 0x200
        ret
    L_ccaa:
        cmp     al, 0x20
        jz      L_ccd7
    L_ccae:
        cmp     al, 0xd
        jz      L_ccd1
        inc     ecx
        cmp     al, 0x41
        jl      L_ccbd
        cmp     al, 0x5a
        jg      L_ccbd
        add     al, 0x20
    L_ccbd:
        mov     byte ptr [esi], al
        inc     esi
        lea     edx, [esp + 0x102]
        cmp     esi, edx
        jz      L_cc63
        mov     al, byte ptr [ecx]
        cmp     al, 0x20
        jnz     L_ccae
    L_ccd1:
        mov     dword ptr [g_8bd2cc], ecx
    L_ccd7:
        mov     edx, dword ptr [g_8bc9bc]
        push    ebx
        push    ebp
        mov     ebp, 0x2
        cmp     edx, ebp
        push    edi
        mov     byte ptr [esi], 0
        jbe     L_cdb5
        mov     edi, offset g_8bc9c8
    L_ccf5:
        mov     eax, dword ptr [edi]
        lea     esi, [esp + 0x110]
    L_ccfe:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_cd22
        test    cl, cl
        jz      L_cd1e
        mov     bl, byte ptr [eax + 0x1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L_cd22
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_ccfe
    L_cd1e:
        xor     eax, eax
        jmp     L_cd27
    L_cd22:
        sbb     eax, eax
        sbb     eax, -0x1
    L_cd27:
        test    eax, eax
        jz      L_cd37
        add     ebp, 0x2
        add     edi, 0x8
        cmp     ebp, edx
        jc      L_ccf5
        jmp     L_cdb5
    L_cd37:
        mov     edx, dword ptr [ebp*4 + g_8bc9c4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        lea     eax, [ecx + edx*1 + 0x1]
        mov     edx, dword ptr [ebp*4 + g_8bc9c0]
        mov     ecx, 0x8bd2bf
        sub     ecx, eax
        mov     ebx, ecx
        shr     ecx, 0x2
        mov     esi, eax
        mov     edi, edx
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp*4 + g_8bc9c8]
        sub     eax, edx
        test    ecx, ecx
        mov     edx, eax
        jz      L_cd9a
        lea     eax, [ebp*4 + g_8bc9cc]
    L_cd84:
        sub     ecx, edx
        mov     dword ptr [eax - 0xc], ecx
        mov     ecx, dword ptr [eax]
        sub     ecx, edx
        mov     dword ptr [eax - 0x8], ecx
        mov     ecx, dword ptr [eax + 0x4]
        add     eax, 0x8
        test    ecx, ecx
        jnz     L_cd84
    L_cd9a:
        mov     ecx, dword ptr [g_8bc9b8]
        mov     eax, dword ptr [g_8bc9bc]
        sub     ecx, edx
        sub     eax, 0x2
        mov     dword ptr [g_8bc9b8], ecx
        mov     dword ptr [g_8bc9bc], eax
    L_cdb5:
        lea     edx, [esp + 0x110]
        push    edx
        call    FUN_0075cb40
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_0075cb40
        add     esp, 0x8
        pop     edi
        pop     ebp
        pop     ebx
        xor     eax, eax
        pop     esi
        add     esp, 0x200
        ret
    }
}
