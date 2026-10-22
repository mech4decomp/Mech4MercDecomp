/*
 * FUN_007169D0 (2942 B) — Large 3D/geometry command handler.
 *
 * Takes three float-vector params (param_1, param_2, param_3). Dispatches on
 * DAT_0087c59c via a 13-entry jump table (0x717550). Handles vector math
 * (cross/dot products, point-in-triangle tests), a large FPU interpolation
 * block, and a set of FUN_00713cc0 "command" emissions plus a vtable call
 * through *DAT_0085a248 + 0x64.
 *
 * __stdcall, RET 0xC (three stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT function pointers */
extern void *g_0076b47c;

/* Data symbols */
extern unsigned long g_0087c220;
extern float          g_0076c5b0;
extern unsigned long g_0087c690;
extern unsigned long g_0087c59c;
extern unsigned long g_0087c20c;
extern unsigned long g_0087c21c;
extern unsigned long g_0087c210;
extern unsigned long g_0087c1e0;
extern unsigned long g_0087c204;
extern unsigned long g_0087c1d4;
extern unsigned long g_0087c1ec;
extern unsigned long g_0087c1e4;
extern unsigned long g_0087c5a4;
extern char          g_0087c254;
extern unsigned long g_0085a248;
extern unsigned long g_0087c5bc;
extern unsigned long g_0087c5c4;
extern int           g_0087bc18;
extern int           g_0087bc1c;
extern int           g_0087bc20;
extern int           g_0087bc24;
extern unsigned long g_0087bc28;
extern int           g_0087bc30;
extern int           g_0087bc38;
extern int           g_0087bc3c;
extern double        g_0076d588;
extern double        g_0087c698;
extern unsigned long g_0087b93c;
extern unsigned long g_0087b690[];
extern unsigned long g_0087bbf0;
extern float         g_0076d070;
extern unsigned long g_00858950;
extern unsigned long g_0087c5b8;
extern unsigned long g_007b70c4;
extern float         g_0087c450;
extern float         g_0087c454;
extern float         g_0087c470;
extern float         g_0087c474;
extern float         g_0087c490;
extern float         g_0087c494;
extern unsigned long g_0087c5b4;
extern unsigned long g_0085b608;
extern unsigned long g_008b28dc;
extern unsigned long g_0087b63c;
extern unsigned long g_0087b638;
extern void         *g_717550[];

/* Direct callees */
extern void __cdecl FUN_00713cc0(int a, int b);
extern void __cdecl FUN_00713de0(void);
extern int  __cdecl FUN_0075db4a(void);
extern int  __cdecl FUN_006fabf0(void *a);
extern int  __cdecl FUN_0070fa90(int a, int b, int c, int d);
extern int  __cdecl FUN_00716950(int a);

__declspec(naked) void FUN_007169D0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xe4
        mov     eax, dword ptr [g_0087c220]
        cmp     eax, 0x1
        push    ebx
        mov     ebx, dword ptr [ebp+0x8]
        push    esi
        mov     esi, dword ptr [ebp+0xc]
        push    edi
        mov     edi, dword ptr [ebp+0x10]
        jz      L_716a48

        fld     dword ptr [edi+0x4]
        cmp     eax, 0x3
        fsub    dword ptr [ebx+0x4]
        fld     dword ptr [esi]
        fsub    dword ptr [ebx]
        fmulp   st(1), st(0)
        fld     dword ptr [ebx+0x4]
        fsub    dword ptr [esi+0x4]
        fld     dword ptr [ebx]
        fsub    dword ptr [edi]
        fmulp   st(1), st(0)
        fsubp   st(1), st(0)
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        jnz     L_716a2f
        test    ah, 0x1
        jz      L_716a48
        mov     eax, dword ptr [g_0087c690]
        pop     edi
        inc     eax
        pop     esi
        mov     dword ptr [g_0087c690], eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

L_716a2f:
        test    ah, 0x41
        jnz     L_716a48
        mov     eax, dword ptr [g_0087c690]
        pop     edi
        inc     eax
        pop     esi
        mov     dword ptr [g_0087c690], eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

L_716a48:
        mov     eax, dword ptr [g_0087c59c]
        dec     eax
        cmp     eax, 0xc
        ja      L_71740d
        jmp     dword ptr [eax*4 + g_717550]

        /* case 11 (0x716A5E) */
        mov     edx, dword ptr [g_0087c20c]
        mov     eax, dword ptr [g_0087c21c]
        mov     esi, ebx
        mov     ebx, dword ptr [g_0087c210]
        mov     ecx, 0x8
        lea     edi, [ebp-0x64]
        rep     movsd
        mov     esi, dword ptr [ebp+0xc]
        mov     ecx, 0x8
        lea     edi, [ebp-0x44]
        rep     movsd
        mov     esi, dword ptr [ebp+0x10]
        mov     ecx, 0x8
        lea     edi, [ebp-0x24]
        rep     movsd
        mov     ecx, dword ptr [g_0087c1e0]
        mov     esi, dword ptr [g_0087c204]
        mov     edi, dword ptr [g_0087c1d4]
        mov     dword ptr [ebp+0x10], ecx
        mov     ecx, dword ptr [g_0087c1ec]
        push    0x0
        push    0x1
        mov     dword ptr [ebp+0xc], edx
        mov     dword ptr [ebp+0x8], eax
        mov     dword ptr [ebp-0x4], ecx
        call    FUN_00713cc0
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x1
        push    0xd
        call    FUN_00713cc0
        push    0x1
        push    0xf
        call    FUN_00713cc0
        push    0x1
        push    0x4
        call    FUN_00713cc0
        push    0x2
        push    0x10
        call    FUN_00713cc0
        push    0x0
        push    0x13
        call    FUN_00713cc0
        mov     eax, dword ptr [g_0087c5a4]
        mov     dword ptr [ebp-0x54], eax
        mov     dword ptr [ebp-0x34], eax
        mov     dword ptr [ebp-0x14], eax
        add     eax, 0x20
        test    al, al
        mov     dword ptr [g_0087c5a4], eax
        jnz     L_716b2b
        add     eax, 0x1f00
        test    ah, 0xff
        mov     dword ptr [g_0087c5a4], eax
        jnz     L_716b2b
        add     eax, 0x1f0000
        mov     dword ptr [g_0087c5a4], eax
L_716b2b:
        mov     al, byte ptr [g_0087c254]
        test    al, al
        jz      L_716b39
        call    FUN_00713de0
L_716b39:
        mov     eax, dword ptr [g_0085a248]
        mov     edx, dword ptr [eax]
        push    0x0
        push    0x3
        lea     ecx, [ebp-0x64]
        push    ecx
        push    0x1c4
        push    0x4
        push    eax
        call    dword ptr [edx+0x64]
        push    edi
        push    0x1
        call    FUN_00713cc0
        mov     edx, dword ptr [ebp+0xc]
        push    edx
        push    0xf
        call    FUN_00713cc0
        push    esi
        push    0xd
        call    FUN_00713cc0
        mov     eax, dword ptr [ebp+0x10]
        push    eax
        push    0x4
        call    FUN_00713cc0
        push    ebx
        push    0x10
        call    FUN_00713cc0
        mov     ecx, dword ptr [ebp+0x8]
        push    ecx
        push    0x13
        call    FUN_00713cc0
        mov     edx, dword ptr [ebp-0x4]
        push    edx
        push    0x7
        call    FUN_00713cc0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 2 (0x716BA0) */
        mov     al, byte ptr [g_0087c254]
        test    al, al
        jz      L_716bae
        call    FUN_00713de0
L_716bae:
        mov     eax, dword ptr [g_0085a248]
        push    0x0
        push    0x3
        mov     ecx, 0x8
        mov     esi, ebx
        lea     edi, [ebp-0x64]
        rep     movsd
        mov     esi, dword ptr [ebp+0xc]
        lea     edx, [ebp-0x64]
        push    edx
        mov     ecx, 0x8
        lea     edi, [ebp-0x44]
        rep     movsd
        mov     esi, dword ptr [ebp+0x10]
        push    0x1c4
        mov     ecx, 0x8
        lea     edi, [ebp-0x24]
        push    0x4
        rep     movsd
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx+0x64]
        mov     eax, dword ptr [g_0087c210]
        mov     esi, ebx
        mov     ecx, 0x8
        lea     edi, [ebp-0x84]
        rep     movsd
        mov     esi, dword ptr [ebp+0xc]
        mov     ecx, 0x8
        lea     edi, [ebp-0x64]
        rep     movsd
        mov     esi, dword ptr [ebp+0x10]
        mov     ecx, 0x8
        lea     edi, [ebp-0x44]
        rep     movsd
        mov     esi, ebx
        mov     ebx, dword ptr [g_0087c1e4]
        push    0x0
        mov     ecx, 0x8
        lea     edi, [ebp-0x24]
        rep     movsd
        mov     esi, dword ptr [g_0087c204]
        mov     edi, dword ptr [g_0087c1d4]
        push    0x1
        mov     dword ptr [ebp+0xc], eax
        call    FUN_00713cc0
        push    0x1
        push    0xd
        call    FUN_00713cc0
        push    0x0
        push    0x5
        call    FUN_00713cc0
        push    0x2
        push    0x10
        call    FUN_00713cc0
        or      eax, 0xffffffff
        mov     dword ptr [ebp-0x74], eax
        mov     dword ptr [ebp-0x54], eax
        mov     dword ptr [ebp-0x34], eax
        mov     dword ptr [ebp-0x14], eax
        mov     al, byte ptr [g_0087c254]
        test    al, al
        jz      L_716c7e
        call    FUN_00713de0
L_716c7e:
        mov     eax, dword ptr [g_0085a248]
        mov     ecx, dword ptr [eax]
        push    0x0
        push    0x4
        lea     edx, [ebp-0x84]
        push    edx
        push    0x1c4
        push    0x3
        push    eax
        call    dword ptr [ecx+0x64]
        mov     eax, dword ptr [ebp+0xc]
        push    eax
        push    0x10
        call    FUN_00713cc0
        push    ebx
        push    0x5
        call    FUN_00713cc0
        push    esi
        push    0xd
        call    FUN_00713cc0
        push    edi
        push    0x1
        call    FUN_00713cc0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 7 (0x716CC7) */
        fld     dword ptr [edi+0x4]
        fmul    dword ptr [esi]
        fld     dword ptr [ebx+0x4]
        fmul    dword ptr [edi]
        faddp   st(1), st(0)
        fld     dword ptr [ebx]
        fmul    dword ptr [esi+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ebx+0x4]
        fmul    dword ptr [esi]
        fsubp   st(1), st(0)
        fld     dword ptr [ebx]
        fmul    dword ptr [edi+0x4]
        fsubp   st(1), st(0)
        fld     dword ptr [edi]
        fmul    dword ptr [esi+0x4]
        xor     esi, esi
        fsubp   st(1), st(0)
        fabs
        fmul    qword ptr [g_0076d588]
        fld     st(0)
        fadd    qword ptr [g_0087c698]
        fstp    qword ptr [g_0087c698]
        call    FUN_0075db4a
        cmp     eax, dword ptr [g_0087b93c]
        jbe     L_716d2c
        mov     ecx, 0x87b93c
        cmp     ecx, 0x87bbe4
        jge     L_716d2c
L_716d19:
        mov     edx, dword ptr [ecx+0x4]
        add     ecx, 0x4
        inc     esi
        cmp     eax, edx
        /* __emit: backward ja rel-offset miscomputed by MSVC6 (77 F5 vs ref 77 ED) */
        __emit  0x77
        __emit  0xED
L_716d2c:
        mov     ecx, dword ptr [esi*4 + g_0087b690]
        mov     eax, dword ptr [g_0087bbf0]
        inc     ecx
        inc     eax
        mov     dword ptr [esi*4 + g_0087b690], ecx
        mov     dword ptr [g_0087bbf0], eax
        jmp     L_71740d

        /* case 8 (0x716D4B) */
        fld     dword ptr [edi+0x4]
        fmul    dword ptr [esi]
        fld     dword ptr [ebx+0x4]
        fmul    dword ptr [edi]
        faddp   st(1), st(0)
        fld     dword ptr [ebx]
        fmul    dword ptr [esi+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ebx+0x4]
        fmul    dword ptr [esi]
        fsubp   st(1), st(0)
        fld     dword ptr [ebx]
        fmul    dword ptr [edi+0x4]
        fsubp   st(1), st(0)
        fld     dword ptr [edi]
        fmul    dword ptr [esi+0x4]
        xor     esi, esi
        fsubp   st(1), st(0)
        fabs
        fmul    qword ptr [g_0076d588]
        fld     st(0)
        fadd    qword ptr [g_0087c698]
        fstp    qword ptr [g_0087c698]
        call    FUN_0075db4a
        cmp     eax, dword ptr [g_0087b93c]
        jbe     L_716db0
        mov     ecx, 0x87b93c
        cmp     ecx, 0x87bbe4
        jge     L_716db0
L_716d9d:
        mov     edx, dword ptr [ecx+0x4]
        add     ecx, 0x4
        inc     esi
        cmp     eax, edx
        /* __emit: backward ja rel-offset miscomputed by MSVC6 (77 F5 vs ref 77 ED) */
        __emit  0x77
        __emit  0xED
L_716db0:
        mov     edx, dword ptr [esi*4 + g_0087b690]
        mov     ecx, dword ptr [g_0087bbf0]
        inc     edx
        inc     ecx
        cmp     esi, 0x2
        mov     dword ptr [esi*4 + g_0087b690], edx
        mov     dword ptr [g_0087bbf0], ecx
        jg      L_717545
        jmp     L_71740d

        /* case 10 (0x716DDA) */
        mov     eax, dword ptr [g_0087c5bc]
        mov     ecx, dword ptr [g_0087c5c4]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [g_0087c5bc], eax
        ja      L_717545
        jmp     L_71740d

        /* case 9 (0x716DF8) */
        fild    dword ptr [g_0087bc18]
        fstp    dword ptr [ebp+0x8]
        fld     dword ptr [ebx]
        fcomp   dword ptr [ebp+0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_71740d
        fld     dword ptr [esi]
        fcomp   dword ptr [ebp+0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_71740d
        fld     dword ptr [edi]
        fcomp   dword ptr [ebp+0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_71740d
        fild    dword ptr [g_0087bc1c]
        fstp    dword ptr [ebp+0x8]
        fld     dword ptr [ebx]
        fcomp   dword ptr [ebp+0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_71740d
        fld     dword ptr [esi]
        fcomp   dword ptr [ebp+0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_71740d
        fld     dword ptr [edi]
        fcomp   dword ptr [ebp+0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_71740d
        fild    dword ptr [g_0087bc20]
        fstp    dword ptr [ebp+0x8]
        fld     dword ptr [ebx+0x4]
        fcomp   dword ptr [ebp+0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_71740d
        fld     dword ptr [esi+0x4]
        fcomp   dword ptr [ebp+0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_71740d
        fld     dword ptr [edi+0x4]
        fcomp   dword ptr [ebp+0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_71740d
        fild    dword ptr [g_0087bc24]
        fstp    dword ptr [ebp+0x8]
        fld     dword ptr [ebx+0x4]
        fcomp   dword ptr [ebp+0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_71740d
        fld     dword ptr [esi+0x4]
        fcomp   dword ptr [ebp+0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_71740d
        fld     dword ptr [edi+0x4]
        fcomp   dword ptr [ebp+0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_71740d
        inc     dword ptr [g_0087bc28]
        jmp     L_71740d

        /* case 3 (0x716EED) */
        mov     al, byte ptr [g_0087c254]
        xor     ecx, ecx
        test    al, al
        mov     dword ptr [ebp+0x8], ecx
        jz      L_716f03
        call    FUN_00713de0
        mov     ecx, dword ptr [ebp+0x8]
L_716f03:
        mov     eax, dword ptr [g_00858950]
        fild    dword ptr [g_0087bc38]
        cmp     eax, 0x3
        fild    dword ptr [g_0087bc3c]
        jnz     L_716f33
        mov     eax, dword ptr [g_0087c21c]
        test    ah, 0x1
        jz      L_716f33
        fxch    st(1)
        fmul    dword ptr [g_0076d070]
        fxch    st(1)
        fmul    dword ptr [g_0076d070]
L_716f33:
        fld     dword ptr [ebx+0x4]
        fcomp   dword ptr [esi+0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_716f45
        fld     dword ptr [ebx+0x4]
        jmp     L_716f48
L_716f45:
        fld     dword ptr [esi+0x4]
L_716f48:
        fld     st(1)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        jnz     L_716fdb
        fld     dword ptr [ebx+0x4]
        fcomp   dword ptr [esi+0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_716f6b
        fld     dword ptr [ebx+0x4]
        jmp     L_716f6e
L_716f6b:
        fld     dword ptr [esi+0x4]
L_716f6e:
        fld     st(1)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jz      L_716fdb
        fld     dword ptr [ebx]
        fcomp   dword ptr [esi]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_716f8a
        fld     dword ptr [ebx]
        jmp     L_716f8c
L_716f8a:
        fld     dword ptr [esi]
L_716f8c:
        fld     st(2)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jz      L_716fdb
        fld     dword ptr [ebx+0x4]
        fcomp   dword ptr [esi+0x4]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_716fdb
        fld     dword ptr [ebx]
        fcomp   dword ptr [esi]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_716fd1
        fld     st(0)
        fsub    dword ptr [ebx+0x4]
        fld     dword ptr [esi]
        fsub    dword ptr [ebx]
        fmulp   st(1), st(0)
        fld     dword ptr [esi+0x4]
        fsub    dword ptr [ebx+0x4]
        fdivp   st(1), st(0)
        fadd    dword ptr [ebx]
        fld     st(2)
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      L_716fdb
L_716fd1:
        mov     dword ptr [ebp+0x8], 0x1
        mov     ecx, dword ptr [ebp+0x8]
L_716fdb:
        fld     dword ptr [esi+0x4]
        fcomp   dword ptr [edi+0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_716fed
        fld     dword ptr [esi+0x4]
        jmp     L_716ff0
L_716fed:
        fld     dword ptr [edi+0x4]
L_716ff0:
        fld     st(1)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        jnz     L_717076
        fld     dword ptr [esi+0x4]
        fcomp   dword ptr [edi+0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_71700f
        fld     dword ptr [esi+0x4]
        jmp     L_717012
L_71700f:
        fld     dword ptr [edi+0x4]
L_717012:
        fld     st(1)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jz      L_717076
        fld     dword ptr [esi]
        fcomp   dword ptr [edi]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_71702e
        fld     dword ptr [esi]
        jmp     L_717030
L_71702e:
        fld     dword ptr [edi]
L_717030:
        fld     st(2)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jz      L_717076
        fld     dword ptr [esi+0x4]
        fcomp   dword ptr [edi+0x4]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_717076
        fld     dword ptr [esi]
        fcomp   dword ptr [edi]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_717075
        fld     dword ptr [edi]
        fsub    dword ptr [esi]
        fld     st(1)
        fsub    dword ptr [esi+0x4]
        fmulp   st(1), st(0)
        fld     dword ptr [edi+0x4]
        fsub    dword ptr [esi+0x4]
        fdivp   st(1), st(0)
        fadd    dword ptr [esi]
        fld     st(2)
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      L_717076
L_717075:
        inc     ecx
L_717076:
        fld     dword ptr [edi+0x4]
        fcomp   dword ptr [ebx+0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_717088
        fld     dword ptr [edi+0x4]
        jmp     L_71708b
L_717088:
        fld     dword ptr [ebx+0x4]
L_71708b:
        fld     st(1)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        jnz     L_717111
        fld     dword ptr [edi+0x4]
        fcomp   dword ptr [ebx+0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_7170aa
        fld     dword ptr [edi+0x4]
        jmp     L_7170ad
L_7170aa:
        fld     dword ptr [ebx+0x4]
L_7170ad:
        fld     st(1)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jz      L_717111
        fld     dword ptr [edi]
        fcomp   dword ptr [ebx]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_7170c9
        fld     dword ptr [edi]
        jmp     L_7170cb
L_7170c9:
        fld     dword ptr [ebx]
L_7170cb:
        fld     st(2)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jz      L_717111
        fld     dword ptr [edi+0x4]
        fcomp   dword ptr [ebx+0x4]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_717111
        fld     dword ptr [edi]
        fcomp   dword ptr [ebx]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_717110
        fld     dword ptr [ebx]
        fsub    dword ptr [edi]
        fld     st(1)
        fsub    dword ptr [edi+0x4]
        fmulp   st(1), st(0)
        fld     dword ptr [ebx+0x4]
        fsub    dword ptr [edi+0x4]
        fdivp   st(1), st(0)
        fadd    dword ptr [edi]
        fld     st(2)
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      L_717111
L_717110:
        inc     ecx
L_717111:
        test    cl, 0x1
        jz      L_717409
        mov     eax, dword ptr [g_0087c5b8]
        mov     ecx, dword ptr [g_007b70c4]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [g_0087c5b8], eax
        jnz     L_717409
        mov     edx, dword ptr [ebp+0xc]
        fild    dword ptr [g_0087bc30]
        mov     eax, dword ptr [ebp+0x10]
        fld     st(2)
        mov     ecx, 0x21
        mov     esi, 0x87c1d0
        mov     edi, 0x87c510
        rep     movsd
        mov     ecx, 0x8
        mov     esi, ebx
        mov     edi, 0x87c4f0
        rep     movsd
        mov     esi, edx
        mov     ecx, 0x8
        mov     edi, 0x87c4d0
        rep     movsd
        mov     esi, eax
        mov     ecx, 0x8
        mov     edi, 0x87c4b0
        rep     movsd
        mov     ecx, 0x8
        mov     esi, ebx
        mov     edi, 0x87c450
        rep     movsd
        mov     esi, edx
        mov     ecx, 0x8
        mov     edi, 0x87c470
        rep     movsd
        mov     esi, eax
        mov     ecx, 0x8
        mov     edi, 0x87c490
        rep     movsd
        fsub    dword ptr [g_0087c450]
        push    0x8
        fmul    st(0), st(1)
        fsubr   dword ptr [g_0087c450]
        fstp    dword ptr [g_0087c450]
        fld     st(1)
        fsub    dword ptr [g_0087c454]
        fmul    st(0), st(1)
        fsubr   dword ptr [g_0087c454]
        fstp    dword ptr [g_0087c454]
        fld     st(2)
        fsub    dword ptr [g_0087c470]
        fmul    st(0), st(1)
        fsubr   dword ptr [g_0087c470]
        fstp    dword ptr [g_0087c470]
        fld     st(1)
        fsub    dword ptr [g_0087c474]
        fmul    st(0), st(1)
        fsubr   dword ptr [g_0087c474]
        fstp    dword ptr [g_0087c474]
        fxch    st(2)
        fsub    dword ptr [g_0087c490]
        fmul    st(0), st(2)
        fsubr   dword ptr [g_0087c490]
        fstp    dword ptr [g_0087c490]
        fsub    dword ptr [g_0087c494]
        fmul    st(0), st(1)
        fsubr   dword ptr [g_0087c494]
        fstp    dword ptr [g_0087c494]
        fstp    st(0)
        call    dword ptr [g_0076b47c]
        test    ah, 0x80
        jz      L_717247
        push    0x7a2534
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_717247
        int     3
L_717247:
        mov     dword ptr [g_0087c5b4], 0x1
        jmp     L_71740d

        /* case 4 (0x717256) */
        mov     eax, dword ptr [g_0085b608]
        test    eax, eax
        jnz     L_71740d
        mov     ecx, dword ptr [g_0087c1d4]
        push    edi
        push    esi
        push    ebx
        dec     ecx
        push    ecx
        call    FUN_0070fa90
        cmp     eax, 0x8
        mov     dword ptr [ebp+0x8], eax
        jle     L_717284
        mov     dword ptr [ebp+0x8], 0x8
        jmp     L_71729a
L_717284:
        cmp     eax, -0x8
        jge     L_717292
        mov     dword ptr [ebp+0x8], 0xfffffff8
        jmp     L_71729a
L_717292:
        test    eax, eax
        jz      L_71740d
L_71729a:
        mov     edx, dword ptr [g_0087c1e0]
        mov     esi, ebx
        mov     ebx, dword ptr [g_0087c210]
        mov     ecx, 0x8
        lea     edi, [ebp-0x64]
        rep     movsd
        mov     esi, dword ptr [ebp+0xc]
        mov     ecx, 0x8
        lea     edi, [ebp-0x44]
        rep     movsd
        mov     esi, dword ptr [ebp+0x10]
        push    0x1
        mov     ecx, 0x8
        lea     edi, [ebp-0x24]
        rep     movsd
        mov     esi, dword ptr [g_0087c204]
        mov     edi, dword ptr [g_0087c1d4]
        push    0xd
        mov     dword ptr [ebp+0xc], edx
        call    FUN_00713cc0
        push    0x0
        push    0x1
        call    FUN_00713cc0
        push    0x1
        push    0x4
        call    FUN_00713cc0
        push    0x2
        push    0x10
        call    FUN_00713cc0
        mov     eax, dword ptr [ebp+0x8]
        push    eax
        call    FUN_00716950
        mov     dword ptr [ebp-0x14], eax
        mov     dword ptr [ebp-0x34], eax
        mov     dword ptr [ebp-0x54], eax
        mov     al, byte ptr [g_0087c254]
        test    al, al
        jz      L_71731f
        call    FUN_00713de0
L_71731f:
        mov     eax, dword ptr [g_0085a248]
        mov     ecx, dword ptr [eax]
        push    0x0
        push    0x3
        lea     edx, [ebp-0x64]
        push    edx
        push    0x1c4
        push    0x4
        push    eax
        call    dword ptr [ecx+0x64]
        push    esi
        push    0xd
        call    FUN_00713cc0
        push    ebx
        push    0x10
        call    FUN_00713cc0
        mov     eax, dword ptr [ebp+0xc]
        push    eax
        push    0x4
        call    FUN_00713cc0
        push    edi
        push    0x1
        call    FUN_00713cc0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

        /* case 13 (0x717365) */
        mov     eax, dword ptr [g_0085b608]
        test    eax, eax
        jnz     L_71740d
        mov     ecx, 0x8
        mov     esi, ebx
        lea     edi, [ebp-0x64]
        rep     movsd
        mov     esi, dword ptr [ebp+0xc]
        mov     ecx, 0x8
        lea     edi, [ebp-0x44]
        rep     movsd
        mov     esi, dword ptr [ebp+0x10]
        mov     ecx, 0x8
        lea     edi, [ebp-0x24]
        rep     movsd
        mov     ecx, dword ptr [ebp-0x4c]
        mov     edx, dword ptr [ebp-0x48]
        mov     eax, dword ptr [ebp-0x2c]
        mov     esi, dword ptr [g_0087c1d4]
        mov     dword ptr [ebp-0x4c], ecx
        mov     ecx, dword ptr [ebp-0x28]
        mov     dword ptr [ebp-0x28], ecx
        mov     ecx, dword ptr [g_008b28dc]
        mov     dword ptr [ebp-0x48], edx
        mov     edx, dword ptr [ebp-0xc]
        mov     dword ptr [ebp-0x2c], eax
        mov     eax, dword ptr [ebp-0x8]
        push    ecx
        push    0x1
        mov     dword ptr [ebp-0xc], edx
        mov     dword ptr [ebp-0x8], eax
        call    FUN_00713cc0
        mov     al, byte ptr [g_0087c254]
        test    al, al
        jz      L_7173de
        call    FUN_00713de0
L_7173de:
        mov     eax, dword ptr [g_0085a248]
        mov     edx, dword ptr [eax]
        push    0x0
        push    0x3
        lea     ecx, [ebp-0x64]
        push    ecx
        push    0x1c4
        push    0x4
        push    eax
        call    dword ptr [edx+0x64]
        push    esi
        push    0x1
        call    FUN_00713cc0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

L_717409:
        fstp    st(0)
        fstp    st(0)
L_71740d:
        mov     al, byte ptr [g_0087c254]
        test    al, al
        jz      L_71741b
        call    FUN_00713de0
L_71741b:
        mov     eax, dword ptr [g_0087bc30]
        test    eax, eax
        mov     ecx, 0x8
        mov     esi, ebx
        lea     edi, [ebp-0xe4]
        rep     movsd
        mov     esi, dword ptr [ebp+0xc]
        mov     ecx, 0x8
        lea     edi, [ebp-0xc4]
        rep     movsd
        mov     esi, dword ptr [ebp+0x10]
        mov     ecx, 0x8
        lea     edi, [ebp-0xa4]
        rep     movsd
        jz      L_717528
        cmp     dword ptr [g_00858950], 0x3
        mov     eax, dword ptr [g_0087b63c]
        mov     ecx, dword ptr [g_0087b638]
        mov     dword ptr [ebp+0xc], eax
        mov     dword ptr [ebp+0x10], ecx
        jnz     L_71748e
        mov     edx, dword ptr [g_0087c21c]
        test    dh, 0x1
        jz      L_71748e
        cdq
        sub     eax, edx
        sar     eax, 0x1
        mov     dword ptr [ebp+0xc], eax
        mov     eax, ecx
        cdq
        sub     eax, edx
        sar     eax, 0x1
        mov     dword ptr [ebp+0x10], eax
L_71748e:
        fild    dword ptr [ebp+0xc]
        fild    dword ptr [g_0087bc30]
        fstp    dword ptr [ebp+0xc]
        fld     st(0)
        fsub    dword ptr [ebp-0xe4]
        fmul    dword ptr [ebp+0xc]
        fsubr   dword ptr [ebp-0xe4]
        fstp    dword ptr [ebp-0xe4]
        fild    dword ptr [ebp+0x10]
        fst     dword ptr [ebp+0x10]
        fsub    dword ptr [ebp-0xe0]
        fmul    dword ptr [ebp+0xc]
        fsubr   dword ptr [ebp-0xe0]
        fstp    dword ptr [ebp-0xe0]
        fld     st(0)
        fsub    dword ptr [ebp-0xc4]
        fmul    dword ptr [ebp+0xc]
        fsubr   dword ptr [ebp-0xc4]
        fstp    dword ptr [ebp-0xc4]
        fld     dword ptr [ebp+0x10]
        fsub    dword ptr [ebp-0xc0]
        fmul    dword ptr [ebp+0xc]
        fsubr   dword ptr [ebp-0xc0]
        fstp    dword ptr [ebp-0xc0]
        fsub    dword ptr [ebp-0xa4]
        fmul    dword ptr [ebp+0xc]
        fsubr   dword ptr [ebp-0xa4]
        fstp    dword ptr [ebp-0xa4]
        fld     dword ptr [ebp+0x10]
        fsub    dword ptr [ebp-0xa0]
        fmul    dword ptr [ebp+0xc]
        fsubr   dword ptr [ebp-0xa0]
        fstp    dword ptr [ebp-0xa0]
L_717528:
        mov     eax, dword ptr [g_0085a248]
        mov     edx, dword ptr [eax]
        push    0x0
        push    0x3
        lea     ecx, [ebp-0xe4]
        push    ecx
        push    0x1c4
        push    0x4
        push    eax
        call    dword ptr [edx+0x64]
L_717545:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
