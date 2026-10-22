/*
 * FUN_0048c410 (1551 B) — MLR camera/view setup (__thiscall, RET 0x28).
 * Queries renderer caps (FUN_00704a80), builds a color key from a float
 * vector, computes a 4x4 matrix product, normalizes basis vectors, and
 * dispatches virtual calls on the object at [this+0x110].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004919e0(void);
extern void __cdecl FUN_00717650(void);
extern void __cdecl FUN_00491150(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_00480bc0(void);
extern void __cdecl FUN_006f49a0(void);

extern int g_00858950;
extern int g_007b2210;
extern int g_007da86c;
extern int g_007da864;
extern int g_007b2220;
extern int g_007b221c;
extern int g_007da830;
extern int g_007b959c;
extern int g_007da85c;
extern int g_007b9694;
extern int g_007b9698;
extern int g_007da7f8;

extern float g_0076c5b0;
extern float g_007da868;
extern float g_0076ed04;
extern float g_0076fe78;
extern float g_007b220c;
extern float g_0076d064;

__declspec(naked) void FUN_0048c410(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        cmp     dword ptr [g_00858950], 0x3
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        mov     ebx, ecx
        push    edi
        lea     edi, [ebx + 0x74]
        mov     ecx, 0x10
        mov     dword ptr [ebp - 0x1c], ebx
        rep     movsd
        jnz     L_c43e
        xor     esi, esi
        mov     dword ptr [g_007b2210], esi
        jmp     L_c440
L_c43e:
        xor     esi, esi
L_c440:
        push    esi
        push    esi
        push    esi
        push    esi
        call    FUN_00704a80
        test    eax, eax
        mov     eax, dword ptr [g_007da86c]
        jbe     L_c457
        or      eax, 0x1
        jmp     L_c45a
L_c457:
        and     eax, 0xfffffffe
L_c45a:
        push    esi
        push    esi
        push    0x100
        push    0x21
        mov     dword ptr [g_007da86c], eax
        call    FUN_00704a80
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x10], esi
        fild    qword ptr [ebp - 0x14]
        mov     ecx, 0x8
        fcom    dword ptr [g_0076c5b0]
        fst     dword ptr [g_007da868]
        __emit 0xDF      /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6      /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        mov     eax, dword ptr [g_007da86c]
        jnz     L_c497
        or      eax, ecx
        jmp     L_c49a
L_c497:
        and     eax, 0xfffffff7
L_c49a:
        __emit 0x84      /* test cl,al: MSVC6 swaps operands -> 84 C8 */
        __emit 0xC1
        mov     dword ptr [g_007da86c], eax
        mov     dword ptr [g_007da864], 0x1
        jle     L_c4c2
        fcomp   dword ptr [g_0076ed04]
        __emit 0xDF      /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6      /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_c4c4
        mov     dword ptr [g_007b2220], esi
        jmp     L_c4c4
L_c4c2:
        fstp    st(0)
L_c4c4:
        push    esi
        push    esi
        push    esi
        push    0x2e
        call    FUN_00704a80
        test    eax, eax
        mov     eax, dword ptr [g_007da86c]
        jbe     L_c4dc
        or      eax, 0x20
        jmp     L_c4df
L_c4dc:
        and     eax, 0xffffffdf
L_c4df:
        push    esi
        push    esi
        push    esi
        push    0x2f
        mov     dword ptr [g_007da86c], eax
        call    FUN_00704a80
        test    eax, eax
        mov     eax, dword ptr [g_007da86c]
        jbe     L_c4fc
        or      eax, 0x40
        jmp     L_c4ff
L_c4fc:
        and     eax, 0xffffffbf
L_c4ff:
        mov     dword ptr [g_007da86c], eax
        cmp     dword ptr [g_007b221c], esi
        jz      L_c569
        push    esi
        push    esi
        push    esi
        push    0x18
        call    FUN_00704a80
        test    eax, eax
        mov     eax, dword ptr [g_007da86c]
        jbe     L_c524
        or      eax, 0x2
        jmp     L_c527
L_c524:
        and     eax, 0xfffffffd
L_c527:
        push    esi
        push    esi
        push    esi
        push    0x19
        mov     dword ptr [g_007da86c], eax
        call    FUN_00704a80
        test    eax, eax
        mov     eax, dword ptr [g_007da86c]
        jbe     L_c544
        or      eax, 0x4
        jmp     L_c547
L_c544:
        and     eax, 0xfffffffb
L_c547:
        push    esi
        push    esi
        push    esi
        push    0x1a
        mov     dword ptr [g_007da86c], eax
        call    FUN_00704a80
        test    eax, eax
        mov     eax, dword ptr [g_007da86c]
        jbe     L_c564
        or      eax, 0x10
        jmp     L_c571
L_c564:
        and     eax, 0xffffffef
        jmp     L_c571
L_c569:
        mov     eax, dword ptr [g_007da86c]
        and     eax, 0xffffffe9
L_c571:
        mov     dword ptr [g_007da86c], eax
        mov     eax, dword ptr [g_007da830]
        mov     ecx, eax
        inc     eax
        cmp     ecx, 0x1388
        mov     dword ptr [g_007da830], eax
        jle     L_c591
        mov     dword ptr [g_007da830], esi
L_c591:
        mov     edx, dword ptr [g_007b959c]
        push    edx
        call    FUN_006f4950
        mov     eax, dword ptr [ebp + 0x1c]
        cmp     eax, esi
        mov     dword ptr [ebp - 0xc], 0x3f800000
        mov     dword ptr [ebp - 0x4], esi
        mov     byte ptr [ebp - 0x10], 0x0
        mov     byte ptr [ebp - 0x8], 0x0
        jz      L_c5bf
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0xc], eax
        mov     byte ptr [ebp - 0x10], 0x1
L_c5bf:
        cmp     dword ptr [ebp + 0x14], esi
        jz      L_c6bb
        fld     dword ptr [g_0076fe78]
        mov     esi, dword ptr [ebp + 0x14]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x4]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x4]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp + 0x1c], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x4]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x4]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0x1c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0x1c], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x4]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x4]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0x1c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0x1c], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x4]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x4]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0x1c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0x1c], ecx
        mov     eax, dword ptr [ebp + 0x1c]
        mov     ebx, dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x4], eax
        mov     byte ptr [ebp - 0x8], 0x1
        mov     dword ptr [g_007da85c], eax
L_c6bb:
        mov     esi, dword ptr [ebp + 0x2c]
        mov     edi, dword ptr [ebp + 0x28]
        mov     ecx, dword ptr [ebp + 0x24]
        mov     edx, dword ptr [ebp + 0x20]
        push    esi
        push    edi
        push    ecx
        push    edx
        call    FUN_004919e0
        mov     eax, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [ebp + 0x20]
        mov     edx, dword ptr [ebp - 0x4]
        add     esp, 0x10
        push    0x0
        push    0x0
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [ebp - 0x8]
        push    ecx
        mov     ecx, dword ptr [ebp - 0xc]
        push    edx
        mov     edx, dword ptr [ebp - 0x10]
        push    eax
        push    ecx
        push    edx
        call    FUN_00717650
        call    FUN_00491150
        mov     ecx, dword ptr [ebp + 0xc]
        fld     dword ptr [ecx + 0x2c]
        fcomp   dword ptr [g_007b220c]
        __emit 0xDF      /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6      /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_c720
        fld     dword ptr [g_007b220c]
        fchs
        fcomp   dword ptr [ecx + 0x2c]
        __emit 0xDF      /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6      /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_c743
L_c720:
        fld     dword ptr [g_0076d064]
        mov     eax, dword ptr [ebx + 0x110]
        fsub    dword ptr [ecx + 0x28]
        fdiv    dword ptr [ecx + 0x2c]
        fld     dword ptr [g_0076d064]
        fsub    dword ptr [g_007b220c]
        fmulp   st(1), st(0)
        fstp    dword ptr [eax + 0x10]
L_c743:
        mov     ecx, dword ptr [ebx + 0x110]
        mov     eax, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        mov     esi, dword ptr [ebp + 0x8]
        lea     eax, [ebx + 0x44]
        mov     edi, eax
        mov     ecx, 0xc
        rep     movsd
        lea     esi, [ebx + 0x14]
        push    eax
        mov     ecx, esi
        call    FUN_004206b0
        xor     edi, edi
        lea     ecx, [ebx + 0xb4]
        mov     dword ptr [g_007b9694], edi
        mov     dword ptr [g_007b9698], edi
        mov     dword ptr [ebp + 0x24], esi
        mov     dword ptr [ebp + 0x14], ecx
        mov     edx, dword ptr [ebp + 0x24]
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x14]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fadd    dword ptr [esi + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x38]
        fxch    st(1)
        fstp    dword ptr [eax + 0x2c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x34]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x38]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [eax + 0x3c]
        pop     esi
        mov     edx, dword ptr [ebx + 0x50]
        mov     dword ptr [ebx + 0xf4], edx
        mov     eax, dword ptr [ebx + 0x60]
        mov     dword ptr [ebx + 0xf8], eax
        mov     ecx, dword ptr [ebx + 0x70]
        mov     dword ptr [ebx + 0xfc], ecx
        fld     dword ptr [ebx + 0x4c]
        fld     dword ptr [ebx + 0x5c]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebx + 0x6c]
        fst     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fstp    dword ptr [ebp + 0xc]
        fmul    dword ptr [ebp + 0xc]
        fstp    dword ptr [ebx + 0x100]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp + 0xc]
        fstp    dword ptr [ebx + 0x104]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp + 0xc]
        fstp    dword ptr [ebx + 0x108]
        call    FUN_00480bc0
        mov     ecx, dword ptr [ebx + 0x110]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x20]
        add     ebx, 0x114
        mov     dword ptr [ebx], edi
        mov     dword ptr [ebx + 0x4], edi
        mov     dword ptr [ebx + 0xc], edi
        mov     dword ptr [g_007da7f8], ebx
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x28
    }
}
