/*
 * FUN_00481770 (382 B) — __thiscall MLR light/vertex update (FPU-heavy).
 * Computes a squared-length value from a vector, applies a falloff
 * (FUN_0040ca10), scales a set of vectors, and accumulates a weighted
 * contribution into a target vector (param_1[1]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076d598;
extern float g_0076e10c;
extern float g_007b220c;
extern void __cdecl FUN_0040ca10(void);

__declspec(naked) void FUN_00481770(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        push    esi
        mov     esi, ecx
        lea     eax, [esi+0xc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax+4]
        mov     eax, dword ptr [eax+8]
        mov     dword ptr [ebp-0x1c], ecx
        mov     ecx, dword ptr [esi+0x54]
        push    edi
        mov     edi, dword ptr [ebp+8]
        mov     dword ptr [ebp-0x18], edx
        mov     edx, dword ptr [esi+0x64]
        mov     dword ptr [ebp-0x10], ecx
        mov     ecx, dword ptr [edi]
        mov     dword ptr [ebp-0xc], edx
        push    ecx
        mov     dword ptr [ebp-0x14], eax
        mov     eax, dword ptr [esi+0x74]
        lea     edx, [ebp-0x10]
        push    edx
        lea     ecx, [ebp-0x10]
        mov     dword ptr [ebp-0x8], eax
        call    FUN_0040ca10
        fld     dword ptr [ebp-0x8]
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
        fst     dword ptr [ebp+8]
        fcomp   dword ptr [esi+0x80]
        __emit 0xDF                /* fnstsw ax: MSVC6 adds 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_4817f3
        fld     dword ptr [g_0076d064]
        jmp     L_481816
L_4817f3:
        fld     dword ptr [ebp+8]
        fcomp   dword ptr [esi+0x84]
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_4818e6
        fld     dword ptr [esi+0x84]
        fsub    dword ptr [ebp+8]
        fmul    dword ptr [esi+0x88]
L_481816:
        fld     dword ptr [ebp-0x1c]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x1c]
        fld     dword ptr [ebp-0x18]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x18]
        fld     dword ptr [ebp-0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x14]
        fstp    st(0)
        fld     dword ptr [esi+0x20]
        fld     dword ptr [esi+0x30]
        fld     dword ptr [esi+0x40]
        fld     dword ptr [g_0076d598]
        fdiv    dword ptr [ebp+8]
        fld     st(0)
        fmul    dword ptr [ebp-0x10]
        fstp    dword ptr [ebp-0x10]
        fld     st(0)
        fmul    dword ptr [ebp-0xc]
        fstp    dword ptr [ebp-0xc]
        fmul    dword ptr [ebp-0x8]
        fstp    dword ptr [ebp-0x8]
        fmul    dword ptr [ebp-0x8]
        fxch    st(1)
        fmul    dword ptr [ebp-0xc]
        faddp   st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [ebp-0x10]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x98]
        fcompp
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_4818e6
        mov     eax, dword ptr [edi+8]
        fld     dword ptr [g_0076e10c]
        test    eax, eax
        jz      L_4818a1
        fstp    st(0)
        fld     dword ptr [ebp-0x8]
        fmul    dword ptr [eax+8]
        fld     dword ptr [ebp-0xc]
        fmul    dword ptr [eax+4]
        faddp   st(1), st(0)
        fld     dword ptr [ebp-0x10]
        fmul    dword ptr [eax]
        faddp   st(1), st(0)
        fmul    dword ptr [esi+8]
        fchs
L_4818a1:
        fcom    dword ptr [g_007b220c]
        __emit 0xDF                /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6                /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_4818e4
        mov     eax, dword ptr [edi+4]
        fld     st(0)
        fmul    dword ptr [ebp-0x1c]
        pop     edi
        fld     st(1)
        pop     esi
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
L_4818e4:
        fstp    st(0)
L_4818e6:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
