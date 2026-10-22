/*
 * FUN_00495970 (995 B) — MLR particle system update / curve evaluation.
 * __thiscall, RET 0x4.
 *
 * Iterates over particles, evaluating up to 5 curve channels
 * (position/color/etc.) via FUN_00495e30/FUN_00495e60, then computes a
 * 3x4 matrix transform and recurses into child nodes (FUN_00494990).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;

extern void __cdecl FUN_0048bcf0(void);
extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_00495e60(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_0048e890(void);
extern void __cdecl FUN_00494990(void);

__declspec(naked) void FUN_00495970(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x70
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebx, dword ptr [edi + 0xa0]
        test    ebx, ebx
        mov     dword ptr [ebp - 0xc], edi
        mov     dword ptr [ebp - 0x1c], ebx
        jz      L5D3F
        lea     ecx, [ebp - 0x40]
        call    FUN_0048bcf0
        mov     eax, dword ptr [edi + 0xb0]
        mov     esi, dword ptr [edi + 0x10]
        xor     edx, edx
        cmp     ebx, edx
        mov     dword ptr [ebp - 0x40], eax
        mov     dword ptr [ebp - 0x10], edx
        jbe     L5B72
        mov     ecx, dword ptr [edi + 0xa8]
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0x14], edx
L59BC:
        mov     ecx, dword ptr [esi + 0x270]
        mov     eax, dword ptr [ebp - 0x18]
        imul    ecx, edx
        fld     dword ptr [ecx + eax + 0x1c]
        fst     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076d064]
        add     ecx, eax
        __emit 0xDF   /* fnstsw ax: MSVC6 emits 9B-prefixed fstsw; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L5B5D
        mov     edx, dword ptr [ecx + 0x18]
        mov     ebx, dword ptr [ebp - 0x4]
        lea     edi, [esi + 0x1ec]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [ebp - 0x8], edx
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [edi + 0x4]
        lea     eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea     eax, [ecx + eax*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [esi + 0x204]
        test    al, al
        jz      L5A29
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [esi + 0x200]
        fadd    dword ptr [esi + 0x1fc]
        fmulp   st(1), st(0)
L5A29:
        mov     edx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [edx + 0xb8]
        mov     ecx, dword ptr [ebp - 0x14]
        lea     edi, [eax + ecx]
        lea     ecx, [esi + 0x20c]
        fstp    dword ptr [edi]
        push    ebx
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [esi + 0x210]
        fsub    dword ptr [eax + edx*4]
        lea     eax, [eax + edx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [esi + 0x224]
        test    al, al
        jz      L5A79
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [esi + 0x220]
        fadd    dword ptr [esi + 0x21c]
        fmulp   st(1), st(0)
L5A79:
        lea     ecx, [esi + 0x22c]
        fstp    dword ptr [edi + 0x4]
        push    ebx
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        mov     edx, dword ptr [esi + 0x230]
        lea     ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea     eax, [edx + ecx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [esi + 0x244]
        test    al, al
        jz      L5ABB
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [esi + 0x240]
        fadd    dword ptr [esi + 0x23c]
        fmulp   st(1), st(0)
L5ABB:
        lea     ecx, [esi + 0x24c]
        fstp    dword ptr [edi + 0x8]
        push    ebx
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [esi + 0x250]
        lea     eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea     eax, [ecx + eax*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [esi + 0x264]
        test    al, al
        jz      L5AFD
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [esi + 0x260]
        fadd    dword ptr [esi + 0x25c]
        fmulp   st(1), st(0)
L5AFD:
        fstp    dword ptr [edi + 0xc]
        lea     edi, [esi + 0x278]
        push    ebx
        mov     ecx, edi
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [edi + 0x4]
        fsub    dword ptr [eax + edx*4]
        lea     eax, [eax + edx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [esi + 0x290]
        test    al, al
        fst     dword ptr [ebp - 0x4]
        jz      L5B46
        mov     ecx, dword ptr [ebp - 0x8]
        fstp    st(0)
        push    0x0
        push    ecx
        lea     ecx, [esi + 0x284]
        call    FUN_00495e60
        fmul    dword ptr [ebp - 0x4]
L5B46:
        mov     edx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [edx + 0xbc]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     ebx, dword ptr [ebp - 0x1c]
        fstp    dword ptr [eax + ecx*4]
        mov     edi, dword ptr [ebp - 0xc]
        mov     edx, ecx
L5B5D:
        mov     ecx, dword ptr [ebp - 0x14]
        inc     edx
        add     ecx, 0x10
        cmp     edx, ebx
        mov     dword ptr [ebp - 0x10], edx
        mov     dword ptr [ebp - 0x14], ecx
        jc      L59BC
L5B72:
        mov     ebx, dword ptr [ebp + 0x8]
        add     esi, 0x48
        push    esi
        lea     edx, [ebx + 0x8]
        push    edx
        lea     ecx, [ebp - 0x3c]
        call    FUN_00491670
        mov     eax, dword ptr [ebx + 0x4]
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [ebp - 0x24], eax
        lea     edx, [edi + 0x58]
        lea     eax, [ebp - 0x70]
        mov     dword ptr [ebp - 0x1c], ecx
        mov     dword ptr [ebp - 0x18], edx
        mov     dword ptr [ebp + 0x8], eax
        mov     edx, dword ptr [ebp - 0x18]
        push    esi
        mov     esi, dword ptr [ebp - 0x1c]
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
        lea     ecx, [ebp - 0x70]
        lea     edx, [ebp - 0x40]
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [ebx + 0x20]
        push    edx
        call    FUN_0048e890
        push    ebx
        mov     ecx, edi
        call    FUN_00494990
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L5D3F:
        mov     ebx, dword ptr [ebp + 0x8]
        push    ebx
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
