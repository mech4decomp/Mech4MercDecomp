/*
 * FUN_00419ad0 (299 B) — sphere-vs-sphere collision resolution.
 * __thiscall(ECX=out, [ESP+4]=sphereA, [ESP+8]=sphereB), RET 0x8.
 * Returns the resolved sphere (out).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;   /* _DAT_0076d064 */
extern float g_0076d070;   /* _DAT_0076d070 */

__declspec(naked) void FUN_00419ad0(void)
{
    __asm {
        sub     esp, 0x18
        mov     edx, dword ptr [esp+0x20]
        push    esi
        mov     esi, dword ptr [esp+0x20]
        fld     dword ptr [esi]
        fsub    dword ptr [edx]
        fstp    dword ptr [esp+0x4]
        fld     dword ptr [esi+0x4]
        fsub    dword ptr [edx+0x4]
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [esi+0x8]
        fsub    dword ptr [edx+0x8]
        fst     dword ptr [esp+0xc]
        fld     dword ptr [esp+0x8]
        fld     dword ptr [esp+0x4]
        fmul    dword ptr [esp+0x4]
        fstp    dword ptr [esp+0x24]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1),st(0)
        fadd    dword ptr [esp+0x24]
        fsqrt
        fstp    dword ptr [esp+0x20]
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [esp+0x20]
        fadd    dword ptr [esi+0xc]
        fcomp   dword ptr [edx+0xc]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      lbl1
        mov     eax, dword ptr [edx]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [edx+0x4]
        mov     dword ptr [ecx+0x4], eax
        mov     eax, dword ptr [edx+0x8]
        mov     edx, dword ptr [edx+0xc]
        mov     dword ptr [ecx+0x8], eax
        mov     dword ptr [ecx+0xc], edx
        mov     eax, ecx
        pop     esi
        add     esp, 0x18
        ret     8
lbl1:
        fld     dword ptr [esp+0x20]
        fadd    dword ptr [edx+0xc]
        fcomp   dword ptr [esi+0xc]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      lbl2
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [esi+0x4]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esi+0x8]
        mov     dword ptr [ecx+0x4], edx
        mov     edx, dword ptr [esi+0xc]
        mov     dword ptr [ecx+0x8], eax
        mov     dword ptr [ecx+0xc], edx
        mov     eax, ecx
        pop     esi
        add     esp, 0x18
        ret     8
lbl2:
        fld     dword ptr [esp+0xc]
        mov     eax, ecx
        fmul    dword ptr [esp+0xc]
        fld     dword ptr [esp+0x8]
        fmul    dword ptr [esp+0x8]
        faddp   st(1),st(0)
        fadd    dword ptr [esp+0x24]
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [esp+0x4]
        fstp    dword ptr [esp+0x10]
        fld     st(0)
        fmul    dword ptr [esp+0x8]
        fstp    dword ptr [esp+0x14]
        fmul    dword ptr [esp+0xc]
        fld     dword ptr [esi+0xc]
        pop     esi
        fadd    dword ptr [edx+0xc]
        fadd    dword ptr [esp+0x1c]
        fmul    dword ptr [g_0076d070]
        fld     st(0)
        fsub    dword ptr [edx+0xc]
        fld     dword ptr [esp+0xc]
        fmul    st(0), st(1)
        fadd    dword ptr [edx]
        fstp    dword ptr [ecx]
        fld     dword ptr [esp+0x10]
        fmul    st(0), st(1)
        fadd    dword ptr [edx+0x4]
        fstp    dword ptr [ecx+0x4]
        fxch    st(2)
        fmul    st(0), st(2)
        fadd    dword ptr [edx+0x8]
        fstp    dword ptr [ecx+0x8]
        fxch    st(1)
        fstp    st(0)
        fstp    dword ptr [ecx+0xc]
        add     esp, 0x18
        ret     8
    }
}

