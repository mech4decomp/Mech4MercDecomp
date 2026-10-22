/*
 * FUN_0044B154 (extent 0x44B154-0x44B5C6, 1138 bytes) - MLR in-.text block.
 * __thiscall-style (ecx = this), ret 0xc. Transcribed from capstone disasm.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076df00;
extern int    g_007b98e4;
extern int    g_007d98f8;
extern int   *g_007da5e0;
extern int    g_007da864;
extern float  g_007da868;
extern int   *g_007da680;
extern int   *g_007da684;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_00429930(void);
extern void __cdecl FUN_0044cd30(void);
extern void __cdecl FUN_0044cdf0(void);
extern void __cdecl FUN_00458560(void);
extern void __cdecl FUN_0047cfe0(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void func_0044B154(void)
{
    __asm {
        and     al, 0x58
        push    edi
        mov     dword ptr [esp + 0x58], eax
        mov     eax, dword ptr [ecx + 0x2c]
        lea     edx, [esp + 0x64]
        push    edx
        mov     dword ptr [esp + 0x34], esi
        mov     dword ptr [esp + 0x64], eax
        call    FUN_00428730
        lea     eax, [esp + 0x64]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040c410
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x38], 0
        call    FUN_0040cb00
        fsqrt
        mov     eax, dword ptr [esi + 0x58]
        xor     ebp, ebp
        cmp     eax, ebp
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x34]
        fld     st(0)
        fmul    dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x38]
        fmul    dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [g_0076d070]
        fdiv    dword ptr [esp + 0x78]
        fstp    dword ptr [esp + 0x1c]
        fild    dword ptr [g_007da864]
        fmul    dword ptr [g_007da868]
        fstp    dword ptr [esp + 0x10]
        jle     L_b5ba
        mov     ebx, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi + 0x48]
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x2c], eax
L_b1f4:
        mov     edi, dword ptr [esp + 0x18]
        xor     esi, esi
        mov     byte ptr [esp + 0x74], 0
        mov     dword ptr [esp + 0x14], esi
L_b203:
        xor     eax, eax
        mov     al, byte ptr [edi]
        lea     edx, [eax + eax*2]
        mov     ecx, dword ptr [ebx + edx*4]
        lea     eax, [ebx + edx*4]
        mov     dword ptr [esp + 0x40], ecx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x44], edx
        mov     eax, dword ptr [eax + 8]
        lea     ecx, [esp + 0x58]
        push    ecx
        lea     edx, [esp + 0x44]
        push    edx
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x50], eax
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x40]
        fmul    dword ptr [esp + 0x1c]
        mov     edx, dword ptr [g_007da5e0]
        fld     dword ptr [esp + 0x48]
        mov     eax, dword ptr [edx]
        fmul    dword ptr [esp + 0x1c]
        lea     ecx, [esi + eax]
        fld     dword ptr [esp + 0x3c]
        fmul    st(0), st(2)
        fld     dword ptr [esp + 0x34]
        fmul    st(0), st(2)
        fsubp   st(1), st(0)
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 0x3c]
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x34]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x78]
        mov     eax, dword ptr [esp + 0x78]
        __emit 0xDD  /* fstp st(0) - MSVC6 emits fst (D9) dropping pop; ref needs DD D8 */
        __emit 0xD8
        mov     dword ptr [ecx + 4], eax
        __emit 0xDD  /* fstp st(0) - MSVC6 emits fst (D9) dropping pop; ref needs DD D8 */
        __emit 0xD8
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne     L_b2c2
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je      L_b2c2
        fld     dword ptr [esp + 0x78]
        fcomp   dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne     L_b2c2
        fld     dword ptr [esp + 0x78]
        fcomp   dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je      L_b2c2
        mov     byte ptr [esp + 0x74], 1
L_b2c2:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne     L_b319
        fld     dword ptr [esp + 0x10]
        fchs
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [ecx]
        fcomp   dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 1
        jne     L_b315
        fld     dword ptr [ecx]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je      L_b315
        fld     dword ptr [esp + 0x78]
        fcomp   dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 1
        jne     L_b315
        fld     dword ptr [esp + 0x78]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne     L_b319
L_b315:
        inc     dword ptr [esp + 0x14]
L_b319:
        add     esi, 8
        inc     edi
        cmp     esi, 0x18
        jl      L_b203
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        mov     dword ptr [esp + 0x78], edi
        jne     L_b3dd
        cmp     byte ptr [esp + 0x74], 1
        je      L_b356
        push    3
        push    edx
        call    FUN_0047cfe0
        add     esp, 8
        cmp     al, 1
        jne     L_b3dd
        mov     edx, dword ptr [g_007da5e0]
L_b356:
        mov     ecx, dword ptr [g_007da680]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [g_007da684]
        mov     ecx, dword ptr [ecx]
        mov     edi, dword ptr [esp + 0x18]
        lea     esi, [eax + ebp*8]
        mov     eax, dword ptr [edx]
        mov     edx, dword ptr [esp + 0x24]
        add     ecx, edx
        add     ebp, 3
        add     edx, 0x30
        mov     dword ptr [esp + 0x74], 3
        mov     dword ptr [esp + 0x24], edx
L_b387:
        fld     dword ptr [eax]
        xor     edx, edx
        mov     dl, byte ptr [edi]
        fadd    dword ptr [g_0076d070]
        inc     edi
        add     eax, 8
        fstp    dword ptr [eax - 8]
        add     ecx, 0x10
        fld     dword ptr [eax - 4]
        add     esi, 8
        fadd    dword ptr [g_0076d070]
        lea     edx, [edx + edx*2]
        lea     edx, [ebx + edx*4]
        fstp    dword ptr [eax - 4]
        mov     ebx, dword ptr [edx]
        mov     dword ptr [ecx - 0x10], ebx
        mov     ebx, dword ptr [edx + 4]
        mov     edx, dword ptr [edx + 8]
        mov     dword ptr [ecx - 0xc], ebx
        mov     ebx, dword ptr [esp + 0x28]
        mov     dword ptr [ecx - 8], edx
        mov     edx, dword ptr [eax - 8]
        mov     dword ptr [esi - 8], edx
        mov     edx, dword ptr [eax - 4]
        mov     dword ptr [esi - 4], edx
        dec     dword ptr [esp + 0x74]
        jne     L_b387
        mov     edi, dword ptr [esp + 0x78]
L_b3dd:
        mov     eax, dword ptr [esp + 0x2c]
        dec     eax
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x2c], eax
        jne     L_b1f4
        test    ebp, ebp
        jle     L_b5ba
        mov     eax, dword ptr [g_007b98e4]
        push    eax
        call    FUN_006f4950
        push    0x64
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_b423
        mov     ecx, dword ptr [g_007d98f8]
        push    ecx
        mov     ecx, eax
        call    FUN_00458560
        mov     ebx, eax
        jmp     L_b425
L_b423:
        xor     ebx, ebx
L_b425:
        mov     eax, dword ptr [ebx + 0xc]
        lea     esi, [eax + 0x10]
        push    ebp
        mov     ecx, esi
        call    FUN_0044cd30
        test    ebp, ebp
        mov     esi, dword ptr [esi]
        jle     L_b45f
        mov     edx, dword ptr [g_007da684]
        mov     eax, dword ptr [edx]
        lea     ecx, [esi + 8]
        mov     edx, ebp
L_b446:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx - 8], edi
        mov     edi, dword ptr [eax + 4]
        mov     dword ptr [ecx - 4], edi
        mov     edi, dword ptr [eax + 8]
        mov     dword ptr [ecx], edi
        add     eax, 0x10
        add     ecx, 0xc
        dec     edx
        jne     L_b446
L_b45f:
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
        mov     edx, dword ptr [g_007da680]
        mov     esi, dword ptr [edx]
        lea     ecx, [ebp*8]
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
        jle     L_b4cb
        xor     eax, eax
L_b4b5:
        mov     byte ptr [eax + esi], cl
        inc     cl
        mov     byte ptr [esp + 0x74], cl
        mov     eax, dword ptr [esp + 0x74]
        and     eax, 0xff
        cmp     eax, ebp
        jl      L_b4b5
L_b4cb:
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
        lea     ecx, [esp + 0x40]
        call    FUN_00491280
        mov     eax, dword ptr [esp + 0x30]
        lea     esi, [eax + 0x2c]
        mov     ecx, 6
        lea     edi, [esp + 0x40]
        rep     movsd
        mov     edx, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x48]
        mov     esi, dword ptr [esp + 0x50]
        and     edx, 0xfffffff0
        and     eax, 0xffff3fff
        or      edx, 1
        or      eax, 0x10000
        or      ecx, 0x1c000
        or      edx, 0x10
        or      esi, 0xf
        or      eax, 0x8000000
        or      ecx, 0x8000000
        mov     dword ptr [esp + 0x44], edx
        mov     edx, dword ptr [esp + 0x7c]
        or      esi, 0x10
        or      eax, 0x800000
        or      ecx, 0x800000
        test    edx, edx
        mov     dword ptr [esp + 0x50], esi
        je      L_b582
        mov     esi, dword ptr [edx + 0x1c]
        and     eax, 0xffffc000
        or      ecx, 0x3fff
        or      eax, esi
        jmp     L_b58d
L_b582:
        and     eax, 0xffffc000
        or      ecx, 0x3fff
L_b58d:
        or      eax, 0x200000
        mov     dword ptr [esp + 0x40], eax
        or      ecx, 0x200000
        mov     dword ptr [esp + 0x48], ecx
        mov     edx, dword ptr [ebx]
        push    0
        lea     eax, [esp + 0x44]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x60
        ret     0xc
L_b5ba:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x60
        ret     0xc
    }
}
