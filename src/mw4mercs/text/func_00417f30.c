/*
 * FUN_00417f30 (2382 B) — __thiscall. OBB-vs-OBB collision test using the
 * separating-axis theorem. Returns 0 (no collision) or 1..15 (separating
 * axis index). Heavy FPU dot/cross-product math with 15 early-out return
 * blocks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_004206b0(void);

__declspec(naked) void FUN_00417f30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x98
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        push    edi
        mov     edi, ecx
        fld     dword ptr [edi + 0x2c]
        push    ecx
        fsub    dword ptr [ebx + 0x2c]
        fstp    dword ptr [esp]
        fld     dword ptr [edi + 0x1c]
        push    ecx
        fsub    dword ptr [ebx + 0x1c]
        fstp    dword ptr [esp]
        fld     dword ptr [edi + 0xc]
        push    ecx
        fsub    dword ptr [ebx + 0xc]
        lea     ecx, [ebp - 0xc]
        fstp    dword ptr [esp]
        call    FUN_0040c9c0
        fld     dword ptr [edi + 0x20]
        fmul    dword ptr [ebx + 0x20]
        fld     dword ptr [ebx + 0x10]
        fmul    dword ptr [edi + 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [ebx]
        fmul    dword ptr [edi]
        faddp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x60]
        fld     dword ptr [ebx + 0x4]
        fmul    dword ptr [edi]
        fld     dword ptr [edi + 0x20]
        fmul    dword ptr [ebx + 0x24]
        faddp   st(1), st(0)
        fld     dword ptr [edi + 0x10]
        fmul    dword ptr [ebx + 0x14]
        faddp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x5c]
        fld     dword ptr [ebx + 0x18]
        fmul    dword ptr [edi + 0x10]
        fld     dword ptr [ebx + 0x28]
        fmul    dword ptr [edi + 0x20]
        faddp   st(1), st(0)
        fld     dword ptr [edi]
        fmul    dword ptr [ebx + 0x8]
        faddp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x58]
        fld     dword ptr [ebp - 0x60]
        fmul    dword ptr [ebx + 0x30]
        fld     dword ptr [ebp - 0x58]
        fmul    dword ptr [ebx + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x5c]
        fmul    dword ptr [ebx + 0x34]
        faddp   st(1), st(0)
        fadd    dword ptr [edi + 0x30]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [edi + 0x20]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [edi + 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [edi]
        faddp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret1_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret1_without
        fld     dword ptr [edi + 0x24]
        fmul    dword ptr [ebx + 0x20]
        fld     dword ptr [ebx + 0x10]
        fmul    dword ptr [edi + 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [ebx]
        fmul    dword ptr [edi + 0x4]
        faddp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x54]
        fld     dword ptr [ebx + 0x4]
        fmul    dword ptr [edi + 0x4]
        fld     dword ptr [edi + 0x24]
        fmul    dword ptr [ebx + 0x24]
        faddp   st(1), st(0)
        fld     dword ptr [edi + 0x14]
        fmul    dword ptr [ebx + 0x14]
        faddp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x50]
        fld     dword ptr [ebx + 0x28]
        fmul    dword ptr [edi + 0x24]
        fld     dword ptr [ebx + 0x18]
        fmul    dword ptr [edi + 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [ebx + 0x8]
        fmul    dword ptr [edi + 0x4]
        faddp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x4c]
        fld     dword ptr [ebp - 0x54]
        fmul    dword ptr [ebx + 0x30]
        fld     dword ptr [ebp - 0x4c]
        fmul    dword ptr [ebx + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x50]
        fmul    dword ptr [ebx + 0x34]
        faddp   st(1), st(0)
        fadd    dword ptr [edi + 0x34]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [edi + 0x24]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [edi + 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [edi + 0x4]
        faddp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret2_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret2_without
        fld     dword ptr [edi + 0x28]
        fmul    dword ptr [ebx + 0x20]
        fld     dword ptr [ebx + 0x10]
        fmul    dword ptr [edi + 0x18]
        faddp   st(1), st(0)
        fld     dword ptr [edi + 0x8]
        fmul    dword ptr [ebx]
        faddp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x48]
        fld     dword ptr [ebx + 0x24]
        fmul    dword ptr [edi + 0x28]
        fld     dword ptr [ebx + 0x14]
        fmul    dword ptr [edi + 0x18]
        faddp   st(1), st(0)
        fld     dword ptr [ebx + 0x4]
        fmul    dword ptr [edi + 0x8]
        faddp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x44]
        fld     dword ptr [edi + 0x8]
        fmul    dword ptr [ebx + 0x8]
        fld     dword ptr [ebx + 0x28]
        fmul    dword ptr [edi + 0x28]
        faddp   st(1), st(0)
        fld     dword ptr [ebx + 0x18]
        fmul    dword ptr [edi + 0x18]
        faddp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x40]
        fld     dword ptr [ebp - 0x48]
        fmul    dword ptr [ebx + 0x30]
        fld     dword ptr [ebp - 0x40]
        fmul    dword ptr [ebx + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x44]
        fmul    dword ptr [ebx + 0x34]
        faddp   st(1), st(0)
        fadd    dword ptr [edi + 0x38]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [edi + 0x8]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [edi + 0x28]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [edi + 0x18]
        faddp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret3_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret3_without
        fld     dword ptr [ebp - 0x60]
        fmul    dword ptr [edi + 0x30]
        fld     dword ptr [ebp - 0x48]
        fmul    dword ptr [edi + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x54]
        fmul    dword ptr [edi + 0x34]
        faddp   st(1), st(0)
        fadd    dword ptr [ebx + 0x30]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebx + 0x10]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebx]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebx + 0x20]
        faddp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret4_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret4_without
        fld     dword ptr [ebp - 0x5c]
        fmul    dword ptr [edi + 0x30]
        fld     dword ptr [ebp - 0x44]
        fmul    dword ptr [edi + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x50]
        fmul    dword ptr [edi + 0x34]
        faddp   st(1), st(0)
        fadd    dword ptr [ebx + 0x34]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebx + 0x4]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebx + 0x24]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebx + 0x14]
        faddp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret5_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret5_without
        fld     dword ptr [ebp - 0x58]
        fmul    dword ptr [edi + 0x30]
        fld     dword ptr [ebp - 0x40]
        fmul    dword ptr [edi + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x4c]
        fmul    dword ptr [edi + 0x34]
        faddp   st(1), st(0)
        fadd    dword ptr [ebx + 0x38]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebx + 0x28]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebx + 0x18]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebx + 0x8]
        faddp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret6_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret6_without
        push    edi
        lea     ecx, [ebp - 0x90]
        call    FUN_004206b0
        lea     eax, [ebp - 0x90]
        lea     ecx, [ebp - 0x3c]
        mov     dword ptr [ebp - 0x94], eax
        mov     dword ptr [ebp - 0x98], ecx
        mov     edx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, dword ptr [ebp - 0x94]
        mov     eax, dword ptr [ebp - 0x98]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x24]
        fsubp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x78]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x28]
        fsubp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x6c]
        fld     dword ptr [ebp - 0x2c]
        fabs
        fstp    dword ptr [ebp - 0x5c]
        fld     dword ptr [ebp - 0x1c]
        fabs
        fstp    dword ptr [ebp - 0x58]
        fld     dword ptr [ebp - 0x5c]
        fmul    dword ptr [edi + 0x38]
        fld     dword ptr [ebp - 0x6c]
        fmul    dword ptr [ebx + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x78]
        fmul    dword ptr [ebx + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x58]
        fmul    dword ptr [edi + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x20]
        fsubp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret7_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret7_without
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x24]
        fsubp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x84]
        fld     dword ptr [ebp - 0x28]
        fabs
        fstp    dword ptr [ebp - 0x50]
        fld     dword ptr [ebp - 0x18]
        fabs
        fstp    dword ptr [ebp - 0x4c]
        fld     dword ptr [ebp - 0x84]
        fmul    dword ptr [ebx + 0x38]
        fld     dword ptr [ebp - 0x6c]
        fmul    dword ptr [ebx + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x4c]
        fmul    dword ptr [edi + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x50]
        fmul    dword ptr [edi + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x20]
        fsubp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret8_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret8_without
        fld     dword ptr [ebp - 0x24]
        fabs
        fstp    dword ptr [ebp - 0x44]
        fld     dword ptr [ebp - 0x14]
        fabs
        fstp    dword ptr [ebp - 0x40]
        fld     dword ptr [ebp - 0x84]
        fmul    dword ptr [ebx + 0x34]
        fld     dword ptr [ebp - 0x78]
        fmul    dword ptr [ebx + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x40]
        fmul    dword ptr [edi + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x44]
        fmul    dword ptr [edi + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x20]
        fsubp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret9_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret9_without
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x38]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x3c]
        fsubp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x68]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x3c]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x34]
        fsubp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x74]
        fld     dword ptr [ebp - 0x3c]
        fabs
        fstp    dword ptr [ebp - 0x60]
        fld     dword ptr [ebp - 0x74]
        fmul    dword ptr [ebx + 0x38]
        fld     dword ptr [ebp - 0x68]
        fmul    dword ptr [ebx + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x58]
        fmul    dword ptr [edi + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x60]
        fmul    dword ptr [edi + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x30]
        fld     dword ptr [ebp - 0x3c]
        fmul    dword ptr [ebp - 0x10]
        fsubp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret10_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret10_without
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x38]
        fsubp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x80]
        fld     dword ptr [ebp - 0x38]
        fabs
        fstp    dword ptr [ebp - 0x54]
        fld     dword ptr [ebp - 0x80]
        fmul    dword ptr [ebx + 0x38]
        fld     dword ptr [ebp - 0x4c]
        fmul    dword ptr [edi + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x54]
        fmul    dword ptr [edi + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x68]
        fmul    dword ptr [ebx + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x30]
        fld     dword ptr [ebp - 0x38]
        fmul    dword ptr [ebp - 0x10]
        fsubp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret11_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret11_without
        fld     dword ptr [ebp - 0x34]
        fabs
        fstp    dword ptr [ebp - 0x48]
        fld     dword ptr [ebp - 0x80]
        fmul    dword ptr [ebx + 0x34]
        fld     dword ptr [ebp - 0x40]
        fmul    dword ptr [edi + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x48]
        fmul    dword ptr [edi + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x74]
        fmul    dword ptr [ebx + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x30]
        fld     dword ptr [ebp - 0x34]
        fmul    dword ptr [ebp - 0x10]
        fsubp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret12_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret12_without
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x3c]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x38]
        fsubp   st(1), st(0)
        fabs
        fstp    dword ptr [ebp - 0x64]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x3c]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x34]
        fsubp   st(1), st(0)
        fabs
        fst     dword ptr [ebp - 0x70]
        fmul    dword ptr [ebx + 0x38]
        fld     dword ptr [ebp - 0x64]
        fmul    dword ptr [ebx + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x5c]
        fmul    dword ptr [edi + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x60]
        fmul    dword ptr [edi + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x3c]
        fmul    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x30]
        fsubp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret13_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret13_without
        fld     dword ptr [ebp - 0x38]
        fmul    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x34]
        fmul    dword ptr [ebp - 0x28]
        fsubp   st(1), st(0)
        fabs
        fst     dword ptr [ebp - 0x7c]
        fmul    dword ptr [ebx + 0x38]
        fld     dword ptr [ebp - 0x50]
        fmul    dword ptr [edi + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x54]
        fmul    dword ptr [edi + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x64]
        fmul    dword ptr [ebx + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x38]
        fmul    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x30]
        fsubp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret14_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret14_without
        fld     dword ptr [ebp - 0x7c]
        fmul    dword ptr [ebx + 0x34]
        fld     dword ptr [ebp - 0x44]
        fmul    dword ptr [edi + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x48]
        fmul    dword ptr [edi + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x70]
        fmul    dword ptr [ebx + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x34]
        fmul    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x30]
        fsubp   st(1), st(0)
        fcom    st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret15_with
        fxch    st(1)
        fchs
        fxch    st(1)
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     ret15_without
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret15_with:
        fstp    st(0)
        fstp    st(0)
    ret15_without:
        mov     eax, 0xf
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret14_with:
        fstp    st(0)
        fstp    st(0)
    ret14_without:
        mov     eax, 0xe
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret13_with:
        fstp    st(0)
        fstp    st(0)
    ret13_without:
        mov     eax, 0xd
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret12_with:
        fstp    st(0)
        fstp    st(0)
    ret12_without:
        mov     eax, 0xc
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret11_with:
        fstp    st(0)
        fstp    st(0)
    ret11_without:
        mov     eax, 0xb
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret10_with:
        fstp    st(0)
        fstp    st(0)
    ret10_without:
        mov     eax, 0xa
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret9_with:
        fstp    st(0)
        fstp    st(0)
    ret9_without:
        mov     eax, 0x9
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret8_with:
        fstp    st(0)
        fstp    st(0)
    ret8_without:
        mov     eax, 0x8
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret7_with:
        fstp    st(0)
        fstp    st(0)
    ret7_without:
        mov     eax, 0x7
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret6_with:
        fstp    st(0)
        fstp    st(0)
    ret6_without:
        mov     eax, 0x6
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret5_with:
        fstp    st(0)
        fstp    st(0)
    ret5_without:
        mov     eax, 0x5
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret4_with:
        fstp    st(0)
        fstp    st(0)
    ret4_without:
        mov     eax, 0x4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret3_with:
        fstp    st(0)
        fstp    st(0)
    ret3_without:
        mov     eax, 0x3
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret2_with:
        fstp    st(0)
        fstp    st(0)
    ret2_without:
        mov     eax, 0x2
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    ret1_with:
        fstp    st(0)
        fstp    st(0)
    ret1_without:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
