/*
 * FUN_0041afd0 (354 B) — __thiscall. Normalizes a 4-vector (quaternion-ish)
 * from a 12-float source; FPU-heavy with fnstsw/test-ah compare patterns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076d3c8;
extern float g_0076d5ec;
extern float g_0076c5b0;
extern float g_0076d070;
extern void __cdecl FUN_0041b680(void);

__declspec(naked) void FUN_0041afd0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+8]
        fld     dword ptr [ecx+0x14]
        fadd    dword ptr [ecx]
        fadd    dword ptr [ecx+0x28]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d3c8]
        fst     dword ptr [esi+0xc]
        fld     st(0)
        fabs
        fcomp   dword ptr [g_0076d5ec]
        __emit 0xDF          /* fnstsw ax: MSVC6 adds 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_b0ec
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF          /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_b017
        mov     dword ptr [esi+0xc], 0
L_b017:
        fld     dword ptr [ecx]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fsub    dword ptr [esi+0xc]
        fcom    dword ptr [g_0076c5b0]
        __emit 0xDF          /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_b03d
        fstp    st(0)
        fld     dword ptr [g_0076c5b0]
L_b03d:
        fsqrt
        fstp    dword ptr [esi]
        fld     dword ptr [ecx+0x14]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fsub    dword ptr [esi+0xc]
        fcom    dword ptr [g_0076c5b0]
        __emit 0xDF          /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_b068
        fstp    st(0)
        fld     dword ptr [g_0076c5b0]
L_b068:
        fsqrt
        fstp    dword ptr [esi+0x4]
        fld     dword ptr [ecx+0x28]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fsub    dword ptr [esi+0xc]
        fcom    dword ptr [g_0076c5b0]
        __emit 0xDF          /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_b094
        fstp    st(0)
        fld     dword ptr [g_0076c5b0]
L_b094:
        fsqrt
        fst     dword ptr [esi+0x8]
        fld     dword ptr [esi+0xc]
        fsqrt
        fstp    dword ptr [esi+0xc]
        fld     dword ptr [ecx+0x10]
        fcomp   dword ptr [ecx+0x4]
        __emit 0xDF          /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_b0b5
        fchs
        fstp    dword ptr [esi+0x8]
        jmp     L_b0b7
L_b0b5:
        fstp    st(0)
L_b0b7:
        fld     dword ptr [ecx+0x8]
        fcomp   dword ptr [ecx+0x20]
        __emit 0xDF          /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_b0cc
        fld     dword ptr [esi+0x4]
        fchs
        fstp    dword ptr [esi+0x4]
L_b0cc:
        fld     dword ptr [ecx+0x24]
        fcomp   dword ptr [ecx+0x18]
        __emit 0xDF          /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_b125
        fld     dword ptr [esi]
        mov     ecx, esi
        fchs
        fstp    dword ptr [esi]
        call    FUN_0041b680
        mov     eax, esi
        pop     esi
        ret     4
L_b0ec:
        fsqrt
        fst     dword ptr [esi+0xc]
        fld     dword ptr [ecx+0x24]
        fsub    dword ptr [ecx+0x18]
        fmul    dword ptr [g_0076d3c8]
        fdiv    st(0), st(1)
        fstp    dword ptr [esi]
        fld     dword ptr [ecx+0x8]
        fsub    dword ptr [ecx+0x20]
        fmul    dword ptr [g_0076d3c8]
        fdiv    st(0), st(1)
        fstp    dword ptr [esi+0x4]
        fld     dword ptr [ecx+0x10]
        fsub    dword ptr [ecx+0x4]
        fmul    dword ptr [g_0076d3c8]
        fdiv    st(0), st(1)
        fstp    dword ptr [esi+0x8]
        fstp    st(0)
L_b125:
        mov     ecx, esi
        call    FUN_0041b680
        mov     eax, esi
        pop     esi
        ret     4
    }
}
