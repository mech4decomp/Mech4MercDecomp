/*
 * FUN_00482240 (310 B) — __thiscall MLR light/vertex update (FPU-heavy).
 * Computes a falloff from a direction vector (param_1[2]), a squared
 * length from a vector difference, and accumulates a weighted
 * contribution into a target vector (param_1[1]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_007b220c;

__declspec(naked) void FUN_00482240(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        fld     dword ptr [ecx+0x50]
        mov     edx, dword ptr [ebp+8]
        fld     dword ptr [ecx+0x60]
        mov     eax, dword ptr [edx+8]
        test    eax, eax
        fld     dword ptr [ecx+0x70]
        mov     dword ptr [ebp-0x4], 0x3f350481
        jz      L_48227a
        fmul    dword ptr [eax+8]
        fxch    st(1)
        fmul    dword ptr [eax+4]
        faddp   st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [eax]
        faddp   st(1), st(0)
        fmul    dword ptr [ecx+8]
        fchs
        fstp    dword ptr [ebp-0x4]
        jmp     L_482280
L_48227a:
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
L_482280:
        fld     dword ptr [ecx+0x54]
        lea     eax, [ecx+0xc]
        push    esi
        mov     esi, dword ptr [eax]
        mov     dword ptr [ebp-0x14], esi
        mov     esi, dword ptr [eax+4]
        mov     eax, dword ptr [eax+8]
        mov     dword ptr [ebp-0xc], eax
        mov     eax, dword ptr [ecx+0x64]
        mov     dword ptr [ebp-0x1c], eax
        mov     eax, dword ptr [ecx+0x74]
        mov     dword ptr [ebp-0x18], eax
        mov     eax, dword ptr [edx]
        fsub    dword ptr [eax]
        mov     dword ptr [ebp-0x10], esi
        fld     dword ptr [ebp-0x1c]
        fsub    dword ptr [eax+4]
        fld     dword ptr [ebp-0x18]
        fsub    dword ptr [eax+8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp+8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp+8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp-0x8], eax
        fld     dword ptr [ebp-0x8]
        pop     esi
        fst     dword ptr [ebp+8]
        fcomp   dword ptr [ecx+0x80]
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jz      L_4822f6
        fld     dword ptr [g_0076d064]
        jmp     L_482315
L_4822f6:
        fld     dword ptr [ebp+8]
        fcomp   dword ptr [ecx+0x84]
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_482370
        fld     dword ptr [ecx+0x84]
        fsub    dword ptr [ebp+8]
        fmul    dword ptr [ecx+0x88]
L_482315:
        fld     dword ptr [ebp-0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x14]
        fld     dword ptr [ebp-0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x10]
        fmul    dword ptr [ebp-0xc]
        fld     dword ptr [ebp-0x4]
        fcomp   dword ptr [g_007b220c]
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_48236e
        fld     dword ptr [ebp-0x14]
        mov     eax, dword ptr [edx+4]
        fmul    dword ptr [ebp-0x4]
        fld     dword ptr [ebp-0x10]
        fmul    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x10]
        fxch    st(1)
        fmul    dword ptr [ebp-0x4]
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
L_48236e:
        fstp    st(0)
L_482370:
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
