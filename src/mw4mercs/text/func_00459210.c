/*
 * FUN_00459210 (extent 0x459210-0x45aad0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007d98ec;
extern int    g_007d98f0;
extern int    g_007d98f4;
extern int    g_007d98fc;
extern int    g_007da5f4;
extern int    g_007da600;
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
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00459210(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0xc0
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x58]
        test    eax, eax
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 0x5c], 0
        jg    L_923a
        mov    byte ptr [edi + 0x10], 0
        xor    eax, eax
        pop    edi
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_923a:
        cmp    word ptr [edi + 0x56], 0
        mov    eax, dword ptr [edi + 0x18]
        mov    dword ptr [ebp - 0x50], eax
        jne    L_9251
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0x98]
L_9251:
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x28], ecx
        mov    ecx, dword ptr [g_007da600]
        push    ebx
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x48], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        push    esi
        mov    esi, dword ptr [edi + 0x14]
        mov    dword ptr [ebp - 8], ebx
        je    L_92ed
        mov    eax, dword ptr [ebp - 0x50]
        test    eax, eax
        mov    dword ptr [ebp - 0x20], 0
        jle    L_932f
L_928f:
        cmp    byte ptr [ebx], 0
        je    L_92c4
        mov    eax, dword ptr [ebp - 0x48]
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp - 8]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp - 0x28]
        push    esi
        mov    byte ptr [edx], 0
        call    FUN_0041cb30
        mov    edx, dword ptr [g_007da65c]
        mov    ebx, dword ptr [edx]
        add    ebx, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [ebx], al
        mov    ebx, dword ptr [ebp - 8]
L_92c4:
        mov    ecx, dword ptr [ebp - 0x48]
        mov    eax, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0x28]
        add    ecx, 4
        inc    eax
        add    edx, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x48], ecx
        mov    ecx, dword ptr [ebp - 0x50]
        inc    ebx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebp - 0x28], edx
        mov    dword ptr [ebp - 8], ebx
        jl    L_928f
        jmp    L_932f
L_92ed:
        mov    eax, dword ptr [ebp - 0x50]
        test    eax, eax
        jle    L_932f
        mov    dword ptr [ebp + 0x14], eax
L_92f7:
        cmp    byte ptr [ebx], 0
        je    L_9310
        mov    eax, dword ptr [ebp - 0x48]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp - 0x28]
        push    esi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
L_9310:
        mov    eax, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ebp - 0x48]
        add    eax, 0x10
        mov    dword ptr [ebp - 0x28], eax
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        inc    ebx
        dec    eax
        mov    dword ptr [ebp - 0x48], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_92f7
L_932f:
        mov    eax, dword ptr [edi + 0x24]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0xc0], 0
        mov    dword ptr [ebp - 4], 0
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x6c], 0
        mov    dword ptr [ebp - 0x58], 0
        je    L_941e
        test    eax, eax
        jle    L_941e
        mov    edx, dword ptr [g_007da848]
        mov    esi, dword ptr [edx + eax*4 + 0x24]
        test    esi, esi
        je    L_941e
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_939d
        mov    dword ptr [g_007da864], 1
        jmp    L_93f8
L_939d:
        cmp    eax, 0x80
        jl    L_93b0
        mov    dword ptr [g_007da864], 2
        jmp    L_93f8
L_93b0:
        cmp    eax, 0x40
        jl    L_93c1
        mov    dword ptr [g_007da864], 4
        jmp    L_93f8
L_93c1:
        cmp    eax, 0x20
        jl    L_93d2
        mov    dword ptr [g_007da864], 8
        jmp    L_93f8
L_93d2:
        cmp    eax, 0x10
        jl    L_93e3
        mov    dword ptr [g_007da864], 0x10
        jmp    L_93f8
L_93e3:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_93f8:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_94c0
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_94c0
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x6c], edx
        mov    dword ptr [ebp - 0x58], eax
L_941e:
        mov    ecx, dword ptr [g_007da688]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [edi + 0x58]
        xor    eax, eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x64], eax
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp - 0x48], edx
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebp - 0x14], eax
        jle    L_a523
L_9442:
        mov    eax, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x20]
        lea    eax, [ecx + edx]
        cmp    byte ptr [eax], 0
        mov    dword ptr [ebp + 8], eax
        je    L_a503
        mov    eax, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [eax + 0x48]
        mov    esi, dword ptr [ebp - 0x14]
        xor    eax, eax
        mov    al, byte ptr [edx + esi + 2]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + esi + 1]
        xor    ecx, ecx
        mov    cl, byte ptr [edx + esi]
        mov    dword ptr [ebp - 0x2c], edx
        mov    edi, eax
        mov    eax, dword ptr [ebp - 0x48]
        mov    dword ptr [ebp - 0x40], ebx
        mov    dword ptr [ebp - 0x54], edi
        mov    edi, dword ptr [eax + edi*4]
        mov    dword ptr [ebp - 0x18], ecx
        mov    ecx, dword ptr [eax + ecx*4]
        mov    eax, dword ptr [eax + ebx*4]
        mov    ebx, eax
        and    ebx, edi
        mov    dword ptr [g_007d98f0], ecx
        and    ecx, ebx
        mov    ebx, dword ptr [g_007d98f0]
        or    eax, edi
        or    ebx, eax
        test    ecx, ecx
        mov    dword ptr [g_007d98f4], ecx
        mov    dword ptr [g_007d98f0], ebx
        je    L_94c9
        mov    ecx, dword ptr [ebp + 8]
        mov    byte ptr [ecx], 0
        jmp    L_a503
L_94c0:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_941e
L_94c9:
        test    ebx, ebx
        jne    L_94f6
        mov    eax, dword ptr [ebp - 0x5c]
        mov    edx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ebp - 0x18]
        inc    eax
        mov    dword ptr [ebp - 0x5c], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x40]
        mov    byte ptr [eax + ecx], 1
        mov    ecx, dword ptr [ebp - 0x54]
        mov    byte ptr [eax + edx], 1
        mov    byte ptr [eax + ecx], 1
        jmp    L_a503
L_94f6:
        mov    eax, dword ptr [ebx*4 + 0x7b2478]
        xor    edi, edi
        cmp    eax, 1
        mov    dword ptr [ebp - 8], edi
        jne    L_9a68
        lea    edx, [esi + 3]
        cmp    esi, edx
        mov    ecx, esi
        jge    L_9a55
L_9518:
        mov    eax, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [eax + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x7c], ecx
        mov    esi, ebx
        jl    L_9530
        mov    ecx, dword ptr [ebp - 0x14]
L_9530:
        xor    edx, edx
        mov    dl, byte ptr [eax + ecx]
        mov    eax, dword ptr [ebp - 0x48]
        mov    ebx, edi
        and    ebx, 0xffff
        mov    ecx, edx
        add    ebx, dword ptr [ebp - 0x64]
        mov    edx, dword ptr [eax + esi*4]
        test    edx, edx
        mov    dword ptr [ebp - 0x24], ecx
        mov    dword ptr [g_007d98ec], edx
        jne    L_9616
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    eax, esi
        shl    eax, 4
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    ecx, ebx
        shl    ecx, 4
        add    ecx, dword ptr [edx]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [g_007da680]
        mov    dword ptr [ecx + 8], edx
        mov    ecx, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [edx + esi*8]
        mov    edx, dword ptr [edx + esi*8 + 4]
        mov    dword ptr [ecx + ebx*8], eax
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0x10]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        mov    dword ptr [ecx + ebx*8 + 4], edx
        jbe    L_95f8
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0xc], ecx
        mov    eax, 0x7da660
L_95cd:
        mov    edx, dword ptr [ebp - 8]
        test    ecx, edx
        je    L_95e6
        mov    ecx, dword ptr [eax - 4]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    dl, byte ptr [edx + esi]
        mov    byte ptr [ecx + ebx], dl
        mov    ecx, dword ptr [ebp - 0xc]
L_95e6:
        mov    edx, dword ptr [ebp - 8]
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da670
        mov    dword ptr [ebp - 8], edx
        jl    L_95cd
L_95f8:
        mov    ecx, dword ptr [ebp - 0x24]
        mov    eax, dword ptr [ebp - 0x48]
        mov    eax, dword ptr [eax + ecx*4]
        inc    edi
        inc    ebx
        test    eax, eax
        mov    dword ptr [ebp - 8], edi
        je    L_9a44
        mov    edx, dword ptr [g_007d98ec]
        jmp    L_9628
L_9616:
        mov    eax, dword ptr [ebp - 0x48]
        mov    eax, dword ptr [eax + ecx*4]
        test    eax, eax
        mov    byte ptr [ebp + 0xb], 0
        jne    L_9a44
L_9628:
        or    edx, eax
        mov    dword ptr [ebp - 0x34], 1
        mov    eax, dword ptr [ebp - 0x34]
        mov    dword ptr [g_007d98ec], edx
        xor    edi, edi
L_963c:
        test    eax, edx
        jne    L_964e
        shl    eax, 1
        inc    edi
        cmp    di, 6
        jb    L_963c
        jmp    L_97ab
L_964e:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_96fd
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    eax, ecx
        mov    ecx, esi
        shl    eax, 4
        shl    ecx, 4
        and    edi, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    edi, 5
        ja    L_96df
        jmp    dword ptr [edi*4 + 0x45aad0]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_968c:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_9795
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_97a2
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_968c
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_968c
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_968c
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_968c
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_968c
L_96df:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_9741
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_97a2
L_96fd:
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [eax]
        mov    eax, esi
        shl    eax, 4
        shl    ecx, 4
        and    edi, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    edi, 5
        ja    L_977a
        jmp    dword ptr [edi*4 + 0x45aae8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_972e:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_9795
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_9741:
        mov    dword ptr [ebp - 4], 0
        jmp    L_97a2
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_972e
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_972e
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_972e
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_972e
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_972e
L_977a:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_9741
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_97a2
L_9795:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_97a2:
        mov    ecx, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp - 0xc0], edi
L_97ab:
        cmp    byte ptr [ebp + 0xb], 1
        mov    edx, dword ptr [g_007da68c]
        jne    L_98fe
        mov    edi, dword ptr [edx]
        shl    ecx, 4
        fld    dword ptr [ecx + edi]
        add    ecx, edi
        mov    eax, esi
        shl    eax, 4
        fsub    dword ptr [eax + edi]
        add    eax, edi
        mov    edi, dword ptr [g_007da684]
        mov    edi, dword ptr [edi]
        fmul    dword ptr [ebp - 4]
        mov    edx, ebx
        shl    edx, 4
        fadd    dword ptr [eax]
        add    edx, edi
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0xc0]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_982e
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_9834
L_982e:
        fld    dword ptr [g_007b220c]
L_9834:
        mov    eax, dword ptr [eax*8 + 0x7b2404]
        mov    ecx, dword ptr [ebp - 0x10]
        fstp    dword ptr [edx + eax*4]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [g_007da680]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x24]
        fld    dword ptr [eax + edx*8]
        lea    ecx, [ecx + ebx*8]
        fsub    dword ptr [eax + esi*8]
        lea    edi, [eax + esi*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + esi*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + edx*8 + 4]
        xor    eax, eax
        fsub    dword ptr [edi]
        mov    eax, dword ptr [ebp - 0x10]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        fstp    dword ptr [ecx + 4]
        jbe    L_9a3d
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0xc], ecx
        mov    eax, 0x7da65c
L_9899:
        mov    edi, dword ptr [ebp + 8]
        test    ecx, edi
        je    L_98e7
        mov    ecx, dword ptr [eax]
        mov    edi, dword ptr [ecx]
        mov    cl, byte ptr [edi + esi]
        mov    byte ptr [ebp - 0xb8], cl
        mov    ecx, dword ptr [ebp - 0xb8]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x30], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edi + edx]
        sub    ecx, dword ptr [ebp - 0x30]
        mov    dword ptr [ebp - 0x18], ecx
        fild    dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [eax + 4]
        mov    edi, dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x30]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x18]
        mov    cl, byte ptr [ebp - 0x18]
        mov    byte ptr [edi + ebx], cl
        mov    ecx, dword ptr [ebp - 0xc]
L_98e7:
        mov    edi, dword ptr [ebp + 8]
        add    eax, 8
        shl    edi, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 8], edi
        jl    L_9899
        jmp    L_9a3d
L_98fe:
        mov    edx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x24]
        mov    edi, dword ptr [g_007da684]
        mov    edi, dword ptr [edi]
        mov    ecx, esi
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, ebx
        shl    edx, 4
        fmul    dword ptr [ebp - 4]
        add    edx, edi
        fadd    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0xc0]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_9974
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_997a
L_9974:
        fld    dword ptr [g_007b220c]
L_997a:
        mov    eax, dword ptr [eax*8 + 0x7b2404]
        mov    ecx, dword ptr [ebp - 0x10]
        fstp    dword ptr [edx + eax*4]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [g_007da680]
        fld    dword ptr [eax + esi*8]
        mov    ecx, dword ptr [edx]
        lea    edx, [ecx + ebx*8]
        mov    ecx, dword ptr [ebp - 0x24]
        fsub    dword ptr [eax + ecx*8]
        lea    edi, [eax + ecx*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + ecx*8]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + esi*8 + 4]
        xor    eax, eax
        fsub    dword ptr [edi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        fstp    dword ptr [edx + 4]
        mov    edx, dword ptr [ebp - 0x10]
        mov    al, byte ptr [edx + 0x13]
        test    al, al
        jbe    L_9a3d
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0xc], edx
        mov    eax, 0x7da65c
L_99db:
        mov    edi, dword ptr [ebp + 8]
        test    edx, edi
        je    L_9a2b
        mov    edx, dword ptr [eax]
        mov    edi, dword ptr [edx]
        mov    cl, byte ptr [edi + ecx]
        xor    edx, edx
        mov    dl, byte ptr [edi + esi]
        mov    byte ptr [ebp - 0xbc], cl
        mov    ecx, dword ptr [ebp - 0xbc]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x40], ecx
        sub    edx, ecx
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x18], edx
        fild    dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x40]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x18]
        mov    cl, byte ptr [ebp - 0x18]
        mov    byte ptr [edx + ebx], cl
        mov    ecx, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ebp - 0xc]
L_9a2b:
        mov    edi, dword ptr [ebp + 8]
        add    eax, 8
        shl    edi, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 8], edi
        jl    L_99db
L_9a3d:
        mov    edi, dword ptr [ebp - 8]
        inc    edi
        mov    dword ptr [ebp - 8], edi
L_9a44:
        mov    edx, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebp - 0x7c]
        add    edx, 3
        cmp    ecx, edx
        jl    L_9518
L_9a55:
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x28]
        mov    word ptr [ecx + edx*2], di
        jmp    L_a4d9
L_9a68:
        mov    ecx, dword ptr [g_007da66c]
        mov    eax, dword ptr [ecx + 0x30]
        mov    dword ptr [ebp - 0x98], eax
        mov    eax, dword ptr [ecx + 0x40]
        mov    dword ptr [ebp - 0x90], eax
        mov    eax, dword ptr [ecx + 0x48]
        mov    dword ptr [ebp - 0x8c], eax
        mov    eax, dword ptr [ebp - 0x10]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        mov    byte ptr [ebp - 0x50], al
        jbe    L_9adf
        mov    edi, eax
        and    edi, 0xff
        lea    ebx, [ebp - 0x88]
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp + 8], ebx
        add    ecx, 0x50
        mov    dword ptr [ebp - 0x30], 2
L_9abb:
        mov    ebx, dword ptr [ebp - 8]
        test    edi, ebx
        je    L_9acc
        mov    edi, dword ptr [ecx]
        mov    ebx, dword ptr [ebp + 8]
        mov    dword ptr [ebx], edi
        mov    edi, dword ptr [ebp - 0xc]
L_9acc:
        add    dword ptr [ebp + 8], 4
        shl    dword ptr [ebp - 8], 1
        mov    ebx, dword ptr [ebp - 0x30]
        add    ecx, 8
        dec    ebx
        mov    dword ptr [ebp - 0x30], ebx
        jne    L_9abb
L_9adf:
        lea    ecx, [esi + 3]
        cmp    esi, ecx
        mov    ebx, esi
        mov    byte ptr [ebp - 0x39], 0
        mov    byte ptr [ebp + 0xb], 0xff
        mov    dword ptr [ebp - 0x1c], ebx
        mov    dword ptr [ebp - 0x34], 0
        mov    dword ptr [ebp - 0x4c], ecx
        jge    L_9bfe
        mov    ecx, dword ptr [g_007da68c]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    edi, dword ptr [ecx + 0x1c]
        mov    dword ptr [ebp - 0x18], eax
        mov    eax, dword ptr [g_007da688]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0x54], edi
        mov    dword ptr [ebp - 0x40], ecx
L_9b1f:
        xor    eax, eax
        mov    al, byte ptr [edx + ebx]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ebx, dword ptr [ebp - 0x98]
        mov    esi, eax
        shl    eax, 4
        add    eax, edx
        mov    edx, dword ptr [ebp - 0x34]
        and    edx, 0xffff
        mov    ecx, edx
        shl    ecx, 4
        add    ecx, ebx
        mov    ebx, dword ptr [eax]
        mov    dword ptr [ecx], ebx
        mov    ebx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], ebx
        mov    ebx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [ebp - 0x90]
        mov    dword ptr [ecx + 8], ebx
        mov    ecx, dword ptr [edi + esi*8]
        mov    dword ptr [eax + edx*8], ecx
        mov    ecx, dword ptr [edi + esi*8 + 4]
        mov    dword ptr [eax + edx*8 + 4], ecx
        mov    eax, dword ptr [ebp - 0x40]
        mov    ecx, dword ptr [eax + esi*4]
        mov    eax, dword ptr [ebp - 0x8c]
        mov    dword ptr [eax + edx*4], ecx
        mov    eax, dword ptr [ebp - 0x50]
        test    al, al
        jbe    L_9be2
        and    eax, 0xff
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0xc], eax
        lea    ecx, [ebp - 0x88]
        mov    edi, 0x7da65c
        jmp    L_9ba3
L_9ba0:
        mov    eax, dword ptr [ebp - 0xc]
L_9ba3:
        mov    ebx, dword ptr [ebp - 8]
        test    eax, ebx
        je    L_9bc6
        mov    eax, dword ptr [edi]
        mov    eax, dword ptr [eax]
        mov    al, byte ptr [eax + esi]
        mov    ebx, dword ptr [ecx]
        mov    byte ptr [ebx + edx], al
        cmp    al, byte ptr [ebp + 0xb]
        jae    L_9bbe
        mov    byte ptr [ebp + 0xb], al
L_9bbe:
        cmp    al, byte ptr [ebp - 0x39]
        jbe    L_9bc6
        mov    byte ptr [ebp - 0x39], al
L_9bc6:
        mov    ebx, dword ptr [ebp - 8]
        add    edi, 8
        shl    ebx, 1
        add    ecx, 4
        cmp    edi, 0x7da66c
        mov    dword ptr [ebp - 8], ebx
        jl    L_9ba0
        mov    eax, dword ptr [ebp - 0x50]
        mov    edi, dword ptr [ebp - 0x54]
L_9be2:
        mov    ebx, dword ptr [ebp - 0x1c]
        mov    esi, dword ptr [ebp - 0x34]
        mov    ecx, dword ptr [ebp - 0x4c]
        mov    edx, dword ptr [ebp - 0x2c]
        inc    ebx
        inc    esi
        cmp    ebx, ecx
        mov    dword ptr [ebp - 0x1c], ebx
        mov    dword ptr [ebp - 0x34], esi
        jl    L_9b1f
L_9bfe:
        mov    cx, word ptr [ebp - 0x34]
        mov    word ptr [ebp - 0x80], cx
        mov    ecx, dword ptr [g_007da66c]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0xb4], edx
        mov    edx, dword ptr [ecx + 0x10]
        xor    edi, edi
        test    al, al
        mov    dword ptr [ebp - 0xac], edx
        mov    edx, dword ptr [ecx + 0x18]
        mov    dword ptr [ebp - 0x30], edi
        mov    dword ptr [ebp - 0xa8], edx
        jbe    L_9c60
        and    eax, 0xff
        mov    esi, 1
        mov    dword ptr [ebp - 0xc], eax
        lea    edx, [ebp - 0xa4]
        add    ecx, 0x20
        mov    ebx, 2
L_9c4a:
        test    eax, esi
        je    L_9c55
        mov    eax, dword ptr [ecx]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ebp - 0xc]
L_9c55:
        add    ecx, 8
        add    edx, 4
        shl    esi, 1
        dec    ebx
        jne    L_9c4a
L_9c60:
        mov    ebx, dword ptr [ebp - 0x80]
        mov    esi, dword ptr [ebp - 0x8c]
        mov    word ptr [ebp - 0x9c], 0
        mov    dword ptr [ebp - 0x34], 1
        mov    dword ptr [ebp - 0x18], 4
L_9c80:
        mov    dword ptr [ebp - 0x74], 0
        mov    dword ptr [ebp + 8], 0x7b2404
        mov    dword ptr [ebp - 0x40], 6
L_9c95:
        mov    ecx, dword ptr [ebp - 0x34]
        test    dword ptr [g_007d98f0], ecx
        je    L_a36c
        xor    eax, eax
        mov    ecx, ebx
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 8], ecx
        jle    L_a262
        mov    ebx, dword ptr [ebp - 0x90]
        mov    edx, dword ptr [ebp - 0x98]
        mov    dword ptr [ebp - 0x78], esi
        mov    dword ptr [ebp - 0x54], ebx
        lea    esi, [edx + 8]
L_9ccf:
        mov    edi, dword ptr [ebp - 0x34]
        lea    edx, [eax + 1]
        xor    eax, eax
        cmp    edx, ecx
        setge    al
        mov    dword ptr [ebp - 0x7c], edx
        dec    eax
        and    eax, edx
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 0x78]
        mov    eax, dword ptr [eax]
        test    edi, eax
        mov    dword ptr [ebp - 0x24], ecx
        mov    dword ptr [g_007d98ec], eax
        jne    L_9df5
        mov    ecx, dword ptr [ebp - 0x9c]
        mov    edi, dword ptr [ebp - 0xb4]
        and    ecx, 0xffff
        mov    eax, ecx
        shl    eax, 4
        add    eax, edi
        mov    edi, dword ptr [esi - 8]
        mov    dword ptr [eax], edi
        mov    edi, dword ptr [esi - 4]
        mov    dword ptr [eax + 4], edi
        mov    edi, dword ptr [esi]
        mov    dword ptr [eax + 8], edi
        mov    edi, dword ptr [esi + 4]
        mov    dword ptr [eax + 0xc], edi
        mov    eax, dword ptr [ebp - 0x78]
        mov    eax, dword ptr [eax]
        mov    edi, dword ptr [ebp - 0xa8]
        mov    dword ptr [edi + ecx*4], eax
        mov    edi, dword ptr [ebx]
        mov    eax, dword ptr [ebp - 0xac]
        mov    dword ptr [eax + ecx*8], edi
        mov    edi, dword ptr [ebx + 4]
        mov    dword ptr [eax + ecx*8 + 4], edi
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0x10]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_9da5
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp - 0x38], 1
        mov    dword ptr [ebp - 0xc], edx
        mov    dword ptr [ebp - 0x2c], eax
L_9d6b:
        mov    edi, dword ptr [ebp - 0x38]
        test    edx, edi
        je    L_9d8f
        mov    edx, dword ptr [ebp + eax - 0x88]
        mov    edi, dword ptr [ebp - 0x1c]
        mov    eax, dword ptr [ebp + eax - 0xa4]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    eax, dword ptr [ebp - 0x2c]
        mov    edx, dword ptr [ebp - 0xc]
L_9d8f:
        mov    edi, dword ptr [ebp - 0x38]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x38], edi
        jl    L_9d6b
        mov    edx, dword ptr [ebp - 0x7c]
L_9da5:
        mov    eax, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebp - 0x8c]
        mov    edi, dword ptr [ebp - 0x34]
        inc    word ptr [ebp - 0x9c]
        test    dword ptr [ecx + eax*4], edi
        je    L_a23d
        mov    edx, dword ptr [ebp - 0x98]
        mov    ecx, eax
        mov    eax, dword ptr [ebp + 8]
        shl    ecx, 4
        cmp    eax, 0x7b242c
        lea    edi, [ecx + edx]
        ja    L_9e85
        mov    eax, dword ptr [ebp - 0x74]
        jmp    dword ptr [eax*4 + 0x45ab00]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi + 4]
        jmp    L_9e4e
L_9df5:
        mov    eax, dword ptr [ebp - 0x8c]
        test    dword ptr [eax + ecx*4], edi
        jne    L_a23d
        mov    eax, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebp - 0x98]
        shl    eax, 4
        lea    edi, [eax + ecx]
        cmp    dword ptr [ebp + 8], 0x7b242c
        ja    L_a035
        mov    edx, dword ptr [ebp - 0x74]
        jmp    dword ptr [edx*4 + 0x45ab18]
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_9ffe
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + 4]
        jmp    L_9e4e
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi]
L_9e4e:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_9ea0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_9e61:
        mov    dword ptr [ebp - 4], 0
        jmp    L_9ead
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi]
        jmp    L_9e4e
        fld    dword ptr [esi]
        fld    dword ptr [edi + 8]
        jmp    L_9e4e
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi + 8]
        jmp    L_9e4e
L_9e85:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_9e61
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_9ead
L_9ea0:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_9ead:
        fld    dword ptr [edi]
        mov    ecx, dword ptr [ebp - 0x9c]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0xb4]
        and    ecx, 0xffff
        mov    edx, ecx
        fmul    dword ptr [ebp - 4]
        shl    edx, 4
        add    eax, edx
        fadd    dword ptr [esi - 8]
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x2c], ecx
        fstp    dword ptr [eax]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [esi - 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edi + 8]
        fsub    dword ptr [esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edi + 0xc]
        mov    edi, dword ptr [edx + 4]
        test    edi, edi
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_9f16
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_9f1c
L_9f16:
        fld    dword ptr [g_007b220c]
L_9f1c:
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x90]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x24]
        fld    dword ptr [edi + edx*8]
        mov    edi, dword ptr [ebp - 0xac]
        fsub    dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        fstp    dword ptr [edi + ecx*8]
        mov    edi, dword ptr [ebp - 0x90]
        fld    dword ptr [edi + edx*8 + 4]
        mov    edi, dword ptr [ebp - 0xac]
        fsub    dword ptr [ebx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + 4]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 0x10]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_a193
        mov    edi, ecx
        and    edi, 0xff
        mov    dword ptr [ebp - 0x38], 1
        mov    dword ptr [ebp - 0xc], edi
        xor    ecx, ecx
L_9f7e:
        mov    ebx, dword ptr [ebp - 0x38]
        test    edi, ebx
        je    L_9fd6
        mov    edi, dword ptr [ebp + ecx - 0x88]
        mov    ebx, dword ptr [ebp - 0x1c]
        mov    bl, byte ptr [edi + ebx]
        mov    byte ptr [ebp - 0x68], bl
        mov    ebx, dword ptr [ebp - 0x68]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x60], ebx
        xor    ebx, ebx
        mov    bl, byte ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x60]
        mov    edi, dword ptr [ebp - 0x2c]
        sub    ebx, edx
        mov    edx, dword ptr [ebp + ecx - 0xa4]
        mov    dword ptr [ebp - 0x4c], ebx
        fild    dword ptr [ebp - 0x4c]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x60]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x4c]
        mov    bl, byte ptr [ebp - 0x4c]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x24]
        mov    edi, dword ptr [ebp - 0xc]
L_9fd6:
        mov    ebx, dword ptr [ebp - 0x38]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 0x38], ebx
        jl    L_9f7e
        jmp    L_a193
        fld    dword ptr [edi + 4]
        fld    dword ptr [esi - 4]
        jmp    L_9ffe
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_9ffe:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_a050
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_a011:
        mov    dword ptr [ebp - 4], 0
        jmp    L_a05d
        fld    dword ptr [edi]
        fld    dword ptr [esi - 8]
        jmp    L_9ffe
        fld    dword ptr [edi + 8]
        fld    dword ptr [esi]
        jmp    L_9ffe
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_9ffe
L_a035:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_a011
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_a05d
L_a050:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_a05d:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x9c]
        fsub    dword ptr [edi]
        mov    edx, dword ptr [ebp - 0xb4]
        and    ecx, 0xffff
        mov    eax, ecx
        fmul    dword ptr [ebp - 4]
        shl    eax, 4
        add    eax, edx
        fadd    dword ptr [edi]
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x2c], ecx
        fstp    dword ptr [eax]
        fld    dword ptr [esi - 4]
        fsub    dword ptr [edi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edi + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + 8]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edi + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + 0xc]
        mov    edi, dword ptr [edx + 4]
        test    edi, edi
        fstp    dword ptr [eax + 0xc]
        je    L_a0c6
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_a0cc
L_a0c6:
        fld    dword ptr [g_007b220c]
L_a0cc:
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x24]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x90]
        fld    dword ptr [ebx]
        fsub    dword ptr [edx + edi*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx + edi*8]
        mov    edi, dword ptr [ebp - 0xac]
        fstp    dword ptr [edi + ecx*8]
        mov    edi, dword ptr [ebp - 0x24]
        fld    dword ptr [ebx + 4]
        lea    edx, [edx + edi*8 + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xac]
        fstp    dword ptr [edx + ecx*8 + 4]
        xor    edx, edx
        mov    edx, dword ptr [ebp - 0x10]
        mov    dl, byte ptr [edx + 0x13]
        test    dl, dl
        jbe    L_a193
        and    edx, 0xff
        xor    edi, edi
        mov    dword ptr [ebp - 0x38], 1
        mov    dword ptr [ebp - 0xc], edx
        mov    dword ptr [ebp - 0x4c], edi
L_a12a:
        mov    ebx, dword ptr [ebp - 0x38]
        test    edx, ebx
        je    L_a180
        mov    edi, dword ptr [ebp + edi - 0x88]
        mov    edx, dword ptr [ebp - 0x24]
        mov    dl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x1c]
        mov    byte ptr [ebp - 0x70], dl
        mov    edx, dword ptr [ebp - 0x70]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x60], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x60]
        mov    edi, dword ptr [ebp - 0x4c]
        mov    dword ptr [ebp - 0x44], edx
        fild    dword ptr [ebp - 0x44]
        mov    edx, dword ptr [ebp + edi - 0xa4]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x60]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x44]
        mov    bl, byte ptr [ebp - 0x44]
        mov    byte ptr [edx + ecx], bl
        mov    edx, dword ptr [ebp - 0xc]
L_a180:
        mov    ebx, dword ptr [ebp - 0x38]
        add    edi, 4
        shl    ebx, 1
        cmp    edi, 8
        mov    dword ptr [ebp - 0x4c], edi
        mov    dword ptr [ebp - 0x38], ebx
        jl    L_a12a
L_a193:
        mov    dword ptr [ebp - 0x44], eax
        mov    dword ptr [ebp - 0x4c], 0
        mov    edi, dword ptr [ebp - 0x44]
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
        mov    dword ptr [ebp - 0x4c], edx
        mov    ecx, dword ptr [ebp - 0xa8]
        mov    edx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp - 0x4c]
        inc    word ptr [ebp - 0x9c]
        mov    edi, dword ptr [ebp - 0x30]
        mov    ebx, dword ptr [ebp - 0x54]
        mov    dword ptr [ecx + edx*4], eax
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ebp - 0x7c]
        jmp    L_a243
L_a23d:
        mov    ecx, dword ptr [ebp - 8]
        mov    edi, dword ptr [ebp - 0x30]
L_a243:
        mov    eax, edx
        mov    edx, dword ptr [ebp - 0x78]
        add    edx, 4
        add    ebx, 8
        add    esi, 0x10
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x78], edx
        mov    dword ptr [ebp - 0x54], ebx
        jl    L_9ccf
L_a262:
        mov    ecx, dword ptr [g_007da66c]
        lea    eax, [edi + edi*2]
        shl    eax, 4
        mov    edx, dword ptr [eax + ecx]
        add    eax, ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    dword ptr [ebp - 0x98], edx
        mov    edx, dword ptr [eax + 0x18]
        mov    eax, dword ptr [ebp - 0x10]
        mov    dword ptr [ebp - 0x8c], edx
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x13]
        test    dl, dl
        mov    dword ptr [ebp - 0x90], ecx
        jbe    L_a2de
        mov    esi, edx
        xor    eax, eax
        and    esi, 0xff
        mov    dword ptr [ebp - 0x2c], 1
        mov    dword ptr [ebp - 0xc], esi
        lea    ecx, [ebp - 0x88]
L_a2b1:
        mov    ebx, dword ptr [ebp - 0x2c]
        test    esi, ebx
        je    L_a2cd
        mov    ebx, dword ptr [g_007da66c]
        lea    esi, [edi + edi*2]
        lea    esi, [eax + esi*2]
        mov    esi, dword ptr [ebx + esi*8 + 0x20]
        mov    dword ptr [ecx], esi
        mov    esi, dword ptr [ebp - 0xc]
L_a2cd:
        mov    ebx, dword ptr [ebp - 0x2c]
        inc    eax
        shl    ebx, 1
        add    ecx, 4
        cmp    eax, 2
        mov    dword ptr [ebp - 0x2c], ebx
        jl    L_a2b1
L_a2de:
        mov    cx, word ptr [ebp - 0x9c]
        xor    eax, eax
        test    edi, edi
        sete    al
        mov    word ptr [ebp - 0x80], cx
        mov    edi, eax
        mov    eax, dword ptr [g_007da66c]
        lea    ecx, [edi + edi*2]
        shl    ecx, 4
        add    eax, ecx
        test    dl, dl
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xb4], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x30], edi
        mov    dword ptr [ebp - 0xac], ecx
        mov    dword ptr [ebp - 0xa8], eax
        jbe    L_a35a
        xor    eax, eax
        and    edx, 0xff
        mov    esi, 1
        mov    dword ptr [ebp - 0xc], edx
        lea    ecx, [ebp - 0xa4]
L_a336:
        test    edx, esi
        je    L_a34f
        mov    ebx, dword ptr [g_007da66c]
        lea    edx, [edi + edi*2]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [ebx + edx*8 + 0x20]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [ebp - 0xc]
L_a34f:
        inc    eax
        add    ecx, 4
        shl    esi, 1
        cmp    eax, 2
        jl    L_a336
L_a35a:
        mov    ebx, dword ptr [ebp - 0x80]
        mov    esi, dword ptr [ebp - 0x8c]
        mov    word ptr [ebp - 0x9c], 0
L_a36c:
        mov    eax, dword ptr [ebp - 0x34]
        mov    edx, dword ptr [ebp - 0x74]
        mov    ecx, dword ptr [ebp + 8]
        shl    eax, 1
        mov    dword ptr [ebp - 0x34], eax
        mov    eax, dword ptr [ebp - 0x40]
        inc    edx
        add    ecx, 8
        dec    eax
        mov    dword ptr [ebp - 0x74], edx
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x40], eax
        jne    L_9c95
        mov    edx, ebx
        xor    eax, eax
        and    edx, 0xffff
        jle    L_a3a7
        mov    ecx, esi
L_a39f:
        or    eax, dword ptr [ecx]
        add    ecx, 4
        dec    edx
        jne    L_a39f
L_a3a7:
        test    eax, eax
        mov    dword ptr [g_007d98f0], eax
        je    L_a3c9
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, ecx
        dec    ecx
        test    edx, edx
        mov    dword ptr [ebp - 0x18], ecx
        jne    L_9c80
        test    eax, eax
        jne    L_a4f5
L_a3c9:
        xor    edi, edi
        mov    eax, ebx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x1c], edi
        mov    dword ptr [ebp - 8], eax
        jle    L_a4c4
        mov    eax, dword ptr [ebp - 0x10]
        mov    cl, byte ptr [eax + 0x13]
        mov    edx, dword ptr [g_007da680]
        mov    eax, dword ptr [ebp - 0x64]
        mov    edx, dword ptr [edx]
        mov    esi, dword ptr [ebp - 0x98]
        mov    ebx, dword ptr [g_007da684]
        lea    edx, [edx + eax*8]
        mov    byte ptr [ebp - 0x50], cl
        mov    ecx, dword ptr [ebp - 0x90]
        shl    eax, 4
        add    esi, 8
        add    eax, dword ptr [ebx]
        mov    dword ptr [ebp - 0x40], ecx
        mov    dword ptr [ebp - 0x18], edx
L_a415:
        mov    ebx, dword ptr [ebp - 0x64]
        add    ebx, edi
        mov    dword ptr [ebp - 0x44], ebx
        mov    ebx, dword ptr [esi - 8]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [esi - 4]
        mov    dword ptr [eax + 4], ebx
        mov    ebx, dword ptr [esi]
        mov    dword ptr [eax + 8], ebx
        mov    ebx, dword ptr [esi + 4]
        mov    dword ptr [eax + 0xc], ebx
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [edx], ebx
        mov    ebx, dword ptr [ecx + 4]
        mov    dword ptr [edx + 4], ebx
        mov    ebx, dword ptr [ebp - 0x50]
        test    bl, bl
        jbe    L_a4a0
        mov    ecx, ebx
        and    ecx, 0xff
        lea    ebx, [ebp - 0x88]
        mov    dword ptr [ebp - 0x30], 1
        mov    dword ptr [ebp - 0xc], ecx
        mov    edx, 0x7da660
        mov    dword ptr [ebp + 8], ebx
L_a464:
        mov    ebx, dword ptr [ebp - 0x30]
        test    ecx, ebx
        je    L_a483
        mov    ecx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ecx]
        mov    cl, byte ptr [edi + ecx]
        mov    ebx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x44]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + edi], cl
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [ebp - 0x1c]
L_a483:
        add    dword ptr [ebp + 8], 4
        mov    ebx, dword ptr [ebp - 0x30]
        add    edx, 8
        shl    ebx, 1
        cmp    edx, 0x7da670
        mov    dword ptr [ebp - 0x30], ebx
        jl    L_a464
        mov    edx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ebp - 0x40]
L_a4a0:
        mov    ebx, dword ptr [ebp - 8]
        inc    edi
        add    edx, 8
        add    ecx, 8
        add    eax, 0x10
        add    esi, 0x10
        cmp    edi, ebx
        mov    dword ptr [ebp - 0x1c], edi
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [ebp - 0x40], ecx
        jl    L_a415
        mov    ebx, dword ptr [ebp - 0x80]
L_a4c4:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x28]
        mov    dx, word ptr [ebp - 0x80]
        mov    edi, ebx
        mov    word ptr [eax + ecx*2], dx
L_a4d9:
        mov    edx, dword ptr [ebp - 0x64]
        mov    ecx, dword ptr [ebp - 0x28]
        mov    eax, dword ptr [ebp - 0x5c]
        and    edi, 0xffff
        add    edx, edi
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x64], edx
        mov    dword ptr [ebp - 0x28], ecx
        mov    dword ptr [ebp - 0x5c], eax
L_a4f5:
        mov    eax, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x20]
        mov    byte ptr [ecx + edx], 0
L_a503:
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ecx + 0x58]
        add    edi, 3
        inc    eax
        cmp    eax, edx
        mov    dword ptr [ebp - 0x14], edi
        mov    dword ptr [ebp - 0x20], eax
        jl    L_9442
        mov    edi, ecx
L_a523:
        mov    dl, byte ptr [ebp + 0x1c]
        test    dl, dl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_a532
        mov    eax, dword ptr [ecx + 0x30]
        jmp    L_a53c
L_a532:
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ecx + 0x10]
        shl    eax, 5
        add    eax, esi
L_a53c:
        xor    esi, esi
        test    dl, dl
        mov    dword ptr [edi + 0x44], eax
        mov    word ptr [edi + 0xa], si
        je    L_a54e
        mov    eax, dword ptr [ecx + 0x48]
        jmp    L_a557
L_a54e:
        mov    edx, dword ptr [ecx + 0xc]
        mov    eax, dword ptr [ecx + 0x28]
        lea    eax, [eax + edx*2]
L_a557:
        mov    dword ptr [edi + 0x50], eax
        mov    word ptr [edi + 0x54], si
        mov    ecx, dword ptr [edi + 0x18]
        xor    eax, eax
        cmp    ecx, esi
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp + 8], esi
        jle    L_a6a3
L_a574:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + eax], 0
        jne    L_a58a
        inc    dword ptr [ebp + 8]
        jmp    L_a697
L_a58a:
        mov    eax, dword ptr [ebp - 0x14]
        mov    esi, dword ptr [ebp + 8]
        mov    ebx, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [g_007da5f4]
        mov    ecx, eax
        sub    ecx, esi
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    word ptr [edx + eax*2], cx
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebx + 0x44]
        mov    eax, dword ptr [ebx + 0x1c]
        mov    dword ptr [ebp - 0x68], eax
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x70], edx
        mov    dword ptr [ebp - 0x44], esi
        mov    ecx, dword ptr [ebp - 0x70]
        fld1    
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x44]
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
        mov    eax, dword ptr [g_007b94a0]
        mov    ecx, dword ptr [ebp - 0x68]
        mov    dword ptr [esi + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov    eax, dword ptr [ebp - 0x14]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        mov    edx, dword ptr [ecx + eax*8]
        mov    dword ptr [esi + 0x18], edx
        mov    eax, dword ptr [ecx + eax*8 + 4]
        mov    dword ptr [esi + 0x1c], eax
        test    byte ptr [ebx + 0x13], 1
        je    L_a651
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebx + 0x44]
        mov    dl, byte ptr [edx + esi]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        mov    byte ptr [eax + ecx + 0x17], dl
L_a651:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_a68a
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x6c]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        xor    edx, edx
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x18]
        lea    eax, [eax + ecx + 0x18]
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x58]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x1c]
        lea    eax, [edx + eax + 0x1c]
        fstp    dword ptr [eax]
L_a68a:
        inc    word ptr [ebx + 0xa]
        mov    edi, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    eax, dword ptr [ebp - 0x14]
L_a697:
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x14], eax
        jl    L_a574
L_a6a3:
        mov    edx, dword ptr [edi + 0x58]
        xor    ecx, ecx
        xor    eax, eax
        test    edx, edx
        mov    dword ptr [ebp - 0x20], ecx
        jle    L_a73e
L_a6b5:
        mov    edx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + ecx], 0
        je    L_a72c
        mov    ecx, dword ptr [edi + 0x48]
        mov    ebx, dword ptr [g_007da5f4]
        mov    esi, dword ptr [edi + 0x50]
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        xor    ecx, ecx
        mov    cx, word ptr [edi + 0x54]
        mov    dx, word ptr [ebx + edx*2]
        mov    word ptr [esi + ecx*2], dx
        mov    ecx, dword ptr [edi + 0x48]
        mov    ebx, dword ptr [g_007da5f4]
        mov    esi, dword ptr [edi + 0x50]
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax + 2]
        xor    ecx, ecx
        mov    cx, word ptr [edi + 0x54]
        mov    dx, word ptr [ebx + edx*2]
        mov    word ptr [esi + ecx*2 + 2], dx
        mov    ecx, dword ptr [edi + 0x48]
        mov    ebx, dword ptr [g_007da5f4]
        mov    esi, dword ptr [edi + 0x50]
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax + 1]
        xor    ecx, ecx
        mov    cx, word ptr [edi + 0x54]
        mov    dx, word ptr [ebx + edx*2]
        mov    word ptr [esi + ecx*2 + 4], dx
        add    word ptr [edi + 0x54], 3
        mov    ecx, dword ptr [ebp - 0x20]
L_a72c:
        mov    edx, dword ptr [edi + 0x58]
        add    eax, 3
        inc    ecx
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x20], ecx
        jl    L_a6b5
L_a73e:
        mov    eax, dword ptr [ebp - 0x28]
        test    eax, eax
        jle    L_aa8a
        mov    ecx, dword ptr [ebp - 0x28]
        xor    eax, eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebp - 0x14], eax
        jle    L_aa8a
L_a75c:
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x20]
        mov    ax, word ptr [ecx + edx*2]
        mov    dword ptr [ebp - 0x1c], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x18], eax
        dec    eax
        cmp    eax, 1
        jle    L_aa6d
        mov    eax, dword ptr [ebp - 0x14]
        mov    ebx, dword ptr [ebp - 0x10]
        lea    ecx, [eax*8 + 8]
        mov    dword ptr [ebp + 8], ecx
L_a793:
        mov    edx, dword ptr [g_007da680]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [g_007da684]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x1c]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0xb8], eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 0xbc], edx
        lea    edx, [eax + ecx]
        lea    eax, [eax + ecx + 1]
        mov    ecx, dword ptr [ebx + 0x44]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x44], edx
        mov    dword ptr [ebp - 0x70], eax
        mov    dword ptr [ebp - 0x68], esi
        mov    ecx, dword ptr [ebp - 0xbc]
        fld1    
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x68]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x70]
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
        mov    eax, dword ptr [ebp - 0x44]
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
        mov    eax, dword ptr [g_007b94a0]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    dword ptr [esi + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x30], eax
        mov    dword ptr [esi + 0x50], eax
        mov    eax, dword ptr [ebp - 0xb8]
        fstp    dword ptr [esi]
        mov    edx, dword ptr [eax + ecx*8]
        fld    dword ptr [g_007da878]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        fmul    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi + 0x1c], ecx
        mov    ecx, dword ptr [ebp + 8]
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [eax + ecx + 8]
        mov    dword ptr [esi + 0x38], edx
        mov    edx, dword ptr [eax + ecx + 0xc]
        fstp    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x3c], edx
        fld    dword ptr [g_007da87c]
        mov    edx, dword ptr [eax + ecx]
        fmul    dword ptr [esi + 0x20]
        mov    eax, dword ptr [eax + ecx + 4]
        mov    dword ptr [esi + 0x5c], eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, 1
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x58], edx
        fstp    dword ptr [esi + 0x20]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x24]
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
        je    L_a968
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0x14]
        mov    dl, byte ptr [edx + esi]
        mov    ecx, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        mov    byte ptr [eax + ecx + 0x17], dl
        mov    eax, dword ptr [g_007da660]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    edi, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        add    edx, ecx
        mov    dl, byte ptr [edx + esi + 1]
        shl    eax, 5
        mov    byte ptr [eax + edi + 0x37], dl
        mov    eax, dword ptr [g_007da660]
        mov    edx, dword ptr [eax]
        mov    edi, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        add    edx, ecx
        mov    dl, byte ptr [edx + esi]
        shl    eax, 5
        mov    byte ptr [eax + edi + 0x57], dl
        jmp    L_a96b
L_a968:
        mov    ecx, dword ptr [ebp - 0x1c]
L_a96b:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_aa0c
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x6c]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + edx + 0x18]
        lea    eax, [eax + edx + 0x18]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x58]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + edx + 0x1c]
        lea    eax, [eax + edx + 0x1c]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x6c]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + edx + 0x38]
        lea    eax, [eax + edx + 0x38]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x58]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + edx + 0x3c]
        lea    eax, [eax + edx + 0x3c]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x6c]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + edx + 0x58]
        lea    eax, [eax + edx + 0x58]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x58]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + edx + 0x5c]
        lea    eax, [eax + edx + 0x5c]
        fstp    dword ptr [eax]
L_aa0c:
        mov    si, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0x54]
        mov    word ptr [edx + eax*2], si
        mov    ax, word ptr [ebx + 0xa]
        mov    esi, dword ptr [ebx + 0x50]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0x54]
        inc    ax
        mov    word ptr [esi + edx*2 + 2], ax
        mov    ax, word ptr [ebx + 0xa]
        mov    esi, dword ptr [ebx + 0x50]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0x54]
        add    ax, 2
        mov    word ptr [esi + edx*2 + 4], ax
        mov    esi, dword ptr [ebp + 8]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        mov    eax, dword ptr [ebp - 0x18]
        inc    ecx
        add    esi, 8
        dec    eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp + 8], esi
        jl    L_a793
L_aa6d:
        mov    ecx, dword ptr [ebp - 0x18]
        mov    esi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x20]
        add    esi, ecx
        mov    ecx, dword ptr [ebp - 0x28]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x14], esi
        mov    dword ptr [ebp - 0x20], eax
        jl    L_a75c
L_aa8a:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_aab3
        mov    ecx, dword ptr [ebp - 0x10]
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
        mov    dword ptr [eax + 0xc], esi
        jmp    L_aab6
L_aab3:
        mov    ecx, dword ptr [ebp - 0x10]
L_aab6:
        cmp    word ptr [ecx + 0xa], 0
        pop    esi
        setne    al
        pop    ebx
        mov    byte ptr [ecx + 0x10], al
        mov    eax, dword ptr [ebp - 0x5c]
        pop    edi
        mov    esp, ebp
        pop    ebp
        ret    0x18
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x0045AAD0 (6 relocated pointers)
        __emit 0x80
        __emit 0x96
        __emit 0x45
        __emit 0x00
        __emit 0xAF
        __emit 0x96
        __emit 0x45
        __emit 0x00
        __emit 0xB7
        __emit 0x96
        __emit 0x45
        __emit 0x00
        __emit 0xC3
        __emit 0x96
        __emit 0x45
        __emit 0x00
        __emit 0xC9
        __emit 0x96
        __emit 0x45
        __emit 0x00
        __emit 0xD1
        __emit 0x96
        __emit 0x45
        __emit 0x00
        // jump-table data @ 0x0045AAE8 (6 relocated pointers)
        __emit 0x22
        __emit 0x97
        __emit 0x45
        __emit 0x00
        __emit 0x4A
        __emit 0x97
        __emit 0x45
        __emit 0x00
        __emit 0x52
        __emit 0x97
        __emit 0x45
        __emit 0x00
        __emit 0x5E
        __emit 0x97
        __emit 0x45
        __emit 0x00
        __emit 0x64
        __emit 0x97
        __emit 0x45
        __emit 0x00
        __emit 0x6C
        __emit 0x97
        __emit 0x45
        __emit 0x00
        // jump-table data @ 0x0045AB00 (6 relocated pointers)
        __emit 0xE7
        __emit 0x9D
        __emit 0x45
        __emit 0x00
        __emit 0x3B
        __emit 0x9E
        __emit 0x45
        __emit 0x00
        __emit 0x43
        __emit 0x9E
        __emit 0x45
        __emit 0x00
        __emit 0x6A
        __emit 0x9E
        __emit 0x45
        __emit 0x00
        __emit 0x71
        __emit 0x9E
        __emit 0x45
        __emit 0x00
        __emit 0x78
        __emit 0x9E
        __emit 0x45
        __emit 0x00
        // jump-table data @ 0x0045AB18 (14 relocated pointers)
        __emit 0x2A
        __emit 0x9E
        __emit 0x45
        __emit 0x00
        __emit 0xEB
        __emit 0x9F
        __emit 0x45
        __emit 0x00
        __emit 0xF3
        __emit 0x9F
        __emit 0x45
        __emit 0x00
        __emit 0x1A
        __emit 0xA0
        __emit 0x45
        __emit 0x00
        __emit 0x21
        __emit 0xA0
        __emit 0x45
        __emit 0x00
        __emit 0x28
        __emit 0xA0
        __emit 0x45
        __emit 0x00
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x08
        __emit 0x85
        __emit 0xC0
        __emit 0x53
        __emit 0x8B
        __emit 0xD9
        __emit 0x7E
        __emit 0x41
        __emit 0x55
        __emit 0x56
        __emit 0x57
        __emit 0x8B
        __emit 0x7C
        __emit 0x24
        __emit 0x14
        __emit 0x8B
        __emit 0xE8
        __emit 0x8B
        __emit 0x37
        __emit 0xD9
        __emit 0x46
        __emit 0x08
        __emit 0xD8
        __emit 0x1D
        __emit 0x50
        __emit 0x95
        __emit 0x7B
        __emit 0x00
        __emit 0xDF
    }
}
