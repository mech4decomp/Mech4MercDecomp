/*
 * FUN_006d1c20 (2812 B) — __thiscall (ECX = this), RET 0xC.
 * Terrain/heightmap processing: iterates a grid (width*height), computes
 * per-cell vector magnitudes, classifies cells into 5 buckets, then walks
 * per-cell state arrays (0x84/0x8c/0x94/0x9c) and per-column structure
 * lists (0x7c/0xa4) to update cell states and rebuild column structures.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl  FUN_00419460(void);
extern void __cdecl  FUN_0075dbbe(void);
extern void __cdecl  FUN_00707e70(void);
extern void __cdecl  FUN_0040c5d0(void);
extern void __cdecl  FUN_00428730(void);
extern void __cdecl  FUN_0040ca10(void);
extern void __cdecl  FUN_0040c610(void);
extern void __cdecl  FUN_00448d80(void);
extern void __cdecl  FUN_00448e00(void);
extern void __cdecl  FUN_00491cf0(void);
extern void __cdecl  FUN_00491d40(void);
extern void __cdecl  FUN_004084e0(void);
extern void __cdecl  FUN_006cf4c0(void);
extern void __cdecl  FUN_006cf530(void);
extern void __cdecl  FUN_006d1a10(void);
extern void __cdecl  FUN_006d1a70(void);
extern void __cdecl  FUN_006d4460(void);
extern void __cdecl  FUN_0075db4a(void);   /* _ftol */

extern unsigned char g_840010;   /* 0x00840010 */
extern int          g_840018;    /* 0x00840018 */
extern char         g_7b9460;    /* 0x007b9460 */
extern char         g_6d2750;    /* 0x006d2750 */
extern char         g_7b8d88;    /* 0x007b8d88 */
extern float        g_76d070;    /* 0x0076d070 */
extern float        g_76c5b0;    /* 0x0076c5b0 */
extern float        g_770120;    /* 0x00770120 */
extern float        g_79e994;    /* 0x0079e994 */
extern float        g_79e990;    /* 0x0079e990 */
extern float        g_786dd0;    /* 0x00786dd0 */
extern int          g_7b2238;    /* 0x007b2238 */
extern int          g_7da848;    /* 0x007da848 */
extern double       g_7b68c8;    /* 0x007b68c8 */
extern double       g_76d970;    /* 0x0076d970 */
extern double       g_77ed40;    /* 0x0077ed40 */
extern int          g_7b68cc;    /* 0x007b68cc */

__declspec(naked) void __cdecl FUN_006d1c20(void)
{
    __asm {
        mov     al, byte ptr [g_840010]
        sub     esp, 0x60
        test    al, 0x1
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        jnz     L_1c59
        mov     bl, al
        or      bl, 0x1
        push    offset g_7b9460
        mov     ecx, offset g_840018
        mov     byte ptr [g_840010], bl
        call    FUN_00419460
        push    offset g_6d2750
        call    FUN_0075dbbe
        add     esp, 0x4
L_1c59:
        xor     ebx, ebx
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x24]
        push    offset g_7b8d88
        lea     ecx, [esp + 0x48]
        call    FUN_0040c5d0
        push    offset g_7b8d88
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        push    offset g_7b8d88
        lea     ecx, [esp + 0x30]
        call    FUN_0040c5d0
        mov     ecx, dword ptr [esp + 0x74]
        mov     edx, dword ptr [ecx + 0x1c]
        mov     eax, dword ptr [ecx + 0xc]
        mov     dword ptr [esp + 0x3c], edx
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [ecx + 0x2c]
        lea     edx, [esp + 0x50]
        push    edx
        mov     dword ptr [esp + 0x44], eax
        call    FUN_00428730
        cmp     dword ptr [ebp + 0x4], ebx
        mov     dword ptr [esp + 0x5c], ebx
        mov     dword ptr [esp + 0x60], ebx
        mov     dword ptr [esp + 0x64], ebx
        mov     dword ptr [esp + 0x68], ebx
        mov     dword ptr [esp + 0x6c], ebx
        mov     dword ptr [esp + 0x10], ebx
        jle     L_1ec7
L_1cd3:
        mov     edi, dword ptr [ebp]
        xor     esi, esi
        test    edi, edi
        mov     dword ptr [esp + 0x14], esi
        jle     L_1eb7
        fild    dword ptr [esp + 0x10]
        fadd    dword ptr [g_76d070]
        fstp    dword ptr [esp + 0x20]
L_1cf2:
        fild    dword ptr [esp + 0x14]
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x48]
        fadd    dword ptr [g_76d070]
        push    ecx
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x50], 0x0
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [ebp + 0x10]
        fstp    dword ptr [esp + 0x4c]
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [ebp + 0xc]
        fadd    dword ptr [ebp + 0x14]
        fstp    dword ptr [esp + 0x54]
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x2c]
        lea     edx, [esp + 0x50]
        fmul    dword ptr [esp + 0x2c]
        push    edx
        fld     dword ptr [esp + 0x34]
        lea     ecx, [esp + 0x30]
        fmul    dword ptr [esp + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x38]
        fmul    dword ptr [esp + 0x38]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x18]
        call    FUN_0040c610
        imul    edi, ebx
        fld     st(0)
        fabs
        fmulp   st(1), st(0)
        fadd    st(0), st(0)
        mov     eax, dword ptr [ebp + 0x94]
        fcom    dword ptr [esp + 0x14]
        add     edi, eax
        mov     byte ptr [edi + esi*1], 0x20
        fnstsw  ax
        test    ah, 0x41
        jnz     L_1d99
        mov     ecx, dword ptr [ebp]
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0x94]
        imul    ecx, ebx
        add     eax, ecx
        mov     dl, byte ptr [eax + esi*1]
        add     eax, esi
        add     dl, 0x4
        jmp     L_1dfc
L_1d99:
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_1dc0
        mov     ecx, dword ptr [ebp]
        fstp    st(0)
        mov     edx, dword ptr [ebp + 0x94]
        imul    ecx, ebx
        add     edx, ecx
        lea     eax, [edx + esi*1]
        mov     dl, byte ptr [eax]
        add     dl, 0x2
        jmp     L_1dfc
L_1dc0:
        fld     dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ebp]
        fchs
        fxch
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_1de9
        mov     eax, dword ptr [ebp + 0x94]
        imul    ecx, ebx
        add     eax, ecx
        mov     dl, byte ptr [eax + esi*1]
        add     eax, esi
        add     dl, 0xfe
        jmp     L_1dfc
L_1de9:
        mov     edx, dword ptr [ebp + 0x94]
        imul    ecx, ebx
        add     edx, ecx
        lea     eax, [edx + esi*1]
        mov     dl, byte ptr [eax]
        add     dl, 0xfc
L_1dfc:
        fld     dword ptr [esp + 0x14]
        mov     byte ptr [eax], dl
        fcomp   dword ptr [g_770120]
        fnstsw  ax
        test    ah, 0x1
        jz      L_1e24
        mov     eax, dword ptr [ebp + 0x84]
        add     eax, ecx
        mov     byte ptr [eax + esi*1], 0x4
        inc     dword ptr [esp + 0x6c]
        jmp     L_1ea7
L_1e24:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_79e994]
        fnstsw  ax
        test    ah, 0x1
        jz      L_1e4c
        mov     edx, dword ptr [ebp + 0x84]
        mov     eax, dword ptr [esp + 0x68]
        add     edx, ecx
        inc     eax
        mov     byte ptr [edx + esi*1], 0x3
        mov     dword ptr [esp + 0x68], eax
        jmp     L_1ea7
L_1e4c:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_79e990]
        fnstsw  ax
        test    ah, 0x1
        jz      L_1e6f
        mov     eax, dword ptr [ebp + 0x84]
        add     eax, ecx
        mov     byte ptr [eax + esi*1], 0x2
        inc     dword ptr [esp + 0x64]
        jmp     L_1ea7
L_1e6f:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_786dd0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_1e97
        mov     edx, dword ptr [ebp + 0x84]
        mov     eax, dword ptr [esp + 0x60]
        add     edx, ecx
        inc     eax
        mov     byte ptr [edx + esi*1], 0x1
        mov     dword ptr [esp + 0x60], eax
        jmp     L_1ea7
L_1e97:
        mov     eax, dword ptr [ebp + 0x84]
        add     eax, ecx
        mov     byte ptr [eax + esi*1], 0x0
        inc     dword ptr [esp + 0x5c]
L_1ea7:
        mov     edi, dword ptr [ebp]
        inc     esi
        cmp     esi, edi
        mov     dword ptr [esp + 0x14], esi
        jl      L_1cf2
L_1eb7:
        mov     eax, dword ptr [ebp + 0x4]
        inc     ebx
        cmp     ebx, eax
        mov     dword ptr [esp + 0x10], ebx
        jl      L_1cd3
L_1ec7:
        mov     eax, dword ptr [ebp + 0x4]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0x0
        jle     L_2586
L_1eda:
        mov     esi, dword ptr [ebp]
        xor     eax, eax
        test    esi, esi
        mov     dword ptr [esp + 0x14], eax
        jle     L_2572
L_1eeb:
        mov     edx, dword ptr [ebp + 0x84]
        mov     ecx, esi
        imul    ecx, dword ptr [esp + 0x10]
        lea     ebx, [ecx + eax*1]
        mov     eax, dword ptr [ebp + 0x7c]
        mov     edi, dword ptr [eax + ebx*8 + 0x4]
        mov     ecx, dword ptr [g_7b2238]
        xor     eax, eax
        mov     al, byte ptr [edx + ebx*1]
        mov     dword ptr [esp + 0x20], edi
        cmp     eax, ecx
        jle     L_1f17
        mov     eax, ecx
L_1f17:
        cmp     eax, 0x1
        jle     L_1f2a
L_1f1c:
        mov     cl, byte ptr [eax + ebp*1 + 0x27]
        test    cl, cl
        jnz     L_1f2a
        dec     eax
        cmp     eax, 0x1
        jg      L_1f1c
L_1f2a:
        dec     eax
        jz      L_2520
        dec     eax
        jz      L_2260
        dec     eax
        jz      L_1f82
        mov     eax, dword ptr [ebp + 0x94]
        mov     ecx, dword ptr [ebp + 0x8c]
        mov     byte ptr [eax + ebx*1], 0x0
        lea     eax, [ecx + ebx*1]
        cmp     byte ptr [eax], 0x0
        mov     dword ptr [esp + 0x1c], eax
        jz      L_255e
        xor     esi, esi
        test    edi, edi
        jle     L_1f76
L_1f61:
        mov     eax, dword ptr [ebp + 0x7c]
        mov     edx, dword ptr [eax + ebx*8]
        mov     ecx, dword ptr [edx + esi*4]
        push    0x0
        call    FUN_00448d80
        inc     esi
        cmp     esi, edi
        jl      L_1f61
L_1f76:
        mov     eax, dword ptr [esp + 0x1c]
        mov     byte ptr [eax], 0x0
        jmp     L_255e
L_1f82:
        mov     ecx, dword ptr [ebp + 0x8c]
        cmp     byte ptr [ecx + ebx*1], 0x3
        jz      L_255e
        mov     ecx, dword ptr [ebp + 0xac]
        lea     edx, [ebx + ebx*2]
        lea     eax, [ebx + edx*4]
        lea     edi, [ecx + eax*4]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        jge     L_2048
        mov     edx, dword ptr [ebp + 0x44]
        xor     eax, eax
        mov     al, byte ptr [ebp + 0x25]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [edx + eax*4]
        mov     eax, dword ptr [eax + 0x1c]
        test    eax, eax
        mov     dword ptr [edi + 0x4], eax
        jg      L_1fc7
        xor     ecx, ecx
        jmp     L_1fd1
L_1fc7:
        mov     ecx, dword ptr [g_7da848]
        mov     ecx, dword ptr [ecx + eax*4 + 0x24]
L_1fd1:
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     ebx, eax
        mov     ecx, ebx
        mov     dword ptr [edi + 0x14], 0x10
        call    FUN_00491cf0
        xor     eax, eax
        mov     dword ptr [edi + 0x10], 0xffffffff
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], eax
        mov     ecx, ebx
        mov     dword ptr [edi + 0x28], eax
        call    FUN_00491d40
        mov     ecx, dword ptr [ebp + 0x4]
        mov     edx, dword ptr [ebp + 0xbc]
        push    0x0
        mov     dword ptr [edi + 0x2c], eax
        mov     eax, dword ptr [ebx + 0x2c]
        push    0x0
        push    edi
        mov     dword ptr [edi + 0x30], eax
        mov     edi, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        sub     esi, edi
        sub     ecx, eax
        dec     esi
        push    esi
        dec     ecx
        push    ecx
        push    edx
        lea     ecx, [ebp + 0xc4]
        call    FUN_006cf4c0
        xor     eax, eax
        mov     al, byte ptr [ebp + 0x25]
        mov     ecx, ebp
        push    eax
        push    0x3
        call    FUN_006d1a10
        jmp     L_255e
L_2048:
        mov     ecx, dword ptr [ebp + 0xbc]
        mov     edx, dword ptr [edi + 0x10]
        cmp     edx, dword ptr [ecx]
        jl      L_215d
        cmp     dword ptr [edi + 0xc], 0x2
        jnz     L_215d
        mov     eax, dword ptr [ebp + 0x9c]
        xor     ecx, ecx
        mov     dword ptr [edi + 0xc], ecx
        cmp     byte ptr [eax + ebx*1], 0x0
        jbe     L_210b
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, ecx
        jle     L_2089
        mov     ecx, dword ptr [g_7da848]
        mov     ecx, dword ptr [ecx + eax*4 + 0x24]
L_2089:
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     ecx, eax
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [edi + 0x14], 0x10
        call    FUN_00491cf0
        mov     ecx, dword ptr [esp + 0x20]
        xor     eax, eax
        mov     dword ptr [edi + 0x10], 0xffffffff
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x28], eax
        call    FUN_00491d40
        mov     edx, dword ptr [ebp + 0x4]
        mov     dword ptr [edi + 0x2c], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax + 0x2c]
        mov     eax, dword ptr [esp + 0x10]
        push    0x0
        push    0x0
        push    edi
        mov     dword ptr [edi + 0x30], ecx
        sub     esi, dword ptr [esp + 0x20]
        dec     esi
        sub     edx, eax
        mov     eax, dword ptr [ebp + 0xbc]
        push    esi
        dec     edx
        push    edx
        push    eax
        lea     ecx, [ebp + 0xc4]
        call    FUN_006cf4c0
        mov     eax, dword ptr [ebp + 0x9c]
        mov     ecx, dword ptr [ebp + 0x8c]
        mov     byte ptr [eax + ebx*1], 0x0
        mov     byte ptr [ecx + ebx*1], 0x3
        jmp     L_255e
L_210b:
        mov     eax, dword ptr [esp + 0x20]
        xor     esi, esi
        cmp     eax, ecx
        jle     L_214e
L_2115:
        mov     eax, dword ptr [ebp + 0x7c]
        mov     ecx, dword ptr [eax + ebx*8]
        mov     dword ptr [esp + 0x18], ecx
L_211f:
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [eax + esi*4]
        push    edx
        push    0x3
        call    FUN_00448e00
        mov     eax, dword ptr [ebp + 0x7c]
        mov     eax, dword ptr [eax + ebx*8]
        mov     ecx, dword ptr [eax + esi*4]
        push    0x3
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00448d80
        mov     eax, dword ptr [esp + 0x20]
        inc     esi
        cmp     esi, eax
        jl      L_211f
L_214e:
        mov     ecx, dword ptr [ebp + 0x8c]
        mov     byte ptr [ecx + ebx*1], 0x3
        jmp     L_255e
L_215d:
        mov     edx, dword ptr [ebp + 0x9c]
        cmp     byte ptr [edx + ebx*1], 0x0
        jbe     L_255e
        test    eax, eax
        jg      L_2175
        xor     ecx, ecx
        jmp     L_217f
L_2175:
        mov     ecx, dword ptr [g_7da848]
        mov     ecx, dword ptr [ecx + eax*4 + 0x24]
L_217f:
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     ecx, eax
        mov     dword ptr [esp + 0x20], eax
        call    FUN_00491cf0
        mov     eax, dword ptr [edi + 0x20]
        test    eax, eax
        jz      L_21f5
        mov     dword ptr [edi + 0x24], eax
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L_21b2
L_21a2:
        mov     eax, dword ptr [edi + 0x24]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [edi + 0x24], eax
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jnz     L_21a2
L_21b2:
        mov     ecx, dword ptr [edi + 0x24]
        mov     eax, dword ptr [ecx + 0xc]
        test    eax, eax
        jz      L_21e2
L_21bc:
        mov     dword ptr [edi + 0x28], eax
        mov     edx, dword ptr [edi + 0x24]
        push    edx
        call    FUN_004084e0
        mov     eax, dword ptr [edi + 0x28]
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [eax + 0x8], 0x0
        mov     eax, dword ptr [edi + 0x24]
        mov     eax, dword ptr [eax + 0xc]
        add     esp, 0x4
        test    eax, eax
        jnz     L_21bc
L_21e2:
        mov     ecx, dword ptr [edi + 0x24]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x24], 0x0
L_21f5:
        mov     ecx, dword ptr [esp + 0x20]
        xor     eax, eax
        mov     dword ptr [edi + 0xc], eax
        mov     dword ptr [edi + 0x14], 0x10
        mov     dword ptr [edi + 0x10], 0xffffffff
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x28], eax
        call    FUN_00491d40
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [ebp + 0x4]
        push    0x0
        mov     dword ptr [edi + 0x2c], eax
        mov     eax, dword ptr [edx + 0x2c]
        mov     edx, dword ptr [esp + 0x18]
        push    0x0
        push    edi
        mov     dword ptr [edi + 0x30], eax
        mov     edi, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebp + 0xbc]
        sub     esi, edx
        dec     esi
        sub     ecx, edi
        push    esi
        dec     ecx
        push    ecx
        push    eax
        lea     ecx, [ebp + 0xc4]
        call    FUN_006cf4c0
        mov     edx, dword ptr [ebp + 0x9c]
        mov     byte ptr [edx + ebx*1], 0x0
        jmp     L_255e
L_2260:
        mov     eax, dword ptr [ebp + 0x8c]
        mov     cl, byte ptr [eax + ebx*1]
        add     eax, ebx
        cmp     cl, 0x2
        mov     dword ptr [esp + 0x1c], eax
        jz      L_255e
        mov     eax, dword ptr [ebp + 0xa4]
        lea     ecx, [ebx + ebx*2]
        lea     edx, [ebx + ecx*4]
        lea     edi, [eax + edx*4]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        jge     L_232e
        mov     ecx, dword ptr [ebp + 0x3c]
        xor     eax, eax
        mov     al, byte ptr [ebp + 0x24]
        mov     dword ptr [edi], eax
        mov     edx, dword ptr [ecx + eax*4]
        mov     eax, dword ptr [edx + 0x1c]
        test    eax, eax
        mov     dword ptr [edi + 0x4], eax
        jg      L_22ad
        xor     ecx, ecx
        jmp     L_22b7
L_22ad:
        mov     ecx, dword ptr [g_7da848]
        mov     ecx, dword ptr [ecx + eax*4 + 0x24]
L_22b7:
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     ebx, eax
        mov     dword ptr [edi + 0x10], 0xffffffff
        mov     ecx, ebx
        mov     dword ptr [edi + 0x14], 0x20
        call    FUN_00491cf0
        xor     eax, eax
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], eax
        mov     ecx, ebx
        mov     dword ptr [edi + 0x28], eax
        call    FUN_00491d40
        mov     ecx, dword ptr [ebp + 0x4]
        mov     edx, dword ptr [ebp + 0xbc]
        push    0x0
        mov     dword ptr [edi + 0x2c], eax
        mov     eax, dword ptr [ebx + 0x2c]
        push    0x1
        push    edi
        mov     dword ptr [edi + 0x30], eax
        mov     edi, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        sub     esi, edi
        sub     ecx, eax
        dec     esi
        push    esi
        dec     ecx
        push    ecx
        push    edx
        lea     ecx, [ebp + 0xc4]
        call    FUN_006cf4c0
        xor     eax, eax
        mov     al, byte ptr [ebp + 0x24]
        mov     ecx, ebp
        push    eax
        push    0x2
        call    FUN_006d1a10
        jmp     L_255e
L_232e:
        mov     ecx, dword ptr [ebp + 0xbc]
        mov     edx, dword ptr [edi + 0x10]
        cmp     edx, dword ptr [ecx]
        jl      L_2422
        cmp     dword ptr [edi + 0xc], 0x2
        jnz     L_2422
        mov     eax, dword ptr [ebp + 0x9c]
        xor     ecx, ecx
        mov     dword ptr [edi + 0xc], ecx
        cmp     byte ptr [eax + ebx*1], 0x0
        jbe     L_23d3
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, ecx
        jle     L_236b
        mov     ecx, dword ptr [g_7da848]
        mov     ecx, dword ptr [ecx + eax*4 + 0x24]
L_236b:
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     ebx, eax
        mov     dword ptr [edi + 0x10], 0xffffffff
        mov     ecx, ebx
        mov     dword ptr [edi + 0x14], 0x20
        call    FUN_00491cf0
        xor     eax, eax
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], eax
        mov     ecx, ebx
        mov     dword ptr [edi + 0x28], eax
        call    FUN_00491d40
        mov     ecx, dword ptr [esp + 0x14]
        push    0x0
        mov     dword ptr [edi + 0x2c], eax
        mov     eax, dword ptr [ebx + 0x2c]
        push    0x1
        sub     esi, ecx
        mov     ecx, dword ptr [ebp + 0x4]
        push    edi
        mov     dword ptr [edi + 0x30], eax
        mov     edi, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebp + 0xbc]
        dec     esi
        sub     ecx, edi
        push    esi
        dec     ecx
        push    ecx
        push    eax
        lea     ecx, [ebp + 0xc4]
        call    FUN_006cf4c0
        jmp     L_255e
L_23d3:
        mov     eax, dword ptr [esp + 0x20]
        xor     esi, esi
        cmp     eax, ecx
        jle     L_2416
L_23dd:
        mov     eax, dword ptr [ebp + 0x7c]
        mov     edx, dword ptr [eax + ebx*8]
        mov     dword ptr [esp + 0x18], edx
L_23e7:
        mov     eax, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [ecx + esi*4]
        push    eax
        push    0x3
        call    FUN_00448e00
        mov     eax, dword ptr [ebp + 0x7c]
        mov     eax, dword ptr [eax + ebx*8]
        mov     ecx, dword ptr [eax + esi*4]
        push    0x3
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00448d80
        mov     eax, dword ptr [esp + 0x20]
        inc     esi
        cmp     esi, eax
        jl      L_23e7
L_2416:
        mov     edx, dword ptr [esp + 0x1c]
        mov     byte ptr [edx], 0x2
        jmp     L_255e
L_2422:
        mov     ecx, dword ptr [ebp + 0x9c]
        cmp     byte ptr [ecx + ebx*1], 0x0
        jbe     L_255e
        test    eax, eax
        jg      L_243a
        xor     ecx, ecx
        jmp     L_2444
L_243a:
        mov     edx, dword ptr [g_7da848]
        mov     ecx, dword ptr [edx + eax*4 + 0x24]
L_2444:
        mov     eax, dword ptr [ecx]
        push    0x0
        call    dword ptr [eax + 0x4]
        mov     ecx, eax
        mov     dword ptr [esp + 0x20], eax
        call    FUN_00491cf0
        mov     eax, dword ptr [edi + 0x20]
        test    eax, eax
        jz      L_24ba
        mov     dword ptr [edi + 0x24], eax
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L_2477
L_2467:
        mov     ecx, dword ptr [edi + 0x24]
        mov     eax, dword ptr [ecx + 0x8]
        mov     dword ptr [edi + 0x24], eax
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jnz     L_2467
L_2477:
        mov     edx, dword ptr [edi + 0x24]
        mov     eax, dword ptr [edx + 0xc]
        test    eax, eax
        jz      L_24a7
L_2481:
        mov     dword ptr [edi + 0x28], eax
        mov     eax, dword ptr [edi + 0x24]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [edi + 0x28]
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [eax + 0x8], 0x0
        mov     ecx, dword ptr [edi + 0x24]
        mov     eax, dword ptr [ecx + 0xc]
        add     esp, 0x4
        test    eax, eax
        jnz     L_2481
L_24a7:
        mov     edx, dword ptr [edi + 0x24]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x24], 0x0
L_24ba:
        mov     ecx, dword ptr [esp + 0x20]
        xor     eax, eax
        mov     dword ptr [edi + 0xc], eax
        mov     dword ptr [edi + 0x14], 0x10
        mov     dword ptr [edi + 0x10], 0xffffffff
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x28], eax
        call    FUN_00491d40
        mov     edx, dword ptr [ebp + 0x4]
        mov     dword ptr [edi + 0x2c], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax + 0x2c]
        mov     eax, dword ptr [esp + 0x10]
        push    0x0
        push    0x1
        push    edi
        mov     dword ptr [edi + 0x30], ecx
        sub     esi, dword ptr [esp + 0x20]
        dec     esi
        sub     edx, eax
        mov     eax, dword ptr [ebp + 0xbc]
        push    esi
        dec     edx
        push    edx
        push    eax
        lea     ecx, [ebp + 0xc4]
        call    FUN_006cf4c0
        mov     eax, dword ptr [ebp + 0x9c]
        mov     byte ptr [eax + ebx*1], 0x0
        jmp     L_255e
L_2520:
        mov     ecx, dword ptr [ebp + 0x94]
        mov     edx, dword ptr [ebp + 0x8c]
        lea     eax, [edx + ebx*1]
        mov     byte ptr [ecx + ebx*1], 0x0
        cmp     byte ptr [eax], 0x1
        mov     dword ptr [esp + 0x1c], eax
        jz      L_255e
        xor     esi, esi
        test    edi, edi
        jle     L_2557
L_2542:
        mov     eax, dword ptr [ebp + 0x7c]
        mov     eax, dword ptr [eax + ebx*8]
        mov     ecx, dword ptr [eax + esi*4]
        push    0x1
        call    FUN_00448d80
        inc     esi
        cmp     esi, edi
        jl      L_2542
L_2557:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     byte ptr [ecx], 0x1
L_255e:
        mov     eax, dword ptr [esp + 0x14]
        mov     esi, dword ptr [ebp]
        inc     eax
        cmp     eax, esi
        mov     dword ptr [esp + 0x14], eax
        jl      L_1eeb
L_2572:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ebp + 0x4]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L_1eda
L_2586:
        lea     ecx, [ebp + 0xc4]
        call    FUN_006cf530
        fld     qword ptr [g_7b68c8]
        fcomp   qword ptr [g_76d970]
        mov     edx, 0x1
        mov     dword ptr [esp + 0x20], edx
        fnstsw  ax
        test    ah, 0x41
        jnz     L_25d6
        fld     qword ptr [esp + 0x24]
        fsub    qword ptr [g_7b68c8]
        fmul    qword ptr [g_77ed40]
        call    FUN_0075db4a
        mov     edx, eax
        cmp     edx, 0x1
        mov     dword ptr [esp + 0x20], edx
        jge     L_25d6
        mov     edx, 0x1
        mov     dword ptr [esp + 0x20], edx
L_25d6:
        mov     eax, dword ptr [ebp + 0x4]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0x0
        jle     L_26ee
L_25e9:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        mov     dword ptr [esp + 0x14], 0x0
        jle     L_26da
L_25fc:
        imul    eax, dword ptr [esp + 0x10]
        add     eax, dword ptr [esp + 0x14]
        mov     esi, eax
        mov     eax, dword ptr [ebp + 0x94]
        lea     ecx, [eax + esi*1]
        mov     al, byte ptr [ecx]
        test    al, al
        jbe     L_2627
        cmp     edx, 0x100
        jl      L_2623
        mov     edx, 0xff
L_2623:
        sub     al, dl
        mov     byte ptr [ecx], al
L_2627:
        lea     ecx, [esi + esi*2]
        lea     ebx, [esi + ecx*4]
        mov     dword ptr [esp + 0x1c], 0x0
        shl     ebx, 0x2
        lea     edi, [ebp + 0xa4]
L_263e:
        mov     edx, dword ptr [edi]
        mov     ecx, dword ptr [edx + ebx*1 + 0x4]
        test    ecx, ecx
        lea     eax, [edx + ebx*1]
        jle     L_2672
        mov     ecx, dword ptr [ebp + 0x94]
        cmp     byte ptr [ecx + esi*1], 0x0
        ja      L_2672
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        add     eax, 0x2
        push    eax
        mov     ecx, ebp
        call    FUN_006d1a70
        mov     ecx, dword ptr [edi]
        add     ecx, ebx
        call    FUN_006d4460
L_2672:
        mov     eax, dword ptr [esp + 0x1c]
        inc     eax
        add     edi, 0x8
        cmp     eax, 0x2
        mov     dword ptr [esp + 0x1c], eax
        jl      L_263e
        mov     ecx, dword ptr [ebp + 0x94]
        cmp     byte ptr [ecx + esi*1], 0x0
        ja      L_26c2
        mov     edx, dword ptr [ebp + 0x8c]
        mov     al, byte ptr [edx + esi*1]
        cmp     al, 0x1
        lea     ebx, [edx + esi*1]
        jbe     L_26c2
        mov     eax, dword ptr [ebp + 0x7c]
        lea     esi, [eax + esi*8]
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jle     L_26bf
        mov     esi, dword ptr [esi]
        mov     edi, eax
L_26b0:
        mov     ecx, dword ptr [esi]
        push    0x1
        call    FUN_00448d80
        add     esi, 0x4
        dec     edi
        jnz     L_26b0
L_26bf:
        mov     byte ptr [ebx], 0x1
L_26c2:
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ebp]
        mov     edx, dword ptr [esp + 0x20]
        inc     ecx
        cmp     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jl      L_25fc
L_26da:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ebp + 0x4]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L_25e9
L_26ee:
        mov     ecx, dword ptr [esp + 0x24]
        mov     esi, dword ptr [esp + 0x74]
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [g_7b68c8], ecx
        mov     ecx, 0xc
        mov     edi, offset g_840018
        rep movsd
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_7b68cc], edx
        pop     ebx
        add     esp, 0x60
        ret     0xc
    }
}
