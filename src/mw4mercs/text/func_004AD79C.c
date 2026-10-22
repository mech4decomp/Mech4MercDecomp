/*
 * FUN_004AD79C (528 B) — __thiscall (ret 8). Jump-table dispatch on [edi]
 * (0..0xb) into several FPU update handlers; one handler iterates a list
 * doing spline interpolation and calls FUN_004AE2B0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_7704c4;   /* 0x7704c4 */
extern char  g_4ad9b0[]; /* 0x4ad9b0 - jump table (outside this slice) */

extern void __cdecl FUN_004ADE20(void);
extern void __cdecl FUN_004AE010(void);
extern void __cdecl FUN_004AE2B0(void);

__declspec(naked) void FUN_004AD79C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        sub     esp, 8
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi]
        cmp     eax, 0xb
        ja      L_4AD9A6
        mov     ecx, dword ptr [esp + 0x14]
L_4AD7B5:
        jmp     dword ptr [eax*4 + g_4ad9b0]
L_4AD7BC:
        test    ecx, ecx
        jne     L_4AD7C5
        add     edi, 4
        jmp     L_4AD7ED
L_4AD7C5:
        add     edi, 0x10
        jmp     L_4AD7ED
L_4AD7CA:
        test    ecx, ecx
        jne     L_4AD7D3
        add     edi, 4
        jmp     L_4AD7ED
L_4AD7D3:
        add     edi, 0xc
        jmp     L_4AD7ED
L_4AD7D8:
        test    ecx, ecx
        jne     L_4AD7EA
        add     edi, 4
        jmp     L_4AD7ED
L_4AD7E1:
        test    ecx, ecx
        jne     L_4AD7EA
        add     edi, 4
        jmp     L_4AD7ED
L_4AD7EA:
        add     edi, 0x18
L_4AD7ED:
        mov     eax, dword ptr [edi]
        cmp     eax, 0xb
        jbe     L_4AD7B5
        pop     edi
        add     esp, 8
        ret     8
L_4AD7FB:
        fld     dword ptr [edi + 4]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [edi + 4]
        pop     edi
        add     esp, 8
        ret     8
L_4AD80C:
        fld     dword ptr [edi + 4]
        push    ecx
        fld     dword ptr [edi + 8]
        __emit 0xD8 /* __emit: MSVC6 encodes fadd st(1),st(0) as DC C1; ref needs D8 C1 */
        __emit 0xC1
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp]
        push    ecx
        mov     ecx, edi
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp]
        call    FUN_004ADE20
        pop     edi
        add     esp, 8
        ret     8
L_4AD832:
        fld     dword ptr [edi + 0x10]
        push    ecx
        __emit 0xDC /* __emit: MSVC6 encodes fadd st(0),st(0) as D8 C0; ref needs DC C0 */
        __emit 0xC0
        fld     dword ptr [edi + 0xc]
        fmul    dword ptr [g_7704c4]
        faddp   st(1), st(0)
        fadd    dword ptr [edi + 8]
        fstp    dword ptr [esp]
        fld     dword ptr [edi + 0x10]
        push    ecx
        fadd    dword ptr [edi + 0xc]
        fadd    dword ptr [edi + 8]
        fadd    dword ptr [edi + 4]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp]
        fld     dword ptr [edi + 8]
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [edi + 4]
        push    ecx
        fadd    dword ptr [esp + 0x20]
        mov     ecx, edi
        fstp    dword ptr [esp]
        call    FUN_004AE010
        pop     edi
        add     esp, 8
        ret     8
L_4AD87D:
        push    esi
        mov     esi, dword ptr [edi + 8]
        lea     ecx, [esi - 1]
        xor     eax, eax
        test    ecx, ecx
        jle     L_4AD942
        push    ebx
        push    ebp
        mov     ebp, dword ptr [edi + 4]
        mov     ebx, ebp
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ecx
L_4AD89D:
        mov     eax, dword ptr [ebx]
        fld     dword ptr [ebx + 0xc]
        xor     ecx, ecx
        test    esi, esi
        mov     dword ptr [esp + 0x20], eax
        jbe     L_4AD8C3
        mov     edx, ebp
L_4AD8AE:
        fld     dword ptr [edx]
        fcomp   dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_4AD8C3
        inc     ecx
        add     edx, 0xc
        cmp     ecx, esi
        jb      L_4AD8AE
L_4AD8C3:
        fld     dword ptr [esp + 0x20]
        lea     ecx, [ecx + ecx*2]
        fsub    dword ptr [ebp + ecx*4 - 0xc]
        lea     eax, [ebp + ecx*4 - 0xc]
        xor     ecx, ecx
        test    esi, esi
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        jbe     L_4AD8F3
        mov     edx, ebp
L_4AD8E0:
        fld     dword ptr [edx]
        fcomp   st(2)
        fnstsw  ax
        test    ah, 0x41
        je      L_4AD8F3
        inc     ecx
        add     edx, 0xc
        cmp     ecx, esi
        jb      L_4AD8E0
L_4AD8F3:
        push    ecx
        fld     st(1)
        fsub    dword ptr [esp + 0x24]
        lea     edx, [ecx + ecx*2]
        lea     eax, [ebp + edx*4 - 0xc]
        fstp    dword ptr [esp]
        push    ecx
        fxch    st(1)
        fsub    dword ptr [eax]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov     eax, dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp]
        push    ecx
        fadd    dword ptr [esp + 0x28]
        mov     ecx, ebx
        fstp    dword ptr [esp]
        push    eax
        call    FUN_004AE2B0
        mov     eax, dword ptr [esp + 0x10]
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jne     L_4AD89D
        mov     eax, dword ptr [esp + 0x14]
        pop     ebp
        pop     ebx
L_4AD942:
        mov     edi, dword ptr [edi + 4]
        lea     ecx, [eax + eax*2]
        fld     dword ptr [edi + ecx*4]
        xor     ecx, ecx
        test    esi, esi
        fstp    dword ptr [esp + 0x18]
        jbe     L_4AD96C
        mov     edx, edi
L_4AD957:
        fld     dword ptr [edx]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        je      L_4AD96C
        inc     ecx
        add     edx, 0xc
        cmp     ecx, esi
        jb      L_4AD957
L_4AD96C:
        fld     dword ptr [esp + 0x18]
        lea     edx, [ecx + ecx*2]
        fsub    dword ptr [edi + edx*4 - 0xc]
        lea     eax, [edi + edx*4 - 0xc]
        push    0x3f800000
        lea     ecx, [esi + esi*2]
        fmul    dword ptr [eax + 4]
        lea     ecx, [edi + ecx*4 - 0xc]
        fadd    dword ptr [eax + 8]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        call    FUN_004AE2B0
        pop     esi
L_4AD9A6:
        pop     edi
        add     esp, 8
        ret     8
    }
}
