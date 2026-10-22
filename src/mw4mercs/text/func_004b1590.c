/*
 * FUN_004b1590 (2479 B) -- __thiscall (RET 0xc). MLR sub-object alignment /
 * transform update. Initializes via FUN_00491280 / FUN_00491670 /
 * FUN_004c8460, computes a distance, fades alpha based on range, and
 * dispatches on an alignment type (0x100/0x200/0x300) to build a 3x4 matrix
 * via FUN_0041c830 / FUN_0041fde0 / FUN_004206b0, then calls FUN_004b1f50 and
 * FUN_0048ca40. Uses globals DAT_007daac8, DAT_0076c5b0, DAT_007dab14.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_004c8460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca10(void);
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

__declspec(naked) void FUN_004b1590(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x23c
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [ebp - 0x64]
        call    FUN_00491280
        mov     esi, dword ptr [ebx + 0x140]
        mov     edi, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        lea     ecx, [ebp - 0x64]
        mov     dword ptr [ebp - 0x4c], 0x0
        call    FUN_00491670
        add     esi, 0x18
        push    esi
        add     edi, 0x18
        lea     eax, [ebp - 0x4c]
        push    edi
        push    eax
        call    FUN_004c8460
        mov     esi, dword ptr [ebp + 0x8]
        add     esp, 0xc
        lea     eax, [esi + 0x80]
        push    eax
        lea     ecx, [ebp - 0x18]
        call    FUN_00419480
        lea     eax, [ebx + 0x80]
        push    eax
        lea     ecx, [ebp - 0x24]
        call    FUN_00419480
        lea     ecx, [ebp - 0x24]
        push    ecx
        lea     edx, [ebp - 0x18]
        push    edx
        lea     ecx, [ebp - 0x18]
        call    FUN_0040ca10
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        faddp   st(1), st(0)
        fadd    dword ptr [DAT_007daac8]
        fst     dword ptr [ebp + 0xc]
        fcomp   dword ptr [DAT_0076c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_1638
        mov     dword ptr [ebp + 0xc], 0x0
L_1638:
        mov     edi, dword ptr [ebx + 0x150]
        dec     edi
        mov     dword ptr [ebp - 0x2c], edi
        js      L_1f3b
        mov     edx, edi
        shl     edx, 0x4
        mov     dword ptr [ebp - 0x28], edx
L_1650:
        mov     eax, dword ptr [ebx + 0x14c]
        mov     ecx, edx
        fld     dword ptr [ecx + eax*0x1]
        add     ecx, eax
        fcomp   dword ptr [ebp + 0xc]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_1f29
        fld     dword ptr [ecx + 0xc]
        fcomp   dword ptr [ebp + 0xc]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_1f29
        fld     dword ptr [ebp + 0xc]
        mov     eax, dword ptr [DAT_007dab14]
        fcomp   dword ptr [ecx + 0x4]
        mov     dword ptr [ebp - 0x74], eax
        fld     dword ptr [ebp + 0xc]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_16bd
        fsub    dword ptr [ecx]
        fld     dword ptr [ecx + 0x4]
        fsub    dword ptr [ecx]
        mov     ecx, dword ptr [ebp - 0x64]
        and     ecx, 0xffff3fff
        fdivp   st(1), st(0)
        or      ecx, 0x10000
        mov     dword ptr [ebp - 0x64], ecx
        fmul    dword ptr [DAT_007dab14]
        fstp    dword ptr [DAT_007dab14]
        jmp     L_16f3
L_16bd:
        fcomp   dword ptr [ecx + 0x8]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_1728
        fld     dword ptr [ecx + 0xc]
        mov     edx, dword ptr [ebp - 0x64]
        fsub    dword ptr [ebp + 0xc]
        and     edx, 0xffff3fff
        fld     dword ptr [ecx + 0xc]
        or      edx, 0x10000
        fsub    dword ptr [ecx + 0x8]
        mov     dword ptr [ebp - 0x64], edx
        fdivp   st(1), st(0)
        fmul    dword ptr [DAT_007dab14]
        fstp    dword ptr [DAT_007dab14]
L_16f3:
        mov     eax, dword ptr [ebp - 0x5c]
        mov     edx, dword ptr [ebp - 0x58]
        or      eax, 0x1c000
        mov     dword ptr [ebp - 0x5c], eax
        mov     eax, dword ptr [ebp - 0x60]
        and     edx, 0xfffe3fff
        and     eax, 0xfffffff0
        or      eax, 0x2
        mov     dword ptr [ebp - 0x58], edx
        mov     edx, dword ptr [ebp - 0x54]
        mov     dword ptr [ebp - 0x60], eax
        mov     eax, dword ptr [ebp - 0x50]
        or      edx, 0xf
        and     eax, 0xfffffff0
        mov     dword ptr [ebp - 0x54], edx
        mov     dword ptr [ebp - 0x50], eax
L_1728:
        lea     ecx, [ebp + 0xffffff04]
        call    FUN_0048bca0
        mov     eax, dword ptr [ebx + 0x184]
        mov     ecx, dword ptr [eax + edi*0x4]
        mov     edx, dword ptr [ebp + 0x10]
        xor     eax, eax
        mov     ax, word ptr [ebx + 0x144]
        and     edx, 0x3f
        mov     dword ptr [ebp + 0xffffff04], ecx
        mov     dword ptr [ebp + 0xffffff20], edx
        cmp     edi, eax
        jl      L_1ea2
        mov     eax, dword ptr [ebx + 0x148]
        cmp     eax, 0x100
        jz      L_1c82
        cmp     eax, 0x200
        jz      L_1a1a
        cmp     eax, 0x300
        jz      L_179d
        push    0x77062c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_1eba
        int     3
        jmp     L_1eba
L_179d:
        mov     ecx, dword ptr [esi + 0x8c]
        mov     edx, dword ptr [esi + 0x9c]
        lea     eax, [esi + 0x80]
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp + 0xffffff40], eax
        mov     eax, dword ptr [ebx + 0x10]
        add     eax, 0x80
        mov     dword ptr [ebp + 0xffffff38], ecx
        push    eax
        lea     ecx, [ebp + 0xffffff38]
        push    ecx
        lea     ecx, [ebp + 0xffffff50]
        mov     dword ptr [ebp + 0xffffff3c], edx
        mov     dword ptr [ebp - 0x4], eax
        call    FUN_0041c830
        fld     dword ptr [ebx + 0x2c]
        fld     dword ptr [ebp + 0xffffff50]
        mov     edx, dword ptr [ebx + 0x3c]
        mov     eax, dword ptr [ebx + 0x4c]
        fsub    st(0), st(1)
        lea     esi, [ebx + 0x20]
        mov     dword ptr [ebp + 0xfffffea8], edx
        fstp    dword ptr [ebp + 0xffffff74]
        push    0x0
        push    0x1
        fstp    st(0)
        mov     ecx, 0xc
        fld     dword ptr [ebp + 0xffffff54]
        lea     edi, [ebp + 0xfffffe24]
        fsub    dword ptr [ebp + 0xfffffea8]
        rep movsd
        fstp    dword ptr [ebp + 0xffffff78]
        fld     dword ptr [ebp + 0xffffff58]
        mov     dword ptr [ebp + 0xfffffeac], eax
        push    0x2
        fsub    dword ptr [ebp + 0xfffffeac]
        lea     ecx, [ebp + 0xffffff74]
        push    ecx
        lea     ecx, [ebp + 0xfffffe24]
        fstp    dword ptr [ebp + 0xffffff7c]
        call    FUN_0041fde0
        mov     edx, dword ptr [ebp - 0x4]
        lea     eax, [ebp + 0xfffffe24]
        lea     ecx, [ebp + 0xfffffed4]
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x4], ecx
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
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
        lea     eax, [ebp + 0xfffffed4]
        lea     edx, [ebp + 0xfffffed4]
        push    eax
        lea     ecx, [ebp + 0xfffffe54]
        mov     dword ptr [ebp + 0xffffff24], edx
        call    FUN_004206b0
        lea     ecx, [ebp + 0xfffffe54]
        mov     dword ptr [ebp + 0xffffff28], ecx
        jmp     L_1eba
L_1a1a:
        lea     eax, [esi + 0x80]
        push    eax
        lea     ecx, [ebp + 0xfffffec8]
        call    FUN_00419480
        mov     eax, dword ptr [ebx + 0x10]
        add     eax, 0x80
        push    eax
        lea     edx, [ebp + 0xfffffec8]
        push    edx
        lea     ecx, [ebp + 0xffffff44]
        mov     dword ptr [ebp - 0x4], eax
        call    FUN_0041c830
        fld     dword ptr [ebx + 0x2c]
        fld     dword ptr [ebp + 0xffffff44]
        mov     eax, dword ptr [ebx + 0x3c]
        mov     ecx, dword ptr [ebx + 0x4c]
        fsub    st(0), st(1)
        lea     esi, [ebx + 0x20]
        mov     dword ptr [ebp + 0xfffffec0], eax
        fstp    dword ptr [ebp + 0xffffff5c]
        push    -0x1
        mov     dword ptr [ebp + 0xfffffec4], ecx
        fstp    st(0)
        push    0x1
        fld     dword ptr [ebp + 0xffffff48]
        mov     ecx, 0xc
        fsub    dword ptr [ebp + 0xfffffec0]
        lea     edi, [ebp + 0xfffffdf4]
        push    0x2
        lea     edx, [ebp + 0xffffff5c]
        fstp    dword ptr [ebp + 0xffffff60]
        rep movsd
        fld     dword ptr [ebp + 0xffffff4c]
        fsub    dword ptr [ebp + 0xfffffec4]
        fstp    dword ptr [ebp + 0xffffff64]
        push    edx
        lea     ecx, [ebp + 0xfffffdf4]
        call    FUN_0041fde0
        mov     eax, dword ptr [ebp - 0x4]
        lea     ecx, [ebp + 0xfffffdf4]
        lea     edx, [ebp + 0xfffffed4]
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0xc]
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
L_1c53:
        lea     ecx, [ebp + 0xfffffed4]
        lea     eax, [ebp + 0xfffffed4]
        push    ecx
        lea     ecx, [ebp + 0xfffffe54]
        mov     dword ptr [ebp + 0xffffff24], eax
        call    FUN_004206b0
        lea     edx, [ebp + 0xfffffe54]
        mov     dword ptr [ebp + 0xffffff28], edx
        jmp     L_1eba
L_1c82:
        lea     eax, [esi + 0x80]
        push    eax
        lea     ecx, [ebp + 0xfffffeb0]
        call    FUN_00419480
        mov     eax, dword ptr [ebx + 0x10]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp + 0xfffffeb0]
        push    ecx
        lea     ecx, [ebp - 0x70]
        call    FUN_0041c830
        lea     esi, [ebx + 0x20]
        push    esi
        lea     ecx, [ebp - 0x80]
        call    FUN_00419480
        fld     dword ptr [ebp - 0x70]
        fsub    dword ptr [ebp - 0x80]
        push    esi
        lea     ecx, [ebp + 0xfffffdc4]
        fstp    dword ptr [ebp + 0xffffff68]
        fld     dword ptr [ebp - 0x6c]
        fsub    dword ptr [ebp - 0x7c]
        fstp    dword ptr [ebp + 0xffffff6c]
        fld     dword ptr [ebp - 0x68]
        fsub    dword ptr [ebp - 0x78]
        fstp    dword ptr [ebp + 0xffffff70]
        call    FUN_00419460
        push    -0x1
        push    0x0
        push    0x2
        lea     edx, [ebp + 0xffffff68]
        push    edx
        lea     ecx, [ebp + 0xfffffdc4]
        call    FUN_0041fde0
        mov     eax, dword ptr [ebx + 0x10]
        add     eax, 0x80
        lea     ecx, [ebp + 0xfffffdc4]
        lea     edx, [ebp + 0xfffffed4]
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0xc]
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
        jmp     L_1c53
L_1ea2:
        lea     eax, [ebx + 0x80]
        mov     dword ptr [ebp + 0xffffff24], eax
        lea     eax, [ebx + 0x154]
        mov     dword ptr [ebp + 0xffffff28], eax
L_1eba:
        mov     ecx, 0x6
        lea     esi, [ebp - 0x64]
        lea     edi, [ebp + 0xffffff08]
        rep movsd
        lea     ecx, [ebp - 0x4c]
        push    ecx
        lea     edx, [ebp + 0xfffffe84]
        push    edx
        mov     ecx, ebx
        mov     dword ptr [ebp + 0xffffff34], 0x7dab08
        call    FUN_004b1f50
        xor     ecx, ecx
        test    eax, eax
        setle   cl
        lea     edx, [ebp + 0xfffffe84]
        mov     dword ptr [ebp + 0xffffff30], eax
        lea     eax, [ebp + 0xffffff04]
        push    eax
        dec     ecx
        and     ecx, edx
        mov     dword ptr [ebp + 0xffffff2c], ecx
        mov     ecx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ecx + 0x26c]
        call    FUN_0048ca40
        mov     edx, dword ptr [ebp - 0x74]
        mov     edi, dword ptr [ebp - 0x2c]
        mov     esi, dword ptr [ebp + 0x8]
        mov     dword ptr [DAT_007dab14], edx
        mov     edx, dword ptr [ebp - 0x28]
L_1f29:
        dec     edi
        sub     edx, 0x10
        test    edi, edi
        mov     dword ptr [ebp - 0x2c], edi
        mov     dword ptr [ebp - 0x28], edx
        jge     L_1650
L_1f3b:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
