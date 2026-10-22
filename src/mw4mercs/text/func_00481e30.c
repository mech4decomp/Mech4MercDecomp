/*
 * FUN_00481e30 (240 B) — __thiscall MLR light/vertex update (FPU-heavy).
 * Computes a squared-length value from a vector, applies a falloff, and
 * accumulates a weighted contribution into a target vector (param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076e10c;
extern float g_007b220c;

__declspec(naked) void FUN_00481e30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        fld     dword ptr [ecx+0x54]
        lea     eax, [ecx+0xc]
        fld     dword ptr [ecx+0x64]
        mov     edx, dword ptr [eax]
        fld     dword ptr [ecx+0x74]
        mov     dword ptr [ebp-0x14], edx
        mov     edx, dword ptr [eax+4]
        fld     st(0)
        mov     eax, dword ptr [eax+8]
        fmul    st(0), st(1)
        fld     st(2)
        mov     dword ptr [ebp-0x10], edx
        fmul    st(0), st(3)
        mov     dword ptr [ebp-0xc], eax
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp-0x4]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp-0x4]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp-0x8], eax
        fld     dword ptr [ebp-0x8]
        fst     dword ptr [ebp-0x4]
        fcomp   dword ptr [ecx+0x80]
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jz      L_481e94
        fld     dword ptr [g_0076d064]
        jmp     L_481eb3
L_481e94:
        fld     dword ptr [ebp-0x4]
        fcomp   dword ptr [ecx+0x84]
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_481f1a
        fld     dword ptr [ecx+0x84]
        fsub    dword ptr [ebp-0x4]
        fmul    dword ptr [ecx+0x88]
L_481eb3:
        fld     dword ptr [ebp-0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x14]
        fld     dword ptr [ebp-0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x10]
        fmul    dword ptr [ebp-0xc]
        fld     dword ptr [g_0076e10c]
        fcomp   dword ptr [g_007b220c]
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_481f18
        fld     dword ptr [ebp-0x14]
        mov     eax, dword ptr [ebp+8]
        fmul    dword ptr [g_0076e10c]
        fld     dword ptr [ebp-0x10]
        fmul    dword ptr [g_0076e10c]
        fstp    dword ptr [ebp-0x10]
        fxch    st(1)
        fmul    dword ptr [g_0076e10c]
        fstp    dword ptr [ebp-0xc]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld     dword ptr [ebp-0x10]
        fadd    dword ptr [eax+4]
        fstp    dword ptr [eax+4]
        fld     dword ptr [ebp-0xc]
        fadd    dword ptr [eax+8]
        fstp    dword ptr [eax+8]
        mov     esp, ebp
        pop     ebp
        ret     4
L_481f18:
        fstp    st(0)
L_481f1a:
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
