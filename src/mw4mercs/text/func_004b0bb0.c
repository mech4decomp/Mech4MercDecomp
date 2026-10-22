/*
 * FUN_004b0bb0 (2523 B) -- __thiscall (RET 0xc). MLR sub-object alignment /
 * transform update. Iterates over a range table, computes a distance, fades
 * alpha based on range, and dispatches on an alignment type (0x100/0x200/0x300)
 * to build a 3x4 matrix via FUN_0041c830 / FUN_0041fde0 / FUN_004206b0, then
 * calls FUN_004b1f50 and FUN_0048ca40. Uses globals DAT_007daac8,
 * DAT_0076c5b0, DAT_007dab14.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_0048bca0(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_004206b0(void);
extern int  __cdecl FUN_006fab90(void);
extern void __cdecl FUN_004b1f50(void);
extern void __cdecl FUN_0048ca40(void);

extern float DAT_007daac8;
extern float DAT_0076c5b0;
extern float DAT_007dab14;

__declspec(naked) void FUN_004b0bb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x244
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x1c]
        mov     dword ptr [ebp - 0x34], esi
        call    FUN_00419480
        lea     eax, [esi + 0x80]
        push    eax
        lea     ecx, [ebp - 0x2c]
        call    FUN_00419480
        lea     ecx, [ebp - 0x2c]
        push    ecx
        lea     edx, [ebp - 0x1c]
        push    edx
        lea     ecx, [ebp - 0x1c]
        call    FUN_0040ca10
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x1c]
        faddp   st(1), st(0)
        fadd    dword ptr [DAT_007daac8]
        fst     dword ptr [ebp - 0x8]
        fcomp   dword ptr [DAT_0076c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_c24
        mov     dword ptr [ebp - 0x8], 0x0
L_c24:
        mov     edx, dword ptr [esi + 0x150]
        dec     edx
        mov     dword ptr [ebp - 0x20], edx
        js      L_1587
        mov     ecx, edx
        shl     ecx, 0x4
        mov     dword ptr [ebp - 0x30], ecx
L_c3c:
        mov     eax, dword ptr [esi + 0x14c]
        mov     ebx, ecx
        fld     dword ptr [ebx + eax*0x1]
        add     ebx, eax
        fcomp   dword ptr [ebp - 0x8]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_1575
        fld     dword ptr [ebx + 0xc]
        fcomp   dword ptr [ebp - 0x8]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_1575
        lea     ecx, [ebp - 0x6c]
        call    FUN_00491280
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, 0x6
        mov     esi, edx
        lea     edi, [ebp - 0x6c]
        rep movsd
        xor     edi, edi
        lea     esi, [ebp - 0x6c]
        xor     ecx, ecx
        mov     dword ptr [ebp - 0x54], edi
        lea     eax, [edx + 0x18]
        sub     esi, edx
L_c8e:
        mov     edx, dword ptr [eax]
        cmp     edx, edi
        jz      L_ca2
        mov     dword ptr [esi + eax*0x1], edx
        inc     ecx
        add     eax, 0x4
        cmp     ecx, 0x8
        jc      L_c8e
        jmp     L_cab
L_ca2:
        cmp     ecx, 0x8
        jnc     L_cab
        mov     dword ptr [ebp + ecx*0x4 - 0x54], edi
L_cab:
        fld     dword ptr [ebp - 0x8]
        mov     eax, dword ptr [DAT_007dab14]
        fcomp   dword ptr [ebx + 0x4]
        mov     dword ptr [ebp + 0xffffff54], eax
        fld     dword ptr [ebp - 0x8]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_cef
        fsub    dword ptr [ebx]
        mov     ecx, dword ptr [ebp - 0x6c]
        fld     dword ptr [ebx + 0x4]
        and     ecx, 0xffff3fff
        fsub    dword ptr [ebx]
        or      ecx, 0x10000
        mov     dword ptr [ebp - 0x6c], ecx
        fdivp   st(1), st(0)
        fmul    dword ptr [DAT_007dab14]
        fstp    dword ptr [DAT_007dab14]
        jmp     L_d25
L_cef:
        fcomp   dword ptr [ebx + 0x8]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_d5a
        fld     dword ptr [ebx + 0xc]
        mov     edx, dword ptr [ebp - 0x6c]
        fsub    dword ptr [ebp - 0x8]
        and     edx, 0xffff3fff
        fld     dword ptr [ebx + 0xc]
        or      edx, 0x10000
        fsub    dword ptr [ebx + 0x8]
        mov     dword ptr [ebp - 0x6c], edx
        fdivp   st(1), st(0)
        fmul    dword ptr [DAT_007dab14]
        fstp    dword ptr [DAT_007dab14]
L_d25:
        mov     eax, dword ptr [ebp - 0x64]
        mov     ebx, dword ptr [ebp - 0x60]
        mov     edx, dword ptr [ebp - 0x5c]
        or      eax, 0x1c000
        mov     dword ptr [ebp - 0x64], eax
        mov     eax, dword ptr [ebp - 0x68]
        and     eax, 0xfffffff0
        or      eax, 0x2
        mov     dword ptr [ebp - 0x68], eax
        mov     eax, dword ptr [ebp - 0x58]
        and     ebx, 0xfffe3fff
        or      edx, 0xf
        and     eax, 0xfffffff0
        mov     dword ptr [ebp - 0x60], ebx
        mov     dword ptr [ebp - 0x5c], edx
        mov     dword ptr [ebp - 0x58], eax
L_d5a:
        lea     ecx, [ebp + 0xfffffefc]
        call    FUN_0048bca0
        mov     ebx, dword ptr [ebp - 0x34]
        mov     ecx, dword ptr [ebx + 0x184]
        mov     eax, dword ptr [ebp - 0x20]
        mov     edx, dword ptr [ecx + eax*0x4]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp + 0xfffffefc], edx
        xor     edx, edx
        mov     dx, word ptr [ebx + 0x144]
        and     ecx, 0x3f
        mov     dword ptr [ebp + 0xffffff18], ecx
        cmp     eax, edx
        jl      L_14e9
        mov     eax, dword ptr [ebx + 0x148]
        cmp     eax, 0x100
        jz      L_12b3
        cmp     eax, 0x200
        jz      L_1054
        cmp     eax, 0x300
        jz      L_dd5
        push    0x77062c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_1501
        int     3
        jmp     L_1501
L_dd5:
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp + 0xffffff38], eax
        mov     eax, dword ptr [ebx + 0x10]
        add     eax, 0x80
        mov     dword ptr [ebp + 0xffffff30], ecx
        push    eax
        lea     ecx, [ebp + 0xffffff30]
        push    ecx
        lea     ecx, [ebp + 0xffffff48]
        mov     dword ptr [ebp + 0xffffff34], edx
        mov     dword ptr [ebp - 0x4], eax
        call    FUN_0041c830
        fld     dword ptr [ebx + 0x2c]
        fld     dword ptr [ebp + 0xffffff48]
        mov     edx, dword ptr [ebx + 0x3c]
        mov     eax, dword ptr [ebx + 0x4c]
        fsub    st(0), st(1)
        lea     esi, [ebx + 0x20]
        mov     dword ptr [ebp + 0xfffffea0], edx
        fstp    dword ptr [ebp + 0xffffff64]
        push    0x0
        push    0x1
        fstp    st(0)
        mov     ecx, 0xc
        fld     dword ptr [ebp + 0xffffff4c]
        lea     edi, [ebp + 0xfffffe1c]
        fsub    dword ptr [ebp + 0xfffffea0]
        rep movsd
        fstp    dword ptr [ebp + 0xffffff68]
        fld     dword ptr [ebp + 0xffffff50]
        mov     dword ptr [ebp + 0xfffffea4], eax
        push    0x2
        fsub    dword ptr [ebp + 0xfffffea4]
        lea     ecx, [ebp + 0xffffff64]
        push    ecx
        lea     ecx, [ebp + 0xfffffe1c]
        fstp    dword ptr [ebp + 0xffffff6c]
        call    FUN_0041fde0
        mov     edx, dword ptr [ebp - 0x4]
        lea     eax, [ebp + 0xfffffe1c]
        lea     ecx, [ebp + 0xfffffecc]
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 0x4], ecx
        mov     edx, dword ptr [ebp - 0x10]
        push    esi
        mov     esi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp - 0x4]
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
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
L_1025:
        lea     eax, [ebp + 0xfffffecc]
        lea     edx, [ebp + 0xfffffecc]
        push    eax
        lea     ecx, [ebp + 0xfffffe4c]
        mov     dword ptr [ebp + 0xffffff1c], edx
        call    FUN_004206b0
        lea     ecx, [ebp + 0xfffffe4c]
        mov     dword ptr [ebp + 0xffffff20], ecx
        jmp     L_1501
L_1054:
        mov     edx, dword ptr [ebp + 0x8]
        lea     eax, [edx + 0x80]
        push    eax
        lea     ecx, [ebp + 0xfffffec0]
        call    FUN_00419480
        mov     eax, dword ptr [ebx + 0x10]
        add     eax, 0x80
        push    eax
        mov     dword ptr [ebp - 0x4], eax
        lea     eax, [ebp + 0xfffffec0]
        push    eax
        lea     ecx, [ebp + 0xffffff3c]
        call    FUN_0041c830
        fld     dword ptr [ebx + 0x2c]
        fld     dword ptr [ebp + 0xffffff3c]
        mov     ecx, dword ptr [ebx + 0x3c]
        mov     edx, dword ptr [ebx + 0x4c]
        fsub    st(0), st(1)
        lea     esi, [ebx + 0x20]
        mov     dword ptr [ebp + 0xfffffeb8], ecx
        fstp    dword ptr [ebp - 0x78]
        push    -0x1
        push    0x1
        fstp    st(0)
        mov     dword ptr [ebp + 0xfffffebc], edx
        fld     dword ptr [ebp + 0xffffff40]
        mov     ecx, 0xc
        fsub    dword ptr [ebp + 0xfffffeb8]
        lea     edi, [ebp + 0xfffffdec]
        push    0x2
        lea     eax, [ebp - 0x78]
        fstp    dword ptr [ebp - 0x74]
        rep movsd
        fld     dword ptr [ebp + 0xffffff44]
        fsub    dword ptr [ebp + 0xfffffebc]
        fstp    dword ptr [ebp - 0x70]
        push    eax
        lea     ecx, [ebp + 0xfffffdec]
        call    FUN_0041fde0
        mov     ecx, dword ptr [ebp - 0x4]
        lea     edx, [ebp + 0xfffffdec]
        lea     eax, [ebp + 0xfffffecc]
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x4], edx
        mov     dword ptr [ebp - 0x10], eax
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp - 0x10]
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
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        lea     ecx, [ebp + 0xfffffecc]
        lea     edx, [ebp + 0xfffffecc]
        mov     dword ptr [ebp + 0xffffff1c], ecx
        push    edx
        lea     ecx, [ebp + 0xfffffe4c]
        call    FUN_004206b0
        lea     eax, [ebp + 0xfffffe4c]
        mov     dword ptr [ebp + 0xffffff20], eax
        jmp     L_1501
L_12b3:
        mov     ecx, dword ptr [ebp + 0x8]
        lea     eax, [ecx + 0x80]
        push    eax
        lea     ecx, [ebp + 0xfffffea8]
        call    FUN_00419480
        mov     edx, dword ptr [ebx + 0x10]
        add     edx, 0x80
        push    edx
        lea     eax, [ebp + 0xfffffea8]
        push    eax
        lea     ecx, [ebp + 0xffffff7c]
        call    FUN_0041c830
        lea     esi, [ebx + 0x20]
        push    esi
        lea     ecx, [ebp + 0xffffff70]
        call    FUN_00419480
        fld     dword ptr [ebp + 0xffffff7c]
        fsub    dword ptr [ebp + 0xffffff70]
        push    esi
        lea     ecx, [ebp + 0xfffffdbc]
        fstp    dword ptr [ebp + 0xffffff58]
        fld     dword ptr [ebp - 0x80]
        fsub    dword ptr [ebp + 0xffffff74]
        fstp    dword ptr [ebp + 0xffffff5c]
        fld     dword ptr [ebp - 0x7c]
        fsub    dword ptr [ebp + 0xffffff78]
        fstp    dword ptr [ebp + 0xffffff60]
        call    FUN_00419460
        push    -0x1
        push    edi
        push    0x2
        lea     ecx, [ebp + 0xffffff58]
        push    ecx
        lea     ecx, [ebp + 0xfffffdbc]
        call    FUN_0041fde0
        mov     edx, dword ptr [ebx + 0x10]
        add     edx, 0x80
        lea     eax, [ebp + 0xfffffdbc]
        lea     ecx, [ebp + 0xfffffecc]
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp - 0x10], ecx
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp - 0x10]
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
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        jmp     L_1025
L_14e9:
        lea     eax, [ebx + 0x80]
        lea     edx, [ebx + 0x154]
        mov     dword ptr [ebp + 0xffffff1c], eax
        mov     dword ptr [ebp + 0xffffff20], edx
L_1501:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, 0x6
        lea     esi, [ebp - 0x6c]
        lea     edi, [ebp + 0xffffff00]
        rep movsd
        add     eax, 0x18
        push    eax
        lea     ecx, [ebp + 0xfffffe7c]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp + 0xffffff2c], 0x7dab08
        call    FUN_004b1f50
        xor     edx, edx
        test    eax, eax
        setle   dl
        mov     dword ptr [ebp + 0xffffff28], eax
        lea     eax, [ebp + 0xfffffe7c]
        lea     ecx, [ebp + 0xfffffefc]
        push    ecx
        dec     edx
        and     edx, eax
        mov     dword ptr [ebp + 0xffffff24], edx
        mov     edx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edx + 0x26c]
        call    FUN_0048ca40
        mov     eax, dword ptr [ebp + 0xffffff54]
        mov     ecx, dword ptr [ebp - 0x30]
        mov     edx, dword ptr [ebp - 0x20]
        mov     esi, dword ptr [ebp - 0x34]
        mov     dword ptr [DAT_007dab14], eax
L_1575:
        dec     edx
        sub     ecx, 0x10
        test    edx, edx
        mov     dword ptr [ebp - 0x20], edx
        mov     dword ptr [ebp - 0x30], ecx
        jge     L_c3c
L_1587:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
