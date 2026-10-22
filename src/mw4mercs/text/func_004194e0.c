/*
 * FUN_004194e0 (1509 B) — OBB/sphere cluster collision resolution.
 * __cdecl(ECX=out sphere, [ESP+4]=cluster descriptor), RET 0x4.
 * Returns a status code (1..5). Calls FUN_0040cb70 and FUN_00419c00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d070;   /* _DAT_0076d070 */
extern float g_007b220c;   /* DAT_007b220c */
extern double g_0076d588;  /* _DAT_0076d588 (qword) */
extern float g_0076d064;   /* _DAT_0076d064 */
extern float g_007b8c68;   /* DAT_007b8c68 */
extern float g_007b8c6c;   /* DAT_007b8c6c */
extern float g_007b8c70;   /* DAT_007b8c70 */
extern float g_0076c5b0;   /* _DAT_0076c5b0 */
extern void __cdecl FUN_0040cb70(void);
extern void __cdecl FUN_00419c00(void);

__declspec(naked) void FUN_004194e0(void)
{
    __asm {
        sub     esp, 0x4c
        mov     edx, dword ptr [esp+0x50]
        mov     eax, dword ptr [edx+0x4]
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        or      ecx, 0xffffffff
        or      edi, 0xffffffff
        lea     ebx, [eax-1]
        xor     ebp, ebp
        test    ebx, ebx
        mov     dword ptr [esp+0x24], ecx
        mov     dword ptr [esp+0x1c], edi
        mov     dword ptr [esp+0x10], 0
        mov     dword ptr [esp+0x18], eax
        jle     lbl_19592
        xor     edi, edi
lbl_19515:
        lea     ebx, [ebp+1]
        cmp     ebx, eax
        mov     dword ptr [esp+0x30], ebx
        jge     lbl_1957e
        mov     edx, dword ptr [edx]
        lea     ecx, [edx+edi*1+0xc]
lbl_19526:
        fld     dword ptr [edx+edi*1]
        fsub    dword ptr [ecx]
        fld     dword ptr [edx+edi*1+0x4]
        fsub    dword ptr [ecx+0x4]
        fld     dword ptr [edx+edi*1+0x8]
        fsub    dword ptr [ecx+0x8]
        fld     st(0)
        fmul    st(0),st(1)
        fld     st(2)
        fmul    st(0),st(3)
        faddp   st(1),st(0)
        fld     st(3)
        fmul    st(0),st(4)
        faddp   st(1),st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fcom    dword ptr [esp+0x10]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jnz     lbl_19568
        fstp    dword ptr [esp+0x10]
        mov     dword ptr [esp+0x24], ebp
        mov     dword ptr [esp+0x1c], ebx
        jmp     lbl_1956a
lbl_19568:
        fstp    st(0)
lbl_1956a:
        mov     eax, dword ptr [esp+0x18]
        inc     ebx
        add     ecx, 0xc
        cmp     ebx, eax
        jl      lbl_19526
        mov     ebx, dword ptr [esp+0x30]
        mov     edx, dword ptr [esp+0x60]
lbl_1957e:
        mov     ebp, ebx
        lea     ecx, [eax-1]
        add     edi, 0xc
        cmp     ebp, ecx
        jl      lbl_19515
        mov     edi, dword ptr [esp+0x1c]
        mov     ecx, dword ptr [esp+0x24]
lbl_19592:
        fld     dword ptr [esp+0x10]
        mov     ebx, dword ptr [edx]
        fsqrt
        lea     eax, [edi+edi*2]
        lea     edi, [ebx+eax*4]
        lea     ecx, [ecx+ecx*2]
        push    0x3f000000
        mov     dword ptr [esp+0x64], ebx
        lea     ebx, [ebx+ecx*4]
        push    edi
        push    ebx
        mov     ecx, esi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esi+0xc]
        call    FUN_0040cb70
        fld     dword ptr [g_007b220c]
        mov     eax, dword ptr [esp+0x18]
        fadd    dword ptr [esi+0xc]
        or      ebp, 0xffffffff
        test    eax, eax
        mov     dword ptr [esp+0x1c], 0
        fst     dword ptr [esi+0xc]
        fld     st(0)
        fmul    st(0),st(1)
        fstp    dword ptr [esp+0x10]
        jle     lbl_19641
        mov     edx, dword ptr [esp+0x60]
        mov     ecx, edx
lbl_195ee:
        fld     dword ptr [ecx]
        fsub    dword ptr [esi]
        fld     dword ptr [ecx+0x4]
        fsub    dword ptr [esi+0x4]
        fld     dword ptr [ecx+0x8]
        fsub    dword ptr [esi+0x8]
        fld     st(0)
        fmul    st(0),st(1)
        fld     st(2)
        fmul    st(0),st(3)
        faddp   st(1),st(0)
        fld     st(3)
        fmul    st(0),st(4)
        faddp   st(1),st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fcom    dword ptr [esp+0x10]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jnz     lbl_19629
        mov     ebp, dword ptr [esp+0x1c]
        fstp    dword ptr [esp+0x10]
        jmp     lbl_1962b
lbl_19629:
        fstp    st(0)
lbl_1962b:
        inc     dword ptr [esp+0x1c]
        mov     eax, dword ptr [esp+0x18]
        add     ecx, 0xc
        cmp     dword ptr [esp+0x1c], eax
        jl      lbl_195ee
        cmp     ebp, -1
        jnz     lbl_19652
lbl_19641:
        pop     edi
        fstp    st(0)
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x4c
        ret     4
lbl_19652:
        fstp    dword ptr [esp+0x58]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [esi+0x4]
        mov     dword ptr [esp+0x4c], ecx
        mov     ecx, dword ptr [esi+0x8]
        mov     dword ptr [esp+0x50], eax
        mov     dword ptr [esp+0x54], ecx
        fld     dword ptr [edi]
        fsub    dword ptr [ebx]
        lea     eax, [ebp+ebp*2]
        lea     eax, [edx+eax*4]
        fstp    dword ptr [esp+0x3c]
        fld     dword ptr [edi+0x4]
        fsub    dword ptr [ebx+0x4]
        fstp    dword ptr [esp+0x40]
        fld     dword ptr [edi+0x8]
        fsub    dword ptr [ebx+0x8]
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [eax]
        fsub    dword ptr [ebx]
        fstp    dword ptr [esp+0x24]
        fld     dword ptr [eax+0x4]
        fsub    dword ptr [ebx+0x4]
        fstp    dword ptr [esp+0x28]
        fld     dword ptr [eax+0x8]
        fsub    dword ptr [ebx+0x8]
        fstp    dword ptr [esp+0x2c]
        fld     dword ptr [eax]
        fsub    dword ptr [edi]
        fstp    dword ptr [esp+0x30]
        fld     dword ptr [eax+0x4]
        fsub    dword ptr [edi+0x4]
        fstp    dword ptr [esp+0x34]
        fld     dword ptr [eax+0x8]
        fsub    dword ptr [edi+0x8]
        fstp    dword ptr [esp+0x38]
        fld     dword ptr [esp+0x2c]
        fmul    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x28]
        fmul    dword ptr [esp+0x40]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x24]
        fmul    dword ptr [esp+0x3c]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x38]
        fmul    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x34]
        fmul    dword ptr [esp+0x40]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x30]
        fmul    dword ptr [esp+0x3c]
        faddp   st(1),st(0)
        fchs
        fld     dword ptr [esp+0x2c]
        fmul    dword ptr [esp+0x38]
        fld     dword ptr [esp+0x28]
        fmul    dword ptr [esp+0x34]
        faddp   st(1),st(0)
        fld     dword ptr [esp+0x30]
        fmul    dword ptr [esp+0x24]
        faddp   st(1),st(0)
        fld     st(0)
        fmul    st(0),st(2)
        fst     qword ptr [esp+0x10]
        fld     st(1)
        fmul    st(0),st(4)
        fst     qword ptr [esp+0x3c]
        fld     st(3)
        fmul    st(0),st(5)
        fst     qword ptr [esp+0x24]
        fadd    st(0),st(1)
        fstp    qword ptr [esp+0x1c]
        fstp    st(0)
        fld     qword ptr [esp+0x1c]
        fadd    st(0),st(1)
        fstp    qword ptr [esp+0x30]
        fstp    st(0)
        fld     st(0)
        fadd    st(0),st(2)
        fxch    st(1)
        mov     ecx, edx
        fadd    st(0),st(3)
        fmulp   st(1),st(0)
        fxch    st(1)
        fadd    st(0),st(2)
        fmulp   st(1),st(0)
        fdiv    qword ptr [esp+0x30]
        fsqrt
        fmul    qword ptr [g_0076d588]
        fstp    dword ptr [esi+0xc]
        fstp    st(0)
        fld     qword ptr [g_0076d588]
        fdiv    qword ptr [esp+0x30]
        fld     qword ptr [esp+0x3c]
        fadd    qword ptr [esp+0x10]
        fld     qword ptr [esp+0x24]
        fadd    qword ptr [esp+0x10]
        fld     dword ptr [ebx]
        fmul    qword ptr [esp+0x1c]
        fld     dword ptr [edi]
        fmul    st(0),st(2)
        faddp   st(1),st(0)
        fld     dword ptr [eax]
        fmul    st(0),st(3)
        faddp   st(1),st(0)
        fmul    st(0),st(3)
        fst     dword ptr [esp+0x30]
        fstp    dword ptr [esi]
        fld     dword ptr [eax+0x4]
        fmul    st(0),st(2)
        fld     dword ptr [edi+0x4]
        fmul    st(0),st(2)
        faddp   st(1),st(0)
        fld     dword ptr [ebx+0x4]
        fmul    qword ptr [esp+0x1c]
        faddp   st(1),st(0)
        fmul    st(0),st(3)
        fst     dword ptr [esp+0x24]
        fstp    dword ptr [esi+0x4]
        fld     dword ptr [eax+0x8]
        fmul    st(0),st(2)
        fld     dword ptr [edi+0x8]
        or      edi, 0xffffffff
        fmul    st(0),st(2)
        faddp   st(1),st(0)
        fld     dword ptr [ebx+0x8]
        xor     ebx, ebx
        fmul    qword ptr [esp+0x1c]
        faddp   st(1),st(0)
        fmulp   st(3),st(0)
        fstp    st(0)
        fstp    st(0)
        fst     dword ptr [esi+0x8]
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [esi+0xc]
        fst     dword ptr [esi+0xc]
        fld     st(0)
        fmul    st(0),st(1)
        fstp    dword ptr [esp+0x10]
        fstp    st(0)
lbl_197f5:
        fld     dword ptr [ecx]
        fsub    dword ptr [esp+0x30]
        fld     dword ptr [ecx+0x4]
        fsub    dword ptr [esp+0x24]
        fld     dword ptr [ecx+0x8]
        fsub    st(0),st(3)
        fld     st(0)
        fmul    st(0),st(1)
        fld     st(2)
        fmul    st(0),st(3)
        faddp   st(1),st(0)
        fld     st(3)
        fmul    st(0),st(4)
        faddp   st(1),st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fcom    dword ptr [esp+0x10]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jnz     lbl_19830
        fstp    dword ptr [esp+0x10]
        mov     edi, ebx
        jmp     lbl_19832
lbl_19830:
        fstp    st(0)
lbl_19832:
        mov     eax, dword ptr [esp+0x18]
        inc     ebx
        add     ecx, 0xc
        cmp     ebx, eax
        jl      lbl_197f5
        cmp     edi, -1
        fstp    st(0)
        jnz     lbl_19854
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 2
        pop     ebx
        add     esp, 0x4c
        ret     4
lbl_19854:
        fld     dword ptr [g_007b8c68]
        mov     ebx, dword ptr [esp+0x18]
        fld     dword ptr [g_007b8c6c]
        mov     eax, edx
        fld     dword ptr [g_007b8c70]
        mov     ecx, ebx
lbl_1986e:
        fxch    st(2)
        add     eax, 0xc
        dec     ecx
        fadd    dword ptr [eax-0xc]
        fxch    st(2)
        fxch    st(1)
        fadd    dword ptr [eax-0x8]
        fxch    st(1)
        fadd    dword ptr [eax-0x4]
        jnz     lbl_1986e
        fstp    dword ptr [esp+0x44]
        mov     ecx, edx
        fstp    dword ptr [esp+0x40]
        fild    dword ptr [esp+0x18]
        fdivr   dword ptr [g_0076d064]
        fstp    dword ptr [esp+0x1c]
        fmul    dword ptr [esp+0x1c]
        fstp    dword ptr [esp+0x3c]
        fld     dword ptr [esp+0x40]
        fmul    dword ptr [esp+0x1c]
        fstp    dword ptr [esp+0x40]
        fld     dword ptr [esp+0x44]
        fmul    dword ptr [esp+0x1c]
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [g_0076c5b0]
lbl_198c3:
        fld     dword ptr [ecx]
        fsub    dword ptr [esp+0x3c]
        fld     dword ptr [ecx+0x4]
        fsub    dword ptr [esp+0x40]
        fld     dword ptr [ecx+0x8]
        fsub    dword ptr [esp+0x44]
        fld     st(0)
        fmul    st(0),st(1)
        fld     st(2)
        fmul    st(0),st(3)
        faddp   st(1),st(0)
        fld     st(3)
        fmul    st(0),st(4)
        faddp   st(1),st(0)
        fst     dword ptr [esp+0x30]
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fcomp   st(1)
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jnz     lbl_19900
        fstp    st(0)
        fld     dword ptr [esp+0x30]
lbl_19900:
        add     ecx, 0xc
        dec     ebx
        jnz     lbl_198c3
        fsqrt
        fadd    dword ptr [g_007b220c]
        fstp    dword ptr [esp+0x48]
        jmp     lbl_19918
lbl_19914:
        mov     edx, dword ptr [esp+0x60]
lbl_19918:
        cmp     ebp, dword ptr [esp+0x18]
        mov     dword ptr [esp+0x1c], 0
        jge     lbl_1994a
        lea     ecx, [ebp+ebp*2]
        lea     edx, [edx+ecx*4]
        push    edx
        lea     ecx, [esp+0x50]
        call    FUN_00419c00
        fld     dword ptr [esp+0x58]
        fmul    dword ptr [esp+0x58]
        mov     edx, dword ptr [esp+0x60]
        or      ebp, 0xffffffff
        fstp    dword ptr [esp+0x1c]
lbl_1994a:
        cmp     edi, dword ptr [esp+0x18]
        jge     lbl_19972
        lea     eax, [edi+edi*2]
        lea     ecx, [edx+eax*4]
        push    ecx
        mov     ecx, esi
        call    FUN_00419c00
        fld     dword ptr [esi+0xc]
        mov     edx, dword ptr [esp+0x60]
        fld     st(0)
        fmul    st(0),st(1)
        or      edi, 0xffffffff
        fstp    dword ptr [esp+0x10]
        fstp    st(0)
lbl_19972:
        fld     dword ptr [esp+0x48]
        fcomp   dword ptr [esi+0xc]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      lbl_19993
        fld     dword ptr [esp+0x48]
        fcomp   dword ptr [esp+0x58]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jnz     lbl_19a62
lbl_19993:
        xor     ecx, ecx
lbl_19995:
        cmp     ebp, ecx
        fld     dword ptr [edx]
        fsub    dword ptr [esp+0x4c]
        fld     dword ptr [edx+0x4]
        fsub    dword ptr [esp+0x50]
        fld     dword ptr [edx+0x8]
        fsub    dword ptr [esp+0x54]
        fld     st(0)
        fmul    st(0),st(1)
        fld     st(2)
        fmul    st(0),st(3)
        faddp   st(1),st(0)
        fld     st(3)
        fmul    st(0),st(4)
        faddp   st(1),st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        jge     lbl_199d6
        fcom    dword ptr [esp+0x1c]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jnz     lbl_199d6
        fstp    dword ptr [esp+0x1c]
        mov     ebp, ecx
        jmp     lbl_199d8
lbl_199d6:
        fstp    st(0)
lbl_199d8:
        cmp     edi, ecx
        fld     dword ptr [edx]
        fsub    dword ptr [esi]
        fld     dword ptr [edx+0x4]
        fsub    dword ptr [esi+0x4]
        fld     dword ptr [edx+0x8]
        fsub    dword ptr [esi+0x8]
        fld     st(0)
        fmul    st(0),st(1)
        fld     st(2)
        fmul    st(0),st(3)
        faddp   st(1),st(0)
        fld     st(3)
        fmul    st(0),st(4)
        faddp   st(1),st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        jge     lbl_19a15
        fcom    dword ptr [esp+0x10]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jnz     lbl_19a15
        fstp    dword ptr [esp+0x10]
        mov     edi, ecx
        jmp     lbl_19a17
lbl_19a15:
        fstp    st(0)
lbl_19a17:
        mov     eax, dword ptr [esp+0x18]
        inc     ecx
        add     edx, 0xc
        cmp     ecx, eax
        jl      lbl_19995
        cmp     ebp, -1
        jz      lbl_19a30
        cmp     ebp, ecx
        jnz     lbl_19a40
lbl_19a30:
        fld     dword ptr [esp+0x58]
        mov     ebp, ecx
        fcomp   dword ptr [esi+0xc]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jnz     lbl_19a8c
lbl_19a40:
        cmp     edi, -1
        jz      lbl_19a4d
        cmp     edi, ecx
        jnz     lbl_19914
lbl_19a4d:
        fld     dword ptr [esp+0x58]
        mov     edi, ecx
        fcomp   dword ptr [esi+0xc]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      lbl_19ab6
        jmp     lbl_19914
lbl_19a62:
        mov     edx, dword ptr [esp+0x3c]
        mov     eax, dword ptr [esp+0x40]
        mov     ecx, dword ptr [esp+0x44]
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [esp+0x48]
        pop     edi
        mov     dword ptr [esi+0x4], eax
        mov     dword ptr [esi+0x8], ecx
        mov     dword ptr [esi+0xc], edx
        pop     esi
        pop     ebp
        mov     eax, 3
        pop     ebx
        add     esp, 0x4c
        ret     4
lbl_19a8c:
        mov     eax, dword ptr [esp+0x4c]
        mov     ecx, dword ptr [esp+0x50]
        mov     edx, dword ptr [esp+0x54]
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [esp+0x58]
        pop     edi
        mov     dword ptr [esi+0xc], eax
        mov     dword ptr [esi+0x4], ecx
        mov     dword ptr [esi+0x8], edx
        pop     esi
        pop     ebp
        mov     eax, 4
        pop     ebx
        add     esp, 0x4c
        ret     4
lbl_19ab6:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 5
        pop     ebx
        add     esp, 0x4c
        ret     4
    }
}

