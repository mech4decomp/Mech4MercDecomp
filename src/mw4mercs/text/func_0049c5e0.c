/*
 * FUN_0049c5e0 (1085 B) — MLR debris-cloud update (__thiscall, RET 4).
 * Matrix-multiplies a 3x4 transform, updates particle positions, and
 * builds a bounding box. FPU heavy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076d070;
extern float g_007b220c;
extern void FUN_0049ca60(void);
extern void FUN_00494440(void);
extern void FUN_00420790(void);
extern void FUN_0041c7d0(void);
extern void FUN_00420a40(void);
extern void FUN_00417d80(void);
extern void FUN_004188e0(void);

__declspec(naked) void FUN_0049c5e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x104
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        test    byte ptr [edi+0x9c], 0x1
        jnz     L_c602
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_c602:
        mov     ebx, dword ptr [ebp+0x8]
        mov     eax, dword ptr [edi+0x10]
        fld     qword ptr [ebx]
        fsub    qword ptr [edi+0x88]
        mov     ecx, dword ptr [ebx+0x14]
        mov     dword ptr [ebp-0x30], eax
        lea     eax, [edi+0x58]
        lea     edx, [ebp-0xc4]
        fstp    dword ptr [ebp-0x38]
        mov     dword ptr [ebp-0x4], ecx
        mov     dword ptr [ebp-0x34], eax
        mov     dword ptr [ebp-0x3c], eax
        mov     dword ptr [ebp-0x8], edx
        mov     edx, dword ptr [ebp-0x3c]
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
        mov     eax, dword ptr [edi+0xa4]
        xor     esi, esi
        test    eax, eax
        jbe     L_c81a
        xor     ecx, ecx
        mov     dword ptr [ebp-0x4], ecx
L_c7bf:
        mov     eax, dword ptr [edi+0xa0]
        fld     dword ptr [ecx+eax+0x30]
        add     ecx, eax
        fcomp   dword ptr [g_0076d064]
        __emit 0xDF /* fnstsw ax (no-WAIT DF E0 form) */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x1 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x01
        jz      L_c806
        fld     dword ptr [ebp-0x38]
        mov     eax, dword ptr [ebx+0x4]
        fmul    dword ptr [ecx+0x34]
        push    eax
        lea     edx, [ebp-0xc4]
        fadd    dword ptr [ecx+0x30]
        fstp    dword ptr [ecx+0x30]
        mov     ecx, dword ptr [ebx]
        push    ecx
        push    edx
        push    esi
        mov     ecx, edi
        call    FUN_0049ca60
        test    al, al
        jnz     L_c806
        mov     eax, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [eax+0x1c]
L_c806:
        mov     ecx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [edi+0xa4]
        inc     esi
        add     ecx, 0x58
        cmp     esi, eax
        mov     dword ptr [ebp-0x4], ecx
        jc      L_c7bf
L_c81a:
        push    ebx
        mov     ecx, edi
        call    FUN_00494440
        test    al, al
        jnz     L_c82f
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_c82f:
        push    0x7b8d88
        push    0x7b8d88
        lea     ecx, [ebp-0x2c]
        call    FUN_00420790
        mov     ebx, dword ptr [edi+0xa4]
        xor     esi, esi
        test    ebx, ebx
        jbe     L_c8c8
        mov     ecx, dword ptr [edi+0xa0]
L_c853:
        fld     dword ptr [ecx+0x30]
        fcomp   dword ptr [g_0076d064]
        __emit 0xDF /* fnstsw ax (no-WAIT DF E0 form) */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x1 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x01
        jnz     L_c872
        add     esi, 0x2
        add     ecx, 0xb0
        cmp     esi, ebx
        jc      L_c853
        jmp     L_c8c8
L_c872:
        mov     eax, dword ptr [ebp-0x30]
        mov     eax, dword ptr [eax+0x180]
        mov     edx, esi
        shl     edx, 0x4
        add     eax, edx
        mov     edx, dword ptr [eax+0xc]
        push    ecx
        push    eax
        lea     ecx, [ebp-0x14]
        mov     dword ptr [ebp-0x4], edx
        call    FUN_0041c7d0
        fld     dword ptr [ebp-0x14]
        fadd    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x28]
        fld     dword ptr [ebp-0x14]
        fsub    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x2c]
        fld     dword ptr [ebp-0x10]
        fadd    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x20]
        fld     dword ptr [ebp-0x10]
        fsub    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x24]
        fld     dword ptr [ebp-0xc]
        fadd    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x18]
        fld     dword ptr [ebp-0xc]
        fsub    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x1c]
L_c8c8:
        cmp     esi, ebx
        jnc     L_c969
        lea     eax, [esi+esi*4]
        mov     ecx, esi
        lea     edx, [esi+eax*2]
        mov     eax, dword ptr [edi+0xa0]
        shl     ecx, 0x4
        mov     dword ptr [ebp-0x8], ecx
        lea     edi, [eax+edx*8]
        sub     ebx, esi
L_c8e9:
        fld     dword ptr [edi+0x30]
        fcomp   dword ptr [g_0076d064]
        __emit 0xDF /* fnstsw ax (no-WAIT DF E0 form) */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x1 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x01
        jz      L_c95d
        mov     edx, dword ptr [ebp-0x30]
        mov     eax, dword ptr [edx+0x180]
        add     eax, ecx
        mov     ecx, dword ptr [eax+0xc]
        push    edi
        mov     dword ptr [ebp-0x4], ecx
        push    eax
        lea     ecx, [ebp-0x14]
        call    FUN_0041c7d0
        fld     dword ptr [ebp-0x14]
        fadd    dword ptr [ebp-0x4]
        lea     edx, [ebp-0x54]
        push    edx
        lea     eax, [ebp-0x2c]
        fstp    dword ptr [ebp-0x50]
        push    eax
        fld     dword ptr [ebp-0x14]
        lea     ecx, [ebp-0x2c]
        fsub    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x54]
        fld     dword ptr [ebp-0x10]
        fadd    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x48]
        fld     dword ptr [ebp-0x10]
        fsub    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x4c]
        fld     dword ptr [ebp-0xc]
        fadd    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x40]
        fld     dword ptr [ebp-0xc]
        fsub    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x44]
        call    FUN_00420a40
        mov     ecx, dword ptr [ebp-0x8]
L_c95d:
        add     ecx, 0x10
        add     edi, 0x58
        dec     ebx
        mov     dword ptr [ebp-0x8], ecx
        jnz     L_c8e9
L_c969:
        fld     dword ptr [ebp-0x28]
        mov     ecx, 0xc
        fsub    dword ptr [ebp-0x2c]
        mov     esi, 0x7b8c28
        lea     edi, [ebp-0x94]
        rep movsd
        mov     ecx, dword ptr [ebp-0x34]
        fmul    dword ptr [g_0076d070]
        push    ecx
        lea     edx, [ebp-0x94]
        push    edx
        fstp    dword ptr [ebp-0x64]
        lea     ecx, [ebp-0x104]
        fld     dword ptr [ebp-0x20]
        fsub    dword ptr [ebp-0x24]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x60]
        fld     dword ptr [ebp-0x18]
        fsub    dword ptr [ebp-0x1c]
        fmul    dword ptr [g_0076d070]
        fst     dword ptr [ebp-0x5c]
        fld     dword ptr [ebp-0x64]
        fadd    dword ptr [ebp-0x2c]
        fstp    dword ptr [ebp-0x88]
        fld     dword ptr [ebp-0x60]
        fadd    dword ptr [ebp-0x24]
        fstp    dword ptr [ebp-0x78]
        fld     st(0)
        fadd    dword ptr [ebp-0x1c]
        fstp    dword ptr [ebp-0x68]
        fld     dword ptr [ebp-0x60]
        /* FPU register ops: MSVC6 tracks FPU stack depth and rejects
           __emit after register FPU ops, so emit the whole reg sequence */
        __emit 0xD9 /* fld st(0) */
        __emit 0xC0
        __emit 0xD8 /* fmul st(1) */
        __emit 0xC9
        __emit 0xD9 /* fld st(2) */
        __emit 0xC2
        __emit 0xD8 /* fmul st(3) */
        __emit 0xCB
        __emit 0xDE /* faddp */
        __emit 0xC1
        fld     dword ptr [ebp-0x64]
        fmul    dword ptr [ebp-0x64]
        __emit 0xDE /* faddp */
        __emit 0xC1
        fsqrt
        fstp    st(2)
        fstp    st(0)
        fadd    dword ptr [g_007b220c]
        fstp    dword ptr [ebp-0x58]
        call    FUN_00417d80
        mov     eax, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [eax+0x18]
        lea     edx, [ebp-0x104]
        push    edx
        push    ecx
        call    FUN_004188e0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
