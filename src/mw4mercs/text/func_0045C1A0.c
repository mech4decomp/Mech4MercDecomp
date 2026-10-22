/*
 * FUN_0045C1A0 (1217 B) — MLR tile/vertex processing. Reads tile geometry
 * from [esi+0xc/0x1c/0x2c], iterates a 3x3 neighborhood (edi step 8, 0x18
 * limit), does FPU dot-product / bounds checks against constants, and
 * builds/merges output structures via vtable calls ([eax+0x24/0x2c/0x88/
 * 0x94/0xc/0x14]) and helpers (FUN_0040c610, FUN_0047cfe0, FUN_0044cd30,
 * FUN_0044cdf0, FUN_00429930, FUN_00491280, FUN_006f4950/49a0, ...).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00428810(void);
extern void __cdecl FUN_00428830(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_0040c610(void);
extern void __cdecl FUN_0047cfe0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00458560(void);
extern void __cdecl FUN_0044cd30(void);
extern void __cdecl FUN_0044cdf0(void);
extern void __cdecl FUN_00429930(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00491280(void);

extern float g_76d064;
extern int   g_7da864;
extern float g_7da868;
extern int   g_7da5e0;
extern float g_7b220c;
extern float g_76df00;
extern float g_76d070;
extern float g_76c5b0;
extern int   g_7da680;
extern int   g_7da684;
extern int   g_7d9900;
extern int   g_7d98f8;

__declspec(naked) void __cdecl FUN_0045C1A0(void)
{
    __asm {
        mov     dword ptr [esp + 0x18], ebx
        jne     L_c652
        mov     esi, dword ptr [esp + 0x94]
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0x1c]
        mov     edx, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0x60], eax
        lea     eax, [esp + 0x78]
        mov     dword ptr [esp + 0x64], ecx
        xor     ebp, ebp
        push    eax
        mov     ecx, esi
        xor     edi, edi
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x6c], edx
        call    FUN_00428810
        lea     ecx, [esp + 0x84]
        push    ecx
        mov     ecx, esi
        call    FUN_00428830
        lea     edx, [esp + 0x6c]
        push    edx
        mov     ecx, esi
        call    FUN_00428730
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [esp + 0x98]
        mov     eax, dword ptr [ebx + 0x58]
        cmp     eax, edi
        mov     dword ptr [esp + 0x28], edi
        fstp    dword ptr [esp + 0x2c]
        fild    dword ptr [g_7da864]
        fmul    dword ptr [g_7da868]
        fstp    dword ptr [esp + 0x14]
        jle     L_c652
        mov     esi, dword ptr [ebx + 0x5c]
        mov     dword ptr [esp + 0x34], edi
        mov     dword ptr [esp + 0x3c], esi
        mov     dword ptr [esp + 0x40], eax
        jmp     L_c238
L_c236:
        xor     edi, edi
L_c238:
        lea     eax, [esp + 0x60]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], edi
        mov     byte ptr [esp + 0x17], 0
        call    FUN_0040c610
        fcomp   dword ptr [esi + 0xc]
        __emit  0xDF                 /* fnstsw ax (no 9B WAIT prefix) */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x41 */
        __emit  0xC4
        __emit  0x41
        jne     L_c489
        mov     edx, dword ptr [ebx + 0x48]
        mov     ecx, dword ptr [ebx + 0x14]
        mov     eax, dword ptr [esp + 0x28]
        lea     ebx, [edx + eax]
        mov     edx, dword ptr [g_7da5e0]
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x44], ebx
L_c27a:
        xor     eax, eax
        mov     al, byte ptr [ebx]
        lea     ecx, [eax + eax*2]
        mov     eax, dword ptr [esp + 0x38]
        fld     dword ptr [eax + ecx*4]
        lea     eax, [eax + ecx*4]
        fsub    dword ptr [esp + 0x60]
        fstp    dword ptr [esp + 0x48]
        fld     dword ptr [eax + 4]
        fsub    dword ptr [esp + 0x64]
        fstp    dword ptr [esp + 0x4c]
        fld     dword ptr [eax + 8]
        fsub    dword ptr [esp + 0x68]
        fst     dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x74]
        fld     dword ptr [esp + 0x4c]
        fmul    dword ptr [esp + 0x70]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x6c]
        fmul    dword ptr [esp + 0x48]
        faddp   st(1), st(0)
        fcomp   dword ptr [g_7b220c]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x41 */
        __emit  0xC4
        __emit  0x41
        jne     L_c3b6
        mov     eax, dword ptr [edx]
        lea     ecx, [esp + 0x48]
        push    ecx
        mov     esi, edi
        lea     ecx, [esp + 0x7c]
        add     esi, eax
        call    FUN_0040c610
        mov     edx, dword ptr [g_7da5e0]
        mov     eax, dword ptr [edx]
        fmul    dword ptr [esp + 0x2c]
        lea     ecx, [esp + 0x84]
        fstp    dword ptr [esi]
        mov     esi, edi
        add     esi, eax
        lea     eax, [esp + 0x48]
        push    eax
        call    FUN_0040c610
        mov     edx, dword ptr [g_7da5e0]
        mov     ecx, dword ptr [edx]
        fmul    dword ptr [esp + 0x2c]
        add     ecx, edi
        fchs
        fstp    dword ptr [esi + 4]
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_76df00]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 1 */
        __emit  0xC4
        __emit  0x01
        jne     L_c35f
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_76d070]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x41 */
        __emit  0xC4
        __emit  0x41
        je      L_c35f
        fld     dword ptr [ecx + 4]
        fcomp   dword ptr [g_76df00]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 1 */
        __emit  0xC4
        __emit  0x01
        jne     L_c35f
        fld     dword ptr [ecx + 4]
        fcomp   dword ptr [g_76d070]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x41 */
        __emit  0xC4
        __emit  0x41
        je      L_c35f
        mov     byte ptr [esp + 0x13], 1
L_c35f:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_76c5b0]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x41 */
        __emit  0xC4
        __emit  0x41
        jne     L_c3ba
        fld     dword ptr [esp + 0x14]
        fchs
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [ecx]
        fcomp   dword ptr [esp + 0x30]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 1 */
        __emit  0xC4
        __emit  0x01
        jne     L_c3b0
        fld     dword ptr [ecx]
        fcomp   dword ptr [esp + 0x14]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x41 */
        __emit  0xC4
        __emit  0x41
        je      L_c3b0
        fld     dword ptr [ecx + 4]
        fcomp   dword ptr [esp + 0x30]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 1 */
        __emit  0xC4
        __emit  0x01
        jne     L_c3b0
        fld     dword ptr [ecx + 4]
        fcomp   dword ptr [esp + 0x14]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x41 */
        __emit  0xC4
        __emit  0x41
        jne     L_c3ba
L_c3b0:
        inc     dword ptr [esp + 0x1c]
        jmp     L_c3ba
L_c3b6:
        inc     dword ptr [esp + 0x20]
L_c3ba:
        add     edi, 8
        inc     ebx
        cmp     edi, 0x18
        jl      L_c27a
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jne     L_c485
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jne     L_c485
        cmp     byte ptr [esp + 0x13], 1
        je      L_c3ff
        push    3
        push    edx
        call    FUN_0047cfe0
        add     esp, 8
        cmp     al, 1
        jne     L_c485
        mov     edx, dword ptr [g_7da5e0]
L_c3ff:
        mov     eax, dword ptr [g_7da680]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [edx]
        mov     edx, dword ptr [g_7da684]
        mov     ebx, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esp + 0x44]
        lea     esi, [ecx + ebp*8]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [esp + 0x34]
        mov     ebp, 3
        add     ebx, ebp
        add     ecx, edx
        add     edx, 0x30
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x34], edx
L_c433:
        fld     dword ptr [eax]
        mov     ebx, dword ptr [esp + 0x38]
        fadd    dword ptr [g_76d070]
        xor     edx, edx
        mov     dl, byte ptr [edi]
        inc     edi
        fstp    dword ptr [eax]
        add     eax, 8
        fld     dword ptr [eax - 4]
        add     ecx, 0x10
        fadd    dword ptr [g_76d070]
        add     esi, 8
        dec     ebp
        lea     edx, [edx + edx*2]
        fstp    dword ptr [eax - 4]
        lea     edx, [ebx + edx*4]
        mov     ebx, dword ptr [edx]
        mov     dword ptr [ecx - 0x10], ebx
        mov     ebx, dword ptr [edx + 4]
        mov     edx, dword ptr [edx + 8]
        mov     dword ptr [ecx - 0xc], ebx
        mov     dword ptr [ecx - 8], edx
        mov     edx, dword ptr [eax - 8]
        mov     dword ptr [esi - 8], edx
        mov     edx, dword ptr [eax - 4]
        mov     dword ptr [esi - 4], edx
        jne     L_c433
        mov     ebp, dword ptr [esp + 0x24]
L_c485:
        mov     ebx, dword ptr [esp + 0x18]
L_c489:
        mov     esi, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x40]
        add     esi, 0x10
        add     ecx, 3
        dec     eax
        mov     dword ptr [esp + 0x3c], esi
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x40], eax
        jne     L_c236
        test    ebp, ebp
        jle     L_c652
        mov     eax, dword ptr [g_7d9900]
        push    eax
        call    FUN_006f4950
        push    0x64
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_c4e1
        mov     ecx, dword ptr [g_7d98f8]
        push    ecx
        mov     ecx, eax
        call    FUN_00458560
        mov     ebx, eax
        jmp     L_c4e3
L_c4e1:
        xor     ebx, ebx
L_c4e3:
        mov     eax, dword ptr [ebx + 0xc]
        lea     esi, [eax + 0x10]
        push    ebp
        mov     ecx, esi
        call    FUN_0044cd30
        test    ebp, ebp
        mov     esi, dword ptr [esi]
        jle     L_c51d
        mov     edx, dword ptr [g_7da684]
        mov     eax, dword ptr [edx]
        lea     ecx, [esi + 8]
        mov     edx, ebp
L_c504:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx - 8], edi
        mov     edi, dword ptr [eax + 4]
        mov     dword ptr [ecx - 4], edi
        mov     edi, dword ptr [eax + 8]
        mov     dword ptr [ecx], edi
        add     eax, 0x10
        add     ecx, 0xc
        dec     edx
        jne     L_c504
L_c51d:
        mov     eax, dword ptr [ebx]
        push    ebp
        push    esi
        mov     ecx, ebx
        call    dword ptr [eax + 0x24]
        mov     eax, dword ptr [ebx + 0xc]
        lea     esi, [eax + 0x18]
        push    ebp
        mov     ecx, esi
        call    FUN_0044cdf0
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [g_7da680]
        mov     esi, dword ptr [edx]
        __emit  0x8D                 /* lea ecx,[ebp*8] no-base SIB (MSVC6 re-bases) */
        __emit  0x0C
        __emit  0xED
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, eax
        rep     movsd
        mov     ecx, edx
        mov     edx, dword ptr [ebx]
        and     ecx, 3
        push    ebp
        rep     movsb
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x2c]
        mov     esi, dword ptr [ebx + 0xc]
        push    ebp
        mov     ecx, esi
        call    FUN_00429930
        mov     esi, dword ptr [esi]
        xor     cl, cl
        test    ebp, ebp
        jle     L_c589
L_c573:
        xor     eax, eax
        mov     byte ptr [eax + esi], cl
        inc     cl
        mov     byte ptr [esp + 0x44], cl
        mov     eax, dword ptr [esp + 0x44]
        and     eax, 0xff
        cmp     eax, ebp
        __emit  0x7C                 /* jl rel8 (MSVC6 miscomputes backward offset across call reloc) */
        __emit  0xEA
L_c589:
        mov     eax, dword ptr [ebx]
        push    ebp
        push    esi
        mov     ecx, ebx
        call    dword ptr [eax + 0x88]
        mov     esi, dword ptr [ebx]
        mov     eax, 0x55555556
        imul    ebp
        mov     ecx, edx
        shr     ecx, 0x1f
        push    1
        add     edx, ecx
        push    edx
        push    0
        mov     ecx, ebx
        call    dword ptr [esi + 0xc]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x94]
        call    FUN_006f49a0
        lea     ecx, [esp + 0x48]
        call    FUN_00491280
        mov     eax, dword ptr [esp + 0x18]
        lea     esi, [eax + 0x2c]
        mov     ecx, 6
        lea     edi, [esp + 0x48]
        rep     movsd
        mov     edx, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [esp + 0x50]
        mov     eax, dword ptr [esp + 0x48]
        mov     edi, dword ptr [esp + 0x58]
        and     edx, 0xfffffff0
        or      edx, 1
        or      ecx, 0x1c000
        mov     dword ptr [esp + 0x4c], edx
        mov     edx, dword ptr [esp + 0x9c]
        mov     edx, dword ptr [edx + 0x1c]
        and     eax, 0xffff3fff
        or      ecx, 0x3fff
        or      eax, 0x10000
        or      ecx, 0x200000
        and     eax, 0xffffc000
        mov     dword ptr [esp + 0x50], ecx
        or      edx, 0x200000
        or      eax, edx
        or      edi, 0xf
        push    0
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x5c], edi
        mov     dword ptr [esp + 0x4c], eax
        mov     eax, dword ptr [ebx]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x80
        ret     0xc
L_c652:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x80
        ret     0xc
    }
}
