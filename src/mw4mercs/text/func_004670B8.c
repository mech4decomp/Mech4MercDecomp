/*
 * FUN_004670B8 (1241 B) — MLR object builder. Loads a settings object
 * (FUN_004651c0), allocates/initializes arrays (FUN_004084d0/e0,
 * FUN_00406c90 with ctor FUN_00454eb0 / FUN_00423b70), fills a 0x60-byte
 * node via FUN_0040c9c0 / FUN_0040c410, writes a fixed 0x18-byte byte table,
 * and calls vtable methods ([edx+0xc/0x88], [eax+0x24/0x94/0x14/0x2c]).
 *
 * The first 4 bytes (0x4670B8-0x4670BB: 14 14 FA FF) are garbage/padding
 * before the real function entry at 0x4670BC; they are reproduced verbatim.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004651c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00454eb0(void);
extern void __cdecl FUN_00423b70(void);

extern int g_7d993c;

__declspec(naked) void __cdecl FUN_004670B8(void)
{
    __asm {
        __emit  0x14                 /* garbage/padding bytes before function entry @ 0x4670BC */
        __emit  0x14
        __emit  0xFA
        __emit  0xFF
        add     esp, 4
        test    eax, eax
        je      L_d0d5
        mov     ecx, dword ptr [g_7d993c]
        push    ecx
        mov     ecx, eax
        call    FUN_004651c0
        mov     esi, eax
        jmp     L_d0d7
L_d0d5:
        xor     esi, esi
L_d0d7:
        mov     ebx, dword ptr [esi + 0xc]
        mov     ebp, dword ptr [ebx + 0x14]
        cmp     ebp, 8
        mov     dword ptr [esp + 0x14], ebx
        je      L_d175
        push    0x60
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        je      L_d111
        push    offset FUN_00454eb0
        push    8
        push    0xc
        push    edi
        call    FUN_00406c90
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], ecx
        jmp     L_d11d
L_d111:
        mov     dword ptr [esp + 0x10], 0
        mov     ecx, dword ptr [esp + 0x10]
L_d11d:
        mov     edx, dword ptr [ebx + 0x10]
        test    edx, edx
        je      L_d16b
        cmp     ebp, 8
        mov     eax, 8
        ja      L_d130
        mov     eax, ebp
L_d130:
        mov     edi, eax
        dec     eax
        test    edi, edi
        je      L_d15b
        lea     edi, [eax + eax*2]
        mov     ebx, edx
        lea     edi, [ecx + edi*4]
        sub     ebx, ecx
        lea     ebp, [eax + 1]
L_d144:
        lea     edx, [ebx + edi]
        push    edx
        mov     ecx, edi
        call    FUN_0040ccd0
        dec     ebp
        sub     edi, 0xc
        test    ebp, ebp
        ja      L_d144
        mov     ebx, dword ptr [esp + 0x14]
L_d15b:
        mov     eax, dword ptr [ebx + 0x10]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x14]
        add     esp, 4
L_d16b:
        mov     dword ptr [ebx + 0x10], ecx
        mov     dword ptr [ebx + 0x14], 8
L_d175:
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
        je      L_d2a3
        push    6
        call    FUN_004084d0
        mov     ecx, dword ptr [edi + 8]
        add     esp, 4
        test    ecx, ecx
        mov     ebp, eax
        je      L_d299
        cmp     ebx, 6
        mov     eax, 6
        ja      L_d27c
        mov     eax, ebx
L_d27c:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_d290
L_d283:
        mov     dl, byte ptr [ecx + eax]
        mov     byte ptr [eax + ebp], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jne     L_d283
L_d290:
        push    ecx
        call    FUN_004084e0
        add     esp, 4
L_d299:
        mov     dword ptr [edi + 8], ebp
        mov     dword ptr [edi + 0xc], 6
L_d2a3:
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
        je      L_d31b
        push    0x18
        call    FUN_004084d0
        mov     ecx, dword ptr [edi]
        add     esp, 4
        test    ecx, ecx
        mov     ebp, eax
        je      L_d312
        cmp     ebx, 0x18
        mov     eax, 0x18
        ja      L_d2f5
        mov     eax, ebx
L_d2f5:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_d309
L_d2fc:
        mov     dl, byte ptr [ecx + eax]
        mov     byte ptr [eax + ebp], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jne     L_d2fc
L_d309:
        push    ecx
        call    FUN_004084e0
        add     esp, 4
L_d312:
        mov     dword ptr [edi], ebp
        mov     dword ptr [edi + 4], 0x18
L_d31b:
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
        cmp     ebp, 8
        je      L_d407
        push    0x40
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        test    ebx, ebx
        je      L_d3be
        push    offset FUN_00423b70
        push    8
        push    8
        push    ebx
        call    FUN_00406c90
        jmp     L_d3c0
L_d3be:
        xor     ebx, ebx
L_d3c0:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        je      L_d3fe
        cmp     ebp, 8
        jbe     L_d3d0
        mov     ebp, 8
L_d3d0:
        mov     edx, ebp
        dec     ebp
        test    edx, edx
        je      L_d3f3
L_d3df:
        lea     eax, [ebx + ebp*8]
        sub     ecx, ebx
        lea     edx, [ebp + 1]
        mov     ebp, dword ptr [ecx + eax]
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [ecx + eax + 4]
        mov     dword ptr [eax + 4], ebp
        dec     edx
        sub     eax, 8
        test    edx, edx
        __emit  0x77                 /* ja rel8 (MSVC6 miscomputes backward offset across reloc) */
        __emit  0xEC
L_d3f3:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_d3fe:
        mov     dword ptr [edi], ebx
        mov     dword ptr [edi + 4], 8
L_d407:
        mov     eax, dword ptr [edi]
        mov     dword ptr [esp + 0x14], 0
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], 0
        mov     ebx, dword ptr [esp + 0x18]
        mov     ecx, 8
L_d426:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], ebx
        add     eax, 8
        dec     ecx
        jne     L_d426
        mov     ebx, dword ptr [esp + 0x30]
        test    ebx, ebx
        je      L_d544
        mov     eax, dword ptr [esi]
        push    0
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        test    dword ptr [ebx], 0x3fff
        jbe     L_d544
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
L_d544:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    8
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x2c]
        mov     edx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [esi + 0x90], edx
        mov     edx, dword ptr [esp + 0x44]
        push    1
        mov     dword ptr [esi + 0x94], eax
        mov     eax, dword ptr [esi]
        mov     dword ptr [esi + 0x98], ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi + 0x9c], edx
        call    dword ptr [eax + 0x14]
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
