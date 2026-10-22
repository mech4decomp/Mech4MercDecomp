/*
 * FUN_00471DC8 (1471 B) — MLR data-block function (block 0x471DC8).
 * NOTE: the first 9 bytes (0x471DC8..0x471DD0) are the tail of the
 * preceding function (misaligned when disassembled from the block start);
 * the real function body begins at 0x471DD1. Transcribed verbatim so the
 * block bytes match exactly.
 *
 * Body: builds an MLR object (0x60-byte buffer, 0x18-byte byte table,
 * 0x80-byte buffer of 0x10-element structs, 0x40/0x80 float arrays) and
 * dispatches through the object vtable (offsets 0xc/0x14/0x24/0x2c/0x88/0x94).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0046fbc0(void);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_006f49a0(void);

extern unsigned int g_7d9984;

__declspec(naked) void FUN_00471DC8(void)
{
    __asm {
        /* ---- block head: tail of previous function (verbatim) ---- */
        add     al, 0x67
        stc
        inc     dword ptr [ebx - 0x3f7afb3c]
        /* ---- real function body starts at 0x471DD1 ---- */
        je      L_1de5
        mov     ecx, dword ptr [g_7d9984]
        push    ecx
        mov     ecx, eax
        call    FUN_0046fbc0
        mov     esi, eax
        jmp     L_1de7
    L_1de5:
        xor     esi, esi
    L_1de7:
        mov     ebx, dword ptr [esi + 0xc]
        mov     ebp, dword ptr [ebx + 0x14]
        cmp     ebp, 8
        mov     dword ptr [esp + 0x14], ebx
        je      L_1e85
        push    0x60
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        je      L_1e21
        push    0x454eb0
        push    8
        push    0xc
        push    edi
        call    FUN_00406c90
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], ecx
        jmp     L_1e2d
    L_1e21:
        mov     dword ptr [esp + 0x10], 0
        mov     ecx, dword ptr [esp + 0x10]
    L_1e2d:
        mov     edx, dword ptr [ebx + 0x10]
        test    edx, edx
        je      L_1e7b
        cmp     ebp, 8
        mov     eax, 8
        ja      L_1e40
        mov     eax, ebp
    L_1e40:
        mov     edi, eax
        dec     eax
        test    edi, edi
        je      L_1e6b
        lea     edi, [eax + eax*2]
        mov     ebx, edx
        lea     edi, [ecx + edi*4]
        sub     ebx, ecx
        lea     ebp, [eax + 1]
    L_1e54:
        lea     edx, [ebx + edi]
        push    edx
        mov     ecx, edi
        call    FUN_0040ccd0
        dec     ebp
        sub     edi, 0xc
        test    ebp, ebp
        ja      L_1e54
        mov     ebx, dword ptr [esp + 0x14]
    L_1e6b:
        mov     eax, dword ptr [ebx + 0x10]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x14]
        add     esp, 4
    L_1e7b:
        mov     dword ptr [ebx + 0x10], ecx
        mov     dword ptr [ebx + 0x14], 8
    L_1e85:
        fld     dword ptr [esp + 0x2c]
        mov     edi, dword ptr [esp + 0x2c]
        fchs
        push    edi
        fstp    dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x20]
        mov     ebp, dword ptr [esp + 0x14]
        push    ebp
        push    edi
        call    FUN_0040c9c0
        mov     ebx, dword ptr [ebx + 0x10]
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, ebx
        call    FUN_0040c410
        push    edi
        push    ebp
        push    ebp
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [ebx + 0xc]
        call    FUN_0040c410
        push    ebp
        push    ebp
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [ebx + 0x18]
        call    FUN_0040c410
        push    ebp
        push    ebp
        push    ebp
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [ebx + 0x24]
        call    FUN_0040c410
        push    edi
        push    edi
        push    ebp
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [ebx + 0x30]
        call    FUN_0040c410
        push    edi
        push    edi
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [ebx + 0x3c]
        call    FUN_0040c410
        push    ebp
        push    edi
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [ebx + 0x48]
        call    FUN_0040c410
        push    ebp
        push    edi
        push    ebp
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [ebx + 0x54]
        call    FUN_0040c410
        mov     edi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [edi + 0xc]
        cmp     ebx, 6
        je      L_1fb3
        push    6
        call    FUN_004084d0
        mov     ecx, dword ptr [edi + 8]
        add     esp, 4
        test    ecx, ecx
        mov     ebp, eax
        je      L_1fa9
        cmp     ebx, 6
        mov     eax, 6
        ja      L_1f8c
        mov     eax, ebx
    L_1f8c:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_1fa0
    L_1f93:
        mov     dl, byte ptr [ecx + eax]
        mov     byte ptr [eax + ebp], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jne     L_1f93
    L_1fa0:
        push    ecx
        call    FUN_004084e0
        add     esp, 4
    L_1fa9:
        mov     dword ptr [edi + 8], ebp
        mov     dword ptr [edi + 0xc], 6
    L_1fb3:
        mov     eax, dword ptr [edi + 8]
        mov     edx, eax
        push    1
        mov     ecx, 0x4040404
        mov     dword ptr [edx], ecx
        mov     word ptr [edx + 4], cx
        mov     edx, dword ptr [esi]
        push    6
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [esi]
        push    8
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edi, dword ptr [esi + 0xc]
        mov     ebx, dword ptr [edi + 4]
        cmp     ebx, 0x18
        je      L_202b
        push    0x18
        call    FUN_004084d0
        mov     ecx, dword ptr [edi]
        add     esp, 4
        test    ecx, ecx
        mov     ebp, eax
        je      L_2022
        cmp     ebx, 0x18
        mov     eax, 0x18
        ja      L_2005
        mov     eax, ebx
    L_2005:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_2019
    L_200c:
        mov     dl, byte ptr [ecx + eax]
        mov     byte ptr [eax + ebp], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jne     L_200c
    L_2019:
        push    ecx
        call    FUN_004084e0
        add     esp, 4
    L_2022:
        mov     dword ptr [edi], ebp
        mov     dword ptr [edi + 4], 0x18
    L_202b:
        mov     eax, dword ptr [edi]
        mov     byte ptr [eax], 0
        mov     byte ptr [eax + 1], 2
        mov     byte ptr [eax + 2], 6
        mov     cl, 5
        mov     byte ptr [eax + 3], cl
        mov     byte ptr [eax + 4], 0
        mov     byte ptr [eax + 5], cl
        mov     bl, 4
        mov     byte ptr [eax + 6], bl
        mov     byte ptr [eax + 7], 1
        mov     byte ptr [eax + 8], cl
        mov     byte ptr [eax + 9], 6
        mov     dl, 7
        mov     byte ptr [eax + 0xa], dl
        mov     byte ptr [eax + 0xb], bl
        mov     byte ptr [eax + 0xc], 2
        mov     cl, 3
        mov     byte ptr [eax + 0xd], cl
        mov     byte ptr [eax + 0xe], dl
        mov     byte ptr [eax + 0xf], 6
        mov     byte ptr [eax + 0x10], 1
        mov     byte ptr [eax + 0x11], bl
        mov     byte ptr [eax + 0x12], dl
        mov     edx, dword ptr [esi]
        mov     byte ptr [eax + 0x13], cl
        mov     byte ptr [eax + 0x14], 0
        mov     byte ptr [eax + 0x15], 1
        mov     byte ptr [eax + 0x16], cl
        push    0x18
        push    eax
        mov     ecx, esi
        mov     byte ptr [eax + 0x17], 2
        call    dword ptr [edx + 0x88]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x94]
        mov     edi, dword ptr [esi + 0xc]
        mov     ebp, dword ptr [edi + 0x1c]
        add     edi, 0x18
        cmp     ebp, 0x10
        je      L_211a
        push    0x80
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        test    ebx, ebx
        je      L_20d1
        push    0x423b70
        push    0x10
        push    8
        push    ebx
        call    FUN_00406c90
        jmp     L_20d3
    L_20d1:
        xor     ebx, ebx
    L_20d3:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        je      L_2111
        cmp     ebp, 0x10
        jbe     L_20e3
        mov     ebp, 0x10
    L_20e3:
        mov     edx, ebp
        dec     ebp
        test    edx, edx
        je      L_2106
        lea     eax, [ebx + ebp*8]
        sub     ecx, ebx
        lea     edx, [ebp + 1]
    L_20f2:
        mov     ebp, dword ptr [ecx + eax]
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [ecx + eax + 4]
        mov     dword ptr [eax + 4], ebp
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_20f2
    L_2106:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_2111:
        mov     dword ptr [edi], ebx
        mov     dword ptr [edi + 4], 0x10
    L_211a:
        mov     eax, dword ptr [edi]
        mov     dword ptr [esp + 0x14], 0
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], 0
        mov     ebx, dword ptr [esp + 0x18]
        mov     ecx, 0x10
    L_2139:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], ebx
        add     eax, 8
        dec     ecx
        jne     L_2139
        mov     ebx, dword ptr [esp + 0x30]
        test    ebx, ebx
        je      L_2257
        mov     eax, dword ptr [esi]
        push    0
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        test    dword ptr [ebx], 0x3fff
        jbe     L_2257
        mov     eax, dword ptr [edi]
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax], ecx
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [esp + 0x14], 0x3f800000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [esp + 0x14], 0x3e800000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [esp + 0x18], 0x3e800000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x14], edx
        mov     dword ptr [esp + 0x14], 0x3f400000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [esp + 0x18], 0x3e800000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [esp + 0x14], 0x3f800000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [esp + 0x18], 0x3f800000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x24], edx
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [esp + 0x18], 0x3f800000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x2c], edx
        mov     dword ptr [esp + 0x14], 0x3e800000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], 0x3f400000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x34], edx
        mov     dword ptr [esp + 0x14], 0x3f400000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], 0x3f400000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x38], ecx
        mov     dword ptr [eax + 0x3c], edx
    L_2257:
        mov     ebp, dword ptr [esp + 0x34]
        test    ebp, ebp
        je      L_236c
        mov     eax, dword ptr [esi]
        push    1
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        test    dword ptr [ebp], 0x3fff
        jbe     L_236c
        mov     eax, dword ptr [edi]
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x40], ecx
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x44], edx
        mov     dword ptr [esp + 0x14], 0x3f800000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x48], ecx
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x4c], edx
        mov     dword ptr [esp + 0x14], 0x3e800000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x50], ecx
        mov     dword ptr [esp + 0x18], 0x3e800000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x54], edx
        mov     dword ptr [esp + 0x14], 0x3f400000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x58], ecx
        mov     dword ptr [esp + 0x18], 0x3e800000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x5c], edx
        mov     dword ptr [esp + 0x14], 0x3f800000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x60], ecx
        mov     dword ptr [esp + 0x18], 0x3f800000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x64], edx
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x68], ecx
        mov     dword ptr [esp + 0x18], 0x3f800000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x6c], edx
        mov     dword ptr [esp + 0x14], 0x3e800000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], 0x3f400000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x70], ecx
        mov     dword ptr [eax + 0x74], edx
        mov     dword ptr [esp + 0x14], 0x3f400000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], 0x3f400000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x78], ecx
        mov     dword ptr [eax + 0x7c], edx
    L_236c:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x10
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x2c]
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret
    }
}
