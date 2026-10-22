/*
 * FUN_004e5bb0 (1008 B) — MLR/Adept state-engine update (__thiscall, RET 4).
 * Iterates a linked list of objects (FUN_0040c0e0), performs FPU matrix
 * transforms, and calls virtual methods. Heavy FPU matrix-multiply block.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int    g_007b4354;
extern float  g_007b220c;
extern void   FUN_0040c0e0(void);
extern void   FUN_0042a080(void);
extern void   FUN_00419480(void);
extern void   FUN_00428730(void);
extern void   FUN_00491280(void);
extern void   FUN_0048c410(void);
extern void   FUN_00723ec0(void);
extern void   FUN_0041fde0(void);
extern void   FUN_007240a0(void);
extern void   FUN_0070b130(void);

__declspec(naked) void FUN_004e5bb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x104
        mov     eax, dword ptr [g_007b4354]
        test    eax, eax
        push    ebx
        push    esi
        push    edi
        jz      L_4e5f97
        lea     eax, [ecx+0x4]
        mov     dword ptr [ebp-0x14], eax
        mov     eax, dword ptr [eax]
        lea     ecx, [ebp-0x18]
        mov     dword ptr [ebp-0x10], eax
        mov     dword ptr [ebp-0x18], 0x774094
        call    FUN_0040c0e0
        mov     edi, eax
        test    edi, edi
        jz      L_4e5f97
    L_4e5bed:
        mov     ebx, dword ptr [edi+0x10]
        mov     edx, dword ptr [edi]
        lea     eax, [ebp-0x8c]
        push    eax
        mov     ecx, edi
        mov     dword ptr [ebp-0x30], ebx
        mov     dword ptr [ebp-0x84], 0xbf800000
        mov     dword ptr [ebp-0x88], 0xbf800000
        mov     dword ptr [ebp-0x8c], 0xbf800000
        call    dword ptr [edx+0x8]
        push    0x0
        mov     ecx, ebx
        call    FUN_0042a080
        fld     dword ptr [ebx+0x9c]
        mov     esi, dword ptr [ebp+0x8]
        fld     dword ptr [esi+0x8c]
        fsub    dword ptr [ebp-0x74]
        fld     dword ptr [esi+0xac]
        fsub    dword ptr [ebp-0x54]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        fcompp
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        fstp    st(0)
        jnz     L_4e5f85
        cmp     dword ptr [g_007b4354], 0x1
        jz      L_4e5f85
        lea     ecx, [ebp-0x80]
        push    ecx
        lea     ecx, [ebp-0x24]
        call    FUN_00419480
        lea     edx, [esi+0x1ac]
        xor     ecx, ecx
    L_4e5c85:
        fld     dword ptr [ebp-0x1c]
        fmul    dword ptr [edx+0x8]
        fld     dword ptr [ebp-0x20]
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ebp-0x24]
        fmul    dword ptr [edx]
        faddp   st(1), st(0)
        fsub    dword ptr [edx+0xc]
        fcomp   dword ptr [ebp-0x4c]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_4e5cb2
        inc     ecx
        add     edx, 0x10
        cmp     ecx, 0x6
        jl      L_4e5c85
        jmp     L_4e5cbb
    L_4e5cb2:
        cmp     ecx, 0x6
        jl      L_4e5f85
    L_4e5cbb:
        lea     edx, [ebp-0xc]
        push    edx
        lea     ecx, [ebp-0x80]
        call    FUN_00428730
        fld     dword ptr [g_007b220c]
        fchs
        fcomp   dword ptr [ebp-0x8]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_4e5f85
        lea     ecx, [ebp-0xd4]
        call    FUN_00491280
        mov     ecx, dword ptr [esi+0x26c]
        push    0x0
        push    0x0
        push    0x3f800000
        push    0x3f800000
        push    0x0
        lea     eax, [ebp-0xd4]
        push    eax
        push    0x8bd548
        push    0x8bd548
        push    0x7b8da8
        push    0x7b9460
        call    FUN_0048c410
        mov     ecx, dword ptr [ebx+0x90]
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx+0x4]
        mov     eax, dword ptr [eax+0x1c]
        push    eax
        call    FUN_00723ec0
        mov     eax, dword ptr [edi+0x18]
        mov     eax, dword ptr [eax+0x14]
        mov     ecx, dword ptr [eax+0xd8]
        mov     edx, dword ptr [eax+0x124]
        add     ecx, 0x80
        add     edx, 0x10
        lea     eax, [ebp-0x104]
        mov     dword ptr [ebp-0x28], ecx
        mov     dword ptr [ebp-0x34], edx
        mov     dword ptr [ebp-0x2c], eax
        mov     edx, dword ptr [ebp-0x34]
        push    esi
        mov     esi, dword ptr [ebp-0x28]
        mov     eax, dword ptr [ebp-0x2c]
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
        mov     ebx, dword ptr [edi+0x18]
        fld     dword ptr [ebx+0x9c]
        push    0x2
        fsubr   dword ptr [ebp-0xe8]
        mov     ecx, 0xc
        lea     esi, [ebp-0x80]
        lea     edi, [ebp-0xbc]
        fdiv    dword ptr [ebp-0x8]
        rep movsd
        push    0x0
        push    0x1
        push    0x7b8d18
        fchs
        fld     dword ptr [ebp-0xc]
        fmul    st(0), st(1)
        fadd    dword ptr [ebp-0xf8]
        fld     st(1)
        fmul    dword ptr [ebp-0x8]
        fadd    dword ptr [ebp-0xe8]
        fstp    dword ptr [ebp-0x3c]
        mov     ecx, dword ptr [ebp-0x3c]
        fld     dword ptr [ebp-0x4]
        mov     dword ptr [ebp-0xa0], ecx
        fmul    st(0), st(2)
        lea     ecx, [ebp-0xbc]
        fadd    dword ptr [ebp-0xd8]
        fstp    dword ptr [ebp-0x38]
        mov     edx, dword ptr [ebp-0x38]
        mov     dword ptr [ebp-0x90], edx
        fstp    dword ptr [ebp-0xb0]
        fstp    st(0)
        call    FUN_0041fde0
        mov     ecx, dword ptr [ebp-0x48]
        mov     eax, dword ptr [ebx]
        push    ecx
        lea     edx, [ebp-0xc]
        push    edx
        lea     ecx, [ebp-0xbc]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0x30]
        push    0x1
        call    FUN_007240a0
        call    FUN_0070b130
        mov     ecx, dword ptr [ebp-0x30]
        push    0x1
        call    FUN_0042a080
    L_4e5f85:
        lea     ecx, [ebp-0x18]
        call    FUN_0040c0e0
        mov     edi, eax
        test    edi, edi
        jnz     L_4e5bed
    L_4e5f97:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
