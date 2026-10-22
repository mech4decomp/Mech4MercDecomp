/*
 * FUN_004ac210 (1020 B) -- __thiscall (RET 0x4). MLR sub-object base class
 * update: 3x4 matrix multiply (transform), then per-object interpolation /
 * animation advance logic with FPU. Calls FUN_004206b0 (matrix helper) and
 * FUN_00494440, plus virtual dispatch via vtable slots +0x1c/+0x20/+0x24.
 *
 * CFLAGS: /O1
 */

extern float g_76d064;
extern float g_76c5b0;
extern double (*g_76b2e4)(double);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_00494440(void);

__declspec(naked) void FUN_004ac210(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x84
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x9c]
        and     eax, 0xc
        cmp     al, 0x4
        mov     dword ptr [ebp - 0x4], 0x0
        jnz     L_3e3
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ecx + 0x14]
        lea     eax, [edi + 0x58]
        lea     ecx, [ebp - 0x54]
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp - 0xc], ecx
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0xc]
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
        lea     edx, [ebp - 0x54]
        push    edx
        lea     ecx, [ebp - 0x84]
        call    FUN_004206b0
        lea     eax, [ebp - 0x84]
        mov     dword ptr [ebp - 0x4], eax
L_3e3:
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     ebx, dword ptr [edi + 0x10]
        mov     dword ptr [ebp - 0x14], ecx
        mov     dword ptr [ebp - 0x10], edx
        fld     qword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 0x18], ebx
        fsub    qword ptr [edi + 0x88]
        fst     dword ptr [ebp - 0x8]
        fmul    dword ptr [edi + 0x94]
        fadd    dword ptr [edi + 0x90]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_428
        mov     dword ptr [edi + 0xa4], 0x0
        jmp     L_483
L_428:
        mov     edx, dword ptr [ebx + 0x70]
        fld     dword ptr [edi + 0x90]
        xor     ecx, ecx
        test    edx, edx
        jbe     L_44b
        mov     esi, dword ptr [ebx + 0x6c]
L_43a:
        fcom    dword ptr [esi]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_44b
        inc     ecx
        add     esi, 0xc
        cmp     ecx, edx
        jc      L_43a
L_44b:
        lea     eax, [ecx + ecx*0x2]
        mov     ecx, dword ptr [ebx + 0x6c]
        fsub    dword ptr [ecx + eax*0x4 - 0xc]
        lea     eax, [ecx + eax*0x4 - 0xc]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_474
        fstp    st(0)
        fld     dword ptr [g_76c5b0]
L_474:
        fmul    dword ptr [ebp - 0x8]
        fadd    dword ptr [edi + 0xa4]
        fstp    dword ptr [edi + 0xa4]
L_483:
        mov     eax, dword ptr [edi + 0xa0]
        mov     ebx, dword ptr [ebp - 0x10]
        xor     esi, esi
        test    eax, eax
        mov     dword ptr [ebp - 0xc], 0xffffffff
        jle     L_552
L_49d:
        mov     edx, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [edx + 0x270]
        mov     eax, dword ptr [edi + 0xa8]
        imul    ecx, esi
        fld     dword ptr [ecx + eax*0x1 + 0x1c]
        fcomp   dword ptr [g_76d064]
        add     ecx, eax
        fnstsw  ax
        test    ah, 0x1
        jz      L_4f0
        fld     dword ptr [ebp - 0x8]
        mov     edx, dword ptr [ebp - 0x4]
        fmul    dword ptr [ecx + 0x20]
        mov     eax, dword ptr [edi]
        push    ebx
        fadd    dword ptr [ecx + 0x1c]
        fstp    dword ptr [ecx + 0x1c]
        mov     ecx, dword ptr [ebp - 0x14]
        push    ecx
        push    edx
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x1c]
        test    al, al
        jz      L_4e8
        mov     dword ptr [ebp - 0xc], esi
        jmp     L_543
L_4e8:
        mov     eax, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
L_4f0:
        fld     dword ptr [edi + 0xa4]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_543
        mov     edx, dword ptr [edi]
        lea     eax, [ebp - 0x24]
        push    eax
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [edi]
        push    ebx
        push    eax
        push    ecx
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x1c]
        test    al, al
        jz      L_529
        mov     dword ptr [ebp - 0xc], esi
        jmp     L_531
L_529:
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
L_531:
        fld     dword ptr [edi + 0xa4]
        fsub    dword ptr [g_76d064]
        fstp    dword ptr [edi + 0xa4]
L_543:
        mov     eax, dword ptr [edi + 0xa0]
        inc     esi
        cmp     esi, eax
        jl      L_49d
L_552:
        fld     dword ptr [edi + 0xa4]
        mov     eax, dword ptr [ebp - 0xc]
        fcomp   dword ptr [g_76d064]
        inc     eax
        mov     dword ptr [edi + 0xa0], eax
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5d7
L_56f:
        mov     ecx, dword ptr [ebp - 0x18]
        mov     esi, dword ptr [edi + 0xa0]
        cmp     esi, dword ptr [ecx + 0x268]
        jge     L_5d7
        mov     eax, dword ptr [edi]
        lea     ecx, [ebp - 0x24]
        push    ecx
        lea     edx, [esi + 0x1]
        push    esi
        mov     ecx, edi
        mov     dword ptr [edi + 0xa0], edx
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [edi]
        push    ebx
        push    eax
        push    ecx
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x1c]
        test    al, al
        jnz     L_5b8
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        dec     dword ptr [edi + 0xa0]
L_5b8:
        fld     dword ptr [edi + 0xa4]
        fsub    dword ptr [g_76d064]
        fst     dword ptr [edi + 0xa4]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x1
        jz      L_56f
L_5d7:
        fld     dword ptr [edi + 0xa4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        call    dword ptr [g_76b2e4]
        fsubr   dword ptr [edi + 0xa4]
        mov     eax, dword ptr [ebp + 0x8]
        add     esp, 0x8
        push    eax
        mov     ecx, edi
        fstp    dword ptr [edi + 0xa4]
        call    FUN_00494440
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
