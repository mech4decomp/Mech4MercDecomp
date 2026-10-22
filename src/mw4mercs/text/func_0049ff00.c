/*
 * FUN_0049ff00 (1356 B) — MLR particle/shrapnel update (__thiscall, RET 0x4).
 * Transforms a matrix, advances a shrapnel fragment (bounce/floor logic),
 * appends transforms to a ring buffer, and spawns a new particle via
 * FUN_004a06c0. FPU heavy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004206b0(void *a, void *b);
extern void __cdecl FUN_004a05e0(int idx, void *m);
extern char __cdecl FUN_00494440(void *p);
extern void __cdecl FUN_00420790(void *a, void *b);
extern char __cdecl FUN_004a06c0(int a, int b, void *c, int d, int e, float *f);
extern void __cdecl FUN_00420a40(void *a, void *b);
extern void __cdecl FUN_00417d80(void *a, void *b);
extern void __cdecl FUN_004188e0(int a, void *b);

extern float g_0076d064;
extern float g_0076c5b0;
extern float g_0076d070;
extern float g_007b220c;
extern double (*g_0076b2e4)(double);   /* IAT: floor */

__declspec(naked) void FUN_0049ff00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x134
        push    ebx
        mov     ebx, ecx
        test    byte ptr [ebx+0x9c], 0x1
        push    esi
        push    edi
        jnz     L22
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L22:
        mov     edi, dword ptr [ebp+0x8]
        mov     eax, dword ptr [edi+0x14]
        mov     dword ptr [ebp-0x1c], eax
        lea     eax, [ebx+0x58]
        lea     ecx, [ebp-0xc4]
        mov     dword ptr [ebp-0x3c], eax
        mov     dword ptr [ebp-0x18], eax
        mov     dword ptr [ebp-0x14], ecx
        mov     edx, dword ptr [ebp-0x18]
        push    esi
        mov     esi, dword ptr [ebp-0x1c]
        mov     eax, dword ptr [ebp-0x14]
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
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi+0xc]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x18]
        fxch
        fstp    dword ptr [eax+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x14]
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi+0x1c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x28]
        fxch
        fstp    dword ptr [eax+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x24]
        fxch
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
        fxch
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
        fxch
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi+0x2c]
        fstp    dword ptr [eax+0x2c]
        pop     esi
        lea     edx, [ebp-0xc4]
        push    edx
        lea     ecx, [ebp-0xf4]
        call    FUN_004206b0
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [edi+0x4]
        mov     edx, dword ptr [ebx+0x10]
        mov     dword ptr [ebp-0x20], eax
        mov     dword ptr [ebp-0x1c], ecx
        fld     qword ptr [ebp-0x20]
        fsub    qword ptr [ebx+0x88]
        mov     dword ptr [ebp-0x18], edx
        fst     dword ptr [ebp-0x14]
        fmul    dword ptr [ebx+0x94]
        fadd    dword ptr [ebx+0x90]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x1
        jnz     L013d
        fld     dword ptr [ebx+0x90]
        mov     dword ptr [ebx+0xb8], 0x0
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x1
        jz      L0262
        mov     eax, dword ptr [ebx+0xa0]
        lea     edx, [eax+eax*8]
        mov     eax, dword ptr [ebx+0xbc]
        lea     edi, [eax+edx*8]
        jmp     L0255
L013d:
        fld     dword ptr [edx+0x64]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L0155
        fstp    st(0)
        fld     dword ptr [g_0076c5b0]
L0155:
        fmul    dword ptr [ebp-0x14]
        fadd    dword ptr [ebx+0xb8]
        fst     dword ptr [ebx+0xb8]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x1
        jnz     L0243
        mov     ecx, dword ptr [ebx+0xac]
        mov     edx, dword ptr [edx+0x228]
        cmp     ecx, edx
        jge     L0243
        fld     dword ptr [ebx+0x90]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L0243
        test    ecx, ecx
        jnz     L01d7
        mov     dword ptr [ebx+0xa8], ecx
        lea     ecx, [ebp-0xc4]
        push    ecx
        dec     edx
        push    0x0
        mov     ecx, ebx
        mov     dword ptr [ebx+0xa0], 0x1
        mov     dword ptr [ebx+0xa4], edx
        call    FUN_004a05e0
        mov     dword ptr [ebx+0xac], 0x2
        jmp     L020b
L01d7:
        mov     eax, dword ptr [ebx+0xa0]
        mov     esi, dword ptr [ebx+0xbc]
        lea     ecx, [eax+eax*8]
        lea     edi, [esi+ecx*8]
        inc     eax
        cmp     eax, edx
        mov     ecx, 0xc
        lea     esi, [ebp-0xc4]
        rep movsd
        mov     dword ptr [ebx+0xa0], eax
        jnz     L020b
        mov     dword ptr [ebx+0xa0], 0x0
L020b:
        mov     eax, dword ptr [ebx+0xa0]
        lea     edx, [ebp-0xc4]
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_004a05e0
        fld     dword ptr [ebx+0xb8]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2e4]
        fsubr   dword ptr [ebx+0xb8]
        add     esp, 0x8
        fstp    dword ptr [ebx+0xb8]
        jmp     L0262
L0243:
        mov     eax, dword ptr [ebx+0xa0]
        mov     edx, dword ptr [ebx+0xbc]
        lea     ecx, [eax+eax*8]
        lea     edi, [edx+ecx*8]
L0255:
        mov     ecx, 0xc
        lea     esi, [ebp-0xc4]
        rep movsd
L0262:
        mov     eax, dword ptr [ebx+0xac]
        test    eax, eax
        jnz     L0280
        mov     eax, dword ptr [ebp+0x8]
        push    eax
        mov     ecx, ebx
        call    FUN_00494440
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L0280:
        push    0x7b8d88
        push    0x7b8d88
        lea     ecx, [ebp-0x38]
        call    FUN_00420790
        mov     esi, dword ptr [ebx+0xa0]
        xor     edi, edi
L029a:
        mov     edx, dword ptr [ebx+0xbc]
        fld     dword ptr [ebp-0x14]
        lea     ecx, [esi+esi*8]
        fmul    dword ptr [edx+ecx*8+0x40]
        lea     eax, [edx+ecx*8]
        mov     ecx, dword ptr [ebp-0x1c]
        mov     edx, dword ptr [ebp-0x20]
        fadd    dword ptr [eax+0x3c]
        fstp    dword ptr [eax+0x3c]
        lea     eax, [ebp-0x10]
        push    eax
        push    ecx
        push    edx
        lea     eax, [ebp-0xf4]
        push    eax
        push    edi
        push    esi
        mov     ecx, ebx
        call    FUN_004a06c0
        test    al, al
        jz      L0374
        mov     eax, dword ptr [ebx+0xa0]
        fld     dword ptr [ebp-0x4]
        cmp     esi, eax
        fadd    dword ptr [ebp-0x10]
        jnz     L0319
        fstp    dword ptr [ebp-0x34]
        fld     dword ptr [ebp-0x10]
        fsub    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x38]
        fld     dword ptr [ebp-0xc]
        fadd    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x2c]
        fld     dword ptr [ebp-0xc]
        fsub    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x30]
        fld     dword ptr [ebp-0x8]
        fadd    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x24]
        fld     dword ptr [ebp-0x8]
        fsub    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x28]
        jmp     L0359
L0319:
        fstp    dword ptr [ebp-0x50]
        lea     ecx, [ebp-0x54]
        fld     dword ptr [ebp-0x10]
        push    ecx
        fsub    dword ptr [ebp-0x4]
        lea     edx, [ebp-0x38]
        push    edx
        lea     ecx, [ebp-0x38]
        fstp    dword ptr [ebp-0x54]
        fld     dword ptr [ebp-0xc]
        fadd    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x48]
        fld     dword ptr [ebp-0xc]
        fsub    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x4c]
        fld     dword ptr [ebp-0x8]
        fadd    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x40]
        fld     dword ptr [ebp-0x8]
        fsub    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x44]
        call    FUN_00420a40
L0359:
        inc     edi
        dec     esi
        jns     L0367
        mov     eax, dword ptr [ebp-0x18]
        mov     esi, dword ptr [eax+0x228]
        dec     esi
L0367:
        cmp     esi, dword ptr [ebx+0xa4]
        jz      L037a
        jmp     L029a
L0374:
        mov     dword ptr [ebx+0xa4], esi
L037a:
        mov     ecx, dword ptr [ebp+0x8]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebx+0xac], edi
        call    FUN_00494440
        test    al, al
        jnz     L0398
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L0398:
        fld     dword ptr [ebp-0x34]
        mov     ecx, 0xc
        fsub    dword ptr [ebp-0x38]
        mov     esi, 0x7b8c28
        lea     edi, [ebp-0x94]
        rep movsd
        mov     edx, dword ptr [ebp-0x3c]
        fmul    dword ptr [g_0076d070]
        push    edx
        lea     eax, [ebp-0x94]
        push    eax
        fstp    dword ptr [ebp-0x64]
        lea     ecx, [ebp-0x134]
        fld     dword ptr [ebp-0x2c]
        fsub    dword ptr [ebp-0x30]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x60]
        fld     dword ptr [ebp-0x24]
        fsub    dword ptr [ebp-0x28]
        fmul    dword ptr [g_0076d070]
        fst     dword ptr [ebp-0x5c]
        fld     dword ptr [ebp-0x64]
        fadd    dword ptr [ebp-0x38]
        fstp    dword ptr [ebp-0x88]
        fld     dword ptr [ebp-0x60]
        fadd    dword ptr [ebp-0x30]
        fstp    dword ptr [ebp-0x78]
        fld     st(0)
        fadd    dword ptr [ebp-0x28]
        fstp    dword ptr [ebp-0x68]
        fld     dword ptr [ebp-0x60]
        /* __emit: MSVC6 FPU stack tracking breaks after unencodable fld st(2);
           the whole register-FPU sequence (D9 C0..DD D8) must be emitted. */
        __emit  0xD9
        __emit  0xC0
        __emit  0xD8
        __emit  0xC9
        __emit  0xD9
        __emit  0xC2
        __emit  0xD8
        __emit  0xCB
        __emit  0xDE
        __emit  0xC1
        __emit  0xD9
        __emit  0x45
        __emit  0x9C
        __emit  0xD8
        __emit  0x4D
        __emit  0x9C
        __emit  0xDE
        __emit  0xC1
        __emit  0xD9
        __emit  0xFA
        __emit  0xDD
        __emit  0xDA
        __emit  0xDD
        __emit  0xD8
        fadd    dword ptr [g_007b220c]
        fstp    dword ptr [ebp-0x58]
        call    FUN_00417d80
        mov     ecx, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [ecx+0x18]
        lea     edx, [ebp-0x134]
        push    edx
        push    ecx
        call    FUN_004188e0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
