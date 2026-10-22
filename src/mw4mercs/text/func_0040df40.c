/*
 * FUN_0040df40 (1293 B) — loader/parser driver in the engine region. Reads
 * lines via a virtual call (vtable +0x2c), strips comments/paths, and
 * dispatches tokens to FUN_0040e7e0 / FUN_0040ec30 / FUN_0040db80 /
 * FUN_0040e550. RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8810;
extern void *g_0076b308;                 /* IAT: strchr */
extern void *g_0076b304;                 /* IAT: _strlwr */
extern char g_76d13c[];                  /* comparison string */
extern char g_76d120[];                  /* string literal */
extern char g_76d104[];                  /* string literal */
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_0040f270(void);
extern void __cdecl FUN_0040f250(void);
extern void __cdecl FUN_0040db80(void);
extern void __cdecl FUN_0040e7e0(void);
extern void __cdecl FUN_0040ec30(void);
extern void __cdecl FUN_0040e550(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040f310(void);
extern void __cdecl FUN_0040f180(void);
extern void __cdecl FUN_00410890(void);
extern void __cdecl FUN_0040f2f0(void);

__declspec(naked) void FUN_0040df40(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x410
        mov     eax, dword ptr [ebp+0x10]
        push    ebx
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [ebp-8], ecx
        mov     dword ptr [ebp-0xc], edi
        jnz     L_df61
        lea     eax, [ebp-0xc]
        mov     dword ptr [ebp+0x10], eax
L_df61:
        mov     eax, dword ptr [ebp+0xc]
        cmp     eax, edi
        mov     dword ptr [ebp-0x10], eax
        jnz     L_dfa5
        mov     ecx, dword ptr [g_007b8810]
        push    ecx
        push    0xc
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 8
        cmp     esi, edi
        jz      L_dfa2
        lea     edx, [ebp+0xf]
        push    edx
        mov     ecx, esi
        call    FUN_0040f270
        mov     al, byte ptr [ebp+0x17]
        mov     ecx, esi
        mov     dword ptr [esi+4], edi
        mov     byte ptr [esi+8], al
        call    FUN_0040f250
        mov     dword ptr [ebp+0xc], esi
        jmp     L_dfa5
L_dfa2:
        mov     dword ptr [ebp+0xc], edi
L_dfa5:
        mov     ecx, dword ptr [ebp+8]
        mov     edx, dword ptr [ecx]
        push    edi
        push    0x200
        lea     eax, [ebp-0x210]
        push    eax
        mov     byte ptr [ebp-1], 0
        call    dword ptr [edx+0x2c]
        test    al, al
        jz      L_e25c
L_dfc6:
        cmp     byte ptr [ebp-0x210], 0x40
        jnz     L_e04a
        lea     eax, [ebp-0x210]
L_dfd5:
        mov     cl, byte ptr [eax+1]
        mov     byte ptr [eax], cl
        mov     cl, byte ptr [eax+1]
        inc     eax
        test    cl, cl
        jnz     L_dfd5
L_dfe2:
        lea     eax, [ebp-0x210]
L_dfe8:
        push    0x2f
        push    eax
        xor     ebx, ebx
        call    dword ptr [g_0076b308]
        add     esp, 8
        test    eax, eax
        jz      L_e0e7
L_dffe:
        mov     cl, byte ptr [eax+1]
        cmp     cl, 0x2f
        lea     edi, [eax+1]
        jz      L_e0df
        cmp     byte ptr [eax-1], 0x2a
        lea     edx, [eax-1]
        jnz     L_e0be
        mov     al, byte ptr [ebp-1]
        test    al, al
        jnz     L_e066
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        xor     ebx, ebx
        rep     movsb
        mov     eax, edx
        mov     byte ptr [ebp-1], bl
        jmp     L_e0cb
L_e04a:
        mov     edx, dword ptr [ebp-8]
        mov     al, byte ptr [edx+6]
        test    al, al
        jnz     L_dfe2
        lea     eax, [ebp-0x210]
        push    eax
        call    dword ptr [g_0076b304]
        add     esp, 4
        jmp     L_dfe8
L_e066:
        test    ebx, ebx
        jnz     L_e098
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebp-0x210]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        lea     eax, [ebp-0x210]
        mov     byte ptr [ebp-1], bl
        jmp     L_e0cb
L_e098:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        mov     eax, ebx
        xor     ebx, ebx
        rep     movsb
        mov     byte ptr [ebp-1], bl
        jmp     L_e0cb
L_e0be:
        cmp     cl, 0x2a
        jnz     L_e0c9
        mov     byte ptr [ebp-1], 1
        mov     ebx, eax
L_e0c9:
        mov     eax, edi
L_e0cb:
        push    0x2f
        push    eax
        call    dword ptr [g_0076b308]
        add     esp, 8
        test    eax, eax
        jnz     L_dffe
L_e0df:
        test    ebx, ebx
        jz      L_e0e7
        mov     eax, ebx
        jmp     L_e0f2
L_e0e7:
        mov     cl, byte ptr [ebp-1]
        test    cl, cl
        jnz     L_e21f
L_e0f2:
        test    eax, eax
        jz      L_e0f9
        mov     byte ptr [eax], 0
L_e0f9:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebp-0x210]
        repne   scasb
        not     ecx
        dec     ecx
        lea     eax, [ebp+ecx-0x211]
        lea     ecx, [ebp-0x210]
        cmp     eax, ecx
        jc      L_e134
L_e11a:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x20
        jz      L_e126
        cmp     cl, 0x9
        jnz     L_e134
L_e126:
        mov     byte ptr [eax], 0
        dec     eax
        lea     edx, [ebp-0x210]
        cmp     eax, edx
        jnc     L_e11a
L_e134:
        lea     edi, [ebp-0x210]
L_e13a:
        mov     al, byte ptr [edi]
        cmp     al, 0x20
        jz      L_e144
        cmp     al, 0x9
        jnz     L_e147
L_e144:
        inc     edi
        jmp     L_e13a
L_e147:
        mov     dl, byte ptr [edi]
        test    dl, dl
        jz      L_e21f
        mov     esi, offset g_76d13c
        mov     eax, edi
L_e158:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_e17c
        test    cl, cl
        jz      L_e178
        mov     bl, byte ptr [eax+1]
        mov     cl, bl
        cmp     bl, byte ptr [esi+1]
        jnz     L_e17c
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_e158
L_e178:
        xor     eax, eax
        jmp     L_e181
L_e17c:
        sbb     eax, eax
        sbb     eax, -1
L_e181:
        test    eax, eax
        jz      L_e1d8
        mov     esi, dword ptr [ebp-8]
        cmp     dword ptr [esi+8], 2
        jz      L_e20b
        cmp     dl, 0x21
        jz      L_e1e5
        cmp     dl, 0x23
        jz      L_e1f8
        push    0x24
        push    edi
        call    dword ptr [g_0076b308]
        add     esp, 8
        test    eax, eax
        jz      L_e20b
        cmp     byte ptr [eax+1], 0x28
        jnz     L_e20b
        mov     edx, dword ptr [ebp+0xc]
        push    0x200
        lea     eax, [ebp-0x410]
        push    eax
        lea     ecx, [ebp-0x210]
        push    ecx
        push    edx
        call    FUN_0040db80
        add     esp, 0x10
        lea     edi, [ebp-0x410]
        jmp     L_e13a
L_e1d8:
        mov     al, byte ptr [ebp+0x14]
        test    al, al
        jnz     L_e2e7
        jmp     L_e21f
L_e1e5:
        mov     eax, dword ptr [ebp+0x10]
        mov     ecx, dword ptr [ebp+0xc]
        push    eax
        push    ecx
        inc     edi
        push    edi
        mov     ecx, esi
        call    FUN_0040e7e0
        jmp     L_e21f
L_e1f8:
        mov     edx, dword ptr [ebp+0x10]
        mov     eax, dword ptr [ebp+0xc]
        push    edx
        push    eax
        inc     edi
        push    edi
        mov     ecx, esi
        call    FUN_0040ec30
        jmp     L_e21f
L_e20b:
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ebp+8]
        push    edi
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_0040e550
L_e21f:
        mov     ecx, dword ptr [ebp+8]
        mov     edx, dword ptr [ecx]
        push    0
        push    0x200
        lea     eax, [ebp-0x210]
        push    eax
        call    dword ptr [edx+0x2c]
        test    al, al
        jnz     L_dfc6
        mov     al, byte ptr [ebp-1]
        test    al, al
        jz      L_e25c
        mov     ecx, dword ptr [ebp-8]
        mov     edx, dword ptr [ecx]
        push    edx
        push    offset g_76d120
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L_e25c
        int     3
L_e25c:
        mov     al, byte ptr [ebp+0x14]
        test    al, al
        jz      L_e27b
        mov     eax, dword ptr [ebp-8]
        mov     ecx, dword ptr [eax]
        push    ecx
        push    offset g_76d104
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L_e27b
        int     3
L_e27b:
        mov     eax, dword ptr [ebp-0x10]
        test    eax, eax
        jnz     L_e43d
        mov     ebx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ebx]
        mov     esi, dword ptr [eax+8]
        cmp     esi, eax
        jz      L_e3d2
L_e296:
        mov     edi, dword ptr [esi+0x14]
        test    edi, edi
        jz      L_e2bf
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_e2b6
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_e2b6
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_e2b6:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_e2bf:
        mov     ecx, dword ptr [esi+0xc]
        test    ecx, ecx
        mov     eax, esi
        jz      L_e3af
        mov     eax, ecx
        mov     ecx, dword ptr [eax+8]
        test    ecx, ecx
        jz      L_e3c8
L_e2d9:
        mov     eax, ecx
        mov     ecx, dword ptr [eax+8]
        test    ecx, ecx
        jnz     L_e2d9
        jmp     L_e3c8
L_e2e7:
        mov     eax, dword ptr [ebp-0x10]
        test    eax, eax
        mov     ecx, dword ptr [ebp-8]
        mov     byte ptr [ecx+4], 0
        jnz     L_e444
        mov     ebx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ebx]
        mov     esi, dword ptr [eax+8]
        cmp     esi, eax
        jz      L_e36a
L_e305:
        mov     edi, dword ptr [esi+0x14]
        test    edi, edi
        jz      L_e32e
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_e325
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_e325
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_e325:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_e32e:
        mov     ecx, dword ptr [esi+0xc]
        test    ecx, ecx
        mov     eax, esi
        jz      L_e34b
        mov     eax, ecx
        mov     ecx, dword ptr [eax+8]
        test    ecx, ecx
        jz      L_e364
L_e340:
        mov     eax, ecx
        mov     ecx, dword ptr [eax+8]
        test    ecx, ecx
        jnz     L_e340
        jmp     L_e364
L_e34b:
        mov     ecx, dword ptr [esi+4]
        cmp     esi, dword ptr [ecx+0xc]
        jnz     L_e35d
L_e353:
        mov     eax, ecx
        mov     ecx, dword ptr [ecx+4]
        cmp     eax, dword ptr [ecx+0xc]
        jz      L_e353
L_e35d:
        cmp     dword ptr [eax+0xc], ecx
        jz      L_e364
        mov     eax, ecx
L_e364:
        cmp     eax, dword ptr [ebx]
        mov     esi, eax
        jnz     L_e305
L_e36a:
        test    ebx, ebx
        jz      L_e444
        mov     eax, dword ptr [ebx+4]
        test    eax, eax
        jz      L_e396
        mov     edx, dword ptr [ebx]
        mov     eax, dword ptr [edx+4]
        push    eax
        mov     ecx, ebx
        call    FUN_0040f310
        mov     eax, dword ptr [ebx]
        xor     ecx, ecx
        mov     dword ptr [eax+8], eax
        mov     dword ptr [eax+4], ecx
        mov     dword ptr [eax+0xc], eax
        mov     dword ptr [ebx+4], ecx
L_e396:
        mov     ecx, ebx
        call    FUN_0040f180
        push    ebx
        call    FUN_004084e0
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_e3af:
        mov     ecx, dword ptr [esi+4]
        cmp     esi, dword ptr [ecx+0xc]
        jnz     L_e3c1
L_e3b7:
        mov     eax, ecx
        mov     ecx, dword ptr [ecx+4]
        cmp     eax, dword ptr [ecx+0xc]
        jz      L_e3b7
L_e3c1:
        cmp     dword ptr [eax+0xc], ecx
        jz      L_e3c8
        mov     eax, ecx
L_e3c8:
        cmp     eax, dword ptr [ebx]
        mov     esi, eax
        jnz     L_e296
L_e3d2:
        test    ebx, ebx
        jz      L_e43d
        mov     eax, dword ptr [ebx+4]
        test    eax, eax
        jz      L_e425
        mov     edx, dword ptr [ebx]
        mov     esi, dword ptr [edx+4]
        test    esi, esi
        jz      L_e40f
L_e3e6:
        mov     eax, dword ptr [esi+0xc]
        push    eax
        mov     ecx, ebx
        call    FUN_0040f310
        mov     edi, dword ptr [esi+8]
        push    0
        lea     ecx, [esi+0x10]
        call    FUN_00410890
        push    1
        push    esi
        call    FUN_0040f2f0
        add     esp, 8
        test    edi, edi
        mov     esi, edi
        jnz     L_e3e6
L_e40f:
        mov     eax, dword ptr [ebx]
        mov     dword ptr [eax+8], eax
        mov     dword ptr [eax+4], 0
        mov     dword ptr [eax+0xc], eax
        mov     dword ptr [ebx+4], 0
L_e425:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      L_e434
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_e434:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_e43d:
        mov     ecx, dword ptr [ebp-8]
        mov     byte ptr [ecx+4], 0
L_e444:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
