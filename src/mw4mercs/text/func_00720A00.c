/*
 * FUN_00720A00 (2168 B) — util: string/format builder that appends multiple
 * localized strings into a buffer (ebx = buffer struct). __cdecl, RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00736bf0(void);
extern void __cdecl FUN_00736cd0(void);
extern void __cdecl FUN_00736c50(void);
extern void __cdecl FUN_0071ddd0(void);
extern void __cdecl FUN_006fa880(void);
extern void __cdecl FUN_007205f0(void);
extern void __cdecl FUN_00720860(void);

extern unsigned int g_00849c38;
extern unsigned int g_00849c2c;
extern unsigned int g_00849c34;
extern unsigned int g_00849c30;
extern unsigned int g_00849c48;
extern unsigned int g_00849c28;
extern unsigned int g_00849c24;
extern unsigned int g_00849c3c;
extern unsigned int g_00849c4c;
extern unsigned int g_00849c40;

__declspec(naked) void FUN_00720A00(void)
{
    __asm {
        sub     esp, 0x22c
        push    ebx
        mov     ebx, dword ptr [esp + 0x238]
        push    ebp
        push    esi
        push    edi
        xor     edi, edi
        mov     dword ptr [esp + 0x14], edi
L_720a17:
        mov     eax, dword ptr [esp + 0x240]
        push    eax
        call    FUN_00736bf0
        mov     esi, eax
        test    esi, esi
        mov     dword ptr [esp + 0x1c], esi
        je      L_720d20
        push    esi
        lea     ecx, [esp + 0x38]
        push    ecx
        call    FUN_00736cd0
        push    esi
        lea     edx, [esp + 0x13c]
        mov     dword ptr [esp + 0x14], eax
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        call    FUN_00736c50
        test    edi, edi
        mov     dword ptr [esp + 0x18], eax
        jne     L_720ab3
        mov     ecx, 0x7a5070
        test    ecx, ecx
        je      L_720ab3
        mov     edx, dword ptr [ebx + 4]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_720a84
        sub     ecx, edx
        mov     eax, ecx
L_720a84:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, 0x7a5070
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        mov     esi, dword ptr [esp + 0x1c]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720ab3:
        push    esi
        call    FUN_0071ddd0
        mov     esi, eax
        test    esi, esi
        je      L_720b04
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [edx + eax]
        cmp     edi, ecx
        jle     L_720ade
        sub     ecx, edx
        mov     eax, ecx
L_720ade:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720b04:
        mov     edx, 0x76cb8c
        test    edx, edx
        je      L_720b57
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        mov     edx, dword ptr [ebx + 4]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_720b2c
        sub     ecx, edx
        mov     eax, ecx
L_720b2c:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, 0x76cb8c
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720b57:
        mov     esi, dword ptr [esp + 0x10]
        test    esi, esi
        je      L_720ba4
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [edx + eax]
        cmp     edi, ecx
        jle     L_720b7e
        sub     ecx, edx
        mov     eax, ecx
L_720b7e:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720ba4:
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x20
        jge     L_720c1b
        mov     eax, 0x20
        sub     eax, ecx
        mov     dword ptr [esp + 0x10], eax
L_720bc2:
        mov     eax, 0x76cb8c
        test    eax, eax
        je      L_720c15
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_720bea
        sub     ecx, edx
        mov     eax, ecx
L_720bea:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, 0x76cb8c
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720c15:
        dec     dword ptr [esp + 0x10]
        jne     L_720bc2
L_720c1b:
        mov     ecx, 0x76cb8c
        test    ecx, ecx
        je      L_720c6e
        mov     edx, dword ptr [ebx + 4]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_720c43
        sub     ecx, edx
        mov     eax, ecx
L_720c43:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, 0x76cb8c
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720c6e:
        mov     esi, dword ptr [esp + 0x18]
        test    esi, esi
        je      L_720cbb
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [edx + eax]
        cmp     edi, ecx
        jle     L_720c95
        sub     ecx, edx
        mov     eax, ecx
L_720c95:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720cbb:
        mov     edx, 0x77a078
        test    edx, edx
        je      L_720d0e
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        mov     edx, dword ptr [ebx + 4]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_720ce3
        sub     ecx, edx
        mov     eax, ecx
L_720ce3:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, 0x77a078
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720d0e:
        mov     edi, dword ptr [esp + 0x14]
        inc     edi
        cmp     edi, 0x10
        mov     dword ptr [esp + 0x14], edi
        jl      L_720a17
L_720d20:
        mov     eax, 0x7a5058
        test    eax, eax
        je      L_720d73
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_720d48
        sub     ecx, edx
        mov     eax, ecx
L_720d48:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, 0x7a5058
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720d73:
        mov     ecx, 0x7a5050
        test    ecx, ecx
        je      L_720dc6
        mov     edx, dword ptr [ebx + 4]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_720d9b
        sub     ecx, edx
        mov     eax, ecx
L_720d9b:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, 0x7a5050
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720dc6:
        mov     edx, dword ptr [g_00849c38]
        push    edx
        call    FUN_0071ddd0
        mov     esi, eax
        test    esi, esi
        je      L_720e1d
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [edx + eax]
        cmp     edi, ecx
        jle     L_720df7
        sub     ecx, edx
        mov     eax, ecx
L_720df7:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720e1d:
        mov     eax, 0x7a5048
        test    eax, eax
        je      L_720e70
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_720e45
        sub     ecx, edx
        mov     eax, ecx
L_720e45:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, 0x7a5048
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720e70:
        mov     ecx, dword ptr [g_00849c2c]
        push    ecx
        call    FUN_0071ddd0
        mov     esi, eax
        test    esi, esi
        je      L_720ec7
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [edx + eax]
        cmp     edi, ecx
        jle     L_720ea1
        sub     ecx, edx
        mov     eax, ecx
L_720ea1:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720ec7:
        mov     edx, 0x7a5040
        test    edx, edx
        je      L_720f1a
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        mov     edx, dword ptr [ebx + 4]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_720eef
        sub     ecx, edx
        mov     eax, ecx
L_720eef:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, 0x7a5040
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720f1a:
        mov     eax, dword ptr [g_00849c34]
        push    eax
        call    FUN_0071ddd0
        mov     esi, eax
        test    esi, esi
        je      L_720f70
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [edx + eax]
        cmp     edi, ecx
        jle     L_720f4a
        sub     ecx, edx
        mov     eax, ecx
L_720f4a:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_720f70:
        mov     ecx, dword ptr [g_00849c30]
        push    ecx
        call    FUN_0071ddd0
        push    eax
        push    0x7a5038
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     edx, dword ptr [g_00849c48]
        push    edx
        call    FUN_0071ddd0
        push    eax
        push    0x7a5030
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        push    0x77a078
        mov     ecx, ebx
        call    FUN_006fa880
        push    0x7a501c
        mov     ecx, ebx
        call    FUN_006fa880
        mov     eax, dword ptr [g_00849c28]
        push    eax
        call    FUN_0071ddd0
        push    eax
        push    0x7a5014
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, dword ptr [g_00849c24]
        push    ecx
        call    FUN_0071ddd0
        push    eax
        push    0x7a500c
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     edx, dword ptr [g_00849c3c]
        push    edx
        call    FUN_0071ddd0
        push    eax
        push    0x7a5004
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     eax, dword ptr [g_00849c4c]
        push    eax
        call    FUN_0071ddd0
        push    eax
        push    0x7a4ffc
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, dword ptr [g_00849c40]
        push    0x77a078
        push    ecx
        call    FUN_0071ddd0
        push    eax
        push    0x7a4ff4
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     edx, dword ptr [g_00849c40]
        push    0x7a4ff0
        push    edx
        call    FUN_0071ddd0
        push    eax
        push    0x7a4fe8
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     eax, dword ptr [g_00849c40]
        push    ebx
        push    0x20
        push    eax
        call    FUN_007205f0
        mov     ecx, dword ptr [g_00849c4c]
        push    0x7a4ff0
        push    ecx
        call    FUN_0071ddd0
        push    eax
        push    0x7a4fe0
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     edx, dword ptr [g_00849c4c]
        push    ebx
        push    0x60
        push    edx
        call    FUN_00720860
        mov     eax, dword ptr [g_00849c24]
        cmp     eax, 0x10000
        jbe     L_721127
        push    0x7a4ff0
        push    eax
        call    FUN_0071ddd0
        push    eax
        push    0x7a4fd8
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     eax, dword ptr [g_00849c24]
        push    ebx
        push    0x40
        push    eax
        call    FUN_007205f0
L_721127:
        mov     eax, dword ptr [g_00849c28]
        cmp     eax, 0x10000
        jbe     L_721168
        push    0x7a4ff0
        push    eax
        call    FUN_0071ddd0
        push    eax
        push    0x7a4fd0
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, dword ptr [g_00849c28]
        push    ebx
        push    0x40
        push    ecx
        call    FUN_007205f0
L_721168:
        mov     eax, dword ptr [g_00849c38]
        cmp     eax, 0x10000
        jbe     L_7211a9
        push    0x7a4ff0
        push    eax
        call    FUN_0071ddd0
        push    eax
        push    0x7a4fc8
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     edx, dword ptr [g_00849c38]
        push    ebx
        push    0x20
        push    edx
        call    FUN_007205f0
L_7211a9:
        mov     eax, dword ptr [g_00849c2c]
        cmp     eax, 0x10000
        jbe     L_7211e9
        push    0x7a4ff0
        push    eax
        call    FUN_0071ddd0
        push    eax
        push    0x7a4fc0
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     eax, dword ptr [g_00849c2c]
        push    ebx
        push    0x20
        push    eax
        call    FUN_007205f0
L_7211e9:
        mov     eax, dword ptr [g_00849c34]
        cmp     eax, 0x10000
        jbe     L_72122a
        push    0x7a4ff0
        push    eax
        call    FUN_0071ddd0
        push    eax
        push    0x7a4fb8
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, dword ptr [g_00849c34]
        push    ebx
        push    0x20
        push    ecx
        call    FUN_007205f0
L_72122a:
        mov     eax, dword ptr [g_00849c30]
        cmp     eax, 0x10000
        jbe     L_72126b
        push    0x7a4ff0
        push    eax
        call    FUN_0071ddd0
        push    eax
        push    0x7a4fb0
        mov     ecx, ebx
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     edx, dword ptr [g_00849c30]
        push    ebx
        push    0x20
        push    edx
        call    FUN_007205f0
L_72126b:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x22c
        ret     8
    }
}
