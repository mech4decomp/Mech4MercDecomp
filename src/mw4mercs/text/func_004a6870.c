/*
 * FUN_004a6870 (1251 B) — MLR: per-vertex skinning/animation update
 * (__thiscall, RET 0x4). Builds a 4x4 transform from this+0x58 and the
 * input matrix, then for each of 4 animation modes evaluates per-vertex
 * spline data (FUN_004a63c0) gated by a threshold compare against
 * g_0076d064.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern void __cdecl FUN_0048bcf0(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_004a63c0(void);
extern void __cdecl FUN_0048e890(void);
extern void __cdecl FUN_00494990(void);

__declspec(naked) void FUN_004a6870(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xb8
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0xa0]
        test    eax, eax
        jz      L6d3f
        lea     ecx, [ebp - 0x88]
        call    FUN_0048bcf0
        mov     eax, dword ptr [edi + 0xb0]
        mov     ebx, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x88], eax
        mov     eax, dword ptr [edi + 0x10]
        mov     dword ptr [ebp - 0x2c], eax
        add     eax, 0x48
        push    eax
        lea     ecx, [ebx + 0x8]
        push    ecx
        lea     ecx, [ebp - 0x84]
        call    FUN_00491670
        mov     edx, dword ptr [ebx + 0x4]
        mov     eax, dword ptr [ebx]
        mov     dword ptr [ebp - 0x6c], edx
        lea     ecx, [edi + 0x58]
        lea     edx, [ebp - 0xb8]
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [ebp - 0x34], ecx
        mov     dword ptr [ebp - 0x30], edx
        mov     edx, dword ptr [ebp - 0x34]
        push    esi
        mov     esi, dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x30]
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
        lea     eax, [ebp - 0xb8]
        mov     dword ptr [ebp - 0x68], eax
        mov     eax, dword ptr [ebp - 0x2c]
        mov     cl, byte ptr [eax + 0x2b2]
        test    cl, cl
        mov     cl, byte ptr [eax + 0x2b3]
        jz      L6bf7
        test    cl, cl
        mov     ecx, dword ptr [ebx + 0x20]
        jz      L6b38
        add     ecx, 0x44
        push    ecx
        lea     ecx, [ebp - 0x24]
        call    FUN_00419480
        lea     edx, [ebp - 0xb8]
        push    edx
        lea     eax, [ebp - 0x24]
        push    eax
        lea     ecx, [ebp - 0xc]
        call    FUN_0041c830
        mov     eax, dword ptr [edi + 0xa0]
        xor     ebx, ebx
        test    eax, eax
        jbe     L6d2d
L6ab3:
        mov     ecx, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [ecx + 0x270]
        mov     eax, dword ptr [edi + 0xa8]
        imul    ecx, ebx
        fld     dword ptr [ecx + eax + 0x1c]
        fcomp   dword ptr [g_0076d064]
        add     ecx, eax
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L6b28
        fld     dword ptr [ebp - 0xc]
        lea     esi, [ecx + 0x30]
        fsub    dword ptr [esi]
        add     ecx, 0x48
        push    ecx
        lea     ecx, [ebp - 0x64]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x8]
        fsub    dword ptr [esi + 0x4]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x4]
        fsub    dword ptr [esi + 0x8]
        fstp    dword ptr [ebp - 0x10]
        call    FUN_0041a160
        push    0x0
        push    0x1
        push    0x2
        lea     edx, [ebp - 0x18]
        push    edx
        lea     ecx, [ebp - 0x64]
        call    FUN_0041fde0
        push    esi
        lea     ecx, [ebp - 0x64]
        call    FUN_0040d030
        lea     eax, [ebp - 0x64]
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_004a63c0
L6b28:
        mov     eax, dword ptr [edi + 0xa0]
        inc     ebx
        cmp     ebx, eax
        jc      L6ab3
        jmp     L6d2d
L6b38:
        add     ecx, 0x44
        push    ecx
        lea     ecx, [ebp - 0x24]
        call    FUN_00419480
        lea     edx, [ebp - 0xb8]
        push    edx
        lea     eax, [ebp - 0x24]
        push    eax
        lea     ecx, [ebp - 0x18]
        call    FUN_0041c830
        mov     eax, dword ptr [edi + 0xa0]
        xor     ebx, ebx
        test    eax, eax
        jbe     L6d2d
L6b67:
        mov     ecx, dword ptr [edi + 0x10]
        mov     esi, dword ptr [ecx + 0x270]
        mov     eax, dword ptr [edi + 0xa8]
        imul    esi, ebx
        fld     dword ptr [esi + eax + 0x1c]
        fcomp   dword ptr [g_0076d064]
        add     esi, eax
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L6be3
        fld     dword ptr [ebp - 0x18]
        lea     edx, [esi + 0x48]
        fsub    dword ptr [esi + 0x30]
        push    edx
        lea     ecx, [ebp - 0x64]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x14]
        fsub    dword ptr [esi + 0x34]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x10]
        fsub    dword ptr [esi + 0x38]
        fstp    dword ptr [ebp - 0x4]
        call    FUN_0041a160
        push    -0x1
        push    0x0
        push    0x2
        lea     eax, [ebp - 0xc]
        push    eax
        lea     ecx, [ebp - 0x64]
        call    FUN_0041fde0
        mov     ecx, dword ptr [esi + 0x30]
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [esi + 0x38]
        mov     dword ptr [ebp - 0x58], ecx
        lea     ecx, [ebp - 0x64]
        push    ecx
        push    ebx
        mov     ecx, edi
        mov     dword ptr [ebp - 0x48], edx
        mov     dword ptr [ebp - 0x38], eax
        call    FUN_004a63c0
L6be3:
        mov     eax, dword ptr [edi + 0xa0]
        inc     ebx
        cmp     ebx, eax
        jc      L6b67
        jmp     L6d2d
L6bf7:
        test    cl, cl
        jz      L6cc7
        mov     eax, dword ptr [ebx + 0x20]
        mov     edx, dword ptr [eax + 0x50]
        add     eax, 0x44
        mov     dword ptr [ebp - 0x18], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [ebp - 0x14], ecx
        mov     edx, dword ptr [eax + 0x2c]
        lea     eax, [ebp - 0xb8]
        push    eax
        lea     ecx, [ebp - 0x18]
        push    ecx
        lea     ecx, [ebp - 0xc]
        mov     dword ptr [ebp - 0x10], edx
        call    FUN_0041c830
        mov     eax, dword ptr [edi + 0xa0]
        xor     ebx, ebx
        test    eax, eax
        jbe     L6d2d
L6c3a:
        mov     edx, dword ptr [edi + 0x10]
        mov     esi, dword ptr [edx + 0x270]
        mov     eax, dword ptr [edi + 0xa8]
        imul    esi, ebx
        fld     dword ptr [esi + eax + 0x1c]
        fcomp   dword ptr [g_0076d064]
        add     esi, eax
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L6cb6
        fld     dword ptr [ebp - 0xc]
        lea     eax, [esi + 0x48]
        fsub    dword ptr [esi + 0x30]
        push    eax
        lea     ecx, [ebp - 0x64]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x8]
        fsub    dword ptr [esi + 0x34]
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x4]
        fsub    dword ptr [esi + 0x38]
        fstp    dword ptr [ebp - 0x1c]
        call    FUN_0041a160
        push    -0x1
        push    0x1
        push    0x2
        lea     ecx, [ebp - 0x24]
        push    ecx
        lea     ecx, [ebp - 0x64]
        call    FUN_0041fde0
        mov     edx, dword ptr [esi + 0x30]
        mov     ecx, dword ptr [esi + 0x38]
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [ebp - 0x58], edx
        lea     edx, [ebp - 0x64]
        push    edx
        mov     dword ptr [ebp - 0x38], ecx
        push    ebx
        mov     ecx, edi
        mov     dword ptr [ebp - 0x48], eax
        call    FUN_004a63c0
L6cb6:
        mov     eax, dword ptr [edi + 0xa0]
        inc     ebx
        cmp     ebx, eax
        jc      L6c3a
        jmp     L6d2d
L6cc7:
        mov     eax, dword ptr [edi + 0xa0]
        xor     ebx, ebx
        test    eax, eax
        jbe     L6d2d
L6cd3:
        mov     eax, dword ptr [edi + 0x10]
        mov     esi, dword ptr [eax + 0x270]
        mov     eax, dword ptr [edi + 0xa8]
        imul    esi, ebx
        fld     dword ptr [esi + eax + 0x1c]
        fcomp   dword ptr [g_0076d064]
        add     esi, eax
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L6d22
        lea     ecx, [esi + 0x48]
        push    ecx
        lea     ecx, [ebp - 0x64]
        call    FUN_0041a160
        mov     edx, dword ptr [esi + 0x30]
        mov     ecx, dword ptr [esi + 0x38]
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [ebp - 0x58], edx
        lea     edx, [ebp - 0x64]
        push    edx
        mov     dword ptr [ebp - 0x38], ecx
        push    ebx
        mov     ecx, edi
        mov     dword ptr [ebp - 0x48], eax
        call    FUN_004a63c0
L6d22:
        mov     eax, dword ptr [edi + 0xa0]
        inc     ebx
        cmp     ebx, eax
        jc      L6cd3
L6d2d:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ecx + 0x20]
        lea     eax, [ebp - 0x88]
        push    eax
        call    FUN_0048e890
L6d3f:
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        mov     ecx, edi
        call    FUN_00494990
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
