/*
 * FUN_0072dd70 (268 B) — __cdecl, one char* param. Formats a number string
 * via _vsnprintf/GetNumberFormatA, then trims trailing separators/digits
 * from DAT_008825fc based on locale info. Returns &DAT_008825fc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_88263c[];
extern char g_88267b;
extern char g_8825fc[];
extern int g_7b71d8;
extern char g_76b768;

extern int (__cdecl *g_76b394)(char *, unsigned int, const char *, void *);
extern unsigned char *(__cdecl *g_76b2a4)(const unsigned char *, int);
extern int (__stdcall *g_76b09c)(unsigned long, unsigned long, const char *, void *, char *, int);
extern int (__stdcall *g_76b0a4)(unsigned long, unsigned long, char *, int);

__declspec(naked) void __stdcall FUN_0072dd70(void *param_1)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        sub     esp, 0x40
        push    ebx
        push    edi
        lea     eax, [esp + 0x50]
        push    eax
        push    ecx
        push    0x40
        push    offset g_88263c
        call    dword ptr [g_76b394]
        push    0x2e
        push    offset g_88263c
        mov     byte ptr [g_88267b], 0x0
        xor     bl, bl
        call    dword ptr [g_76b2a4]
        add     esp, 0x18
        test    eax, eax
        jz      L_ddab
        mov     bl, 0x1
L_ddab:
        mov     edx, dword ptr [g_7b71d8]
        push    0x3f
        push    offset g_8825fc
        push    0x0
        push    offset g_88263c
        push    0x0
        push    edx
        call    dword ptr [g_76b09c]
        test    bl, bl
        jnz     L_de71
        mov     al, byte ptr [g_76b768]
        mov     edx, dword ptr [g_7b71d8]
        mov     byte ptr [esp + 0x8], al
        xor     eax, eax
        mov     ecx, 0xf
        lea     edi, [esp + 0x9]
        rep     stosd
        push    0xa
        lea     ecx, [esp + 0xc]
        push    ecx
        stosw
        push    0x16
        push    edx
        stosb
        call    dword ptr [g_76b0a4]
        test    eax, eax
        mov     edi, offset g_8825fc
        jz      L_de39
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        lea     eax, [ecx + g_8825fc - 2]
        cmp     eax, offset g_8825fc
        jz      L_de71
        mov     cl, byte ptr [esp + 0x8]
L_de22:
        cmp     byte ptr [eax], cl
        jz      L_de6e
        dec     eax
        cmp     eax, offset g_8825fc
        jnz     L_de22
        pop     edi
        mov     eax, offset g_8825fc
        pop     ebx
        add     esp, 0x40
        ret
L_de39:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        lea     eax, [ecx + g_8825fc - 2]
        cmp     eax, offset g_8825fc
        jz      L_de71
L_de4f:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x30
        jl      L_de6e
        cmp     cl, 0x39
        jg      L_de6e
        dec     eax
        cmp     eax, offset g_8825fc
        jnz     L_de4f
        pop     edi
        mov     eax, offset g_8825fc
        pop     ebx
        add     esp, 0x40
        ret
L_de6e:
        mov     byte ptr [eax], 0x0
L_de71:
        pop     edi
        mov     eax, offset g_8825fc
        pop     ebx
        add     esp, 0x40
        ret
    }
}
