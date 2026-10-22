/*
 * FUN_0049cdb0 (1078 B) — MLR debris-cloud render/transform (__thiscall, RET 4).
 * Loops over particles, applies a 3x4 matrix transform (twice), and
 * builds a per-particle transform. FPU heavy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern void FUN_0048bcd0(void);
extern void FUN_00491670(void);
extern void FUN_0048dd20(void);
extern void FUN_00494990(void);

__declspec(naked) void FUN_0049cdb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc8
        push    ebx
        mov     ebx, dword ptr [ebp+0x8]
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x10]
        mov     dword ptr [ebp-0x28], eax
        mov     eax, dword ptr [esi+0xa4]
        xor     ecx, ecx
        cmp     eax, ecx
        push    edi
        mov     dword ptr [ebp-0x2c], esi
        mov     dword ptr [ebp-0x30], eax
        mov     dword ptr [ebp-0xc], ecx
        jle     L_d1d5
        mov     dword ptr [ebp+0x8], ecx
L_cde3:
        mov     eax, dword ptr [ebp+0x8]
        mov     edi, dword ptr [esi+0xa0]
        fld     dword ptr [edi+eax+0x30]
        add     edi, eax
        fcomp   dword ptr [g_0076d064]
        mov     dword ptr [ebp-0x24], edi
        __emit 0xDF /* fnstsw ax (no-WAIT DF E0 form) */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x1 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x01
        jz      L_d1ba
        lea     ecx, [ebp-0x68]
        call    FUN_0048bcd0
        mov     eax, dword ptr [ebp-0x28]
        mov     ecx, dword ptr [eax+0x170]
        mov     edx, dword ptr [ebp-0xc]
        mov     ecx, dword ptr [ecx+edx*4]
        test    ecx, ecx
        mov     dword ptr [ebp-0x8], ecx
        jz      L_d1ba
        add     eax, 0x48
        push    eax
        lea     eax, [ebx+0x8]
        push    eax
        lea     ecx, [ebp-0x64]
        mov     dword ptr [ebp-0x4c], 0x3f
        mov     dword ptr [ebp-0x44], 0x0
        call    FUN_00491670
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebx]
        xor     eax, eax
        mov     dword ptr [ebp-0x40], eax
        mov     dword ptr [ebp-0x3c], eax
        add     esi, 0x58
        lea     eax, [ebp-0x98]
        mov     dword ptr [ebp-0x68], ecx
        mov     dword ptr [ebp-0x4], edx
        mov     dword ptr [ebp-0x10], esi
        mov     dword ptr [ebp-0x8], eax
        mov     edx, dword ptr [ebp-0x10]
        push    esi
        mov     esi, dword ptr [ebp-0x4]
        mov     eax, dword ptr [ebp-0x8]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x4]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x4]
        fxch    st(1)
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x4]
        fxch    st(1)
        fstp    dword ptr [eax+0x8]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fadd    dword ptr [esi+0xc]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x18]
        fxch    st(1)
        fstp    dword ptr [eax+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fadd    dword ptr [esi+0x1c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x28]
        fxch    st(1)
        fstp    dword ptr [eax+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fstp    dword ptr [eax+0x24]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi+0x2c]
        fstp    dword ptr [eax+0x2c]
        pop     esi
        lea     ecx, [ebp-0x98]
        lea     edx, [ebp-0xc8]
        mov     dword ptr [ebp-0x4], ecx
        mov     dword ptr [ebp-0x10], edx
        mov     edx, dword ptr [ebp-0x24]
        push    esi
        mov     esi, dword ptr [ebp-0x4]
        mov     eax, dword ptr [ebp-0x10]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x4]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x4]
        fxch    st(1)
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x4]
        fxch    st(1)
        fstp    dword ptr [eax+0x8]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fadd    dword ptr [esi+0xc]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x18]
        fxch    st(1)
        fstp    dword ptr [eax+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fadd    dword ptr [esi+0x1c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x28]
        fxch    st(1)
        fstp    dword ptr [eax+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fstp    dword ptr [eax+0x24]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi+0x2c]
        fstp    dword ptr [eax+0x2c]
        pop     esi
        fld     dword ptr [edi+0x54]
        lea     ecx, [ebp-0x20]
        lea     edx, [ebp-0x68]
        lea     eax, [ebp-0xc8]
        mov     dword ptr [ebp-0x38], ecx
        mov     ecx, dword ptr [ebx+0x20]
        fstp    dword ptr [ebp-0x14]
        push    edx
        mov     dword ptr [ebp-0x48], eax
        mov     dword ptr [ebp-0x34], 0x0
        mov     dword ptr [ebp-0x20], 0x3f800000
        mov     dword ptr [ebp-0x1c], 0x3f800000
        mov     dword ptr [ebp-0x18], 0x3f800000
        call    FUN_0048dd20
        mov     esi, dword ptr [ebp-0x2c]
L_d1ba:
        mov     eax, dword ptr [ebp-0xc]
        mov     edx, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [ebp-0x30]
        inc     eax
        add     edx, 0x58
        cmp     eax, ecx
        mov     dword ptr [ebp-0xc], eax
        mov     dword ptr [ebp+0x8], edx
        jl      L_cde3
L_d1d5:
        push    ebx
        mov     ecx, esi
        call    FUN_00494990
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
