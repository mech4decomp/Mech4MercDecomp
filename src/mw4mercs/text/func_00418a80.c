/*
 * FUN_00418a80 (1142 B) — OBB-vs-OBB separating-axis collision test.
 * __thiscall(ECX=boxA, [ESP+4]=out normal, [ESP+8]=boxB), RET 0x8.
 * Returns the separating axis index (1..6) that was chosen.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007b220c;   /* DAT_007b220c */
extern float g_0076c5b0;   /* _DAT_0076c5b0 */

__declspec(naked) void FUN_00418a80(void)
{
    __asm {
        sub     esp, 0x34
        mov     edx, dword ptr [esp+0x3c]
        fld     dword ptr [ecx+0xc]
        fsub    dword ptr [edx+0xc]
        fstp    dword ptr [esp+0x4]
        fld     dword ptr [ecx+0x1c]
        fsub    dword ptr [edx+0x1c]
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [ecx+0x2c]
        fsub    dword ptr [edx+0x2c]
        fstp    dword ptr [esp+0xc]
        fld     dword ptr [ecx+0x20]
        fmul    dword ptr [edx+0x20]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [ecx+0x10]
        faddp   st(1),st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [ecx]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x10]
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [ecx]
        fld     dword ptr [ecx+0x20]
        fmul    dword ptr [edx+0x24]
        faddp   st(1),st(0)
        fld     dword ptr [ecx+0x10]
        fmul    dword ptr [edx+0x14]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x14]
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [ecx+0x10]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [ecx+0x20]
        faddp   st(1),st(0)
        fld     dword ptr [ecx]
        fmul    dword ptr [edx+0x8]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x18]
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [ecx+0x20]
        fld     dword ptr [esp+0x8]
        fmul    dword ptr [ecx+0x10]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x4]
        fmul    dword ptr [ecx]
        faddp   st(1),st(0)
        fstp    dword ptr [esp+0x3c]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edx+0x30]
        fld     dword ptr [esp+0x18]
        fmul    dword ptr [edx+0x38]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edx+0x34]
        faddp   st(1),st(0)
        fadd    dword ptr [ecx+0x30]
        fld     dword ptr [esp+0x3c]
        fabs
        fxch    st(1)
        fxch    st(1)
        fsubp   st(1),st(0)
        /* __emit: MSVC6 drops the 00 disp byte on [esp+0] (D9 14 24 vs ref D9 54 24 00) */
                __emit 0xD9
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fld     dword ptr [g_007b220c]
        /* __emit: MSVC6 drops the 00 disp byte on [esp+0] (D8 04 24 vs ref D8 44 24 00) */
                __emit 0xD8
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fld     dword ptr [esp+0x3c]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 (MSVC6 inserts 9B WAIT) */
                __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      lbl1
        fchs
lbl1:
        fld     st(0)
        push    esi
        fmul    dword ptr [ecx]
        mov     esi, dword ptr [esp+0x3c]
        push    edi
        mov     edi, 1
        fstp    dword ptr [esi]
        fld     st(0)
        fmul    dword ptr [ecx+0x10]
        fstp    dword ptr [esi+0x4]
        fmul    dword ptr [ecx+0x20]
        fstp    dword ptr [esi+0x8]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [ecx+0x14]
        fld     dword ptr [ecx+0x4]
        fmul    dword ptr [edx]
        faddp   st(1),st(0)
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [ecx+0x24]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x24]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [ecx+0x24]
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [ecx+0x14]
        faddp   st(1),st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [ecx+0x4]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x28]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [ecx+0x24]
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [ecx+0x14]
        faddp   st(1),st(0)
        fld     dword ptr [ecx+0x4]
        fmul    dword ptr [edx+0x8]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x2c]
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [ecx+0x4]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [ecx+0x24]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [ecx+0x14]
        faddp   st(1),st(0)
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x24]
        fmul    dword ptr [edx+0x30]
        fld     dword ptr [esp+0x2c]
        fmul    dword ptr [edx+0x38]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x28]
        fmul    dword ptr [edx+0x34]
        faddp   st(1),st(0)
        fadd    dword ptr [ecx+0x34]
        fld     dword ptr [esp+0x44]
        fabs
        fxch    st(1)
        fxch    st(1)
        fsubp   st(1),st(0)
        fst     dword ptr [esp+0x8]
        fcomp   st(1)
        /* __emit: fnstsw ax no-WAIT DF E0 */
                __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      lbl2
        fstp    st(0)
        fld     dword ptr [esp+0x8]
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x44]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
                __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      lbl3
        fchs
lbl3:
        fld     st(0)
        mov     edi, 2
        fmul    dword ptr [ecx+0x4]
        fstp    dword ptr [esi]
        fld     st(0)
        fmul    dword ptr [ecx+0x14]
        fstp    dword ptr [esi+0x4]
        fmul    dword ptr [ecx+0x24]
        fstp    dword ptr [esi+0x8]
lbl2:
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [ecx+0x18]
        fld     dword ptr [ecx+0x8]
        fmul    dword ptr [edx]
        faddp   st(1),st(0)
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [ecx+0x28]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x30]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [ecx+0x28]
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [ecx+0x18]
        faddp   st(1),st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [ecx+0x8]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x34]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [ecx+0x28]
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [ecx+0x18]
        faddp   st(1),st(0)
        fld     dword ptr [ecx+0x8]
        fmul    dword ptr [edx+0x8]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x38]
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [ecx+0x8]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [ecx+0x28]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [ecx+0x18]
        faddp   st(1),st(0)
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x30]
        fmul    dword ptr [edx+0x30]
        fld     dword ptr [esp+0x38]
        fmul    dword ptr [edx+0x38]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x34]
        fmul    dword ptr [edx+0x34]
        faddp   st(1),st(0)
        fadd    dword ptr [ecx+0x38]
        fld     dword ptr [esp+0x44]
        fabs
        fxch    st(1)
        fxch    st(1)
        fsubp   st(1),st(0)
        fst     dword ptr [esp+0x8]
        fcomp   st(1)
        /* __emit: fnstsw ax no-WAIT DF E0 */
                __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      lbl4
        fstp    st(0)
        fld     dword ptr [esp+0x8]
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x44]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
                __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      lbl5
        fchs
lbl5:
        fld     st(0)
        mov     edi, 3
        fmul    dword ptr [ecx+0x8]
        fstp    dword ptr [esi]
        fld     st(0)
        fmul    dword ptr [ecx+0x18]
        fstp    dword ptr [esi+0x4]
        fmul    dword ptr [ecx+0x28]
        fstp    dword ptr [esi+0x8]
lbl4:
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edx+0x10]
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [edx]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edx+0x20]
        faddp   st(1),st(0)
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x30]
        fmul    dword ptr [ecx+0x38]
        fld     dword ptr [esp+0x24]
        fmul    dword ptr [ecx+0x34]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x18]
        fmul    dword ptr [ecx+0x30]
        faddp   st(1),st(0)
        fadd    dword ptr [edx+0x30]
        fld     dword ptr [esp+0x44]
        fabs
        fxch    st(1)
        fxch    st(1)
        fsubp   st(1),st(0)
        fst     dword ptr [esp+0x8]
        fcomp   st(1)
        /* __emit: fnstsw ax no-WAIT DF E0 */
                __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      lbl6
        fstp    st(0)
        fld     dword ptr [esp+0x8]
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x44]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
                __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      lbl7
        fchs
lbl7:
        fld     st(0)
        mov     edi, 4
        fmul    dword ptr [edx]
        fstp    dword ptr [esi]
        fld     st(0)
        fmul    dword ptr [edx+0x10]
        fstp    dword ptr [esi+0x4]
        fmul    dword ptr [edx+0x20]
        fstp    dword ptr [esi+0x8]
lbl6:
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [edx+0x4]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edx+0x24]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edx+0x14]
        faddp   st(1),st(0)
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x34]
        fmul    dword ptr [ecx+0x38]
        fld     dword ptr [esp+0x28]
        fmul    dword ptr [ecx+0x34]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x1c]
        fmul    dword ptr [ecx+0x30]
        faddp   st(1),st(0)
        fadd    dword ptr [edx+0x34]
        fld     dword ptr [esp+0x44]
        fabs
        fxch    st(1)
        fxch    st(1)
        fsubp   st(1),st(0)
        fst     dword ptr [esp+0x8]
        fcomp   st(1)
        /* __emit: fnstsw ax no-WAIT DF E0 */
                __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      lbl8
        fstp    st(0)
        fld     dword ptr [esp+0x8]
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x44]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
                __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      lbl9
        fchs
lbl9:
        fld     st(0)
        mov     edi, 5
        fmul    dword ptr [edx+0x4]
        fstp    dword ptr [esi]
        fld     st(0)
        fmul    dword ptr [edx+0x14]
        fstp    dword ptr [esi+0x4]
        fmul    dword ptr [edx+0x24]
        fstp    dword ptr [esi+0x8]
lbl8:
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edx+0x28]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edx+0x18]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [edx+0x8]
        faddp   st(1),st(0)
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x38]
        fmul    dword ptr [ecx+0x38]
        fld     dword ptr [esp+0x2c]
        fmul    dword ptr [ecx+0x34]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x20]
        fmul    dword ptr [ecx+0x30]
        faddp   st(1),st(0)
        fadd    dword ptr [edx+0x38]
        fld     dword ptr [esp+0x44]
        fabs
        fxch    st(1)
        fxch    st(1)
        fsubp   st(1),st(0)
        fst     dword ptr [esp+0x8]
        fcomp   st(1)
        /* __emit: fnstsw ax no-WAIT DF E0 */
                __emit 0xDF
        __emit 0xE0
        fstp    st(0)
        /* __emit: test ah,imm8 rejected by MSVC6 */
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      lbl10
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x44]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
                __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      lbl11
        fchs
lbl11:
        fld     st(0)
        pop     edi
        fmul    dword ptr [edx+0x8]
        mov     eax, 6
        fstp    dword ptr [esi]
        fld     st(0)
        fmul    dword ptr [edx+0x18]
        fstp    dword ptr [esi+0x4]
        fmul    dword ptr [edx+0x28]
        fstp    dword ptr [esi+0x8]
        pop     esi
        add     esp, 0x34
        ret     8
lbl10:
        mov     eax, edi
        pop     edi
        pop     esi
        add     esp, 0x34
        ret     8
    }
}
