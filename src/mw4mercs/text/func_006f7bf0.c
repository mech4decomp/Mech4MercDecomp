/*
 * FUN_006f7bf0 (1967 B) — __thiscall large config/table reorder routine.
 * Copies the key string, sets up a table of name entries, and (based on a
 * mode switch at 0x6f83a0) performs one of several in-place reorderings of
 * the table using malloc'd scratch buffers and memcpy loops. Ends by
 * re-running the name setup and calling FUN_006f8590 three times.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_79fa48[];         /* 0x0079fa48 "GameVersion" */
extern char g_79fae0[];         /* 0x0079fae0 "Flags" */
extern char g_79fa10[];         /* 0x0079fa10 "GName" */
extern char g_7b6eb0[];         /* 0x007b6eb0 */
extern char g_7b6ec0[];         /* 0x007b6ec0 */
extern int g_00858924;          /* 0x00858924 */
extern int g_6f83a0[];          /* 0x006f83a0 (jump table, data) */

extern void *g_76b2d0;          /* IAT: free */
extern void *g_76b294;          /* IAT: malloc */
extern void *g_76b2ac;          /* IAT: _stricmp */
extern void *g_76b300;          /* IAT: _mbscmp */

extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5d90(void);
extern void __cdecl FUN_006f8590(void);
extern void __cdecl FUN_006f7850(void);
extern void __cdecl FUN_00707e90(void);
extern void __cdecl FUN_006f5ee0(void);

__declspec(naked) void __fastcall FUN_006f7bf0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     dword ptr [esp + 0x10], ebp
        call    FUN_006f5ed0
        mov     eax, dword ptr [ebp + 0x24]
        mov     esi, dword ptr [esp + 0x20]
        cmp     esi, eax
        jz      L7c5b
        test    eax, eax
        jz      L7c22
        push    eax
        call    dword ptr [g_76b2d0]
        add     esp, 4
        mov     dword ptr [ebp + 0x24], 0
L7c22:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    dword ptr [g_76b294]
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        add     esp, 4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     dword ptr [ebp + 0x24], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
L7c5b:
        mov     edi, dword ptr [ebp + 0x14]
        test    edi, edi
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [ebp + 0x28], ecx
        mov     dword ptr [ebp + 0x2c], edx
        mov     dword ptr [ebp + 0x30], eax
        jle     L7cbf
        mov     ebx, dword ptr [ebp + 0x24]
        mov     esi, dword ptr [ebp + 0x10]
        mov     dword ptr [esp + 0x20], edi
L7c81:
        mov     ecx, dword ptr [esi]
        push    ebx
        add     ecx, 4
        push    ecx
        call    FUN_006f5d90
        test    eax, eax
        mov     dword ptr [esi + 4], eax
        jnz     L7cb1
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jz      L7caa
        cmp     eax, 2
        jz      L7caa
        mov     dword ptr [esi + 4], offset g_7b6ec0
        jmp     L7cb1
L7caa:
        mov     dword ptr [esi + 4], offset g_7b6eb0
L7cb1:
        mov     eax, dword ptr [esp + 0x20]
        add     esi, 8
        dec     eax
        mov     dword ptr [esp + 0x20], eax
        jnz     L7c81
L7cbf:
        dec     edi
        push    edi
        lea     eax, [ebp + 0x10]
        push    0
        push    eax
        mov     ecx, ebp
        mov     dword ptr [esp + 0x24], eax
        call    FUN_006f8590
        mov     esi, dword ptr [ebp + 0x24]
        mov     edi, dword ptr [g_76b2ac]
        push    offset g_79fa48
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L820d
        mov     eax, dword ptr [ebp + 0x2c]
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        jz      L820d
        mov     eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        jle     L820d
        mov     edi, dword ptr [g_76b300]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x28], ebx
        jle     L7d4a
L7d20:
        mov     edx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [edx]
        add     esi, 4
L7d29:
        mov     eax, dword ptr [g_00858924]
        mov     ecx, dword ptr [esi]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        push    ecx
        call    edi
        add     esp, 8
        test    eax, eax
        jge     L7d4a
        mov     eax, dword ptr [esp + 0x24]
        inc     ebx
        add     esi, 8
        cmp     ebx, eax
        jl      L7d29
L7d4a:
        cmp     ebx, dword ptr [esp + 0x24]
        mov     ebp, ebx
        jge     L7d80
L7d52:
        mov     edx, dword ptr [esp + 0x10]
        lea     eax, [edx + 0x10]
        mov     eax, dword ptr [eax]
        lea     esi, [eax + ebx*8 + 4]
L7d5f:
        mov     eax, dword ptr [g_00858924]
        mov     ecx, dword ptr [esi]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        push    ecx
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L7d80
        mov     eax, dword ptr [esp + 0x24]
        inc     ebp
        add     esi, 8
        cmp     ebp, eax
        jl      L7d5f
L7d80:
        mov     edx, dword ptr [esp + 0x20]
        lea     eax, [edx - 1]
        cmp     eax, 5
        ja      L8186
        jmp     dword ptr [eax*4 + g_6f83a0]
L7d97:
        mov     edi, ebp
        sub     edi, ebx
        mov     eax, edi
        mov     dword ptr [esp + 0x2c], eax
        add     eax, ebx
        test    ebx, ebx
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x28], eax
        jz      L8186
        mov     eax, dword ptr [esp + 0x24]
        cmp     ebx, eax
        jz      L8186
        shl     eax, 3
        push    eax
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [g_76b294]
        add     esp, 4
        cmp     ebx, ebp
        jge     L7e14
        mov     ecx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ecx + 0x10]
        add     ecx, 0x10
        lea     edx, [ebx*8]
        mov     dword ptr [esp + 0x14], edi
L7de9:
        mov     ecx, edx
        lea     edi, [ebx*8]
        sub     ecx, edi
        mov     edi, dword ptr [esi + edx]
        mov     dword ptr [ecx + eax], edi
        mov     edi, dword ptr [esi + edx + 4]
        mov     dword ptr [ecx + eax + 4], edi
        mov     ecx, dword ptr [esp + 0x14]
        add     edx, 8
        dec     ecx
        mov     dword ptr [esp + 0x14], ecx
        jnz     L7de9
        mov     edi, dword ptr [esp + 0x18]
L7e14:
        test    ebx, ebx
        jle     L7e31
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [edx + 0x10]
        lea     ecx, [edx + 0x10]
        mov     ecx, ebx
        and     ecx, 0x1fffffff
        lea     edi, [eax + edi*8]
        shl     ecx, 1
        rep     movsd
L7e31:
        cmp     ebp, dword ptr [esp + 0x24]
        jge     L815e
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [edx + 0x10]
        add     edx, 0x10
        lea     ecx, [ebp*8]
        lea     edi, [ecx + eax]
        add     ecx, esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x24]
        sub     ecx, ebp
        shl     ecx, 1
        and     ecx, 0x3ffffffe
        jmp     L815c
L7e66:
        mov     ecx, dword ptr [esp + 0x24]
        sub     ecx, ebp
        mov     eax, ebp
        sub     eax, ebx
        add     ecx, eax
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [ebp + 4]
        add     ecx, 0x10
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [g_00858924]
        push    eax
        mov     eax, dword ptr [edx + 4]
        push    eax
        call    edi
        add     esp, 8
        test    eax, eax
        jge     L8186
        mov     eax, dword ptr [esp + 0x24]
        cmp     ebx, eax
        jz      L8186
        mov     edi, eax
        lea     eax, [edi*8]
        push    eax
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [g_76b294]
        add     esp, 4
        test    ebx, ebx
        jle     L7ede
        mov     ecx, edi
        sub     ecx, ebx
        lea     edi, [eax + ecx*8]
        mov     ecx, ebx
        and     ecx, 0x1fffffff
        shl     ecx, 1
        mov     esi, ebp
        rep     movsd
        mov     edi, dword ptr [esp + 0x24]
L7ede:
        cmp     ebx, edi
        jge     L7f05
        lea     esi, [ebx*8]
        mov     edx, esi
        sub     edi, ebx
L7eed:
        mov     ebx, dword ptr [edx + ebp]
        mov     ecx, edx
        sub     ecx, esi
        mov     dword ptr [ecx + eax], ebx
        mov     ebx, dword ptr [edx + ebp + 4]
        add     edx, 8
        dec     edi
        mov     dword ptr [ecx + eax + 4], ebx
        jnz     L7eed
L7f05:
        mov     ecx, dword ptr [esp + 0x20]
        mov     esi, eax
        mov     edi, ebp
        jmp     L816e
L7f12:
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x28], ebp
        jmp     L8186
L7f1f:
        mov     eax, dword ptr [esp + 0x24]
        sub     eax, ebp
        mov     dword ptr [esp + 0x14], eax
        add     eax, ebx
        cmp     ebx, ebp
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x28], eax
        jz      L8186
        mov     eax, dword ptr [esp + 0x24]
        cmp     ebx, eax
        jz      L8186
        shl     eax, 3
        mov     esi, ebp
        sub     esi, ebx
        push    eax
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [g_76b294]
        add     esp, 4
        cmp     ebx, ebp
        jge     L7f8a
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx + 0x10]
        add     ecx, 0x10
        mov     ecx, dword ptr [esp + 0x28]
        lea     edi, [eax + ecx*8]
        mov     ecx, dword ptr [esp + 0x18]
        and     ecx, 0x1fffffff
        lea     esi, [edx + ebx*8]
        shl     ecx, 1
        rep     movsd
        mov     esi, dword ptr [esp + 0x18]
L7f8a:
        cmp     ebp, dword ptr [esp + 0x24]
        jge     L7fc7
        mov     edx, dword ptr [esp + 0x10]
        lea     ecx, [edx + 0x10]
        mov     edx, dword ptr [ecx]
        lea     ecx, [esi*8]
        mov     esi, dword ptr [esp + 0x14]
        shl     ebp, 3
        mov     dword ptr [esp + 0x24], ecx
L7fab:
        mov     edi, dword ptr [esp + 0x24]
        mov     ecx, ebp
        sub     ecx, edi
        mov     edi, dword ptr [edx + ebp]
        mov     dword ptr [ecx + eax], edi
        mov     edi, dword ptr [edx + ebp + 4]
        add     ebp, 8
        dec     esi
        mov     dword ptr [ecx + eax + 4], edi
        jnz     L7fab
L7fc7:
        test    ebx, ebx
        jle     L815e
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [edx + 0x10]
        lea     ecx, [edx + 0x10]
        mov     ecx, ebx
        and     ecx, 0x1fffffff
        shl     ecx, 1
        mov     edi, eax
        jmp     L815c
L7fea:
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, ecx
        lea     esi, [ecx*8]
        mov     ecx, dword ptr [esp + 0x10]
        sub     eax, ebp
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x2c], eax
        add     eax, ebx
        mov     ebx, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [esi + ebx - 4]
        add     ecx, 0x10
        mov     ecx, dword ptr [edx + 4]
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [g_00858924]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x28], esi
        call    edi
        add     esp, 8
        test    eax, eax
        jle     L8186
        test    ebp, ebp
        jz      L8186
        push    esi
        call    dword ptr [g_76b294]
        add     esp, 4
        test    ebp, ebp
        jle     L805f
        mov     ecx, dword ptr [esp + 0x14]
        lea     edi, [eax + ecx*8]
        mov     ecx, ebp
        and     ecx, 0x1fffffff
        shl     ecx, 1
        mov     esi, ebx
        rep     movsd
        mov     esi, dword ptr [esp + 0x20]
L805f:
        cmp     ebp, dword ptr [esp + 0x24]
        jge     L808a
        mov     edi, dword ptr [esp + 0x14]
        shl     ebp, 3
L806e:
        mov     edx, ebp
        mov     esi, dword ptr [ebx + edx]
        mov     ecx, edx
        sub     ecx, ebp
        mov     dword ptr [ecx + eax], esi
        mov     esi, dword ptr [ebx + edx + 4]
        add     edx, 8
        dec     edi
        mov     dword ptr [ecx + eax + 4], esi
        /* __emit: MSVC6 miscomputes backward jcc rel-offset (emits 75 E6, ref 75 E8) */
        __emit 0x75
        __emit 0xE8
        mov     esi, dword ptr [esp + 0x20]
L808a:
        mov     ecx, esi
        mov     esi, eax
        mov     edi, ebx
        jmp     L816e
L8095:
        mov     ecx, dword ptr [esp + 0x24]
        mov     edi, ecx
        sub     edi, ebp
        mov     eax, edi
        mov     dword ptr [esp + 0x2c], eax
        sub     eax, ebx
        add     eax, ebp
        cmp     ebx, ecx
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x28], eax
        jz      L8186
        test    ebp, ebp
        jz      L8186
        mov     esi, ecx
        lea     eax, [esi*8]
        push    eax
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [g_76b294]
        add     esp, 4
        cmp     ebp, esi
        jge     L811a
        mov     ecx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ecx + 0x10]
        add     ecx, 0x10
        lea     edx, [ebp*8]
        mov     dword ptr [esp + 0x18], edi
L80ef:
        mov     ecx, edx
        lea     edi, [ebp*8]
        sub     ecx, edi
        mov     edi, dword ptr [esi + edx]
        mov     dword ptr [ecx + eax], edi
        mov     edi, dword ptr [esi + edx + 4]
        mov     dword ptr [ecx + eax + 4], edi
        mov     ecx, dword ptr [esp + 0x18]
        add     edx, 8
        dec     ecx
        mov     dword ptr [esp + 0x18], ecx
        jnz     L80ef
        mov     edi, dword ptr [esp + 0x14]
L811a:
        cmp     ebx, ebp
        jge     L813b
        mov     edx, dword ptr [esp + 0x10]
        lea     ecx, [edx + 0x10]
        mov     ecx, dword ptr [ecx]
        lea     esi, [ecx + ebx*8]
        mov     ecx, ebp
        sub     ecx, ebx
        shl     ecx, 1
        lea     edi, [eax + edi*8]
        and     ecx, 0x3ffffffe
        rep     movsd
L813b:
        test    ebx, ebx
        jle     L815e
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [edx + 0x10]
        lea     ecx, [edx + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        sub     ecx, ebx
        lea     edi, [eax + ecx*8]
        mov     ecx, ebx
        and     ecx, 0x1fffffff
        shl     ecx, 1
L815c:
        rep     movsd
L815e:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edi, dword ptr [edx + 0x10]
        add     edx, 0x10
        mov     esi, eax
L816e:
        mov     edx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        push    eax
        rep     movsb
        call    dword ptr [g_76b2d0]
        add     esp, 4
L8186:
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0x14]
        test    eax, eax
        jle     L81d0
        mov     esi, dword ptr [edi + 0x10]
        mov     ebx, eax
        mov     ebp, offset g_7b6eb0
L819b:
        mov     eax, dword ptr [esi]
        push    offset g_79fa10
        add     eax, 4
        push    eax
        call    FUN_006f5d90
        test    eax, eax
        mov     dword ptr [esi + 4], eax
        jnz     L81ca
        mov     eax, dword ptr [edi + 0x28]
        test    eax, eax
        jz      L81c7
        cmp     eax, 2
        jz      L81c7
        mov     dword ptr [esi + 4], offset g_7b6ec0
        jmp     L81ca
L81c7:
        mov     dword ptr [esi + 4], ebp
L81ca:
        add     esi, 8
        dec     ebx
        jnz     L819b
L81d0:
        mov     ebx, dword ptr [esp + 0x2c]
        lea     ecx, [ebx - 1]
        push    ecx
        push    0
        lea     esi, [edi + 0x10]
        push    esi
        mov     ecx, edi
        call    FUN_006f8590
        mov     ebp, dword ptr [esp + 0x28]
        lea     edx, [ebp - 1]
        push    edx
        push    ebx
        push    esi
        mov     ecx, edi
        call    FUN_006f8590
        mov     eax, dword ptr [edi + 0x14]
        dec     eax
        push    eax
        push    ebp
        push    esi
        mov     ecx, edi
        call    FUN_006f8590
        mov     ebp, dword ptr [esp + 0x10]
        jmp     L837d
L820d:
        push    offset g_79fae0
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L837d
        mov     eax, dword ptr [ebp + 0x30]
        test    eax, eax
        jz      L837d
        mov     esi, dword ptr [ebp + 0x14]
        test    esi, esi
        jle     L837d
        dec     eax
        mov     ecx, 0x100
        mov     dword ptr [esp + 0x20], ecx
        jz      L824f
        dec     eax
        jnz     L8253
        mov     dword ptr [esp + 0x20], 0x200
        jmp     L8253
L824f:
        mov     dword ptr [esp + 0x20], ecx
L8253:
        xor     eax, eax
        lea     ebx, [esi*8]
        push    ebx
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2c], eax
        call    dword ptr [g_76b294]
        mov     edi, eax
        push    ebx
        mov     dword ptr [esp + 0x1c], edi
        call    dword ptr [g_76b294]
        add     esp, 8
        test    esi, esi
        mov     dword ptr [esp + 0x2c], eax
        jle     L82c1
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, eax
        mov     eax, dword ptr [edx]
        mov     edx, edi
        mov     edi, dword ptr [esp + 0x20]
L8291:
        mov     ebx, dword ptr [eax + 4]
        test    dword ptr [ebx + 8], edi
        mov     ebx, dword ptr [eax]
        jz      L82ac
        mov     dword ptr [edx], ebx
        mov     ebx, dword ptr [eax + 4]
        mov     dword ptr [edx + 4], ebx
        inc     dword ptr [esp + 0x24]
        add     edx, 8
        jmp     L82bb
L82ac:
        mov     dword ptr [ecx], ebx
        mov     ebx, dword ptr [eax + 4]
        mov     dword ptr [ecx + 4], ebx
        inc     dword ptr [esp + 0x28]
        add     ecx, 8
L82bb:
        add     eax, 8
        dec     esi
        jnz     L8291
L82c1:
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [ebp + 0x10]
        shl     eax, 3
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        mov     esi, edx
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x28]
        mov     ebx, dword ptr [ebp + 0x10]
        mov     esi, dword ptr [esp + 0x2c]
        shl     ecx, 3
        lea     edi, [eax + ebx]
        mov     eax, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        push    edx
        rep     movsb
        call    dword ptr [g_76b2d0]
        mov     ecx, dword ptr [esp + 0x30]
        push    ecx
        call    dword ptr [g_76b2d0]
        mov     eax, dword ptr [ebp + 0x14]
        add     esp, 8
        test    eax, eax
        jle     L835a
        mov     esi, ebx
        mov     edi, eax
        mov     ebx, offset g_7b6ec0
L8325:
        mov     edx, dword ptr [esi]
        push    offset g_79fa10
        add     edx, 4
        push    edx
        call    FUN_006f5d90
        test    eax, eax
        mov     dword ptr [esi + 4], eax
        jnz     L8354
        mov     eax, dword ptr [ebp + 0x28]
        test    eax, eax
        jz      L834d
        cmp     eax, 2
        jz      L834d
        mov     dword ptr [esi + 4], ebx
        jmp     L8354
L834d:
        mov     dword ptr [esi + 4], offset g_7b6eb0
L8354:
        add     esi, 8
        dec     edi
        jnz     L8325
L835a:
        mov     edi, dword ptr [esp + 0x24]
        lea     eax, [edi - 1]
        push    eax
        push    0
        lea     esi, [ebp + 0x10]
        push    esi
        mov     ecx, ebp
        call    FUN_006f8590
        mov     ecx, dword ptr [ebp + 0x14]
        dec     ecx
        push    ecx
        push    edi
        push    esi
        mov     ecx, ebp
        call    FUN_006f8590
L837d:
        push    0
        mov     ecx, ebp
        call    FUN_006f7850
        call    FUN_00707e90
        fstp    qword ptr [ebp + 0x44]
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
