/*
 * FUN_0075ac80 (257 B) — __cdecl, no args. Builds a CPU/memory string in
 * DAT_008bc010 via sprintf + GlobalMemoryStatus, then appends a substring
 * from DAT_00859bad. Returns &DAT_008bc010.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8b276c;
extern int g_8b2770;
extern char g_8b272c[];
extern char g_7af160[];
extern char g_7af154[];
extern char g_76c690[];
extern char g_8bc010[];
extern char g_859bac;
extern char g_859bad[];

extern int (__cdecl *g_76b420)(char *, const char *, ...);
extern void (__stdcall *g_76b144)(void *);
extern void *__stdcall FUN_0071ddf0(int a, int b);

__declspec(naked) void __stdcall FUN_0075ac80(void)
{
    __asm {
        mov     eax, dword ptr [g_8b276c]
        sub     esp, 0x20
        test    eax, eax
        jz      L_ac98
        push    offset g_8b272c
        push    offset g_7af160
        jmp     L_acb2
L_ac98:
        mov     eax, dword ptr [g_8b2770]
        test    eax, eax
        push    offset g_8b272c
        jz      L_acad
        push    offset g_7af154
        jmp     L_acb2
L_acad:
        push    offset g_76c690
L_acb2:
        push    offset g_8bc010
        call    dword ptr [g_76b420]
        add     esp, 0xc
        push    esi
        or      ecx, 0xffffffff
        xor     eax, eax
        push    edi
        mov     edi, offset g_8bc010
        repne   scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        dec     esi
        mov     byte ptr [esi + g_8bc010], 0x2c
        inc     esi
        lea     eax, [esp + 0x8]
        mov     byte ptr [esi + g_8bc010], 0x20
        push    eax
        inc     esi
        call    dword ptr [g_76b144]
        mov     ecx, dword ptr [esp + 0x10]
        push    0x1
        push    ecx
        call    FUN_0071ddf0
        mov     dl, byte ptr [eax]
        inc     eax
        cmp     dl, 0x28
        jz      L_ad0b
L_ad03:
        mov     cl, byte ptr [eax]
        inc     eax
        cmp     cl, 0x28
        jnz     L_ad03
L_ad0b:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x29
        jz      L_ad22
L_ad12:
        mov     byte ptr [esi + g_8bc010], cl
        mov     cl, byte ptr [eax + 0x1]
        inc     esi
        inc     eax
        cmp     cl, 0x29
        jnz     L_ad12
L_ad22:
        mov     al, byte ptr [g_859bac]
        mov     byte ptr [esi + g_8bc010], 0x2c
        inc     esi
        cmp     al, 0x20
        mov     byte ptr [esi + g_8bc010], 0x20
        mov     byte ptr [esi + g_8bc010 + 1], 0x0
        mov     edi, offset g_859bad
        jz      L_ad4e
L_ad46:
        mov     dl, byte ptr [edi]
        inc     edi
        cmp     dl, 0x20
        jnz     L_ad46
L_ad4e:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8bc010
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        pop     edi
        mov     eax, offset g_8bc010
        pop     esi
        add     esp, 0x20
        ret
    }
}
