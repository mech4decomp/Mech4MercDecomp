/*
 * func_006451CF.c  (block 0x6451CF, 1697 bytes)
 *
 * Contains two functions:
 *   FUN_006451D0 (0x6451D0, __thiscall ret 8) - FPU animation/position
 *     update: clamps [ecx+0x54] against a double constant, steps an index
 *     [ecx+0x68] toward [ecx+0x6c], accumulates a double, and stores the
 *     result to [ecx+0x2c].
 *   FUN_00645230 (0x645230, __thiscall ret) - large render/transform
 *     routine: reads vectors via 0x40c410/0x40c5d0/0x40ccd0, clamps with
 *     float constants, indexes tables 0x792524/0x7924c8, walks a list via
 *     0x641000/0x641010/0x641050, and issues draw calls (0x55f5b0,
 *     0x55eb90, 0x55eed0, 0x5603e0, 0x560400).
 *
 * Preceded by 1 nop (0x6451CF); 1 nop between functions (0x64522F).
 */

extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_0055f5b0(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_0055f530(void);
extern void __cdecl FUN_00645870(void);
extern void __cdecl FUN_0055eb90(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0055eed0(void);

extern float g_76d064;
extern float g_77dff8;
extern float g_77dff4;
extern float g_77a1a0;
extern float g_76c5b0;
extern float g_792678;
extern float g_76d5f0;
extern float g_76d070;
extern float g_792674;
extern float g_792670;
extern double g_76d970;
extern double g_792668;
extern int g_792524[];
extern int g_7924c8[];

__declspec(naked) void func_006451CF(void)
{
    __asm {
        nop

        /* ---- FUN_006451D0 ---- */
        fld     qword ptr [ecx + 0x54]
        fcomp   qword ptr [g_76d970]
        fld     qword ptr [esp + 4]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_6451e7
        fst     qword ptr [ecx + 0x54]
L_6451e7:
        fcom    qword ptr [ecx + 0x54]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_645229
        push    esi
L_6451f5:
        mov     esi, dword ptr [ecx + 0x6c]
        mov     eax, dword ptr [ecx + 0x68]
        cmp     esi, eax
        je      L_64520d
        xor     edx, edx
        cmp     esi, eax
        setge   dl
        dec     edx
        and     edx, 0xfffffffe
        inc     edx
        add     edx, eax
        mov     dword ptr [ecx + 0x68], edx
L_64520d:
        fld     qword ptr [ecx + 0x54]
        fadd    qword ptr [g_792668]
        fst     qword ptr [ecx + 0x54]
        fcomp   st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        /* __emit: MSVC6 miscomputes backward jne rel8 (off-by-3, FPU reloc between) */
        __emit 0x75
        __emit 0xD3
        fstp    qword ptr [ecx + 0x2c]
        pop     esi
        ret     8
L_645229:
        fstp    qword ptr [ecx + 0x2c]
        ret     8
        nop

        /* ---- FUN_00645230 ---- */
        sub     esp, 0x74
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        lea     eax, [edi + 0x20]
        push    eax
        lea     ecx, [esp + 0x64]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x60]
        fcomp   dword ptr [g_76d064]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      L_645265
        fld     dword ptr [esp + 0x60]
        fmul    dword ptr [g_77dff8]
        fstp    dword ptr [esp + 0x60]
L_645265:
        fld     dword ptr [esp + 0x64]
        fcomp   dword ptr [g_76d064]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      L_645284
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [g_77dff4]
        fstp    dword ptr [esp + 0x64]
L_645284:
        lea     eax, [esp + 0x60]
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_0040c5d0
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esp + 0x58]
        mov     eax, dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x78], ecx
        lea     ecx, [edi + 0x14]
        push    ecx
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esp + 0x80], edx
        mov     dword ptr [esp + 0x84], eax
        call    FUN_0040c410
        fld     dword ptr [esp + 0x60]
        fcomp   dword ptr [g_76d064]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      L_6452dc
        fld     dword ptr [esp + 0x60]
        fmul    dword ptr [g_77dff8]
        fstp    dword ptr [esp + 0x60]
L_6452dc:
        fld     dword ptr [esp + 0x64]
        fcomp   dword ptr [g_76d064]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      L_6452fb
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [g_77dff4]
        fstp    dword ptr [esp + 0x64]
L_6452fb:
        lea     edx, [esp + 0x60]
        push    edx
        lea     ecx, [esp + 0x58]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_0040c410
        mov     eax, dword ptr [edi + 0x68]
        lea     ecx, [eax + eax*2]
        shl     ecx, 3
        sub     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        fild    dword ptr [esp + 0x1c]
        fmul    dword ptr [g_77a1a0]
        call    FUN_0075db4a
        xor     ebx, ebx
        cmp     eax, ebx
        jge     L_64533f
        xor     eax, eax
        jmp     L_645349
L_64533f:
        cmp     eax, 0x16
        jle     L_645349
        mov     eax, 0x16
L_645349:
        mov     edx, dword ptr [eax*4 + g_792524]
        mov     ebp, dword ptr [eax*4 + g_7924c8]
        mov     eax, dword ptr [edi + 0x6c]
        lea     ecx, [eax + eax*2]
        shl     ecx, 3
        sub     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        fild    dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x2c], edx
        mov     dword ptr [esp + 0x18], ebp
        fmul    dword ptr [g_77a1a0]
        fcom    dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      L_64538f
        fstp    st(0)
        fld     dword ptr [g_76c5b0]
        jmp     L_6453a4
L_64538f:
        fcom    dword ptr [g_792678]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_6453a4
        fstp    st(0)
        fld     dword ptr [g_792678]
L_6453a4:
        fld     dword ptr [esp + 0x7c]
        fadd    dword ptr [esp + 0x70]
        fxch    st(1)
        call    FUN_0075db4a
        fild    dword ptr [eax*4 + g_7924c8]
        lea     edx, [esp + 0x10]
        push    edx
        fsubp   st(1), st(0)
        lea     eax, [esp + 0x2c]
        lea     esi, [edi + 0x38]
        push    eax
        fstp    dword ptr [esp + 0x40]
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 1
        call    FUN_00561df0
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x24]
        mov     dword ptr [esp + 0x14], ecx
        push    edx
        mov     ecx, esi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ecx]
        je      L_645401
        mov     edx, dword ptr [esp + 0x10]
        cmp     edx, dword ptr [eax + 0x10]
        jge     L_645438
L_645401:
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x5c]
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x1c]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x14], eax
L_645438:
        push    1
        push    ebx
        push    0xff404040
        lea     ecx, [esp + 0x84]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        lea     edx, [esp + 0x7c]
        push    edx
        call    FUN_0055f5b0
        fild    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x7c]
        lea     eax, [esp + 0x14]
        push    eax
        /* __emit: MSVC6 encodes fsub st(1),st(0) as DC E9 (fsubp); ref needs D8 E1 */
        __emit 0xD8
        __emit 0xE1
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, esi
        fadd    dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x24], ebx
        fstp    dword ptr [esp + 0x78]
        fstp    dword ptr [esp + 0x84]
        call    FUN_00561df0
        mov     edx, dword ptr [eax]
        lea     eax, [esp + 0x40]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [ecx]
        je      L_6454ac
        mov     edx, dword ptr [esp + 0x14]
        cmp     edx, dword ptr [eax + 0x10]
        jge     L_6454e3
L_6454ac:
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x4c]
        push    eax
        mov     ecx, esi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x10], eax
L_6454e3:
        mov     ecx, dword ptr [eax + 0x14]
        mov     edx, dword ptr [ecx + 4]
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], edx
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [esp + 0x4c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, edx
        mov     ecx, dword ptr [esp + 0x1c]
        je      L_645525
        cmp     ecx, dword ptr [eax + 0x10]
        jge     L_645551
L_645525:
        lea     edx, [esp + 0x54]
        push    edx
        push    ecx
        mov     dword ptr [esp + 0x5c], ecx
        lea     eax, [esp + 0x20]
        mov     ecx, esp
        push    eax
        mov     dword ptr [esp + 0x64], ebx
        call    FUN_00561a30
        lea     ecx, [esp + 0x58]
        push    ecx
        mov     ecx, esi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x18], eax
L_645551:
        mov     edx, dword ptr [edi + 0x70]
        sub     edx, ebp
        mov     dword ptr [esp + 0x24], edx
        fild    dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [esp + 0x2c]
        fstp    dword ptr [esp]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        call    FUN_0055f530
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x54]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00641010
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x4c]
        mov     dword ptr [esp + 0x14], ecx
        push    edx
        mov     ecx, esi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ecx]
        je      L_6455a9
        mov     edx, dword ptr [esp + 0x18]
        cmp     edx, dword ptr [eax + 0x10]
        jge     L_6455e0
L_6455a9:
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x30], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x1c]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x50]
        push    eax
        mov     ecx, esi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x14], eax
L_6455e0:
        mov     ecx, dword ptr [eax + 0x14]
        lea     edx, [esp + 0x18]
        mov     dword ptr [ecx + 0x38], 1
        push    edx
        lea     eax, [esp + 0x54]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00641010
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x4c]
        mov     dword ptr [esp + 0x14], ecx
        push    edx
        mov     ecx, esi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ecx]
        je      L_645624
        mov     edx, dword ptr [esp + 0x18]
        cmp     edx, dword ptr [eax + 0x10]
        jge     L_64565b
L_645624:
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x30], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x1c]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x50]
        push    eax
        mov     ecx, esi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x14], eax
L_64565b:
        push    ebx
        push    ebx
        push    -1
        lea     ecx, [esp + 0x84]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        lea     edx, [esp + 0x7c]
        push    edx
        call    FUN_0055f5b0
        lea     eax, [edi + 0x20]
        push    eax
        lea     ecx, [esp + 0x64]
        call    FUN_0040ccd0
        fld     dword ptr [esp + 0x60]
        fcomp   dword ptr [g_76d064]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      L_6456a0
        fld     dword ptr [esp + 0x60]
        fmul    dword ptr [g_77dff8]
        fstp    dword ptr [esp + 0x60]
L_6456a0:
        fld     dword ptr [esp + 0x64]
        fcomp   dword ptr [g_76d064]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      L_6456bf
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [g_77dff4]
        fstp    dword ptr [esp + 0x64]
L_6456bf:
        lea     eax, [esp + 0x60]
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x54]
        push    ecx
        lea     ecx, [esp + 0x7c]
        call    FUN_0040ccd0
        lea     edx, [esp + 0x60]
        push    edx
        mov     ecx, edi
        call    FUN_00645870
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_0040ccd0
        fld     dword ptr [esp + 0x7c]
        fadd    dword ptr [esp + 0x70]
        push    0xfa007d00
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x7c]
        fadd    dword ptr [esp + 0x70]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x78]
        fsub    dword ptr [g_76d5f0]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x78]
        fsub    dword ptr [g_76d5f0]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eb90
        push    0xfa007d00
        push    0x230
        push    0x12f
        push    0x21e
        push    0x105
        call    FUN_0055eb90
        mov     esi, dword ptr [edi + 0x74]
        add     esp, 0x28
        push    0x44078000
        push    0x43828000
        mov     ecx, esi
        call    FUN_005603e0
        push    0x440c0000
        push    0x43978000
        mov     ecx, esi
        call    FUN_00560400
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [edi + eax*4 + 0x5c]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esi + 0x104], ecx
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x34]
        mov     edi, dword ptr [esi]
        mov     dword ptr [esp + 0x54], edx
        mov     dword ptr [esp + 0x58], ebx
        fild    qword ptr [esp + 0x54]
        push    1
        push    0x3f666666
        fmul    dword ptr [g_76d070]
        push    ecx
        mov     dword ptr [esp + 0x60], eax
        mov     dword ptr [esp + 0x64], ebx
        fsubr   dword ptr [g_792674]
        fstp    dword ptr [esp]
        push    ecx
        fild    qword ptr [esp + 0x64]
        lea     ecx, [esp + 0x70]
        fmul    dword ptr [g_76d070]
        fsubr   dword ptr [g_792670]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, esi
        call    dword ptr [edi + 0x14]
        push    0xfa007d00
        push    0x225
        push    0x136
        push    0x225
        push    0x130
        call    FUN_0055eed0
        fld     dword ptr [esp + 0x4c]
        call    FUN_0075db4a
        push    0xfa007d00
        push    0x225
        mov     esi, eax
        push    0x135
        push    esi
        push    0x135
        call    FUN_0055eed0
        fld     dword ptr [esp + 0x94]
        fsub    dword ptr [g_76d5f0]
        push    0xfa007d00
        push    esi
        push    0x135
        push    esi
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eed0
        add     esp, 0x3c
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x74
        ret
    }
}
