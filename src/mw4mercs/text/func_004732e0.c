/*
 * FUN_004732e0 (extent 0x4732e0-0x475568) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_0076f29c;
extern float  g_0076f2a0;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007b9574;
extern int    g_007d998c;
extern int    g_007d9990;
extern int    g_007d9994;
extern int    g_007da5e8;
extern int    g_007da5f4;
extern int    g_007da600;
extern int    g_007da608;
extern int    g_007da65c;
extern int    g_007da660;
extern int    g_007da66c;
extern int    g_007da670;
extern int    g_007da680;
extern int    g_007da684;
extern int    g_007da688;
extern int    g_007da68c;
extern int    g_007da848;
extern int    g_007da864;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_0041cb30(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00423e00(void);
extern void __cdecl FUN_004286e0(void);
extern void __cdecl FUN_0047b5b0(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004732e0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1d4
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x78]
        test    eax, eax
        push    esi
        push    edi
        mov    dword ptr [ebp - 0x14], ebx
        je    L_5538
        mov    ecx, dword ptr [eax + 4]
        test    ecx, ecx
        je    L_5538
        mov    eax, dword ptr [g_007b9574]
        test    eax, eax
        ja    L_5538
        mov    eax, dword ptr [ebx + 0x64]
        test    eax, eax
        mov    dword ptr [ebp - 0x7c], 0
        ja    L_3331
        mov    byte ptr [ebx + 0x10], 0
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_3331:
        cmp    word ptr [ebx + 0x56], 0
        mov    eax, dword ptr [ebx + 0x18]
        mov    dword ptr [ebp - 0x5c], eax
        jne    L_3348
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 0x98]
L_3348:
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    esi, dword ptr [ebx + 0x14]
        mov    dword ptr [ebp + 0x18], ecx
        mov    ecx, dword ptr [g_007da600]
        mov    edi, dword ptr [ecx]
        mov    dword ptr [ebp - 0x30], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp - 0x1c], edi
        je    L_33e2
        mov    eax, dword ptr [ebp - 0x5c]
        test    eax, eax
        mov    dword ptr [ebp - 0x2c], 0
        jle    L_3424
L_3384:
        cmp    byte ptr [edi], 0
        je    L_33b9
        mov    eax, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp - 0x1c]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    esi
        mov    byte ptr [edx], 0
        call    FUN_0041cb30
        mov    edx, dword ptr [g_007da65c]
        mov    edi, dword ptr [edx]
        add    edi, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [edi], al
        mov    edi, dword ptr [ebp - 0x1c]
L_33b9:
        mov    ecx, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp - 0x2c]
        mov    edx, dword ptr [ebp + 0x18]
        add    ecx, 4
        inc    eax
        add    edx, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x30], ecx
        mov    ecx, dword ptr [ebp - 0x5c]
        inc    edi
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp + 0x18], edx
        mov    dword ptr [ebp - 0x1c], edi
        jl    L_3384
        jmp    L_3424
L_33e2:
        mov    eax, dword ptr [ebp - 0x5c]
        test    eax, eax
        jle    L_3424
        mov    dword ptr [ebp + 0x14], eax
L_33ec:
        cmp    byte ptr [edi], 0
        je    L_3405
        mov    eax, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    esi
        mov    byte ptr [edi], 0
        call    FUN_0041cb30
L_3405:
        mov    eax, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp - 0x30]
        add    eax, 0x10
        mov    dword ptr [ebp + 0x18], eax
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        inc    edi
        dec    eax
        mov    dword ptr [ebp - 0x30], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_33ec
L_3424:
        mov    eax, dword ptr [ebx + 0x24]
        and    eax, 0x3fff
        mov    edx, dword ptr [ebx + 0x64]
        mov    dword ptr [ebp - 0x88], 0
        mov    dword ptr [ebp + 0x18], 0
        mov    dword ptr [ebp - 0x5c], edx
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x80], 0
        mov    dword ptr [ebp - 0x74], 0
        je    L_3519
        test    eax, eax
        jle    L_3519
        mov    ecx, dword ptr [g_007da848]
        mov    esi, dword ptr [ecx + eax*4 + 0x24]
        test    esi, esi
        je    L_3519
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_3498
        mov    dword ptr [g_007da864], 1
        jmp    L_34f3
L_3498:
        cmp    eax, 0x80
        jl    L_34ab
        mov    dword ptr [g_007da864], 2
        jmp    L_34f3
L_34ab:
        cmp    eax, 0x40
        jl    L_34bc
        mov    dword ptr [g_007da864], 4
        jmp    L_34f3
L_34bc:
        cmp    eax, 0x20
        jl    L_34cd
        mov    dword ptr [g_007da864], 8
        jmp    L_34f3
L_34cd:
        cmp    eax, 0x10
        jl    L_34de
        mov    dword ptr [g_007da864], 0x10
        jmp    L_34f3
L_34de:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_34f3:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_358a
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_358a
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x80], edx
        mov    dword ptr [ebp - 0x74], eax
L_3519:
        xor    eax, eax
        cmp    word ptr [ebx + 0x56], ax
        mov    dword ptr [ebp - 0x78], eax
        mov    dword ptr [ebp - 0x30], eax
        jne    L_3531
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 0x98]
L_3531:
        mov    edx, dword ptr [g_007da600]
        mov    ecx, dword ptr [edx + 4]
        mov    edi, dword ptr [edx]
        mov    edx, ecx
        shr    ecx, 2
        xor    eax, eax
        rep stosd
        mov    ecx, edx
        and    ecx, 3
        rep stosb
        mov    eax, dword ptr [ebp - 0x5c]
        xor    ecx, ecx
        xor    edx, edx
        test    eax, eax
        mov    dword ptr [ebp - 0x2c], ecx
        mov    dword ptr [ebp - 8], edx
        jle    L_4ebd
L_3561:
        mov    esi, dword ptr [g_007da5e8]
        mov    esi, dword ptr [esi]
        mov    eax, dword ptr [ebx + 0x60]
        movzx    ax, byte ptr [eax + ecx]
        add    esi, ecx
        cmp    byte ptr [esi], 0
        mov    dword ptr [ebp - 0x38], esi
        jne    L_3590
        and    eax, 0xffff
        add    edx, eax
        mov    dword ptr [ebp - 8], edx
        jmp    L_4eae
L_358a:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_3519
L_3590:
        and    eax, 0xffff
        lea    esi, [eax + edx]
        xor    edi, edi
        cmp    edx, esi
        mov    dword ptr [g_007d9994], 0x3f
        mov    dword ptr [g_007d9990], edi
        mov    dword ptr [ebp - 0x6c], esi
        mov    eax, edx
        jge    L_35f2
        mov    ecx, dword ptr [g_007da688]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebx + 0x48]
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x34], ecx
L_35c4:
        mov    ecx, dword ptr [ebp - 0x34]
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        mov    ecx, dword ptr [ebp + 8]
        or    edi, dword ptr [ecx + edx*4]
        lea    edx, [ecx + edx*4]
        mov    ecx, dword ptr [g_007d9994]
        and    ecx, dword ptr [edx]
        inc    eax
        cmp    eax, esi
        mov    dword ptr [g_007d9994], ecx
        jl    L_35c4
        test    ecx, ecx
        mov    dword ptr [g_007d9990], edi
        je    L_35fd
L_35f2:
        mov    edx, dword ptr [ebp - 0x38]
        mov    byte ptr [edx], 0
        jmp    L_4e9f
L_35fd:
        test    edi, edi
        jne    L_362d
        mov    eax, dword ptr [ebp - 0x7c]
        mov    ecx, dword ptr [ebp - 0x14]
        inc    eax
        mov    dword ptr [ebp - 0x7c], eax
        mov    eax, dword ptr [ebp - 8]
L_360e:
        mov    edx, dword ptr [ecx + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + eax]
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        inc    eax
        mov    byte ptr [ebx + edx], 1
        cmp    eax, dword ptr [ebp - 0x6c]
        jl    L_360e
        jmp    L_4e9f
L_362d:
        cmp    dword ptr [edi*4 + 0x7b2478], 1
        mov    dword ptr [ebp - 0xc], 0
        jne    L_40ce
        mov    ecx, dword ptr [ebp - 8]
L_3645:
        mov    eax, dword ptr [ebx + 0x48]
        xor    edx, edx
        mov    dl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0x60], ecx
        mov    esi, ecx
        mov    edi, edx
        jl    L_365c
        mov    esi, dword ptr [ebp - 8]
L_365c:
        mov    edx, dword ptr [ebp - 0x78]
        xor    ecx, ecx
        mov    cl, byte ptr [eax + esi]
        mov    esi, dword ptr [ebp - 0xc]
        and    esi, 0xffff
        add    esi, edx
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [eax + edi*4]
        test    edx, edx
        mov    dword ptr [ebp - 0x10], ecx
        mov    dword ptr [ebp - 0x18], esi
        mov    dword ptr [g_007d998c], edx
        jne    L_3742
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    eax, edi
        shl    eax, 4
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, dword ptr [edx]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 8], edx
        mov    dword ptr [ecx + 0xc], eax
        mov    ecx, dword ptr [ebx + 0x78]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da608]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [edx + edi*4]
        mov    eax, dword ptr [ebx + 0x1c]
        mov    dword ptr [ecx + esi*4], edx
        mov    ecx, dword ptr [g_007da680]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [eax + edi*8]
        mov    eax, dword ptr [eax + edi*8 + 4]
        mov    dword ptr [edx + esi*8], ecx
        mov    dword ptr [edx + esi*8 + 4], eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        jbe    L_370f
        test    al, 1
        je    L_370f
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [esi + ecx], dl
L_370f:
        mov    ecx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [g_007da688]
        inc    ecx
        mov    dword ptr [ebp - 0xc], ecx
        lea    ecx, [eax*4]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [eax + ecx]
        inc    esi
        test    edx, edx
        mov    dword ptr [ebp - 0x18], esi
        mov    dword ptr [ebp - 0x1c], ecx
        je    L_40a8
        mov    edx, dword ptr [g_007d998c]
        jmp    L_3759
L_3742:
        mov    ecx, dword ptr [ebp - 0x10]
        shl    ecx, 2
        cmp    dword ptr [eax + ecx], 0
        mov    byte ptr [ebp + 0xb], 0
        mov    dword ptr [ebp - 0x1c], ecx
        jne    L_40a8
L_3759:
        or    edx, dword ptr [eax + ecx]
        mov    dword ptr [ebp - 4], 1
        mov    eax, dword ptr [ebp - 4]
        mov    dword ptr [g_007d998c], edx
        xor    ebx, ebx
L_376e:
        test    eax, edx
        jne    L_3780
        shl    eax, 1
        inc    ebx
        cmp    bx, 6
        jb    L_376e
        jmp    L_38de
L_3780:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_3830
        mov    edx, dword ptr [g_007da68c]
        mov    eax, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [edx]
        mov    ecx, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_3812
        jmp    dword ptr [ebx*4 + 0x475568]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_37bf:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_38cb
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp + 0x18], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_38d8
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_37bf
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_37bf
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_37bf
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_37bf
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_37bf
L_3812:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_3877
        int 3    
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_38d8
L_3830:
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    eax, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_38b0
        jmp    dword ptr [ebx*4 + 0x475580]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_3864:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_38cb
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_3877:
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_38d8
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_3864
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_3864
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_3864
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_3864
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_3864
L_38b0:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_3877
        int 3    
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_38d8
L_38cb:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_38d8:
        mov    dword ptr [ebp - 0x88], ebx
L_38de:
        cmp    byte ptr [ebp + 0xb], 1
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        jne    L_3cca
        mov    ecx, dword ptr [ebp - 0x10]
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        mov    eax, edi
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        shl    esi, 4
        add    edx, esi
        fadd    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0x88]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_3962
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_3968
L_3962:
        fld    dword ptr [g_007b220c]
L_3968:
        mov    ecx, dword ptr [ebp - 0x88]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [ecx + 0x78]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    eax, dword ptr [ecx + eax]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x1cc], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x1c8], edx
        fild    qword ptr [ebp - 0x1cc]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x164], esi
        fmul    dword ptr [g_0076f2a0]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x160], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x12c]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x164]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x170], edx
        mov    dword ptr [ebp - 0x174], esi
        fmul    dword ptr [g_0076f2a0]
        mov    dword ptr [ebp - 0x184], ecx
        mov    dword ptr [ebp - 0x180], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x130]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x174]
        mov    dword ptr [ebp - 0x194], ecx
        mov    dword ptr [ebp - 0x190], edx
        shr    eax, 8
        fmul    dword ptr [g_0076f2a0]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1a4], ecx
        fstp    dword ptr [ebp - 0x134]
        mov    dword ptr [ebp - 0x1a0], edx
        fild    qword ptr [ebp - 0x184]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076f2a0]
        mov    dword ptr [ebp - 0x1b4], ecx
        mov    dword ptr [ebp - 0x1b0], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x128]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x194]
        mov    dword ptr [ebp - 0x1c4], eax
        mov    dword ptr [ebp - 0x1c0], edx
        mov    edx, dword ptr [ebp + 0x18]
        fmul    dword ptr [g_0076f2a0]
        push    edx
        lea    eax, [ebp - 0x104]
        lea    ecx, [ebp - 0x134]
        fstp    dword ptr [ebp - 0xfc]
        push    eax
        fild    qword ptr [ebp - 0x1a4]
        push    ecx
        mov    dword ptr [ebp - 0xec], 0xbf800000
        mov    dword ptr [ebp - 0xf0], 0xbf800000
        fmul    dword ptr [g_0076f2a0]
        mov    dword ptr [ebp - 0xf4], 0xbf800000
        mov    dword ptr [ebp - 0xe8], 0xbf800000
        lea    ecx, [ebp - 0xf4]
        fstp    dword ptr [ebp - 0x100]
        fild    qword ptr [ebp - 0x1b4]
        fmul    dword ptr [g_0076f2a0]
        fstp    dword ptr [ebp - 0x104]
        fild    qword ptr [ebp - 0x1c4]
        fmul    dword ptr [g_0076f2a0]
        fstp    dword ptr [ebp - 0xf8]
        call    FUN_004286e0
        lea    edx, [ebp - 0xf4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076f29c]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xe4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xe4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xc4], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xe4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xe4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xc4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc4], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xe4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xe4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xc4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc4], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xe4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xe4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xc4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc4], ecx
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xc4]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    esi, dword ptr [ebp - 0x14]
        mov    ebx, dword ptr [ebp - 0x10]
        mov    dword ptr [edx + ecx*4], eax
        mov    eax, dword ptr [esi + 0x1c]
        fld    dword ptr [eax + ebx*8]
        mov    edx, dword ptr [g_007da680]
        fsub    dword ptr [eax + edi*8]
        mov    edx, dword ptr [edx]
        lea    ecx, [edx + ecx*8]
        lea    edx, [eax + edi*8 + 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + edi*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + ebx*8 + 4]
        mov    al, byte ptr [esi + 0x13]
        test    al, al
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        fstp    dword ptr [ecx + 4]
        jbe    L_409e
        test    al, 1
        je    L_409e
        mov    eax, dword ptr [g_007da65c]
        mov    eax, dword ptr [eax]
        mov    cl, byte ptr [eax + edi]
        xor    edx, edx
        mov    esi, ebx
        mov    dl, byte ptr [eax + esi]
        mov    eax, dword ptr [g_007da660]
        mov    byte ptr [ebp - 0xe0], cl
        mov    ecx, dword ptr [ebp - 0xe0]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x38], ecx
        sub    edx, ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp + 8], edx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp + 0x18]
        fiadd    dword ptr [ebp - 0x38]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
        jmp    L_4098
L_3cca:
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, edi
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        shl    esi, 4
        add    edx, esi
        fadd    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0x88]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_3d3c
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_3d42
L_3d3c:
        fld    dword ptr [g_007b220c]
L_3d42:
        mov    ecx, dword ptr [ebp - 0x88]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [ecx + 0x78]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ecx + edx]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x1d4], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x1d0], edx
        fild    qword ptr [ebp - 0x1d4]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x14c], esi
        fmul    dword ptr [g_0076f2a0]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x148], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x11c]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x14c]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x138], edx
        mov    dword ptr [ebp - 0x13c], esi
        fmul    dword ptr [g_0076f2a0]
        mov    dword ptr [ebp - 0x15c], ecx
        mov    dword ptr [ebp - 0x158], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x120]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x13c]
        mov    dword ptr [ebp - 0x19c], ecx
        mov    dword ptr [ebp - 0x198], edx
        shr    eax, 8
        fmul    dword ptr [g_0076f2a0]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x16c], ecx
        fstp    dword ptr [ebp - 0x124]
        mov    dword ptr [ebp - 0x168], edx
        fild    qword ptr [ebp - 0x15c]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076f2a0]
        mov    dword ptr [ebp - 0x1bc], ecx
        mov    dword ptr [ebp - 0x1b8], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x118]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x19c]
        mov    dword ptr [ebp - 0x17c], eax
        mov    dword ptr [ebp - 0x178], edx
        mov    edx, dword ptr [ebp + 0x18]
        fmul    dword ptr [g_0076f2a0]
        push    edx
        lea    eax, [ebp - 0x114]
        lea    ecx, [ebp - 0x124]
        fstp    dword ptr [ebp - 0x10c]
        push    eax
        fild    qword ptr [ebp - 0x16c]
        push    ecx
        mov    dword ptr [ebp - 0xd4], 0xbf800000
        mov    dword ptr [ebp - 0xd8], 0xbf800000
        fmul    dword ptr [g_0076f2a0]
        mov    dword ptr [ebp - 0xdc], 0xbf800000
        mov    dword ptr [ebp - 0xd0], 0xbf800000
        lea    ecx, [ebp - 0xdc]
        fstp    dword ptr [ebp - 0x110]
        fild    qword ptr [ebp - 0x1bc]
        fmul    dword ptr [g_0076f2a0]
        fstp    dword ptr [ebp - 0x114]
        fild    qword ptr [ebp - 0x17c]
        fmul    dword ptr [g_0076f2a0]
        fstp    dword ptr [ebp - 0x108]
        call    FUN_004286e0
        lea    edx, [ebp - 0xdc]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076f29c]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xc0], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xc0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc0], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xc0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc0], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xc0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc0], ecx
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xc0]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    esi, dword ptr [ebp - 0x14]
        mov    dword ptr [edx + ecx*4], eax
        mov    eax, dword ptr [esi + 0x1c]
        mov    edx, dword ptr [g_007da680]
        fld    dword ptr [eax + edi*8]
        mov    edx, dword ptr [edx]
        lea    ecx, [edx + ecx*8]
        mov    edx, dword ptr [ebp - 0x10]
        fsub    dword ptr [eax + edx*8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + edx*8]
        lea    edx, [eax + edx*8 + 4]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + edi*8 + 4]
        mov    al, byte ptr [esi + 0x13]
        test    al, al
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        fstp    dword ptr [ecx + 4]
        jbe    L_409e
        test    al, 1
        je    L_409e
        mov    eax, dword ptr [g_007da65c]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    dl, byte ptr [eax + ecx]
        mov    byte ptr [ebp - 0xbc], dl
        mov    ecx, dword ptr [ebp - 0xbc]
        xor    edx, edx
        mov    dl, byte ptr [eax + edi]
        mov    eax, dword ptr [g_007da660]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x38], ecx
        sub    edx, ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp + 8], edx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp + 0x18]
        fiadd    dword ptr [ebp - 0x38]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
L_4098:
        mov    eax, dword ptr [ebp - 0x18]
        mov    byte ptr [eax + ecx], dl
L_409e:
        mov    eax, dword ptr [ebp - 0xc]
        mov    ebx, dword ptr [ebp - 0x14]
        inc    eax
        mov    dword ptr [ebp - 0xc], eax
L_40a8:
        mov    esi, dword ptr [ebp - 0x6c]
        mov    ecx, dword ptr [ebp - 0x60]
        cmp    ecx, esi
        jl    L_3645
        mov    ecx, dword ptr [g_007da670]
        mov    edx, dword ptr [ecx]
        mov    ax, word ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x30]
        mov    word ptr [edx + ecx*2], ax
        jmp    L_4e73
L_40ce:
        mov    esi, dword ptr [g_007da66c]
        mov    eax, dword ptr [esi + 0x38]
        mov    edx, dword ptr [esi + 0x30]
        mov    ecx, dword ptr [esi + 0x40]
        mov    dword ptr [ebp - 0x50], eax
        mov    eax, dword ptr [esi + 0x48]
        mov    dword ptr [ebp - 0x48], eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        mov    dword ptr [ebp - 0x54], edx
        mov    dword ptr [ebp - 0x4c], ecx
        mov    byte ptr [ebp - 0xc8], al
        jbe    L_4130
        and    eax, 0xff
        mov    dword ptr [ebp + 8], eax
        mov    edi, 1
        lea    ecx, [ebp - 0x44]
        lea    eax, [esi + 0x50]
        mov    dword ptr [ebp - 0x20], 2
L_4113:
        test    dword ptr [ebp + 8], edi
        je    L_411f
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [ebp - 0x54]
L_411f:
        mov    esi, dword ptr [ebp - 0x20]
        add    eax, 8
        add    ecx, 4
        shl    edi, 1
        dec    esi
        mov    dword ptr [ebp - 0x20], esi
        jne    L_4113
L_4130:
        mov    eax, dword ptr [g_007da68c]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0x38], eax
        mov    eax, dword ptr [ebx + 0x78]
        mov    eax, dword ptr [eax]
        mov    dword ptr [ebp - 0xb0], eax
        mov    eax, dword ptr [ebx + 0x1c]
        mov    dword ptr [ebp - 0xac], eax
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        xor    edi, edi
        mov    dword ptr [ebp - 0x28], ecx
        mov    dword ptr [ebp - 0x20], edi
        mov    dword ptr [ebp - 0x64], eax
        jmp    L_4168
L_4165:
        mov    edx, dword ptr [ebp - 0x54]
L_4168:
        mov    esi, dword ptr [ebp - 0x34]
        mov    ebx, dword ptr [ebp - 0x38]
        xor    eax, eax
        mov    al, byte ptr [esi + ecx]
        and    edi, 0xffff
        mov    dword ptr [ebp - 0x1a8], 0
        mov    dword ptr [ebp - 0x188], 0
        mov    esi, eax
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, ebx
        mov    ebx, dword ptr [ecx]
        mov    eax, edi
        shl    eax, 4
        mov    dword ptr [eax + edx], ebx
        mov    ebx, dword ptr [ecx + 4]
        mov    dword ptr [eax + edx + 4], ebx
        mov    ebx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + edx + 0xc], ecx
        mov    dword ptr [eax + edx + 8], ebx
        mov    edx, dword ptr [ebp - 0xb0]
        mov    ecx, dword ptr [edx + esi*4]
        mov    edx, ecx
        and    edx, 0xff
        shr    ecx, 8
        mov    dword ptr [ebp - 0x1ac], edx
        fild    qword ptr [ebp - 0x1ac]
        mov    edx, dword ptr [ebp - 0x50]
        mov    ebx, ecx
        and    ebx, 0xff
        fmul    dword ptr [g_0076f2a0]
        shr    ecx, 8
        mov    dword ptr [ebp - 0x18c], ebx
        mov    ebx, ecx
        fstp    dword ptr [eax + edx + 8]
        and    ebx, 0xff
        fild    qword ptr [ebp - 0x18c]
        mov    dword ptr [ebp - 0x144], ebx
        xor    ebx, ebx
        mov    dword ptr [ebp - 0x140], ebx
        fmul    dword ptr [g_0076f2a0]
        shr    ecx, 8
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x154], ecx
        mov    ecx, dword ptr [ebp - 0xac]
        fstp    dword ptr [eax + edx + 4]
        fild    qword ptr [ebp - 0x144]
        mov    dword ptr [ebp - 0x150], ebx
        fmul    dword ptr [g_0076f2a0]
        fstp    dword ptr [eax + edx]
        fild    qword ptr [ebp - 0x154]
        fmul    dword ptr [g_0076f2a0]
        fstp    dword ptr [eax + edx + 0xc]
        mov    edx, dword ptr [ecx + esi*8]
        mov    eax, dword ptr [ebp - 0x4c]
        mov    ecx, dword ptr [ecx + esi*8 + 4]
        mov    dword ptr [eax + edi*8], edx
        mov    edx, dword ptr [ebp - 0x64]
        mov    dword ptr [eax + edi*8 + 4], ecx
        mov    eax, dword ptr [edx + esi*4]
        mov    ecx, dword ptr [ebp - 0x48]
        mov    dword ptr [ecx + edi*4], eax
        mov    eax, dword ptr [ebp - 0xc8]
        test    al, al
        jbe    L_42c7
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], edx
        lea    ecx, [ebp - 0x44]
        mov    eax, 0x7da65c
L_4294:
        mov    ebx, dword ptr [ebp - 4]
        test    edx, ebx
        je    L_42aa
        mov    edx, dword ptr [eax]
        mov    edx, dword ptr [edx]
        mov    dl, byte ptr [edx + esi]
        mov    ebx, dword ptr [ecx]
        mov    byte ptr [ebx + edi], dl
        mov    edx, dword ptr [ebp + 8]
L_42aa:
        mov    ebx, dword ptr [ebp - 4]
        add    eax, 8
        shl    ebx, 1
        add    ecx, 4
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp - 4], ebx
        jl    L_4294
        mov    eax, dword ptr [ebp - 0xc8]
        xor    ebx, ebx
L_42c7:
        mov    ecx, dword ptr [ebp - 0x28]
        mov    edi, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0x6c]
        inc    ecx
        inc    edi
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x28], ecx
        mov    dword ptr [ebp - 0x20], edi
        jl    L_4165
        mov    ecx, dword ptr [g_007da66c]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0xa8], edx
        mov    edx, dword ptr [ecx + 8]
        mov    dword ptr [ebp - 0xa4], edx
        mov    edx, dword ptr [ecx + 0x10]
        xor    esi, esi
        test    al, al
        mov    dword ptr [ebp - 0xa0], edx
        mov    edx, dword ptr [ecx + 0x18]
        mov    word ptr [ebp - 0x3c], di
        mov    dword ptr [ebp - 0x34], esi
        mov    dword ptr [ebp - 0x9c], edx
        jbe    L_434d
        and    eax, 0xff
        mov    edi, 1
        mov    dword ptr [ebp + 8], eax
        lea    edx, [ebp - 0x98]
        add    ecx, 0x20
        mov    dword ptr [ebp - 0x20], 2
L_4333:
        test    dword ptr [ebp + 8], edi
        je    L_433c
        mov    eax, dword ptr [ecx]
        mov    dword ptr [edx], eax
L_433c:
        mov    eax, dword ptr [ebp - 0x20]
        add    ecx, 8
        add    edx, 4
        shl    edi, 1
        dec    eax
        mov    dword ptr [ebp - 0x20], eax
        jne    L_4333
L_434d:
        mov    edi, 1
        mov    word ptr [ebp - 0x90], bx
        mov    ebx, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 4], edi
        mov    dword ptr [ebp - 0x38], 4
L_4366:
        xor    ecx, ecx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0x18], 0x7b2404
        mov    dword ptr [ebp - 0xb0], 6
L_437c:
        test    dword ptr [g_007d9990], edi
        je    L_4ba1
        mov    edx, dword ptr [ebp - 0x3c]
        and    edx, 0xffff
        mov    dword ptr [ebp - 0x28], ecx
        mov    dword ptr [ebp - 0x20], edx
        jle    L_4a98
        mov    eax, dword ptr [ebp - 0x48]
        mov    ecx, dword ptr [ebp - 0x4c]
        mov    dword ptr [ebp - 0x58], eax
        mov    eax, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp - 0x70], ecx
        mov    ecx, dword ptr [ebp - 0x54]
        lea    ebx, [eax + 0xc]
        sub    eax, ecx
        mov    dword ptr [ebp - 0xac], ebx
        lea    esi, [ecx + 8]
        mov    dword ptr [ebp - 0x68], eax
L_43c0:
        mov    ecx, dword ptr [ebp - 0x28]
        lea    eax, [ecx + 1]
        xor    ecx, ecx
        cmp    eax, edx
        setge    cl
        mov    dword ptr [ebp - 0x60], eax
        dec    ecx
        and    ecx, eax
        mov    edx, ecx
        mov    ecx, dword ptr [ebp - 0x58]
        mov    ecx, dword ptr [ecx]
        test    edi, ecx
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [g_007d998c], ecx
        jne    L_4504
        mov    ecx, dword ptr [ebp - 0x90]
        mov    edi, dword ptr [esi - 8]
        mov    edx, dword ptr [ebp - 0xa8]
        and    ecx, 0xffff
        mov    eax, ecx
        shl    eax, 4
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [esi - 4]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [esi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [esi + 4]
        mov    dword ptr [eax + edx + 0xc], edi
        mov    edx, dword ptr [ebp - 0x58]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x9c]
        mov    dword ptr [edi + ecx*4], edx
        mov    edx, dword ptr [ebp - 0xa4]
        mov    edi, dword ptr [ebx - 0xc]
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [ebx - 8]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [ebp - 0x68]
        mov    edi, dword ptr [esi + edi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [ebx]
        mov    dword ptr [eax + edx + 0xc], edi
        mov    edx, dword ptr [ebp - 0x70]
        mov    edi, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0xa0]
        mov    dword ptr [eax + ecx*8], edi
        mov    edx, dword ptr [edx + 4]
        mov    dword ptr [eax + ecx*8 + 4], edx
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_44b9
        mov    edx, eax
        and    edx, 0xff
        mov    edi, 1
        xor    eax, eax
        mov    dword ptr [ebp - 4], edi
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0xc], eax
L_4486:
        test    edx, edi
        je    L_44a7
        mov    edx, dword ptr [ebp + eax - 0x44]
        mov    edi, dword ptr [ebp - 0x28]
        mov    dl, byte ptr [edx + edi]
        mov    eax, dword ptr [ebp + eax - 0x98]
        mov    edi, dword ptr [ebp - 4]
        mov    byte ptr [eax + ecx], dl
        mov    eax, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp + 8]
L_44a7:
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 4], edi
        jl    L_4486
        jmp    L_44bc
L_44b9:
        mov    edi, dword ptr [ebp - 4]
L_44bc:
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x48]
        mov    edx, dword ptr [ecx + eax*4]
        inc    word ptr [ebp - 0x90]
        test    edx, edi
        je    L_4a66
        mov    edi, eax
        mov    eax, dword ptr [ebp - 0x18]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_45a4
        mov    edx, dword ptr [ebp - 0x1c]
        jmp    dword ptr [edx*4 + 0x475598]
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x54]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi + 4]
        jmp    L_4560
L_4504:
        mov    ecx, dword ptr [ebp - 0x48]
        test    dword ptr [ecx + edx*4], edi
        jne    L_4a69
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x18]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_47d5
        mov    eax, dword ptr [ebp - 0x1c]
        jmp    dword ptr [eax*4 + 0x4755b0]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_4791
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [esi - 4]
        fld    dword ptr [edx + edi + 4]
        jmp    L_4560
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x54]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi]
L_4560:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_45c2
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp + 0x18], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_45cf
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [esi - 8]
        fld    dword ptr [edx + edi]
        jmp    L_4560
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [esi]
        fld    dword ptr [edx + edi + 8]
        jmp    L_4560
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x54]
        fsub    dword ptr [esi]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi + 8]
        jmp    L_4560
L_45a4:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_45b6
        int 3    
L_45b6:
        mov    edx, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_45cf
L_45c2:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_45cf:
        fld    dword ptr [edx + edi]
        mov    ecx, dword ptr [ebp - 0x90]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0xa8]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0xc], ecx
        fmul    dword ptr [ebp + 0x18]
        shl    ecx, 4
        add    eax, ecx
        fadd    dword ptr [esi - 8]
        fstp    dword ptr [eax]
        fld    dword ptr [edx + edi + 4]
        fsub    dword ptr [esi - 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + edi + 8]
        fsub    dword ptr [esi]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [esi]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + edi + 0xc]
        mov    edx, dword ptr [ebp - 0x18]
        cmp    dword ptr [edx + 4], 0
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_4639
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_463f
L_4639:
        fld    dword ptr [g_007b220c]
L_463f:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi]
        mov    edx, dword ptr [ebp - 0xa4]
        fsub    dword ptr [ebx - 0xc]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ebx - 0xc]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi + 4]
        mov    edx, dword ptr [ebp - 0xa4]
        fsub    dword ptr [ebx - 8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ebx - 8]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi + 8]
        mov    edx, dword ptr [ebp - 0x68]
        fsub    dword ptr [esi + edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [esi + edx]
        mov    edx, dword ptr [ebp - 0xa4]
        fstp    dword ptr [ecx + edx + 8]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi + 0xc]
        mov    edx, dword ptr [ebp - 0xa4]
        fsub    dword ptr [ebx]
        mov    edi, dword ptr [ebp - 0xa0]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp - 0xc]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x4c]
        fld    dword ptr [ecx + edx*8]
        mov    ecx, dword ptr [ebp - 0x70]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ecx]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x4c]
        fld    dword ptr [ebx + edx*8 + 4]
        fsub    dword ptr [ecx + 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp - 0xc]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 0x14]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_49bc
        mov    edi, ecx
        and    edi, 0xff
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], edi
        xor    ecx, ecx
L_4705:
        mov    ebx, dword ptr [ebp - 4]
        test    edi, ebx
        je    L_4760
        mov    edi, dword ptr [ebp + ecx - 0x44]
        mov    ebx, dword ptr [ebp - 0x28]
        mov    bl, byte ptr [edi + ebx]
        mov    byte ptr [ebp - 0xb8], bl
        mov    ebx, dword ptr [ebp - 0xb8]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x64], ebx
        xor    ebx, ebx
        mov    bl, byte ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x64]
        mov    edi, dword ptr [ebp - 0xc]
        sub    ebx, edx
        mov    edx, dword ptr [ebp + ecx - 0x98]
        mov    dword ptr [ebp - 0x24], ebx
        fild    dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp + 0x18]
        fiadd    dword ptr [ebp - 0x64]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x24]
        mov    bl, byte ptr [ebp - 0x24]
        mov    byte ptr [edx + edi], bl
        mov    edi, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp - 0x10]
L_4760:
        mov    ebx, dword ptr [ebp - 4]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 4], ebx
        jl    L_4705
        jmp    L_49bc
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edx + edi + 4]
        fld    dword ptr [esi - 4]
        jmp    L_4791
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_4791:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_47f3
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp + 0x18], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_4800
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edx + edi]
        fld    dword ptr [esi - 8]
        jmp    L_4791
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edx + edi + 8]
        fld    dword ptr [esi]
        jmp    L_4791
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_4791
L_47d5:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_47e7
        int 3    
L_47e7:
        mov    edx, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_4800
L_47f3:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_4800:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x90]
        fsub    dword ptr [edx + edi]
        mov    eax, dword ptr [ebp - 0xa8]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0xc], ecx
        fmul    dword ptr [ebp + 0x18]
        shl    ecx, 4
        add    eax, ecx
        fadd    dword ptr [edx + edi]
        lea    edx, [edx + edi + 4]
        fstp    dword ptr [eax]
        fld    dword ptr [esi - 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x54]
        lea    edx, [edx + edi + 8]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x54]
        lea    edx, [edx + edi + 0xc]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x18]
        cmp    dword ptr [edx + 4], 0
        fstp    dword ptr [eax + 0xc]
        je    L_4874
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_487a
L_4874:
        fld    dword ptr [g_007b220c]
L_487a:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [ebx - 0xc]
        fsub    dword ptr [edx + edi]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx + edi]
        mov    edx, dword ptr [ebp - 0xa4]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [ebx - 8]
        lea    edx, [edx + edi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa4]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x50]
        lea    edx, [edx + edi + 8]
        mov    dword ptr [ebp + 8], edx
        mov    edx, dword ptr [ebp - 0x68]
        fld    dword ptr [esi + edx]
        mov    edx, dword ptr [ebp + 8]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa4]
        fstp    dword ptr [ecx + edx + 8]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [ebx]
        lea    edi, [edx + edi + 0xc]
        fsub    dword ptr [edi]
        mov    edx, dword ptr [ebp - 0xa4]
        mov    ebx, dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edi]
        mov    edi, dword ptr [ebp - 0xa0]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    ecx, dword ptr [ebp - 0x70]
        fld    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x4c]
        mov    edx, dword ptr [ebp - 0x10]
        fsub    dword ptr [ecx + edx*8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ecx + edx*8]
        lea    ecx, [ecx + edx*8 + 4]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x70]
        fld    dword ptr [ebx + 4]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0xc]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 0x14]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_49bc
        and    ecx, 0xff
        xor    edi, edi
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x10], edi
L_494d:
        mov    ebx, dword ptr [ebp - 4]
        test    ecx, ebx
        je    L_49a9
        mov    edi, dword ptr [ebp + edi - 0x44]
        mov    cl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x28]
        mov    byte ptr [ebp - 0x84], cl
        mov    ecx, dword ptr [ebp - 0x84]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x64], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edi + ebx]
        sub    ecx, dword ptr [ebp - 0x64]
        mov    edi, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x24], ecx
        fild    dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp + ecx - 0x98]
        fmul    dword ptr [ebp + 0x18]
        fiadd    dword ptr [ebp - 0x64]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x24]
        mov    bl, byte ptr [ebp - 0x24]
        mov    byte ptr [ecx + edi], bl
        mov    edi, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp + 8]
L_49a9:
        mov    ebx, dword ptr [ebp - 4]
        add    edi, 4
        shl    ebx, 1
        cmp    edi, 8
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 4], ebx
        jl    L_494d
L_49bc:
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp + 8], 0
        mov    edi, dword ptr [ebp - 0x24]
        xor    ecx, ecx
        xor    edx, edx
        test    dword ptr [edi], 0x80000000
        setne    cl
        sub    edx, ecx
        and    edx, 8
        xor    ebx, ebx
        test    dword ptr [edi + 4], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 2
        or    edx, ebx
        xor    ebx, ebx
        test    dword ptr [edi + 8], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x10
        or    edx, ebx
        fld    dword ptr [edi + 0xc]
        xor    ebx, ebx
        fcom    dword ptr [edi]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 4
        or    edx, ebx
        xor    ebx, ebx
        fcom    dword ptr [edi + 4]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 1
        or    edx, ebx
        xor    ebx, ebx
        fcomp    dword ptr [edi + 8]
        fnstsw  ax
        test    ah, 0x41
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x20
        or    edx, ebx
        mov    dword ptr [ebp + 8], edx
        mov    eax, dword ptr [ebp - 0x9c]
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp - 0xc]
        inc    word ptr [ebp - 0x90]
        mov    edi, dword ptr [ebp - 4]
        mov    ebx, dword ptr [ebp - 0xac]
        mov    dword ptr [eax + ecx*4], edx
        mov    eax, dword ptr [ebp - 0x60]
        jmp    L_4a69
L_4a66:
        mov    eax, dword ptr [ebp - 0x60]
L_4a69:
        mov    edx, dword ptr [ebp - 0x70]
        mov    ecx, dword ptr [ebp - 0x58]
        add    edx, 8
        mov    dword ptr [ebp - 0x70], edx
        mov    edx, dword ptr [ebp - 0x20]
        add    ecx, 4
        add    ebx, 0x10
        add    esi, 0x10
        cmp    eax, edx
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp - 0x58], ecx
        mov    dword ptr [ebp - 0xac], ebx
        jl    L_43c0
        mov    esi, dword ptr [ebp - 0x34]
L_4a98:
        mov    eax, dword ptr [g_007da66c]
        mov    ebx, dword ptr [ebp - 0x14]
        lea    edx, [esi + esi*2]
        shl    edx, 4
        mov    ecx, dword ptr [eax + edx]
        add    eax, edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x50], edx
        mov    edx, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x48], edx
        xor    edx, edx
        mov    dl, byte ptr [ebx + 0x13]
        test    dl, dl
        mov    dword ptr [ebp - 0x54], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    dword ptr [ebp - 0x4c], ecx
        jbe    L_4b0f
        mov    ebx, edx
        xor    eax, eax
        and    ebx, 0xff
        mov    edi, 1
        mov    dword ptr [ebp + 8], ebx
        lea    ecx, [ebp - 0x44]
        jmp    L_4ae3
L_4ae0:
        mov    ebx, dword ptr [ebp + 8]
L_4ae3:
        test    ebx, edi
        je    L_4b01
        mov    ebx, dword ptr [g_007da66c]
        lea    esi, [esi + esi*2]
        lea    esi, [eax + esi*2]
        mov    esi, dword ptr [ebx + esi*8 + 0x20]
        mov    ebx, dword ptr [ebp - 0x14]
        mov    dword ptr [ecx], esi
        mov    esi, dword ptr [ebp - 0x34]
        jmp    L_4b04
L_4b01:
        mov    ebx, dword ptr [ebp - 0x14]
L_4b04:
        inc    eax
        add    ecx, 4
        shl    edi, 1
        cmp    eax, 2
        jl    L_4ae0
L_4b0f:
        mov    ax, word ptr [ebp - 0x90]
        xor    ecx, ecx
        test    esi, esi
        sete    cl
        mov    word ptr [ebp - 0x3c], ax
        mov    esi, ecx
        mov    ecx, dword ptr [g_007da66c]
        lea    eax, [esi + esi*2]
        shl    eax, 4
        add    eax, ecx
        test    dl, dl
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xa8], ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xa4], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x34], esi
        mov    dword ptr [ebp - 0xa0], ecx
        mov    dword ptr [ebp - 0x9c], eax
        jbe    L_4b98
        xor    eax, eax
        and    edx, 0xff
        mov    edi, 1
        mov    dword ptr [ebp + 8], edx
        lea    ecx, [ebp - 0x98]
L_4b71:
        test    edx, edi
        je    L_4b8d
        mov    ebx, dword ptr [g_007da66c]
        lea    edx, [esi + esi*2]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [ebx + edx*8 + 0x20]
        mov    ebx, dword ptr [ebp - 0x14]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [ebp + 8]
L_4b8d:
        inc    eax
        add    ecx, 4
        shl    edi, 1
        cmp    eax, 2
        jl    L_4b71
L_4b98:
        xor    ecx, ecx
        mov    word ptr [ebp - 0x90], cx
L_4ba1:
        mov    eax, dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp - 0x18]
        shl    edi, 1
        inc    eax
        mov    dword ptr [ebp - 0x1c], eax
        mov    eax, dword ptr [ebp - 0xb0]
        add    edx, 8
        dec    eax
        mov    dword ptr [ebp - 4], edi
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [ebp - 0xb0], eax
        jne    L_437c
        mov    edx, dword ptr [ebp - 0x3c]
        xor    eax, eax
        and    edx, 0xffff
        jle    L_4c11
        mov    ecx, dword ptr [ebp - 0x48]
L_4bd9:
        or    eax, dword ptr [ecx]
        add    ecx, 4
        dec    edx
        jne    L_4bd9
        xor    ecx, ecx
        cmp    eax, ecx
        je    L_4c11
        mov    ecx, dword ptr [ebp - 0x38]
        mov    edx, ecx
        dec    ecx
        test    edx, edx
        mov    dword ptr [ebp - 0x38], ecx
        jne    L_4366
        xor    ecx, ecx
        cmp    eax, ecx
        je    L_4c11
        mov    eax, dword ptr [g_007da5e8]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    byte ptr [edx + ecx], 0
        jmp    L_4eab
L_4c11:
        mov    eax, dword ptr [ebp - 0x3c]
        xor    edx, edx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x20], eax
        jle    L_4e5a
        mov    eax, dword ptr [ebp - 0x4c]
        mov    ecx, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp - 0x18], eax
        mov    eax, dword ptr [ebp - 0x78]
        mov    dword ptr [ebp - 0x58], ecx
        lea    ecx, [eax*8]
        mov    dword ptr [ebp - 0x60], ecx
        lea    ecx, [eax*4]
        shl    eax, 4
        mov    dword ptr [ebp - 0x1c], eax
        mov    eax, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp - 0x68], ecx
        lea    edi, [eax + 8]
L_4c53:
        mov    ecx, dword ptr [ebp - 0x78]
        lea    eax, [edx + ecx]
        mov    ecx, dword ptr [g_007da684]
        mov    ebx, dword ptr [ecx]
        mov    ecx, dword ptr [edi - 8]
        mov    dword ptr [ebp - 0x24], eax
        mov    eax, dword ptr [ebp - 0x1c]
        add    eax, ebx
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [edi - 4]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [edi]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [edi + 4]
        mov    dword ptr [eax + 0xc], ecx
        mov    eax, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp + 8], eax
        fld    dword ptr [g_0076f29c]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xcc], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xcc]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xcc], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xcc]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xcc], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xcc]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xcc], ecx
        mov    ecx, dword ptr [g_007da608]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0xcc]
        mov    esi, dword ptr [ebp - 0x68]
        mov    dword ptr [esi + eax], ecx
        mov    eax, dword ptr [g_007da680]
        mov    esi, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x60]
        mov    eax, dword ptr [ebp - 0x18]
        add    ecx, esi
        mov    esi, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ecx], esi
        mov    dword ptr [ecx + 4], eax
        mov    ecx, dword ptr [ebp - 0x14]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        jbe    L_4e19
        lea    esi, [ebp - 0x44]
        and    eax, 0xff
        mov    dword ptr [ebp - 0x34], esi
        mov    esi, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], eax
        mov    ecx, 0x7da660
L_4de9:
        mov    ebx, dword ptr [ebp - 4]
        test    eax, ebx
        je    L_4e02
        mov    eax, dword ptr [ebp - 0x34]
        mov    eax, dword ptr [eax]
        mov    ebx, dword ptr [ecx]
        mov    al, byte ptr [eax + edx]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + esi], al
        mov    eax, dword ptr [ebp + 8]
L_4e02:
        add    dword ptr [ebp - 0x34], 4
        mov    ebx, dword ptr [ebp - 4]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp - 4], ebx
        jl    L_4de9
L_4e19:
        mov    ebx, dword ptr [ebp - 0x68]
        mov    esi, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 0x18]
        add    ebx, 4
        mov    eax, 0x10
        add    esi, eax
        mov    dword ptr [ebp - 0x68], ebx
        mov    ebx, dword ptr [ebp - 0x58]
        add    ebx, eax
        add    edi, eax
        mov    dword ptr [ebp - 0x1c], esi
        mov    esi, dword ptr [ebp - 0x60]
        mov    eax, 8
        add    esi, eax
        add    ecx, eax
        mov    eax, dword ptr [ebp - 0x20]
        inc    edx
        cmp    edx, eax
        mov    dword ptr [ebp - 0x58], ebx
        mov    dword ptr [ebp - 0x60], esi
        mov    dword ptr [ebp - 0x18], ecx
        jl    L_4c53
L_4e5a:
        mov    ecx, dword ptr [ebp - 0x3c]
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x3c]
        mov    dword ptr [ebp - 0xc], ecx
        mov    ecx, dword ptr [ebp - 0x30]
        mov    word ptr [eax + ecx*2], dx
L_4e73:
        mov    eax, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x78]
        mov    ecx, dword ptr [ebp - 0x30]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0x7c]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x7c], eax
        mov    eax, dword ptr [g_007da5e8]
        mov    dword ptr [ebp - 0x78], edx
        mov    edx, dword ptr [ebp - 0x2c]
        mov    dword ptr [ebp - 0x30], ecx
        mov    ecx, dword ptr [eax]
        mov    byte ptr [ecx + edx], 0
L_4e9f:
        mov    eax, dword ptr [ebp - 0x6c]
        mov    ebx, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    dword ptr [ebp - 8], eax
L_4eab:
        mov    edx, dword ptr [ebp - 8]
L_4eae:
        mov    eax, dword ptr [ebp - 0x5c]
        inc    ecx
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x2c], ecx
        jl    L_3561
L_4ebd:
        mov    dl, byte ptr [ebp + 0x1c]
        test    dl, dl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_4ecc
        mov    eax, dword ptr [ecx + 0x30]
        jmp    L_4ed9
L_4ecc:
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ebp + 0x10]
        shl    eax, 5
        add    eax, esi
L_4ed9:
        xor    esi, esi
        test    dl, dl
        mov    dword ptr [ebx + 0x44], eax
        mov    word ptr [ebx + 0xa], si
        je    L_4eeb
        mov    eax, dword ptr [ecx + 0x48]
        jmp    L_4ef4
L_4eeb:
        mov    edx, dword ptr [ecx + 0xc]
        mov    eax, dword ptr [ecx + 0x28]
        lea    eax, [eax + edx*2]
L_4ef4:
        mov    ecx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [ebx + 0x50], eax
        xor    eax, eax
        cmp    ecx, esi
        mov    word ptr [ebx + 0x54], si
        mov    dword ptr [ebp - 0x28], ecx
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp + 8], esi
        jle    L_505c
L_4f17:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + eax], 0
        jne    L_4f2d
        inc    dword ptr [ebp + 8]
        jmp    L_5050
L_4f2d:
        mov    ecx, dword ptr [g_007da5f4]
        mov    dx, word ptr [ebp + 8]
        mov    word ptr [ecx + eax*2], dx
        test    byte ptr [ebx + 0x13], 1
        je    L_4f5c
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    dl, byte ptr [edx + eax]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x17], dl
L_4f5c:
        mov    eax, dword ptr [ebx + 0x1c]
        mov    ecx, dword ptr [ebx + 0x78]
        mov    edx, dword ptr [ecx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x24], eax
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0x84], ecx
        mov    ecx, dword ptr [ebx + 0x44]
        mov    dword ptr [ebp + 0x18], edx
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x8c], esi
        mov    ecx, dword ptr [ebp - 0x84]
        fld1    
        mov    edi, dword ptr [ebp - 8]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x8c]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov    eax, dword ptr [ebp + 0x18]
        test    eax, eax
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_4ff1
        mov    edx, eax
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [edx + eax*4]
        jmp    L_4ffa
L_4ff1:
        mov    ecx, dword ptr [g_007b94a0]
        mov    eax, dword ptr [ebp - 8]
L_4ffa:
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ecx + eax*8]
        mov    dword ptr [esi + 0x18], edx
        mov    eax, dword ptr [ecx + eax*8 + 4]
        mov    dword ptr [esi + 0x1c], eax
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_5046
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x80]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x74]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        fstp    dword ptr [eax]
L_5046:
        inc    word ptr [ebx + 0xa]
        mov    ecx, dword ptr [ebp - 0x28]
        mov    eax, dword ptr [ebp - 8]
L_5050:
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 8], eax
        jl    L_4f17
L_505c:
        mov    eax, dword ptr [ebp - 0x5c]
        xor    edi, edi
        xor    edx, edx
        test    eax, eax
        mov    dword ptr [ebp - 0x2c], edi
        jle    L_5158
L_506e:
        mov    eax, dword ptr [ebx + 0x60]
        mov    ecx, dword ptr [g_007da5e8]
        movzx    si, byte ptr [eax + edi]
        mov    eax, dword ptr [ecx]
        cmp    byte ptr [eax + edi], 0
        jne    L_508f
        and    esi, 0xffff
        jmp    L_5147
L_508f:
        and    esi, 0xffff
        mov    eax, 1
        lea    ecx, [esi - 1]
        cmp    ecx, eax
        mov    dword ptr [ebp + 8], esi
        jle    L_5147
L_50a8:
        mov    edi, dword ptr [g_007da5f4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebx + 0x48]
        mov    cl, byte ptr [ecx + edx]
        mov    esi, ecx
        movzx    cx, cl
        and    esi, 0xff
        sub    cx, word ptr [edi + esi*2]
        mov    edi, dword ptr [ebx + 0x50]
        xor    esi, esi
        mov    si, word ptr [ebx + 0x54]
        mov    word ptr [edi + esi*2], cx
        mov    edi, dword ptr [g_007da5f4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebx + 0x48]
        add    ecx, eax
        mov    cl, byte ptr [ecx + edx + 1]
        mov    esi, ecx
        and    esi, 0xff
        movzx    cx, cl
        sub    cx, word ptr [edi + esi*2]
        mov    edi, dword ptr [ebx + 0x50]
        xor    esi, esi
        mov    si, word ptr [ebx + 0x54]
        mov    word ptr [edi + esi*2 + 2], cx
        mov    edi, dword ptr [g_007da5f4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebx + 0x48]
        add    ecx, eax
        mov    cl, byte ptr [ecx + edx]
        mov    esi, ecx
        and    esi, 0xff
        movzx    cx, cl
        sub    cx, word ptr [edi + esi*2]
        mov    edi, dword ptr [ebx + 0x50]
        xor    esi, esi
        mov    si, word ptr [ebx + 0x54]
        mov    word ptr [edi + esi*2 + 4], cx
        add    word ptr [ebx + 0x54], 3
        mov    esi, dword ptr [ebp + 8]
        inc    eax
        lea    ecx, [esi - 1]
        cmp    eax, ecx
        jl    L_50a8
        mov    edi, dword ptr [ebp - 0x2c]
L_5147:
        mov    eax, dword ptr [ebp - 0x5c]
        add    edx, esi
        inc    edi
        cmp    edi, eax
        mov    dword ptr [ebp - 0x2c], edi
        jl    L_506e
L_5158:
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        jle    L_54e0
        mov    ecx, dword ptr [ebp - 0x30]
        xor    eax, eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 8], eax
        jle    L_54e0
L_5176:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    ax, word ptr [eax + ecx*2]
        mov    dword ptr [ebp - 0x28], 1
        and    eax, 0xffff
        mov    dword ptr [ebp + 8], eax
        dec    eax
        cmp    eax, 1
        jle    L_54c3
        mov    eax, dword ptr [ebp - 8]
        mov    ebx, dword ptr [ebp - 0x14]
        lea    edx, [eax*8 + 8]
        lea    eax, [eax*4 + 4]
        mov    dword ptr [ebp - 0x20], edx
        mov    dword ptr [ebp + 0x18], eax
L_51b8:
        test    byte ptr [ebx + 0x13], 1
        je    L_521c
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 8]
        mov    dl, byte ptr [edx + eax]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x17], dl
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0x28]
        mov    edi, dword ptr [ebx + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        add    edx, esi
        mov    dl, byte ptr [edx + eax + 1]
        shl    ecx, 5
        mov    byte ptr [ecx + edi + 0x37], dl
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        add    edx, esi
        mov    esi, dword ptr [ebx + 0x44]
        mov    dl, byte ptr [edx + eax]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x57], dl
L_521c:
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da608]
        mov    eax, dword ptr [edx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0xb4], ecx
        mov    ecx, dword ptr [g_007da684]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x28]
        mov    dword ptr [ebp - 0xbc], eax
        mov    eax, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0xb8], edx
        lea    edx, [eax + ecx]
        lea    eax, [eax + ecx + 1]
        mov    ecx, dword ptr [ebx + 0x44]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x8c], edx
        mov    dword ptr [ebp - 0x84], eax
        mov    dword ptr [ebp - 0x24], esi
        mov    ecx, dword ptr [ebp - 0xb8]
        fld1    
        mov    edi, dword ptr [ebp - 8]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x24]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x84]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x2c]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x20]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x24]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x8c]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 0x28]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x4c]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x40]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x44]
        fld    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x48]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov    eax, dword ptr [ebp - 0xbc]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [eax + ecx*4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], edx
        mov    edx, dword ptr [ebp + 0x18]
        mov    edi, dword ptr [edx + eax + 4]
        fstp    dword ptr [esi]
        mov    eax, dword ptr [edx + eax]
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x50], eax
        fmul    dword ptr [esi + 4]
        mov    eax, dword ptr [ebp - 0xb4]
        mov    edx, dword ptr [eax + ecx*8]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        fadd    dword ptr [g_007da870]
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi + 0x1c], ecx
        mov    ecx, dword ptr [ebp - 0x20]
        fstp    dword ptr [esi + 4]
        mov    edx, dword ptr [ecx + eax + 8]
        fld    dword ptr [g_007da87c]
        mov    dword ptr [esi + 0x38], edx
        fmul    dword ptr [esi + 0x20]
        mov    edx, dword ptr [ecx + eax + 0xc]
        mov    dword ptr [esi + 0x3c], edx
        mov    edx, dword ptr [ecx + eax]
        fadd    dword ptr [g_007da874]
        mov    eax, dword ptr [ecx + eax + 4]
        mov    dword ptr [esi + 0x5c], eax
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        fstp    dword ptr [esi + 0x20]
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x30], edi
        fmul    dword ptr [esi + 0x24]
        mov    dword ptr [esi + 0x58], edx
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x24]
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x40]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x44]
        je    L_5456
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x80]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x74]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x80]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x38]
        lea    eax, [edx + eax + 0x38]
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x74]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x3c]
        lea    eax, [ecx + edx + 0x3c]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x80]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x58]
        lea    eax, [eax + ecx + 0x58]
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x74]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x5c]
        lea    eax, [edx + eax + 0x5c]
        fstp    dword ptr [eax]
L_5456:
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        mov    edi, dword ptr [ebp + 0x18]
        mov    esi, dword ptr [ebp - 0x20]
        add    edi, 4
        add    esi, 8
        mov    dword ptr [ebp + 0x18], edi
        mov    dword ptr [ebp - 0x20], esi
        mov    word ptr [edx + ecx*2], ax
        mov    cx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x50]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0x54]
        inc    cx
        mov    word ptr [eax + edx*2 + 2], cx
        mov    cx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x50]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0x54]
        add    cx, 2
        mov    word ptr [eax + edx*2 + 4], cx
        mov    ecx, dword ptr [ebp + 8]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        mov    eax, dword ptr [ebp - 0x28]
        inc    eax
        dec    ecx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x28], eax
        jl    L_51b8
L_54c3:
        mov    esi, dword ptr [ebp - 8]
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp - 0x30]
        add    esi, edx
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 8], esi
        mov    dword ptr [ebp - 0x2c], eax
        jl    L_5176
L_54e0:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_551e
        mov    ecx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp + 0x10]
        mov    edi, dword ptr [eax]
        mov    esi, dword ptr [eax + 0xc]
        xor    edx, edx
        mov    dx, word ptr [ecx + 0xa]
        add    edi, edx
        xor    edx, edx
        mov    dx, word ptr [ecx + 0x54]
        mov    dword ptr [eax], edi
        add    esi, edx
        cmp    word ptr [ecx + 0xa], 0
        mov    dword ptr [eax + 0xc], esi
        setne    al
        mov    byte ptr [ecx + 0x10], al
        mov    eax, dword ptr [ebp - 0x7c]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_551e:
        mov    ecx, dword ptr [ebp - 0x14]
        cmp    word ptr [ecx + 0xa], 0
        setne    al
        mov    byte ptr [ecx + 0x10], al
        mov    eax, dword ptr [ebp - 0x7c]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_5538:
        mov    ecx, dword ptr [ebp + 0x1c]
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp + 0x14]
        push    ecx
        mov    ecx, dword ptr [ebp + 0x10]
        push    edx
        push    eax
        push    ecx
        push    ecx
        lea    edx, [ebp + 0xc]
        mov    ecx, esp
        push    edx
        call    FUN_00423e00
        mov    eax, dword ptr [ebp + 8]
        push    eax
        mov    ecx, ebx
        call    FUN_0047b5b0
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        // jump-table data @ 0x00475568 (6 relocated pointers)
        __emit 0xB3
        __emit 0x37
        __emit 0x47
        __emit 0x00
        __emit 0xE2
        __emit 0x37
        __emit 0x47
        __emit 0x00
        __emit 0xEA
        __emit 0x37
        __emit 0x47
        __emit 0x00
        __emit 0xF6
        __emit 0x37
        __emit 0x47
        __emit 0x00
        __emit 0xFC
        __emit 0x37
        __emit 0x47
        __emit 0x00
        __emit 0x04
        __emit 0x38
        __emit 0x47
        __emit 0x00
        // jump-table data @ 0x00475580 (6 relocated pointers)
        __emit 0x58
        __emit 0x38
        __emit 0x47
        __emit 0x00
        __emit 0x80
        __emit 0x38
        __emit 0x47
        __emit 0x00
        __emit 0x88
        __emit 0x38
        __emit 0x47
        __emit 0x00
        __emit 0x94
        __emit 0x38
        __emit 0x47
        __emit 0x00
        __emit 0x9A
        __emit 0x38
        __emit 0x47
        __emit 0x00
        __emit 0xA2
        __emit 0x38
        __emit 0x47
        __emit 0x00
        // jump-table data @ 0x00475598 (6 relocated pointers)
        __emit 0xF1
        __emit 0x44
        __emit 0x47
        __emit 0x00
        __emit 0x44
        __emit 0x45
        __emit 0x47
        __emit 0x00
        __emit 0x50
        __emit 0x45
        __emit 0x47
        __emit 0x00
        __emit 0x7C
        __emit 0x45
        __emit 0x47
        __emit 0x00
        __emit 0x87
        __emit 0x45
        __emit 0x47
        __emit 0x00
        __emit 0x92
        __emit 0x45
        __emit 0x47
        __emit 0x00
        // jump-table data @ 0x004755B0 (14 relocated pointers)
        __emit 0x2E
        __emit 0x45
        __emit 0x47
        __emit 0x00
        __emit 0x75
        __emit 0x47
        __emit 0x47
        __emit 0x00
        __emit 0x81
        __emit 0x47
        __emit 0x47
        __emit 0x00
        __emit 0xAD
        __emit 0x47
        __emit 0x47
        __emit 0x00
        __emit 0xB8
        __emit 0x47
        __emit 0x47
        __emit 0x00
        __emit 0xC3
        __emit 0x47
        __emit 0x47
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x55
        __emit 0x8B
        __emit 0xEC
        __emit 0x83
        __emit 0xEC
        __emit 0x60
        __emit 0x53
        __emit 0x56
        __emit 0x8B
        __emit 0xD9
        __emit 0x8B
        __emit 0x03
        __emit 0x57
        __emit 0x33
        __emit 0xF6
        __emit 0x8D
        __emit 0x7B
        __emit 0x68
        __emit 0x56
        __emit 0x89
        __emit 0x5D
        __emit 0xFC
        __emit 0x89
        __emit 0x7B
    }
}
