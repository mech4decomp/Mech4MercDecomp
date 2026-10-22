/*
 * FUN_00418f00 (1369 B) — OBB-vs-OBB separating-axis collision test (variant
 * with a third box param). __thiscall(ECX=boxA, [ESP+4]=out normal,
 * [ESP+8]=boxB, [ESP+0xC]=boxC), RET 0xC. Calls FUN_0040c9c0 (__stdcall,
 * 3 float args) to normalize the center delta.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007b220c;   /* DAT_007b220c */
extern float g_0076c5b0;   /* _DAT_0076c5b0 */
extern float g_0076d584;   /* _DAT_0076d584 */
extern void __stdcall FUN_0040c9c0(void);

__declspec(naked) void FUN_00418f00(void)
{
    __asm {
        sub     esp, 0x34
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi+0x2c]
        push    edi
        mov     edi, dword ptr [esp+0x44]
        fsub    dword ptr [edi+0x2c]
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [esi+0x1c]
        push    ecx
        fsub    dword ptr [edi+0x1c]
        fstp    dword ptr [esp]
        fld     dword ptr [esi+0xc]
        push    ecx
        fsub    dword ptr [edi+0xc]
        lea     ecx, [esp+0x18]
        fstp    dword ptr [esp]
        call    FUN_0040c9c0
        fld     dword ptr [esi+0x20]
        fmul    dword ptr [edi+0x20]
        mov     ecx, dword ptr [esp+0x48]
        fld     dword ptr [edi+0x10]
        fmul    dword ptr [esi+0x10]
        faddp   st(1),st(0)
        fld     dword ptr [edi]
        fmul    dword ptr [esi]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x18]
        fld     dword ptr [edi+0x4]
        fmul    dword ptr [esi]
        fld     dword ptr [esi+0x20]
        fmul    dword ptr [edi+0x24]
        faddp   st(1),st(0)
        fld     dword ptr [esi+0x10]
        fmul    dword ptr [edi+0x14]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x1c]
        fld     dword ptr [edi+0x18]
        fmul    dword ptr [esi+0x10]
        fld     dword ptr [edi+0x28]
        fmul    dword ptr [esi+0x20]
        faddp   st(1),st(0)
        fld     dword ptr [esi]
        fmul    dword ptr [edi+0x8]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x20]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [esi+0x20]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [esi+0x10]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [esi]
        faddp   st(1),st(0)
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [esi+0x20]
        fmul    dword ptr [ecx+0x8]
        fld     dword ptr [ecx+0x4]
        fmul    dword ptr [esi+0x10]
        faddp   st(1),st(0)
        fld     dword ptr [ecx]
        fmul    dword ptr [esi]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x48]
        fld     dword ptr [esp+0x20]
        fmul    dword ptr [edi+0x38]
        fld     dword ptr [esp+0x1c]
        fmul    dword ptr [edi+0x34]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x18]
        fmul    dword ptr [edi+0x30]
        faddp   st(1),st(0)
        fadd    dword ptr [esi+0x30]
        fld     dword ptr [esp+0x8]
        fabs
        fxch    st(1)
        fxch    st(1)
        fsubp   st(1),st(0)
        fst     dword ptr [esp+0x44]
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x8]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl1
        fchs
lbl1:
        fld     st(0)
        mov     edx, dword ptr [esp+0x40]
        fmul    dword ptr [esi]
        fstp    dword ptr [edx]
        fld     st(0)
        fmul    dword ptr [esi+0x10]
        fstp    dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x20]
        fstp    dword ptr [edx+0x8]
        fld     dword ptr [esi+0x24]
        fmul    dword ptr [edi+0x20]
        fld     dword ptr [edi+0x10]
        fmul    dword ptr [esi+0x14]
        faddp   st(1),st(0)
        fld     dword ptr [esi+0x4]
        fmul    dword ptr [edi]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x24]
        fld     dword ptr [edi+0x24]
        fmul    dword ptr [esi+0x24]
        fld     dword ptr [edi+0x14]
        fmul    dword ptr [esi+0x14]
        faddp   st(1),st(0)
        fld     dword ptr [edi+0x4]
        fmul    dword ptr [esi+0x4]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x28]
        fld     dword ptr [esi+0x4]
        fmul    dword ptr [edi+0x8]
        fld     dword ptr [edi+0x28]
        fmul    dword ptr [esi+0x24]
        faddp   st(1),st(0)
        fld     dword ptr [edi+0x18]
        fmul    dword ptr [esi+0x14]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x2c]
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [esi+0x4]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [esi+0x24]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [esi+0x14]
        faddp   st(1),st(0)
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x2c]
        fmul    dword ptr [edi+0x38]
        fld     dword ptr [esp+0x28]
        fmul    dword ptr [edi+0x34]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x24]
        fmul    dword ptr [edi+0x30]
        faddp   st(1),st(0)
        fadd    dword ptr [esi+0x34]
        fld     dword ptr [esp+0x8]
        fabs
        fxch    st(1)
        fxch    st(1)
        fsubp   st(1),st(0)
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [ecx+0x8]
        fmul    dword ptr [esi+0x24]
        fld     dword ptr [ecx+0x4]
        fmul    dword ptr [esi+0x14]
        faddp   st(1),st(0)
        fld     dword ptr [esi+0x4]
        fmul    dword ptr [ecx]
        faddp   st(1),st(0)
        fabs
        fcomp   dword ptr [g_0076d584]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl2
        fld     dword ptr [esp+0x44]
        fcomp   st(1)
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jnz     lbl3
        fld     dword ptr [esp+0x48]
        fcomp   dword ptr [g_0076d584]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl2
lbl3:
        fstp    st(0)
        fld     dword ptr [esp+0x44]
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x8]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl4
        fchs
lbl4:
        fld     st(0)
        fmul    dword ptr [esi+0x4]
        fstp    dword ptr [edx]
        fld     st(0)
        fmul    dword ptr [esi+0x14]
        fstp    dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x24]
        fstp    dword ptr [edx+0x8]
lbl2:
        fld     dword ptr [esi+0x28]
        fmul    dword ptr [edi+0x20]
        fld     dword ptr [edi+0x10]
        fmul    dword ptr [esi+0x18]
        faddp   st(1),st(0)
        fld     dword ptr [esi+0x8]
        fmul    dword ptr [edi]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x30]
        fld     dword ptr [edi+0x24]
        fmul    dword ptr [esi+0x28]
        fld     dword ptr [edi+0x14]
        fmul    dword ptr [esi+0x18]
        faddp   st(1),st(0)
        fld     dword ptr [edi+0x4]
        fmul    dword ptr [esi+0x8]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x34]
        fld     dword ptr [esi+0x8]
        fmul    dword ptr [edi+0x8]
        fld     dword ptr [edi+0x28]
        fmul    dword ptr [esi+0x28]
        faddp   st(1),st(0)
        fld     dword ptr [edi+0x18]
        fmul    dword ptr [esi+0x18]
        faddp   st(1),st(0)
        fabs
        fstp    dword ptr [esp+0x38]
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [esi+0x8]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [esi+0x28]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [esi+0x18]
        faddp   st(1),st(0)
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x38]
        fmul    dword ptr [edi+0x38]
        fld     dword ptr [esp+0x34]
        fmul    dword ptr [edi+0x34]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x30]
        fmul    dword ptr [edi+0x30]
        faddp   st(1),st(0)
        fadd    dword ptr [esi+0x38]
        fld     dword ptr [esp+0x8]
        fabs
        fxch    st(1)
        fxch    st(1)
        fsubp   st(1),st(0)
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [ecx+0x8]
        fmul    dword ptr [esi+0x28]
        fld     dword ptr [ecx+0x4]
        fmul    dword ptr [esi+0x18]
        faddp   st(1),st(0)
        fld     dword ptr [esi+0x8]
        fmul    dword ptr [ecx]
        faddp   st(1),st(0)
        fabs
        fcomp   dword ptr [g_0076d584]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl5
        fld     dword ptr [esp+0x44]
        fcomp   st(1)
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl5
        fstp    st(0)
        fld     dword ptr [esp+0x44]
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x8]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl6
        fchs
lbl6:
        fld     st(0)
        fmul    dword ptr [esi+0x8]
        fstp    dword ptr [edx]
        fld     st(0)
        fmul    dword ptr [esi+0x18]
        fstp    dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x28]
        fstp    dword ptr [edx+0x8]
lbl5:
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edi+0x10]
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [edi]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edi+0x20]
        faddp   st(1),st(0)
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x30]
        fmul    dword ptr [esi+0x38]
        fld     dword ptr [esp+0x24]
        fmul    dword ptr [esi+0x34]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x18]
        fmul    dword ptr [esi+0x30]
        faddp   st(1),st(0)
        fadd    dword ptr [edi+0x30]
        fld     dword ptr [esp+0x8]
        fabs
        fxch    st(1)
        fxch    st(1)
        fsubp   st(1),st(0)
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [edi]
        fmul    dword ptr [ecx]
        fld     dword ptr [edi+0x10]
        fmul    dword ptr [ecx+0x4]
        faddp   st(1),st(0)
        fld     dword ptr [ecx+0x8]
        fmul    dword ptr [edi+0x20]
        faddp   st(1),st(0)
        fabs
        fcomp   dword ptr [g_0076d584]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl7
        fld     dword ptr [esp+0x44]
        fcomp   st(1)
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl7
        fstp    st(0)
        fld     dword ptr [esp+0x44]
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x8]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl8
        fchs
lbl8:
        fld     st(0)
        fmul    dword ptr [edi]
        fstp    dword ptr [edx]
        fld     st(0)
        fmul    dword ptr [edi+0x10]
        fstp    dword ptr [edx+0x4]
        fmul    dword ptr [edi+0x20]
        fstp    dword ptr [edx+0x8]
lbl7:
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [edi+0x4]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edi+0x24]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edi+0x14]
        faddp   st(1),st(0)
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x34]
        fmul    dword ptr [esi+0x38]
        fld     dword ptr [esp+0x28]
        fmul    dword ptr [esi+0x34]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x1c]
        fmul    dword ptr [esi+0x30]
        faddp   st(1),st(0)
        fadd    dword ptr [edi+0x34]
        fld     dword ptr [esp+0x8]
        fabs
        fxch    st(1)
        fxch    st(1)
        fsubp   st(1),st(0)
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [ecx+0x8]
        fmul    dword ptr [edi+0x24]
        fld     dword ptr [ecx+0x4]
        fmul    dword ptr [edi+0x14]
        faddp   st(1),st(0)
        fld     dword ptr [edi+0x4]
        fmul    dword ptr [ecx]
        faddp   st(1),st(0)
        fabs
        fcomp   dword ptr [g_0076d584]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl9
        fld     dword ptr [esp+0x44]
        fcomp   st(1)
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl9
        fstp    st(0)
        fld     dword ptr [esp+0x44]
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x8]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl10
        fchs
lbl10:
        fld     st(0)
        fmul    dword ptr [edi+0x4]
        fstp    dword ptr [edx]
        fld     st(0)
        fmul    dword ptr [edi+0x14]
        fstp    dword ptr [edx+0x4]
        fmul    dword ptr [edi+0x24]
        fstp    dword ptr [edx+0x8]
lbl9:
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edi+0x28]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edi+0x18]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [edi+0x8]
        faddp   st(1),st(0)
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x38]
        fmul    dword ptr [esi+0x38]
        fld     dword ptr [esp+0x2c]
        fmul    dword ptr [esi+0x34]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x20]
        fmul    dword ptr [esi+0x30]
        faddp   st(1),st(0)
        fadd    dword ptr [edi+0x38]
        fld     dword ptr [esp+0x8]
        fabs
        fxch    st(1)
        fxch    st(1)
        fsubp   st(1),st(0)
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [edi+0x28]
        fmul    dword ptr [ecx+0x8]
        fld     dword ptr [edi+0x18]
        fmul    dword ptr [ecx+0x4]
        faddp   st(1),st(0)
        fld     dword ptr [ecx]
        fmul    dword ptr [edi+0x8]
        faddp   st(1),st(0)
        fabs
        fcomp   dword ptr [g_0076d584]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl11
        fld     dword ptr [esp+0x44]
        fcomp   st(1)
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        fstp    st(0)
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl12
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x8]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl13
        fchs
lbl13:
        fld     st(0)
        fmul    dword ptr [edi+0x8]
        fstp    dword ptr [edx]
        fld     st(0)
        fmul    dword ptr [edi+0x18]
        fstp    dword ptr [edx+0x4]
        fmul    dword ptr [edi+0x28]
        pop     edi
        pop     esi
        fstp    dword ptr [edx+0x8]
        add     esp, 0x34
        ret     0xc
lbl11:
        fstp    st(0)
lbl12:
        pop     edi
        pop     esi
        add     esp, 0x34
        ret     0xc
    }
}
