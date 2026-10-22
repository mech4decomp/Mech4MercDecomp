/*
 * FUN_00481ce0 (331 B) — __thiscall MLR light/vertex update (FPU-heavy).
 * Computes a squared-length value from a vector difference, applies a
 * falloff, scales vectors, and accumulates a weighted contribution into
 * a target vector (param_1[1]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076d598;
extern float g_0076e10c;
extern float g_007b220c;

__declspec(naked) void FUN_00481ce0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x28
        fld     dword ptr [ecx+0x54]
        lea     eax, [ecx+0xc]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ebp-0x1c], edx
        mov     edx, dword ptr [eax+4]
        mov     eax, dword ptr [eax+8]
        mov     dword ptr [ebp-0x18], edx
        mov     edx, dword ptr [ecx+0x64]
        mov     dword ptr [ebp-0x14], eax
        mov     eax, dword ptr [ecx+0x74]
        mov     dword ptr [ebp-0xc], edx
        mov     edx, dword ptr [ebp+8]
        mov     dword ptr [ebp-0x8], eax
        mov     eax, dword ptr [edx]
        fsub    dword ptr [eax]
        fstp    dword ptr [ebp-0x10]
        fld     dword ptr [ebp-0xc]
        fsub    dword ptr [eax+4]
        fstp    dword ptr [ebp-0xc]
        fld     dword ptr [ebp-0x8]
        fsub    dword ptr [eax+8]
        fst     dword ptr [ebp-0x8]
        fmul    dword ptr [ebp-0x8]
        fld     dword ptr [ebp-0xc]
        fmul    dword ptr [ebp-0xc]
        faddp   st(1), st(0)
        fld     dword ptr [ebp-0x10]
        fmul    dword ptr [ebp-0x10]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp+8]
        mov     eax, dword ptr [ebp+8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp-0x4], eax
        fld     dword ptr [ebp-0x4]
        fcom    dword ptr [ecx+0x80]
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jz      L_481d60
        fld     dword ptr [g_0076d064]
        jmp     L_481d7f
L_481d60:
        fcom    dword ptr [ecx+0x84]
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_481e23
        fld     dword ptr [ecx+0x84]
        fsub    st(0), st(1)
        fmul    dword ptr [ecx+0x88]
L_481d7f:
        fld     dword ptr [ebp-0x1c]
        mov     eax, dword ptr [edx+8]
        test    eax, eax
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x1c]
        fld     dword ptr [ebp-0x18]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x18]
        fld     dword ptr [ebp-0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x14]
        fstp    st(0)
        fdivr   dword ptr [g_0076d598]
        fld     st(0)
        fmul    dword ptr [ebp-0x10]
        fstp    dword ptr [ebp-0x28]
        fld     dword ptr [ebp-0xc]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x24]
        fld     dword ptr [ebp-0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x20]
        fstp    st(0)
        fld     dword ptr [g_0076e10c]
        jz      L_481de2
        fstp    st(0)
        fld     dword ptr [ebp-0x20]
        fmul    dword ptr [eax+8]
        fld     dword ptr [ebp-0x24]
        fmul    dword ptr [eax+4]
        faddp   st(1), st(0)
        fld     dword ptr [ebp-0x28]
        fmul    dword ptr [eax]
        faddp   st(1), st(0)
        fmul    dword ptr [ecx+8]
        fchs
L_481de2:
        fcom    dword ptr [g_007b220c]
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_481e23
        mov     eax, dword ptr [edx+4]
        fld     st(0)
        fmul    dword ptr [ebp-0x1c]
        fld     st(1)
        fmul    dword ptr [ebp-0x18]
        fstp    dword ptr [ebp-0x18]
        fxch    st(1)
        fmul    dword ptr [ebp-0x14]
        fstp    dword ptr [ebp-0x14]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld     dword ptr [ebp-0x18]
        fadd    dword ptr [eax+4]
        fstp    dword ptr [eax+4]
        fld     dword ptr [ebp-0x14]
        fadd    dword ptr [eax+8]
        fstp    dword ptr [eax+8]
        mov     esp, ebp
        pop     ebp
        ret     4
L_481e23:
        fstp    st(0)
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
