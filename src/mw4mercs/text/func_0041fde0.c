/*
 * FUN_0041fde0 (1130 B) — __thiscall, RET 0x10 (4 params). Vector/matrix
 * orthonormalization (Gram-Schmidt-style) routine operating on a 3xN array of
 * float triplets at ECX. Heavy FPU stack math; returns a status word.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007b220c;   /* 0x007b220c */
extern float g_0076c5b0;   /* 0x0076c5b0 */
extern float g_0076d064;   /* 0x0076d064 */

__declspec(naked) void FUN_0041fde0(void)
{
    __asm {
        sub     esp, 0x34
        mov     edx, dword ptr [esp + 0x38]
        fld     dword ptr [edx + 0x8]
        fld     dword ptr [edx + 0x4]
        fld     dword ptr [edx]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        /* __emit: MSVC6 drops the 00 disp byte for fstp dword ptr [esp] (D9 1C 24 vs ref D9 5C 24 00) */
        __emit  0xD9
        __emit  0x5C
        __emit  0x24
        __emit  0x00
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        /* __emit: MSVC6 drops the 00 disp byte for fld dword ptr [esp] (D9 04 24 vs ref D9 44 24 00) */
        __emit  0xD9
        __emit  0x44
        __emit  0x24
        __emit  0x00
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      L20244
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x48]
        fld     dword ptr [ecx + esi*4]
        mov     ebx, dword ptr [esp + 0x4c]
        cmp     ebx, -0x1
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [ecx + esi*4 + 0x10]
        push    edi
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [ecx + esi*4 + 0x20]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [edx + 0x8]
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [edx + 0x4]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [edx]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [edx + 0x8]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [edx + 0x4]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [edx]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x30]
        jnz     L2005A
        fld     dword ptr [esp + 0x30]
        mov     edi, dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0x2c]
        mov     ebx, 0x3
        fld     dword ptr [esp + 0x28]
        sub     ebx, edi
        fmul    dword ptr [esp + 0x28]
        sub     ebx, esi
        fstp    dword ptr [esp + 0x44]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fadd    dword ptr [esp + 0x44]
        fabs
        fstp    st(2)
        fstp    st(0)
        fld     dword ptr [g_007b220c]
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jnz     L1FF6B
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [edx]
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [edx + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [edx + 0x4]
        faddp   st(1), st(0)
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [ecx + esi*4]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jnz     L1FF22
        fld     dword ptr [ecx + esi*4 + 0x10]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [ecx + esi*4 + 0x20]
        fstp    dword ptr [esp + 0x3c]
L1FF07:
        fld     dword ptr [ecx + edi*4]
        fchs
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [ecx + edi*4 + 0x10]
        fchs
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [ecx + edi*4 + 0x20]
        fchs
        jmp     L1FF4B
L1FF22:
        fchs
        fld     dword ptr [ecx + esi*4 + 0x10]
        fchs
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [ecx + esi*4 + 0x20]
        fchs
        fstp    dword ptr [esp + 0x3c]
L1FF38:
        fld     dword ptr [ecx + edi*4]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [ecx + edi*4 + 0x10]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [ecx + edi*4 + 0x20]
L1FF4B:
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [ecx + ebx*4]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [ecx + ebx*4 + 0x10]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [ecx + ebx*4 + 0x20]
        fstp    dword ptr [esp + 0x18]
        jmp     L20200
L1FF6B:
        fld     dword ptr [esp + 0x30]
        lea     eax, [esi + 0x1]
        fmul    dword ptr [esp + 0x30]
        push    ebp
        fld     dword ptr [esp + 0x30]
        cdq
        fmul    dword ptr [esp + 0x30]
        mov     ebp, 0x3
        idiv    ebp
        faddp   st(1), st(0)
        fadd    dword ptr [esp + 0x48]
        pop     ebp
        fsqrt
        cmp     edx, edi
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x2c]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x30]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x18]
        fstp    st(0)
        jnz     L1FFFD
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x20]
        fsubp   st(1), st(0)
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x24]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x1c]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x3c]
        jmp     L20200
L1FFFD:
        fld     dword ptr [esp + 0x10]
        fchs
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x14]
        fchs
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fchs
        fst     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x24]
        fsubp   st(1), st(0)
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x1c]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x20]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x3c]
        jmp     L20200
L2005A:
        fld     dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x44]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fadd    dword ptr [esp + 0x44]
        fabs
        fstp    st(2)
        fstp    st(0)
        fld     dword ptr [g_007b220c]
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jnz     L200F1
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [edx]
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [edx + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [edx + 0x4]
        faddp   st(1), st(0)
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [ecx + esi*4]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jnz     L200D2
        fld     dword ptr [ecx + esi*4 + 0x10]
        mov     edi, dword ptr [esp + 0x48]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [ecx + esi*4 + 0x20]
        fstp    dword ptr [esp + 0x3c]
        jmp     L1FF07
L200D2:
        mov     edi, dword ptr [esp + 0x48]
        fchs
        fld     dword ptr [ecx + esi*4 + 0x10]
        fchs
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [ecx + esi*4 + 0x20]
        fchs
        fstp    dword ptr [esp + 0x3c]
        jmp     L1FF38
L200F1:
        fld     dword ptr [esp + 0xc]
        lea     eax, [esi + 0x1]
        fsqrt
        mov     edi, 0x3
        fdivr   dword ptr [g_0076d064]
        fst     dword ptr [esp + 0x4c]
        fmul    dword ptr [edx]
        fld     dword ptr [esp + 0x4c]
        fmul    dword ptr [edx + 0x4]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x4c]
        fmul    dword ptr [edx + 0x8]
        cdq
        idiv    edi
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x2c]
        fmul    dword ptr [esp + 0x2c]
        faddp   st(1), st(0)
        fadd    dword ptr [esp + 0x44]
        mov     edi, dword ptr [esp + 0x48]
        fsqrt
        cmp     edx, edi
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x2c]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x30]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x18]
        fstp    st(0)
        jnz     L201A4
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x3c]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x18]
        fmul    st(0), st(2)
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x14]
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x38]
        jmp     L201FA
L201A4:
        fld     dword ptr [esp + 0x10]
        fchs
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x14]
        fchs
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fchs
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x38]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x18]
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x3c]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x14]
        fmul    st(0), st(2)
L201FA:
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x24]
L20200:
        fstp    dword ptr [ecx + edi*4]
        fld     dword ptr [esp + 0x38]
        fstp    dword ptr [ecx + edi*4 + 0x10]
        fld     dword ptr [esp + 0x3c]
        fstp    dword ptr [ecx + edi*4 + 0x20]
        pop     edi
        fld     dword ptr [esp + 0x18]
        fstp    dword ptr [ecx + esi*4]
        fld     dword ptr [esp + 0x1c]
        fstp    dword ptr [ecx + esi*4 + 0x10]
        fld     dword ptr [esp + 0x20]
        fstp    dword ptr [ecx + esi*4 + 0x20]
        pop     esi
        fld     dword ptr [esp + 0x8]
        fstp    dword ptr [ecx + ebx*4]
        fld     dword ptr [esp + 0xc]
        fstp    dword ptr [ecx + ebx*4 + 0x10]
        fld     dword ptr [esp + 0x10]
        fstp    dword ptr [ecx + ebx*4 + 0x20]
        pop     ebx
L20244:
        add     esp, 0x34
        ret     0x10
    }
}
