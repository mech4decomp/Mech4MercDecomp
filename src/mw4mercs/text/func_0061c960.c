/*
 * FUN_0061C960 (2665 B) — ABL module loader. Parses an ABL script module
 * (filename, source files, libraries used, static var sizes) into the global
 * module table DAT_0080d970 (0x28-byte entries), allocating strings/arrays via
 * the AblStackHeap (FUN_006f3c80) and the game heap (FUN_004084d0). Returns
 * the new module index. __cdecl, 6 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_80d97c;   /* DAT_0080d97c */
extern int   g_80d970;   /* DAT_0080d970 (module table base) */
extern int   g_7f2ba8;   /* DAT_007f2ba8 */
extern int   g_7dde28;   /* DAT_007dde28 */
extern char  g_80595a;   /* DAT_0080595a */
extern char  g_7b5a2c;   /* DAT_007b5a2c */
extern char  g_80595b;   /* DAT_0080595b */
extern char  g_8058f4;   /* DAT_008058f4 */
extern int   g_8058c0;   /* DAT_008058c0 */
extern int   g_8058c8;   /* DAT_008058c8 */
extern int   g_8058cc;   /* DAT_008058cc */
extern char  g_7b5a2d;   /* DAT_007b5a2d */
extern int   g_8058ec;   /* DAT_008058ec */
extern int   g_80da30;   /* DAT_0080da30 */
extern int   g_8058d0;   /* DAT_008058d0 */
extern char  g_7b5a18;   /* DAT_007b5a18 */
extern char  g_8058d4;   /* DAT_008058d4 */
extern int   g_8058d8;   /* DAT_008058d8 */
extern int   g_8058f0;   /* DAT_008058f0 */
extern int   g_7b5a1c;   /* DAT_007b5a1c */
extern int   g_7b5a20;   /* DAT_007b5a20 */
extern int   g_8058f8;   /* DAT_008058f8 */
extern char  g_8058fc;   /* DAT_008058fc */
extern int   g_805900;   /* DAT_00805900 */
extern int   g_7de630;   /* DAT_007de630 */
extern int   g_805924;   /* DAT_00805924 */
extern char  g_80d968;   /* DAT_0080d968 */
extern int   g_80594c;   /* DAT_0080594c */
extern int   g_805910;   /* DAT_00805910 */
extern int   g_805914;   /* DAT_00805914 */
extern int   g_8058dc;   /* DAT_008058dc */
extern int   g_8058e0;   /* DAT_008058e0 */
extern int   g_8058ac;   /* DAT_008058ac */
extern int   g_80d988;   /* DAT_0080d988 */
extern int   g_8058b8;   /* DAT_008058b8 */
extern int   g_805938;   /* DAT_00805938 */

extern char *(__cdecl *g_76b304)(char *);   /* _strlwr IAT */

extern void __cdecl FUN_00649ae0(void);
extern void __cdecl FUN_0075de40(void);
extern void __cdecl FUN_00649c80(void);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0061dea0(void);
extern void __cdecl FUN_00649920(void);
extern char __cdecl FUN_006498f0(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_0069ae90(void);
extern void __cdecl FUN_00649e60(void);
extern void __cdecl FUN_0069c6b0(void);
extern void __cdecl FUN_0069ae70(void);
extern void __cdecl FUN_00650580(void);
extern void __cdecl FUN_0064a0e0(void);
extern void __cdecl FUN_0061c920(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_0061ee80(void);
extern void __cdecl FUN_0061ef00(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00562f10(void);

__declspec(naked) void FUN_0061c960(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x44
        mov     eax, dword ptr [g_80d97c]
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x4], ebx
        jle     L_c9d3
        xor     esi, esi
L_c979:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [g_80d970]
        mov     edi, dword ptr [esi + eax]
        push    ecx
        call    dword ptr [g_76b304]
        add     esp, 0x4
L_c98e:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [edi]
        jnz     L_c9b2
        test    cl, cl
        jz      L_c9ae
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [edi + 0x1]
        jnz     L_c9b2
        add     eax, 0x2
        add     edi, 0x2
        test    cl, cl
        jnz     L_c98e
L_c9ae:
        xor     eax, eax
        jmp     L_c9b7
L_c9b2:
        sbb     eax, eax
        sbb     eax, -0x1
L_c9b7:
        cmp     eax, ebx
        mov     eax, dword ptr [ebp - 0x4]
        jz      L_d3c2
        mov     ecx, dword ptr [g_80d97c]
        inc     eax
        add     esi, 0x28
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x4], eax
        jl      L_c979
L_c9d3:
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [g_7f2ba8]
        mov     cl, byte ptr [ebp + 0x1c]
        cmp     edx, ebx
        mov     dword ptr [g_7dde28], eax
        setnz   al
        mov     byte ptr [g_80595a], al
        mov     byte ptr [g_7b5a2c], al
        mov     byte ptr [g_80595b], al
        mov     eax, dword ptr [ebp + 0x10]
        cmp     eax, ebx
        mov     byte ptr [g_8058f4], 0x0
        mov     dword ptr [g_8058c0], ebx
        mov     dword ptr [g_8058c8], ebx
        mov     dword ptr [g_8058cc], ebx
        mov     byte ptr [g_7b5a2d], 0x1
        mov     dword ptr [g_8058ec], ebx
        mov     dword ptr [g_80da30], ebx
        mov     dword ptr [g_8058d0], ebx
        mov     byte ptr [g_7b5a18], cl
        mov     byte ptr [g_8058d4], 0x0
        mov     dword ptr [g_8058d8], ebx
        mov     dword ptr [g_8058f0], ebx
        mov     dword ptr [g_7b5a1c], 0x7f4254
        mov     dword ptr [g_7b5a20], 0x7f3a54
        mov     dword ptr [g_8058f8], ebx
        mov     byte ptr [g_8058fc], 0x0
        mov     dword ptr [g_805900], ebx
        mov     dword ptr [g_7de630], ebx
        mov     dword ptr [g_805924], ebx
        mov     byte ptr [g_80d968], 0x0
        mov     dword ptr [g_80594c], ebx
        jz      L_ca8c
        mov     dword ptr [eax], ebx
L_ca8c:
        mov     eax, dword ptr [ebp + 0x14]
        cmp     eax, ebx
        jz      L_ca95
        mov     dword ptr [eax], ebx
L_ca95:
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        call    FUN_00649ae0
        mov     ebx, eax
        xor     esi, esi
        add     esp, 0x4
        cmp     ebx, esi
        jz      L_cb20
        mov     edx, dword ptr [g_7dde28]
        cmp     edx, esi
        jz      L_cb11
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x78c8e4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [ebp + 0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     esi, [edx + 0xff]
        mov     dword ptr [ebp - 0x20], esi
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [ebp - 0x20]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     dword ptr [edx + 0x200], 0x0
        mov     dword ptr [edx + 0x204], ebx
        xor     esi, esi
L_cb11:
        mov     dword ptr [g_7dde28], esi
        mov     eax, ebx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_cb20:
        cmp     dword ptr [g_7dde28], esi
        jz      L_cb4f
        push    esi
        push    0x7ddde8
        call    FUN_0075de40
        add     esp, 0x8
        test    eax, eax
        jz      L_cb4f
        call    FUN_00649c80
        mov     dword ptr [g_7dde28], esi
        or      eax, 0xffffffff
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_cb4f:
        mov     ecx, dword ptr [g_805910]
        mov     dword ptr [g_805914], ecx
        call    FUN_00649150
        call    FUN_0061dea0
        push    0x7b5890
        mov     ebx, eax
        push    0x7b58e0
        push    0x7b5570
        mov     dword ptr [ebp - 0x4], ebx
        mov     dword ptr [g_8058dc], ebx
        mov     dword ptr [g_8058e0], ebx
        call    FUN_00649920
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0xc
        cmp     eax, 0xe
        jnz     L_cb9e
        call    FUN_00649150
        jmp     L_cbca
L_cb9e:
        push    0x7b58e0
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_cbc0
        push    0x7b5890
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jz      L_cbca
L_cbc0:
        push    0x14
        call    FUN_00562f40
        add     esp, 0x4
L_cbca:
        mov     cl, byte ptr [g_8058f4]
        xor     edx, edx
        test    cl, cl
        setnz   dl
        push    edx
        push    0x1
        push    ebx
        call    FUN_0069ae90
        mov     al, byte ptr [g_8058f4]
        add     esp, 0xc
        test    al, al
        jnz     L_cc46
        push    esi
        push    esi
        push    0x7b55c0
        call    FUN_00649920
        mov     ecx, dword ptr [g_8058ac]
        mov     al, byte ptr [g_8058f4]
        add     esp, 0xc
        cmp     ecx, 0x1a
        jz      L_cc13
        test    al, al
        jnz     L_cc13
        push    0x2e
        jmp     L_cc1e
L_cc13:
        cmp     ecx, 0x43
        jz      L_cc26
        cmp     al, 0x1
        jnz     L_cc26
        push    0x40
L_cc1e:
        call    FUN_00562f40
        add     esp, 0x4
L_cc26:
        call    FUN_00649e60
        mov     dword ptr [g_8058d8], esi
        mov     byte ptr [g_8058d4], 0x1
        call    FUN_00649150
        mov     al, byte ptr [g_8058f4]
        test    al, al
        jz      L_cc4d
L_cc46:
        mov     edi, 0x42
        jmp     L_cc5f
L_cc4d:
        mov     edx, dword ptr [g_80d988]
        xor     eax, eax
        cmp     edx, esi
        setnz   al
        add     eax, 0x28
        mov     edi, eax
L_cc5f:
        cmp     dword ptr [g_8058ac], edi
        jz      L_cca6
L_cc67:
        call    FUN_0069c6b0
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0xe
        jnz     L_cc85
L_cc76:
        call    FUN_00649150
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0xe
        jz      L_cc76
L_cc85:
        cmp     eax, edi
        jz      L_cca6
        push    esi
        push    esi
        push    0x7b5890
        call    FUN_00649920
        push    0x7b5890
        call    FUN_006498f0
        add     esp, 0x10
        test    al, al
        jnz     L_cc67
L_cca6:
        cmp     dword ptr [g_80d988], esi
        jz      L_ccb4
        push    0x34
        push    0x29
        jmp     L_ccc5
L_ccb4:
        mov     al, byte ptr [g_8058f4]
        test    al, al
        push    0x33
        jz      L_ccc3
        push    0x42
        jmp     L_ccc5
L_ccc3:
        push    0x28
L_ccc5:
        call    FUN_0069ae70
        add     esp, 0x8
        mov     byte ptr [g_8058d4], 0x0
        call    FUN_00650580
        lea     ecx, [ebx + 0x38]
        push    ecx
        mov     dword ptr [ebx + 0x30], eax
        call    FUN_0064a0e0
        push    0x25
        push    0x12
        mov     dword ptr [ebx + 0x34], eax
        call    FUN_0069ae70
        mov     eax, dword ptr [g_8058ac]
        mov     esi, 0x18
        add     esp, 0xc
        cmp     eax, esi
        jz      L_cd19
L_cd02:
        push    0xf
        call    FUN_00562f40
        add     esp, 0x4
        call    FUN_00649150
        cmp     dword ptr [g_8058ac], esi
        jnz     L_cd02
L_cd19:
        call    FUN_00649c80
        mov     al, byte ptr [g_8058f4]
        test    al, al
        jz      L_cd33
        mov     edx, dword ptr [ebx + 0x30]
        push    edx
        call    FUN_0061c920
        add     esp, 0x4
L_cd33:
        mov     esi, dword ptr [g_8058b8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L_ce0d
        mov     edi, dword ptr [ebp + 0x8]
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_006f3c80
        mov     edi, dword ptr [esi + 0x14]
        cmp     edi, dword ptr [esi + 0x18]
        mov     dword ptr [ebp - 0x10], eax
        jz      L_cd76
        test    edi, edi
        jz      L_cd68
        mov     dword ptr [edi], eax
L_cd68:
        mov     edx, dword ptr [ebp - 0x10]
        add     edi, 0x4
        mov     dword ptr [esi + 0x14], edi
        jmp     L_ce0f
L_cd76:
        mov     ebx, dword ptr [esi + 0x10]
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [ebp - 0x24], 0x1
        mov     dword ptr [ebp - 0x28], eax
        lea     ecx, [ebp - 0x24]
        jc      L_cd95
        lea     ecx, [ebp - 0x28]
L_cd95:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [ebp - 0xc], ecx
        jz      L_cdb5
        mov     eax, ecx
        __emit 0x8D   /* __emit: no-base SIB lea ecx,[eax*4+0] -> 8D 0C 85 00000000 */
        __emit 0x0C
        __emit 0x85
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [ebp - 0x8], eax
        jmp     L_cdbc
L_cdb5:
        mov     dword ptr [ebp - 0x8], 0x0
L_cdbc:
        mov     edx, dword ptr [ebp - 0x8]
        push    edx
        push    edi
        push    ebx
        call    FUN_0061ee80
        add     esp, 0xc
        test    eax, eax
        jz      L_cdd3
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr [eax], ecx
L_cdd3:
        mov     edx, dword ptr [ebp - 0x44]
        push    0x0
        push    edx
        add     eax, 0x4
        push    eax
        push    edi
        push    edi
        call    FUN_0061ef00
        add     esp, 0x14
        test    ebx, ebx
        mov     edi, eax
        jz      L_cdf6
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_cdf6:
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0xc]
        lea     edx, [eax + ecx*4]
        mov     dword ptr [esi + 0x18], edx
        mov     edx, dword ptr [ebp - 0x10]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], edi
        jmp     L_ce0f
L_ce0d:
        xor     edx, edx
L_ce0f:
        test    edx, edx
        mov     eax, dword ptr [g_80d97c]
        mov     esi, dword ptr [g_80d970]
        lea     ecx, [eax + eax*4]
        lea     ecx, [esi + ecx*8]
        mov     dword ptr [ecx], edx
        jnz     L_ce3a
        push    0x78c8ac
        push    0x0
        call    FUN_00562f10
        mov     eax, dword ptr [g_80d97c]
        add     esp, 0x8
L_ce3a:
        mov     ecx, dword ptr [ebp + 0x8]
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [g_80d970]
        push    ecx
        lea     ebx, [eax + edx*8]
        call    dword ptr [g_76b304]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        add     esp, 0x4
        repne   scasb
        mov     eax, dword ptr [ebp - 0x4]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [ebx]
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [g_8058b8]
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [g_8058ec]
        mov     dword ptr [ebx + 0x8], eax
        __emit 0x8D   /* __emit: no-base SIB lea ecx,[eax*4+0] -> 8D 0C 85 00000000 */
        __emit 0x0C
        __emit 0x85
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L_cf4c
        push    eax
        push    ecx
        call    FUN_006f3c80
        mov     edi, dword ptr [esi + 0x14]
        cmp     edi, dword ptr [esi + 0x18]
        mov     dword ptr [ebp - 0x14], eax
        jz      L_cebd
        test    edi, edi
        jz      L_ceaf
        mov     dword ptr [edi], eax
L_ceaf:
        mov     ecx, dword ptr [ebp - 0x14]
        add     edi, 0x4
        mov     dword ptr [esi + 0x14], edi
        jmp     L_cf4e
L_cebd:
        mov     ebx, dword ptr [esi + 0x10]
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [ebp - 0xc], 0x1
        mov     dword ptr [ebp - 0x2c], eax
        lea     ecx, [ebp - 0xc]
        jc      L_cedc
        lea     ecx, [ebp - 0x2c]
L_cedc:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [ebp - 0x10], ecx
        jz      L_cefa
        __emit 0x8D   /* __emit: no-base SIB lea edx,[ecx*4+0] -> 8D 14 8D 00000000 */
        __emit 0x14
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [ebp - 0x8], eax
        jmp     L_cf01
L_cefa:
        mov     dword ptr [ebp - 0x8], 0x0
L_cf01:
        mov     eax, dword ptr [ebp - 0x8]
        push    eax
        push    edi
        push    ebx
        call    FUN_0061ee80
        add     esp, 0xc
        test    eax, eax
        jz      L_cf18
        mov     ecx, dword ptr [ebp - 0x14]
        mov     dword ptr [eax], ecx
L_cf18:
        add     eax, 0x4
        push    eax
        push    edi
        push    edi
        call    FUN_0061ee80
        add     esp, 0xc
        test    ebx, ebx
        mov     edi, eax
        jz      L_cf35
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_cf35:
        mov     eax, dword ptr [ebp - 0x8]
        mov     edx, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp - 0x14]
        mov     dword ptr [esi + 0x10], eax
        lea     eax, [eax + edx*4]
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], eax
        jmp     L_cf4e
L_cf4c:
        xor     ecx, ecx
L_cf4e:
        test    ecx, ecx
        mov     edx, dword ptr [g_80d97c]
        mov     esi, dword ptr [g_80d970]
        lea     eax, [edx + edx*4]
        lea     eax, [esi + eax*8 + 0xc]
        mov     dword ptr [eax], ecx
        jnz     L_cf7c
        push    0x78c878
        push    0x0
        call    FUN_00562f10
        mov     edx, dword ptr [g_80d97c]
        add     esp, 0x8
L_cf7c:
        mov     eax, dword ptr [g_8058ec]
        test    eax, eax
        mov     dword ptr [ebp - 0x4], 0x0
        jle     L_d0d3
        mov     ebx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x8], 0x7f50a0
L_cf9a:
        mov     edi, dword ptr [ebp - 0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        mov     edi, dword ptr [g_8058b8]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        not     ecx
        jz      L_d07b
        push    eax
        push    ecx
        call    FUN_006f3c80
        mov     esi, dword ptr [edi + 0x14]
        cmp     esi, dword ptr [edi + 0x18]
        mov     dword ptr [ebp - 0x18], eax
        jz      L_cfe3
        test    esi, esi
        jz      L_cfcf
        mov     dword ptr [esi], eax
L_cfcf:
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [g_80d97c]
        add     esi, 0x4
        mov     dword ptr [edi + 0x14], esi
        jmp     L_d07d
L_cfe3:
        mov     ebx, dword ptr [edi + 0x10]
        mov     eax, esi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [ebp - 0x30], 0x1
        mov     dword ptr [ebp - 0x34], eax
        lea     ecx, [ebp - 0x30]
        jc      L_d002
        lea     ecx, [ebp - 0x34]
L_d002:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [ebp - 0x14], ecx
        jz      L_d020
        __emit 0x8D   /* __emit: no-base SIB lea edx,[ecx*4+0] -> 8D 14 8D 00000000 */
        __emit 0x14
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [ebp - 0xc], eax
        jmp     L_d027
L_d020:
        mov     dword ptr [ebp - 0xc], 0x0
L_d027:
        mov     eax, dword ptr [ebp - 0xc]
        push    eax
        push    esi
        push    ebx
        call    FUN_0061ee80
        add     esp, 0xc
        test    eax, eax
        jz      L_d03e
        mov     ecx, dword ptr [ebp - 0x18]
        mov     dword ptr [eax], ecx
L_d03e:
        add     eax, 0x4
        push    eax
        push    esi
        push    esi
        call    FUN_0061ee80
        add     esp, 0xc
        test    ebx, ebx
        mov     esi, eax
        jz      L_d05b
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_d05b:
        mov     eax, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp - 0x14]
        mov     ebx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     dword ptr [edi + 0x10], eax
        lea     eax, [eax + edx*4]
        mov     edx, dword ptr [g_80d97c]
        mov     dword ptr [edi + 0x14], esi
        mov     dword ptr [edi + 0x18], eax
        jmp     L_d07d
L_d07b:
        xor     ecx, ecx
L_d07d:
        mov     esi, dword ptr [g_80d970]
        mov     edi, dword ptr [ebp - 0x8]
        lea     eax, [edx + edx*4]
        lea     eax, [esi + eax*8 + 0xc]
        mov     esi, dword ptr [eax]
        mov     dword ptr [esi + ebx*4], ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [ebp - 0x34], esi
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [ebp - 0x34]
        mov     edi, dword ptr [edi + ebx*4]
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [g_8058ec]
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebp - 0x8]
        inc     ebx
        add     ecx, 0x100
        cmp     ebx, eax
        mov     dword ptr [ebp - 0x4], ebx
        mov     dword ptr [ebp - 0x8], ecx
        jl      L_cf9a
L_d0d3:
        mov     ecx, dword ptr [g_80da30]
        xor     ebx, ebx
        cmp     ecx, ebx
        jle     L_d20f
        mov     esi, dword ptr [g_80d970]
        lea     eax, [edx + edx*4]
        mov     dword ptr [esi + eax*8 + 0x10], ecx
        mov     esi, dword ptr [g_8058b8]
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ebx
        __emit 0x8D   /* __emit: no-base SIB lea edi,[ecx*4+0] -> 8D 3C 8D 00000000 */
        __emit 0x3C
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        jz      L_d1c6
        push    eax
        push    edi
        call    FUN_006f3c80
        mov     edi, dword ptr [esi + 0x14]
        cmp     edi, dword ptr [esi + 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        jz      L_d12b
        cmp     edi, ebx
        jz      L_d120
        mov     dword ptr [edi], eax
L_d120:
        add     edi, 0x4
        mov     dword ptr [esi + 0x14], edi
        jmp     L_d1b5
L_d12b:
        mov     ebx, dword ptr [esi + 0x10]
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [ebp - 0x8], 0x1
        mov     dword ptr [ebp - 0x38], eax
        lea     ecx, [ebp - 0x8]
        jc      L_d14a
        lea     ecx, [ebp - 0x38]
L_d14a:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [ebp - 0x18], ecx
        jz      L_d168
        __emit 0x8D   /* __emit: no-base SIB lea edx,[ecx*4+0] -> 8D 14 8D 00000000 */
        __emit 0x14
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [ebp - 0xc], eax
        jmp     L_d16f
L_d168:
        mov     dword ptr [ebp - 0xc], 0x0
L_d16f:
        mov     eax, dword ptr [ebp - 0xc]
        push    eax
        push    edi
        push    ebx
        call    FUN_0061ee80
        add     esp, 0xc
        test    eax, eax
        jz      L_d186
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     dword ptr [eax], ecx
L_d186:
        add     eax, 0x4
        push    eax
        push    edi
        push    edi
        call    FUN_0061ee80
        add     esp, 0xc
        test    ebx, ebx
        mov     edi, eax
        jz      L_d1a3
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_d1a3:
        mov     eax, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [esi + 0x10], eax
        lea     eax, [eax + edx*4]
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], eax
L_d1b5:
        mov     esi, dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [g_80d97c]
        mov     ecx, dword ptr [g_80da30]
        jmp     L_d1c8
L_d1c6:
        xor     esi, esi
L_d1c8:
        mov     edi, dword ptr [g_80d970]
        lea     eax, [edx + edx*4]
        xor     ebx, ebx
        cmp     esi, ebx
        lea     eax, [edi + eax*8 + 0x14]
        mov     dword ptr [eax], esi
        jnz     L_d1f7
        push    0x78c844
        push    ebx
        call    FUN_00562f10
        mov     edx, dword ptr [g_80d97c]
        mov     ecx, dword ptr [g_80da30]
        add     esp, 0x8
L_d1f7:
        cmp     ecx, ebx
        jle     L_d20f
        mov     esi, dword ptr [g_80d970]
        lea     eax, [edx + edx*4]
        mov     edi, dword ptr [esi + eax*8 + 0x14]
        mov     esi, 0x80d9c0
        rep     movsd
L_d20f:
        mov     eax, dword ptr [g_80d970]
        lea     ecx, [edx + edx*4]
        lea     eax, [eax + ecx*8]
        mov     ecx, dword ptr [g_80594c]
        cmp     ecx, ebx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], ebx
        mov     dword ptr [eax + 0x20], ebx
        jz      L_d382
        mov     edi, dword ptr [g_8058b8]
        mov     eax, dword ptr [edi + 0xc]
        cmp     eax, ebx
        __emit 0x8D   /* __emit: no-base SIB lea esi,[ecx*4+0] -> 8D 34 8D 00000000 */
        __emit 0x34
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        jz      L_d307
        push    eax
        push    esi
        call    FUN_006f3c80
        mov     esi, dword ptr [edi + 0x14]
        cmp     esi, dword ptr [edi + 0x18]
        mov     dword ptr [ebp - 0x20], eax
        jz      L_d26c
        cmp     esi, ebx
        jz      L_d261
        mov     dword ptr [esi], eax
L_d261:
        add     esi, 0x4
        mov     dword ptr [edi + 0x14], esi
        jmp     L_d2f6
L_d26c:
        mov     ebx, dword ptr [edi + 0x10]
        mov     eax, esi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [ebp - 0x3c], 0x1
        mov     dword ptr [ebp - 0x40], eax
        lea     ecx, [ebp - 0x3c]
        jc      L_d28b
        lea     ecx, [ebp - 0x40]
L_d28b:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [ebp - 0x1c], ecx
        jz      L_d2a9
        __emit 0x8D   /* __emit: no-base SIB lea edx,[ecx*4+0] -> 8D 14 8D 00000000 */
        __emit 0x14
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [ebp - 0xc], eax
        jmp     L_d2b0
L_d2a9:
        mov     dword ptr [ebp - 0xc], 0x0
L_d2b0:
        mov     eax, dword ptr [ebp - 0xc]
        push    eax
        push    esi
        push    ebx
        call    FUN_0061ee80
        add     esp, 0xc
        test    eax, eax
        jz      L_d2c7
        mov     ecx, dword ptr [ebp - 0x20]
        mov     dword ptr [eax], ecx
L_d2c7:
        add     eax, 0x4
        push    eax
        push    esi
        push    esi
        call    FUN_0061ee80
        add     esp, 0xc
        test    ebx, ebx
        mov     esi, eax
        jz      L_d2e4
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_d2e4:
        mov     eax, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp - 0x1c]
        mov     dword ptr [edi + 0x10], eax
        lea     eax, [eax + edx*4]
        mov     dword ptr [edi + 0x14], esi
        mov     dword ptr [edi + 0x18], eax
L_d2f6:
        mov     esi, dword ptr [ebp - 0x20]
        mov     edx, dword ptr [g_80d97c]
        mov     ecx, dword ptr [g_80594c]
        jmp     L_d309
L_d307:
        xor     esi, esi
L_d309:
        test    esi, esi
        mov     edi, dword ptr [g_80d970]
        lea     eax, [edx + edx*4]
        lea     eax, [edi + eax*8 + 0x1c]
        mov     dword ptr [eax], esi
        jnz     L_d337
        push    0x78c808
        push    0x0
        call    FUN_00562f10
        mov     edx, dword ptr [g_80d97c]
        mov     ecx, dword ptr [g_80594c]
        add     esp, 0x8
L_d337:
        mov     esi, dword ptr [g_80d970]
        shl     ecx, 0x2
        mov     dword ptr [ebp - 0x40], ecx
        mov     ebx, ecx
        shr     ecx, 0x2
        lea     eax, [edx + edx*4]
        mov     edi, dword ptr [esi + eax*8 + 0x1c]
        lea     eax, [esi + eax*8]
        mov     esi, dword ptr [g_805938]
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, ebx
        mov     dword ptr [eax + 0x20], ecx
        mov     esi, dword ptr [eax + 0x18]
        xor     ebx, ebx
        xor     ecx, ecx
        cmp     esi, ebx
        jle     L_d382
L_d371:
        mov     esi, dword ptr [eax + 0x1c]
        mov     esi, dword ptr [esi + ecx*4]
        add     dword ptr [eax + 0x20], esi
        mov     esi, dword ptr [eax + 0x18]
        inc     ecx
        cmp     ecx, esi
        jl      L_d371
L_d382:
        mov     dword ptr [eax + 0x24], ebx
        mov     eax, dword ptr [ebp + 0x14]
        inc     edx
        cmp     eax, ebx
        mov     dword ptr [g_80d97c], edx
        jz      L_d39b
        mov     ecx, dword ptr [g_8058c8]
        mov     dword ptr [eax], ecx
L_d39b:
        mov     eax, dword ptr [ebp + 0x18]
        cmp     eax, ebx
        jz      L_d3aa
        mov     ecx, dword ptr [g_8058cc]
        mov     dword ptr [eax], ecx
L_d3aa:
        mov     eax, dword ptr [ebp + 0x10]
        cmp     eax, ebx
        jz      L_d3b9
        mov     ecx, dword ptr [g_7de630]
        mov     dword ptr [eax], ecx
L_d3b9:
        mov     dword ptr [g_7dde28], ebx
        lea     eax, [edx - 0x1]
L_d3c2:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
