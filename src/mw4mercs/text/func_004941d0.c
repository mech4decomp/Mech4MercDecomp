/*
 * FUN_004941d0 (613 B) — MLR camera/matrix setup. __thiscall, RET 0x4.
 *
 * Loads a global, calls FUN_006f4950, conditionally copies a 2-float
 * vector, computes a viewport/fov scale, then performs a 3x4 matrix
 * multiply (transform) writing 12 floats to [this+0x28..0x54].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da920;
extern float g_00770148;
extern float g_0076d064;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004941d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x8
        mov     eax, dword ptr [g_007da920]
        push    esi
        push    edi
        push    eax
        mov     edi, ecx
        call    FUN_006f4950
        mov     cl, byte ptr [edi + 0x9c]
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, 0x1
        test    cl, al   /* MSVC6 swaps 8-bit test operands; write reversed to get 84 C8 */
        jz      L420D
        mov     ecx, dword ptr [edi + 0x88]
        test    ecx, ecx
        jnz     L421E
        cmp     dword ptr [edi + 0x8c], 0xbff00000
        jnz     L421E
L420D:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [edi + 0x88], ecx
        mov     dword ptr [edi + 0x8c], edx
L421E:
        mov     ecx, dword ptr [edi + 0x9c]
        or      ecx, eax
        cmp     dword ptr [esi + 0x8], 0xbf800000
        mov     dword ptr [edi + 0x9c], ecx
        jnz     L423C
        call    FUN_00415020
        jmp     L423F
L423C:
        fld     dword ptr [esi + 0x8]
L423F:
        mov     eax, dword ptr [esi + 0x10]
        fstp    dword ptr [edi + 0x98]
        cmp     eax, 0xbf800000
        jnz     L427C
        mov     eax, dword ptr [edi + 0x10]
        fld     dword ptr [eax + 0x1c]
        fcom    dword ptr [g_00770148]
        __emit 0xDF   /* fnstsw ax: MSVC6 emits 9B-prefixed fstsw; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L426A
        fstp    st(0)
        fld     dword ptr [g_00770148]
L426A:
        fld     dword ptr [g_0076d064]
        fdiv    st(0), st(1)
        fstp    dword ptr [edi + 0x94]
        fstp    st(0)
        jmp     L4285
L427C:
        mov     ecx, dword ptr [esi + 0x10]
        mov     dword ptr [edi + 0x94], ecx
L4285:
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x14]
        mov     dword ptr [edi + 0x90], edx
        lea     ecx, [edi + 0x58]
        lea     edx, [edi + 0x28]
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp + 0x8], edx
        mov     edx, dword ptr [ebp - 0x8]
        push    esi
        mov     esi, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp + 0x8]
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
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch
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
        fxch
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
        fxch
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        mov     eax, dword ptr [edi + 0x20]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [edi + 0x24], ecx
        call    FUN_006f49a0
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
