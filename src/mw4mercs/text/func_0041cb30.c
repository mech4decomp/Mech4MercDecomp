/*
 * FUN_0041cb30 (277 B) — transform a 3-vector by a 4x4 matrix (row-major,
 * 16 floats) into a 4-vector, then classify the result against a bounding
 * box, OR-ing flags into a uint. __thiscall: ECX = output float[4],
 * [ebp+8] = input 3-vector, [ebp+0xc] = 4x4 matrix, [ebp+0x10] = uint* flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;

__declspec(naked) void FUN_0041cb30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    esi
        push    edi
        mov     dword ptr [ebp-0x4], ecx
        mov     edi, dword ptr [ebp+0x8]
        fld     dword ptr [edi]
        mov     esi, dword ptr [ebp+0xc]
        fld     dword ptr [edi+0x4]
        fld     dword ptr [edi+0x8]
        mov     edi, dword ptr [ebp-0x4]
        fld     dword ptr [esi+0x34]
        fmul    st(0), st(2)
        fld     dword ptr [esi+0x38]
        fmul    st(0), st(2)
        fxch    st(1)
        fadd    dword ptr [esi+0x3c]
        fld     dword ptr [esi+0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x18]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [edi+0xc]
        fadd    dword ptr [esi+0x1c]
        fld     dword ptr [esi+0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x28]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [edi+0x4]
        fadd    dword ptr [esi+0x2c]
        fld     dword ptr [esi+0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x8]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [edi+0x8]
        fadd    dword ptr [esi+0xc]
        fld     dword ptr [esi]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [edi]
        fld     dword ptr [ecx+0xc]
        fcomp   dword ptr [ecx+0x8]
        mov     edx, dword ptr [ebp+0x10]
        pop     edi
        mov     dword ptr [edx], 0x0
        pop     esi
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L1
        mov     dword ptr [edx], 0x20
L1:
        fld     dword ptr [ecx+0x8]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L2
        or      dword ptr [edx], 0x10
L2:
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L3
        or      dword ptr [edx], 0x8
L3:
        fld     dword ptr [ecx+0xc]
        fcomp   dword ptr [ecx]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L4
        or      dword ptr [edx], 0x4
L4:
        fld     dword ptr [ecx+0x4]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L5
        or      dword ptr [edx], 0x2
L5:
        fld     dword ptr [ecx+0xc]
        fcomp   dword ptr [ecx+0x4]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L6
        or      dword ptr [edx], 0x1
L6:
        mov     eax, ecx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
