/*
 * FUN_00462000 (extent 0x462000-0x464288) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_0076edfc;
extern float  g_0076ee00;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007d991c;
extern int    g_007d9920;
extern int    g_007d9924;
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
extern void __cdecl FUN_00465820(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00462000(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1d4
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0xa4]
        test    eax, eax
        push    esi
        push    edi
        mov    dword ptr [ebp - 0x1c], ebx
        jne    L_204b
        mov    eax, dword ptr [ebp + 0x1c]
        mov    ecx, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp + 0x14]
        push    eax
        mov    eax, dword ptr [ebp + 0x10]
        push    ecx
        push    edx
        push    eax
        push    ecx
        lea    edx, [ebp + 0xc]
        mov    ecx, esp
        push    edx
        call    FUN_00423e00
        mov    eax, dword ptr [ebp + 8]
        push    eax
        mov    ecx, ebx
        call    FUN_00465820
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_204b:
        mov    eax, dword ptr [ebx + 0x64]
        test    eax, eax
        mov    dword ptr [ebp - 0x84], 0
        ja    L_206b
        mov    byte ptr [ebx + 0x10], 0
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_206b:
        cmp    word ptr [ebx + 0x56], 0
        mov    ecx, dword ptr [ebx + 0x18]
        mov    dword ptr [ebp - 0x58], ecx
        jne    L_2082
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 0x98]
L_2082:
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    esi, dword ptr [ebx + 0x14]
        mov    dword ptr [ebp + 0x18], ecx
        mov    ecx, dword ptr [g_007da600]
        mov    edi, dword ptr [ecx]
        mov    dword ptr [ebp - 8], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp - 0x18], edi
        je    L_211c
        mov    eax, dword ptr [ebp - 0x58]
        test    eax, eax
        mov    dword ptr [ebp - 0x20], 0
        jle    L_215e
L_20be:
        cmp    byte ptr [edi], 0
        je    L_20f3
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp - 0x18]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    esi
        mov    byte ptr [edx], 0
        call    FUN_0041cb30
        mov    edx, dword ptr [g_007da65c]
        mov    edi, dword ptr [edx]
        add    edi, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [edi], al
        mov    edi, dword ptr [ebp - 0x18]
L_20f3:
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp + 0x18]
        add    ecx, 4
        inc    eax
        add    edx, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 8], ecx
        mov    ecx, dword ptr [ebp - 0x58]
        inc    edi
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebp + 0x18], edx
        mov    dword ptr [ebp - 0x18], edi
        jl    L_20be
        jmp    L_215e
L_211c:
        mov    eax, dword ptr [ebp - 0x58]
        test    eax, eax
        jle    L_215e
        mov    dword ptr [ebp + 0x14], eax
L_2126:
        cmp    byte ptr [edi], 0
        je    L_213f
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    esi
        mov    byte ptr [edi], 0
        call    FUN_0041cb30
L_213f:
        mov    eax, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp - 8]
        add    eax, 0x10
        mov    dword ptr [ebp + 0x18], eax
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        inc    edi
        dec    eax
        mov    dword ptr [ebp - 8], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_2126
L_215e:
        mov    eax, dword ptr [ebx + 0x24]
        and    eax, 0x3fff
        mov    edx, dword ptr [ebx + 0x64]
        mov    dword ptr [ebp - 0x80], 0
        mov    dword ptr [ebp + 0x18], 0
        mov    dword ptr [ebp - 0x58], edx
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x7c], 0
        mov    dword ptr [ebp - 0x74], 0
        je    L_2250
        test    eax, eax
        jle    L_2250
        mov    ecx, dword ptr [g_007da848]
        mov    esi, dword ptr [ecx + eax*4 + 0x24]
        test    esi, esi
        je    L_2250
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_21cf
        mov    dword ptr [g_007da864], 1
        jmp    L_222a
L_21cf:
        cmp    eax, 0x80
        jl    L_21e2
        mov    dword ptr [g_007da864], 2
        jmp    L_222a
L_21e2:
        cmp    eax, 0x40
        jl    L_21f3
        mov    dword ptr [g_007da864], 4
        jmp    L_222a
L_21f3:
        cmp    eax, 0x20
        jl    L_2204
        mov    dword ptr [g_007da864], 8
        jmp    L_222a
L_2204:
        cmp    eax, 0x10
        jl    L_2215
        mov    dword ptr [g_007da864], 0x10
        jmp    L_222a
L_2215:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_222a:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_22c4
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_22c4
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x7c], edx
        mov    dword ptr [ebp - 0x74], eax
L_2250:
        xor    eax, eax
        cmp    word ptr [ebx + 0x56], ax
        mov    dword ptr [ebp - 0x88], eax
        mov    dword ptr [ebp - 0x70], eax
        jne    L_226b
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 0x98]
L_226b:
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
        mov    eax, dword ptr [ebp - 0x58]
        xor    edx, edx
        xor    ecx, ecx
        test    eax, eax
        mov    dword ptr [ebp - 0x20], edx
        mov    dword ptr [ebp - 0xc], ecx
        jle    L_3bf2
L_229b:
        mov    esi, dword ptr [g_007da5e8]
        mov    eax, dword ptr [ebx + 0x60]
        mov    esi, dword ptr [esi]
        movzx    ax, byte ptr [eax + edx]
        add    edx, esi
        cmp    byte ptr [edx], 0
        mov    dword ptr [ebp - 0x2c], edx
        jne    L_22ca
        and    eax, 0xffff
        add    ecx, eax
        mov    dword ptr [ebp - 0xc], ecx
        jmp    L_3be0
L_22c4:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_2250
L_22ca:
        and    eax, 0xffff
        lea    esi, [eax + ecx]
        xor    edi, edi
        cmp    ecx, esi
        mov    dword ptr [g_007d9924], 0x3f
        mov    dword ptr [g_007d9920], edi
        mov    dword ptr [ebp - 0x64], esi
        mov    eax, ecx
        jge    L_232f
        mov    ecx, dword ptr [g_007da688]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebx + 0x48]
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x68], ecx
L_22fe:
        mov    ecx, dword ptr [ebp - 0x68]
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        mov    ecx, dword ptr [ebp + 8]
        or    edi, dword ptr [ecx + edx*4]
        lea    edx, [ecx + edx*4]
        mov    ecx, dword ptr [g_007d9924]
        and    ecx, dword ptr [edx]
        inc    eax
        cmp    eax, esi
        mov    dword ptr [g_007d9924], ecx
        jl    L_22fe
        test    ecx, ecx
        mov    dword ptr [g_007d9920], edi
        je    L_2337
        mov    edx, dword ptr [ebp - 0x2c]
L_232f:
        mov    byte ptr [edx], 0
        jmp    L_3bd4
L_2337:
        test    edi, edi
        jne    L_236d
        mov    eax, dword ptr [ebp - 0x84]
        mov    ecx, dword ptr [ebp - 0x1c]
        inc    eax
        mov    dword ptr [ebp - 0x84], eax
        mov    eax, dword ptr [ebp - 0xc]
L_234e:
        mov    edx, dword ptr [ecx + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + eax]
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        inc    eax
        mov    byte ptr [ebx + edx], 1
        cmp    eax, dword ptr [ebp - 0x64]
        jl    L_234e
        jmp    L_3bd4
L_236d:
        mov    eax, dword ptr [edi*4 + 0x7b2478]
        mov    ecx, 1
        cmp    eax, ecx
        mov    dword ptr [ebp - 8], 0
        jne    L_2e0a
        mov    ecx, dword ptr [ebp - 0xc]
L_238b:
        mov    eax, dword ptr [ebx + 0x48]
        xor    edx, edx
        mov    dl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0x54], ecx
        mov    esi, ecx
        mov    edi, edx
        jl    L_23a2
        mov    esi, dword ptr [ebp - 0xc]
L_23a2:
        mov    edx, dword ptr [ebp - 0x88]
        xor    ecx, ecx
        mov    cl, byte ptr [eax + esi]
        mov    esi, dword ptr [ebp - 8]
        and    esi, 0xffff
        add    esi, edx
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [eax + edi*4]
        test    edx, edx
        mov    dword ptr [ebp - 0x10], ecx
        mov    dword ptr [ebp - 0x14], esi
        mov    dword ptr [g_007d991c], edx
        jne    L_248b
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
        mov    edx, dword ptr [g_007da608]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebx + 0xa0]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [ebx + 0x1c]
        mov    dword ptr [eax + esi*4], ecx
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [edx + edi*8]
        mov    edx, dword ptr [edx + edi*8 + 4]
        mov    dword ptr [ecx + esi*8], eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        mov    dword ptr [ecx + esi*8 + 4], edx
        jbe    L_2459
        test    al, 1
        je    L_2459
        mov    eax, dword ptr [g_007da65c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da660]
        mov    eax, dword ptr [edx]
        mov    cl, byte ptr [ecx + edi]
        mov    byte ptr [esi + eax], cl
L_2459:
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        inc    ecx
        mov    dword ptr [ebp - 8], ecx
        lea    ecx, [edx*4]
        mov    edx, dword ptr [eax + ecx]
        inc    esi
        test    edx, edx
        mov    dword ptr [ebp - 0x14], esi
        mov    dword ptr [ebp - 0x18], ecx
        je    L_2de4
        mov    edx, dword ptr [g_007d991c]
        jmp    L_24a2
L_248b:
        mov    ecx, dword ptr [ebp - 0x10]
        shl    ecx, 2
        cmp    dword ptr [eax + ecx], 0
        mov    byte ptr [ebp + 0xb], 0
        mov    dword ptr [ebp - 0x18], ecx
        jne    L_2de4
L_24a2:
        or    edx, dword ptr [eax + ecx]
        mov    dword ptr [ebp - 4], 1
        mov    eax, dword ptr [ebp - 4]
        mov    dword ptr [g_007d991c], edx
        xor    ebx, ebx
L_24b7:
        test    eax, edx
        jne    L_24c9
        shl    eax, 1
        inc    ebx
        cmp    bx, 6
        jb    L_24b7
        jmp    L_2624
L_24c9:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_2579
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
        ja    L_255b
        jmp    dword ptr [ebx*4 + 0x464288]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_2508:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_2614
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp + 0x18], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_2621
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_2508
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_2508
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_2508
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_2508
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_2508
L_255b:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_25c0
        int 3    
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_2621
L_2579:
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
        ja    L_25f9
        jmp    dword ptr [ebx*4 + 0x4642a0]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_25ad:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_2614
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_25c0:
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_2621
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_25ad
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_25ad
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_25ad
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_25ad
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_25ad
L_25f9:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_25c0
        int 3    
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_2621
L_2614:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_2621:
        mov    dword ptr [ebp - 0x80], ebx
L_2624:
        cmp    byte ptr [ebp + 0xb], 1
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        jne    L_2a0b
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
        mov    eax, dword ptr [ebp - 0x80]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_26a5
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_26ab
L_26a5:
        fld    dword ptr [g_007b220c]
L_26ab:
        mov    ecx, dword ptr [ebp - 0x80]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ecx + 0xa0]
        mov    edx, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [ecx + edx]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x15c], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x158], edx
        fild    qword ptr [ebp - 0x15c]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x164], esi
        fmul    dword ptr [g_0076ee00]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x160], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x12c]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x164]
        mov    dword ptr [ebp - 0x170], edx
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x174], esi
        fmul    dword ptr [g_0076ee00]
        mov    dword ptr [ebp - 0x184], ecx
        mov    dword ptr [ebp - 0x180], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x130]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x174]
        mov    dword ptr [ebp - 0x194], ecx
        mov    dword ptr [ebp - 0x190], edx
        shr    eax, 8
        fmul    dword ptr [g_0076ee00]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1a4], ecx
        fstp    dword ptr [ebp - 0x134]
        mov    dword ptr [ebp - 0x1a0], edx
        fild    qword ptr [ebp - 0x184]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076ee00]
        mov    dword ptr [ebp - 0x1b4], ecx
        mov    dword ptr [ebp - 0x1b0], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x128]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x194]
        mov    dword ptr [ebp - 0x1c4], eax
        mov    dword ptr [ebp - 0x1c0], edx
        mov    edx, dword ptr [ebp + 0x18]
        fmul    dword ptr [g_0076ee00]
        push    edx
        lea    eax, [ebp - 0x104]
        push    eax
        fstp    dword ptr [ebp - 0xfc]
        lea    ecx, [ebp - 0x134]
        fild    qword ptr [ebp - 0x1a4]
        push    ecx
        lea    ecx, [ebp - 0xe0]
        mov    dword ptr [ebp - 0xd8], 0xbf800000
        fmul    dword ptr [g_0076ee00]
        mov    dword ptr [ebp - 0xdc], 0xbf800000
        mov    dword ptr [ebp - 0xe0], 0xbf800000
        mov    dword ptr [ebp - 0xd4], 0xbf800000
        fstp    dword ptr [ebp - 0x100]
        fild    qword ptr [ebp - 0x1b4]
        fmul    dword ptr [g_0076ee00]
        fstp    dword ptr [ebp - 0x104]
        fild    qword ptr [ebp - 0x1c4]
        fmul    dword ptr [g_0076ee00]
        fstp    dword ptr [ebp - 0xf8]
        call    FUN_004286e0
        lea    edx, [ebp - 0xe0]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076edfc]
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
        mov    dword ptr [ebp - 0xc8], ebx
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
        mov    ecx, dword ptr [ebp - 0xc8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc8], ecx
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
        mov    ecx, dword ptr [ebp - 0xc8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc8], ecx
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
        mov    ecx, dword ptr [ebp - 0xc8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc8], ecx
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xc8]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    esi, dword ptr [ebp - 0x1c]
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
        jbe    L_2dda
        test    al, 1
        je    L_2dda
        mov    eax, dword ptr [g_007da65c]
        mov    eax, dword ptr [eax]
        mov    cl, byte ptr [eax + edi]
        xor    edx, edx
        mov    esi, ebx
        mov    dl, byte ptr [eax + esi]
        mov    eax, dword ptr [g_007da660]
        mov    byte ptr [ebp - 0xc4], cl
        mov    ecx, dword ptr [ebp - 0xc4]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x2c], ecx
        sub    edx, ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp + 8], edx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp + 0x18]
        fiadd    dword ptr [ebp - 0x2c]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
        jmp    L_2dd4
L_2a0b:
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
        mov    eax, dword ptr [ebp - 0x80]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_2a7a
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_2a80
L_2a7a:
        fld    dword ptr [g_007b220c]
L_2a80:
        mov    ecx, dword ptr [ebp - 0x80]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ecx + 0xa0]
        mov    eax, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [ebp - 0x18]
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
        fmul    dword ptr [g_0076ee00]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x148], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x11c]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x14c]
        mov    dword ptr [ebp - 0x1c8], edx
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1cc], esi
        fmul    dword ptr [g_0076ee00]
        mov    dword ptr [ebp - 0x13c], ecx
        mov    dword ptr [ebp - 0x138], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x120]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x1cc]
        mov    dword ptr [ebp - 0x19c], ecx
        mov    dword ptr [ebp - 0x198], edx
        shr    eax, 8
        fmul    dword ptr [g_0076ee00]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x16c], ecx
        fstp    dword ptr [ebp - 0x124]
        mov    dword ptr [ebp - 0x168], edx
        fild    qword ptr [ebp - 0x13c]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076ee00]
        mov    dword ptr [ebp - 0x1bc], ecx
        mov    dword ptr [ebp - 0x1b8], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x118]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x19c]
        mov    dword ptr [ebp - 0x17c], eax
        mov    dword ptr [ebp - 0x178], edx
        mov    edx, dword ptr [ebp + 0x18]
        fmul    dword ptr [g_0076ee00]
        push    edx
        lea    eax, [ebp - 0x114]
        push    eax
        fstp    dword ptr [ebp - 0x10c]
        lea    ecx, [ebp - 0x124]
        fild    qword ptr [ebp - 0x16c]
        push    ecx
        lea    ecx, [ebp - 0xf4]
        mov    dword ptr [ebp - 0xec], 0xbf800000
        fmul    dword ptr [g_0076ee00]
        mov    dword ptr [ebp - 0xf0], 0xbf800000
        mov    dword ptr [ebp - 0xf4], 0xbf800000
        mov    dword ptr [ebp - 0xe8], 0xbf800000
        fstp    dword ptr [ebp - 0x110]
        fild    qword ptr [ebp - 0x1bc]
        fmul    dword ptr [g_0076ee00]
        fstp    dword ptr [ebp - 0x114]
        fild    qword ptr [ebp - 0x17c]
        fmul    dword ptr [g_0076ee00]
        fstp    dword ptr [ebp - 0x108]
        call    FUN_004286e0
        lea    edx, [ebp - 0xf4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076edfc]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb8]
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
        fstp    dword ptr [ebp - 0xb8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb8]
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
        fstp    dword ptr [ebp - 0xb8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb8]
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
        fstp    dword ptr [ebp - 0xb8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb8]
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
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xcc]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    esi, dword ptr [ebp - 0x1c]
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
        jbe    L_2dda
        test    al, 1
        je    L_2dda
        mov    eax, dword ptr [g_007da65c]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    dl, byte ptr [eax + ecx]
        mov    byte ptr [ebp - 0xc0], dl
        mov    ecx, dword ptr [ebp - 0xc0]
        xor    edx, edx
        mov    dl, byte ptr [eax + edi]
        mov    eax, dword ptr [g_007da660]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x2c], ecx
        sub    edx, ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp + 8], edx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp + 0x18]
        fiadd    dword ptr [ebp - 0x2c]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
L_2dd4:
        mov    eax, dword ptr [ebp - 0x14]
        mov    byte ptr [eax + ecx], dl
L_2dda:
        mov    eax, dword ptr [ebp - 8]
        mov    ebx, dword ptr [ebp - 0x1c]
        inc    eax
        mov    dword ptr [ebp - 8], eax
L_2de4:
        mov    esi, dword ptr [ebp - 0x64]
        mov    ecx, dword ptr [ebp - 0x54]
        cmp    ecx, esi
        jl    L_238b
        mov    ecx, dword ptr [g_007da670]
        mov    edx, dword ptr [ecx]
        mov    ax, word ptr [ebp - 8]
        mov    ecx, dword ptr [ebp - 0x70]
        mov    word ptr [edx + ecx*2], ax
        jmp    L_3b9c
L_2e0a:
        mov    esi, dword ptr [g_007da66c]
        mov    eax, dword ptr [esi + 0x38]
        mov    edx, dword ptr [esi + 0x30]
        mov    dword ptr [ebp - 0x4c], eax
        mov    eax, dword ptr [esi + 0x40]
        mov    dword ptr [ebp - 0x48], eax
        mov    eax, dword ptr [esi + 0x48]
        mov    dword ptr [ebp - 0x44], eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        mov    dword ptr [ebp - 0x50], edx
        mov    byte ptr [ebp - 0xd0], al
        jbe    L_2e70
        mov    edi, eax
        and    edi, 0xff
        mov    dword ptr [ebp - 4], ecx
        lea    eax, [esi + 0x50]
        mov    dword ptr [ebp + 8], edi
        lea    ecx, [ebp - 0x40]
        mov    esi, 2
        jmp    L_2e53
L_2e50:
        mov    edi, dword ptr [ebp + 8]
L_2e53:
        test    dword ptr [ebp - 4], edi
        je    L_2e5f
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [ebp - 0x50]
L_2e5f:
        mov    edi, dword ptr [ebp - 4]
        shl    edi, 1
        add    eax, 8
        add    ecx, 4
        dec    esi
        mov    dword ptr [ebp - 4], edi
        jne    L_2e50
L_2e70:
        mov    eax, dword ptr [g_007da68c]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x2c], eax
        mov    eax, dword ptr [ebx + 0xa0]
        mov    dword ptr [ebp - 0xb4], eax
        mov    eax, dword ptr [ebx + 0x1c]
        mov    dword ptr [ebp - 0xb0], eax
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        xor    edi, edi
        mov    dword ptr [ebp - 0x28], ecx
        mov    dword ptr [ebp - 0x30], edi
        mov    dword ptr [ebp - 0x60], eax
        jmp    L_2ea9
L_2ea6:
        mov    edx, dword ptr [ebp - 0x50]
L_2ea9:
        mov    esi, dword ptr [ebp - 0x68]
        mov    ebx, dword ptr [ebp - 0x2c]
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
        mov    edx, dword ptr [ebp - 0xb4]
        mov    ecx, dword ptr [edx + esi*4]
        mov    edx, ecx
        and    edx, 0xff
        shr    ecx, 8
        mov    dword ptr [ebp - 0x1ac], edx
        fild    qword ptr [ebp - 0x1ac]
        mov    edx, dword ptr [ebp - 0x4c]
        mov    ebx, ecx
        and    ebx, 0xff
        fmul    dword ptr [g_0076ee00]
        shr    ecx, 8
        mov    dword ptr [ebp - 0x18c], ebx
        mov    ebx, ecx
        fstp    dword ptr [eax + edx + 8]
        and    ebx, 0xff
        fild    qword ptr [ebp - 0x18c]
        mov    dword ptr [ebp - 0x144], ebx
        xor    ebx, ebx
        mov    dword ptr [ebp - 0x140], ebx
        fmul    dword ptr [g_0076ee00]
        shr    ecx, 8
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x154], ecx
        mov    ecx, dword ptr [ebp - 0xb0]
        fstp    dword ptr [eax + edx + 4]
        fild    qword ptr [ebp - 0x144]
        mov    dword ptr [ebp - 0x150], ebx
        fmul    dword ptr [g_0076ee00]
        fstp    dword ptr [eax + edx]
        fild    qword ptr [ebp - 0x154]
        fmul    dword ptr [g_0076ee00]
        fstp    dword ptr [eax + edx + 0xc]
        mov    edx, dword ptr [ecx + esi*8]
        mov    eax, dword ptr [ebp - 0x48]
        mov    ecx, dword ptr [ecx + esi*8 + 4]
        mov    dword ptr [eax + edi*8], edx
        mov    edx, dword ptr [ebp - 0x60]
        mov    dword ptr [eax + edi*8 + 4], ecx
        mov    eax, dword ptr [edx + esi*4]
        mov    ecx, dword ptr [ebp - 0x44]
        mov    dword ptr [ecx + edi*4], eax
        mov    eax, dword ptr [ebp - 0xd0]
        test    al, al
        jbe    L_3006
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], edx
        lea    ecx, [ebp - 0x40]
        mov    eax, 0x7da65c
L_2fd5:
        test    dword ptr [ebp - 4], edx
        je    L_2fe9
        mov    edx, dword ptr [eax]
        mov    edx, dword ptr [edx]
        mov    dl, byte ptr [edx + esi]
        mov    ebx, dword ptr [ecx]
        mov    byte ptr [ebx + edi], dl
        mov    edx, dword ptr [ebp + 8]
L_2fe9:
        mov    ebx, dword ptr [ebp - 4]
        add    eax, 8
        shl    ebx, 1
        add    ecx, 4
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp - 4], ebx
        jl    L_2fd5
        mov    eax, dword ptr [ebp - 0xd0]
        xor    ebx, ebx
L_3006:
        mov    ecx, dword ptr [ebp - 0x28]
        mov    edi, dword ptr [ebp - 0x30]
        mov    edx, dword ptr [ebp - 0x64]
        inc    ecx
        inc    edi
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x28], ecx
        mov    dword ptr [ebp - 0x30], edi
        jl    L_2ea6
        test    al, al
        mov    ecx, dword ptr [g_007da66c]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0xac], edx
        mov    edx, dword ptr [ecx + 8]
        mov    dword ptr [ebp - 0xa8], edx
        mov    edx, dword ptr [ecx + 0x10]
        mov    dword ptr [ebp - 0xa4], edx
        mov    edx, dword ptr [ecx + 0x18]
        mov    word ptr [ebp - 0x38], di
        mov    dword ptr [ebp - 0x34], ebx
        mov    dword ptr [ebp - 0xa0], edx
        jbe    L_3084
        and    eax, 0xff
        mov    esi, 1
        mov    dword ptr [ebp + 8], eax
        lea    edx, [ebp - 0x9c]
        add    ecx, 0x20
        mov    edi, 2
L_306e:
        test    esi, eax
        je    L_3079
        mov    eax, dword ptr [ecx]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ebp + 8]
L_3079:
        add    ecx, 8
        add    edx, 4
        shl    esi, 1
        dec    edi
        jne    L_306e
L_3084:
        mov    esi, dword ptr [ebp - 0x38]
        mov    word ptr [ebp - 0x94], bx
        mov    ebx, dword ptr [ebp - 0x1c]
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp - 0x2c], 4
        xor    edi, edi
L_30a1:
        mov    dword ptr [ebp - 0x18], edi
        mov    dword ptr [ebp - 0x14], 0x7b2404
        mov    dword ptr [ebp - 0xb4], 6
L_30b5:
        mov    ecx, dword ptr [ebp - 4]
        test    dword ptr [g_007d9920], ecx
        je    L_38e1
        mov    dword ptr [ebp - 0x28], edi
        mov    edi, esi
        and    edi, 0xffff
        mov    dword ptr [ebp - 0x68], edi
        jle    L_37c6
        mov    eax, dword ptr [ebp - 0x44]
        mov    ecx, dword ptr [ebp - 0x50]
        mov    edx, dword ptr [ebp - 0x48]
        mov    dword ptr [ebp - 0x5c], eax
        mov    eax, dword ptr [ebp - 0x4c]
        lea    ebx, [eax + 0xc]
        sub    eax, ecx
        mov    dword ptr [ebp - 0x6c], edx
        mov    dword ptr [ebp - 0xb0], ebx
        lea    esi, [ecx + 8]
        mov    dword ptr [ebp - 0x30], eax
L_30fb:
        mov    ecx, dword ptr [ebp - 0x28]
        lea    eax, [ecx + 1]
        mov    ecx, dword ptr [ebp - 0x5c]
        mov    ecx, dword ptr [ecx]
        xor    edx, edx
        cmp    eax, edi
        mov    edi, dword ptr [ebp - 4]
        setge    dl
        mov    dword ptr [ebp - 0x54], eax
        mov    dword ptr [g_007d991c], ecx
        dec    edx
        and    edx, eax
        test    edi, ecx
        mov    dword ptr [ebp - 0x10], edx
        jne    L_323c
        mov    ecx, dword ptr [ebp - 0x94]
        mov    edi, dword ptr [esi - 8]
        mov    edx, dword ptr [ebp - 0xac]
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
        mov    edx, dword ptr [ebp - 0x5c]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0xa0]
        mov    dword ptr [edi + ecx*4], edx
        mov    edx, dword ptr [ebp - 0xa8]
        mov    edi, dword ptr [ebx - 0xc]
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [ebx - 8]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [ebp - 0x30]
        mov    edi, dword ptr [esi + edi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [ebx]
        mov    dword ptr [eax + edx + 0xc], edi
        mov    edx, dword ptr [ebp - 0x6c]
        mov    edi, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0xa4]
        mov    dword ptr [eax + ecx*8], edi
        mov    edx, dword ptr [edx + 4]
        mov    dword ptr [eax + ecx*8 + 4], edx
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0x1c]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_31f3
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 8], eax
L_31c1:
        test    dword ptr [ebp - 4], edx
        je    L_31e0
        mov    edx, dword ptr [ebp + eax - 0x40]
        mov    edi, dword ptr [ebp - 0x28]
        mov    eax, dword ptr [ebp + eax - 0x9c]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp - 8]
L_31e0:
        mov    edi, dword ptr [ebp - 4]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 4], edi
        jl    L_31c1
L_31f3:
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x44]
        mov    ecx, dword ptr [ebp - 4]
        mov    edx, dword ptr [eax + edi*4]
        inc    word ptr [ebp - 0x94]
        test    edx, ecx
        je    L_3797
        mov    eax, dword ptr [ebp - 0x14]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_32dc
        mov    edx, dword ptr [ebp - 0x18]
        jmp    dword ptr [edx*4 + 0x4642b8]
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x50]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi + 4]
        jmp    L_3298
L_323c:
        mov    ecx, dword ptr [ebp - 0x44]
        test    dword ptr [ecx + edx*4], edi
        jne    L_379a
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x14]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_350b
        mov    eax, dword ptr [ebp - 0x18]
        jmp    dword ptr [eax*4 + 0x4642d0]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_34c7
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [esi - 4]
        fld    dword ptr [edx + edi + 4]
        jmp    L_3298
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x50]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi]
L_3298:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_32fa
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp + 0x18], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_3307
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [esi - 8]
        fld    dword ptr [edx + edi]
        jmp    L_3298
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [esi]
        fld    dword ptr [edx + edi + 8]
        jmp    L_3298
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x50]
        fsub    dword ptr [esi]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi + 8]
        jmp    L_3298
L_32dc:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_32ee
        int 3    
L_32ee:
        mov    edx, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_3307
L_32fa:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_3307:
        fld    dword ptr [edx + edi]
        mov    ecx, dword ptr [ebp - 0x94]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0xac]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 8], ecx
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
        mov    edx, dword ptr [ebp - 0x14]
        cmp    dword ptr [edx + 4], 0
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_3371
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_3377
L_3371:
        fld    dword ptr [g_007b220c]
L_3377:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x4c]
        fld    dword ptr [edx + edi]
        mov    edx, dword ptr [ebp - 0xa8]
        fsub    dword ptr [ebx - 0xc]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ebx - 0xc]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x4c]
        fld    dword ptr [edx + edi + 4]
        mov    edx, dword ptr [ebp - 0xa8]
        fsub    dword ptr [ebx - 8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ebx - 8]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x4c]
        fld    dword ptr [edx + edi + 8]
        mov    edx, dword ptr [ebp - 0x30]
        fsub    dword ptr [esi + edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [esi + edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [ecx + edx + 8]
        mov    edx, dword ptr [ebp - 0x4c]
        fld    dword ptr [edx + edi + 0xc]
        mov    edx, dword ptr [ebp - 0xa8]
        fsub    dword ptr [ebx]
        mov    edi, dword ptr [ebp - 0xa4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp - 8]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x48]
        fld    dword ptr [ecx + edx*8]
        mov    ecx, dword ptr [ebp - 0x6c]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ecx]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x48]
        fld    dword ptr [ebx + edx*8 + 4]
        fsub    dword ptr [ecx + 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp - 8]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_36f0
        mov    edi, ecx
        and    edi, 0xff
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], edi
        xor    ecx, ecx
L_343d:
        test    dword ptr [ebp - 4], edi
        je    L_3496
        mov    edi, dword ptr [ebp + ecx - 0x40]
        mov    ebx, dword ptr [ebp - 0x28]
        mov    bl, byte ptr [edi + ebx]
        mov    byte ptr [ebp - 0xbc], bl
        mov    ebx, dword ptr [ebp - 0xbc]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x60], ebx
        xor    ebx, ebx
        mov    bl, byte ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x60]
        mov    edi, dword ptr [ebp - 8]
        sub    ebx, edx
        mov    edx, dword ptr [ebp + ecx - 0x9c]
        mov    dword ptr [ebp - 0x24], ebx
        fild    dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp + 0x18]
        fiadd    dword ptr [ebp - 0x60]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x24]
        mov    bl, byte ptr [ebp - 0x24]
        mov    byte ptr [edx + edi], bl
        mov    edi, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp - 0x10]
L_3496:
        mov    ebx, dword ptr [ebp - 4]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 4], ebx
        jl    L_343d
        jmp    L_36f0
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi + 4]
        fld    dword ptr [esi - 4]
        jmp    L_34c7
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_34c7:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_3529
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp + 0x18], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_3536
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi]
        fld    dword ptr [esi - 8]
        jmp    L_34c7
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi + 8]
        fld    dword ptr [esi]
        jmp    L_34c7
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_34c7
L_350b:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_351d
        int 3    
L_351d:
        mov    edx, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_3536
L_3529:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_3536:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x94]
        fsub    dword ptr [edx + edi]
        mov    eax, dword ptr [ebp - 0xac]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 8], ecx
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
        mov    edx, dword ptr [ebp - 0x50]
        lea    edx, [edx + edi + 8]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x50]
        lea    edx, [edx + edi + 0xc]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x14]
        cmp    dword ptr [edx + 4], 0
        fstp    dword ptr [eax + 0xc]
        je    L_35aa
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_35b0
L_35aa:
        fld    dword ptr [g_007b220c]
L_35b0:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x4c]
        fld    dword ptr [ebx - 0xc]
        fsub    dword ptr [edx + edi]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx + edi]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x4c]
        fld    dword ptr [ebx - 8]
        lea    edx, [edx + edi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x4c]
        lea    edx, [edx + edi + 8]
        mov    dword ptr [ebp + 8], edx
        mov    edx, dword ptr [ebp - 0x30]
        fld    dword ptr [esi + edx]
        mov    edx, dword ptr [ebp + 8]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [ecx + edx + 8]
        mov    edx, dword ptr [ebp - 0x4c]
        fld    dword ptr [ebx]
        lea    edi, [edx + edi + 0xc]
        fsub    dword ptr [edi]
        mov    edx, dword ptr [ebp - 0xa8]
        mov    ebx, dword ptr [ebp - 8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edi]
        mov    edi, dword ptr [ebp - 0xa4]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    ecx, dword ptr [ebp - 0x6c]
        fld    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x48]
        mov    edx, dword ptr [ebp - 0x10]
        fsub    dword ptr [ecx + edx*8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ecx + edx*8]
        lea    ecx, [ecx + edx*8 + 4]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x6c]
        fld    dword ptr [ebx + 4]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 8]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_36f0
        and    ecx, 0xff
        xor    edi, edi
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x10], edi
L_3683:
        test    dword ptr [ebp - 4], ecx
        je    L_36dd
        mov    edi, dword ptr [ebp + edi - 0x40]
        mov    cl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x28]
        mov    byte ptr [ebp - 0x90], cl
        mov    ecx, dword ptr [ebp - 0x90]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x60], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edi + ebx]
        sub    ecx, dword ptr [ebp - 0x60]
        mov    edi, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0x24], ecx
        fild    dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp + ecx - 0x9c]
        fmul    dword ptr [ebp + 0x18]
        fiadd    dword ptr [ebp - 0x60]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x24]
        mov    bl, byte ptr [ebp - 0x24]
        mov    byte ptr [ecx + edi], bl
        mov    edi, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp + 8]
L_36dd:
        mov    ebx, dword ptr [ebp - 4]
        add    edi, 4
        shl    ebx, 1
        cmp    edi, 8
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 4], ebx
        jl    L_3683
L_36f0:
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
        mov    eax, dword ptr [ebp - 0xa0]
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp - 8]
        inc    word ptr [ebp - 0x94]
        mov    ebx, dword ptr [ebp - 0xb0]
        mov    dword ptr [eax + ecx*4], edx
        mov    eax, dword ptr [ebp - 0x54]
        jmp    L_379a
L_3797:
        mov    eax, dword ptr [ebp - 0x54]
L_379a:
        mov    edx, dword ptr [ebp - 0x5c]
        mov    edi, dword ptr [ebp - 0x68]
        add    edx, 4
        mov    dword ptr [ebp - 0x5c], edx
        mov    edx, dword ptr [ebp - 0x6c]
        add    ebx, 0x10
        add    edx, 8
        add    esi, 0x10
        cmp    eax, edi
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp - 0xb0], ebx
        mov    dword ptr [ebp - 0x6c], edx
        jl    L_30fb
L_37c6:
        mov    esi, dword ptr [ebp - 0x34]
        mov    eax, dword ptr [g_007da66c]
        mov    ebx, dword ptr [ebp - 0x1c]
        lea    edx, [esi + esi*2]
        shl    edx, 4
        mov    ecx, dword ptr [eax + edx]
        add    eax, edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x4c], edx
        mov    edx, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x44], edx
        xor    edx, edx
        mov    dl, byte ptr [ebx + 0x13]
        test    dl, dl
        mov    dword ptr [ebp - 0x50], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    dword ptr [ebp - 0x48], ecx
        jbe    L_3842
        mov    esi, edx
        xor    eax, eax
        and    esi, 0xff
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], esi
        lea    ecx, [ebp - 0x40]
L_3811:
        test    dword ptr [ebp - 4], esi
        je    L_382e
        mov    esi, dword ptr [ebp - 0x34]
        mov    edi, dword ptr [g_007da66c]
        lea    esi, [esi + esi*2]
        lea    esi, [eax + esi*2]
        mov    esi, dword ptr [edi + esi*8 + 0x20]
        mov    dword ptr [ecx], esi
        mov    esi, dword ptr [ebp + 8]
L_382e:
        mov    edi, dword ptr [ebp - 4]
        inc    eax
        shl    edi, 1
        add    ecx, 4
        cmp    eax, 2
        mov    dword ptr [ebp - 4], edi
        jl    L_3811
        mov    esi, dword ptr [ebp - 0x34]
L_3842:
        mov    ax, word ptr [ebp - 0x94]
        xor    ecx, ecx
        test    esi, esi
        sete    cl
        mov    word ptr [ebp - 0x38], ax
        mov    edi, ecx
        mov    ecx, dword ptr [g_007da66c]
        lea    eax, [edi + edi*2]
        shl    eax, 4
        add    eax, ecx
        test    dl, dl
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xac], ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xa8], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x34], edi
        mov    dword ptr [ebp - 0xa4], ecx
        mov    dword ptr [ebp - 0xa0], eax
        jbe    L_38d3
        xor    eax, eax
        and    edx, 0xff
        mov    esi, 1
        mov    dword ptr [ebp + 8], edx
        lea    ecx, [ebp - 0x9c]
        jmp    L_38a9
L_38a6:
        mov    esi, dword ptr [ebp - 4]
L_38a9:
        test    esi, edx
        je    L_38c5
        lea    edx, [edi + edi*2]
        mov    edi, dword ptr [g_007da66c]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [edi + edx*8 + 0x20]
        mov    edi, dword ptr [ebp - 0x34]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [ebp + 8]
L_38c5:
        inc    eax
        shl    esi, 1
        add    ecx, 4
        cmp    eax, 2
        mov    dword ptr [ebp - 4], esi
        jl    L_38a6
L_38d3:
        mov    esi, dword ptr [ebp - 0x38]
        mov    word ptr [ebp - 0x94], 0
        xor    edi, edi
L_38e1:
        mov    eax, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ebp - 0x14]
        shl    eax, 1
        mov    dword ptr [ebp - 4], eax
        mov    eax, dword ptr [ebp - 0xb4]
        inc    edx
        add    ecx, 8
        dec    eax
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [ebp - 0x14], ecx
        mov    dword ptr [ebp - 0xb4], eax
        jne    L_30b5
        mov    edx, esi
        xor    eax, eax
        and    edx, 0xffff
        jle    L_394f
        mov    ecx, dword ptr [ebp - 0x44]
L_391b:
        or    eax, dword ptr [ecx]
        add    ecx, 4
        dec    edx
        jne    L_391b
        cmp    eax, edi
        je    L_394f
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    edx, ecx
        dec    ecx
        test    edx, edx
        mov    dword ptr [ebp - 0x2c], ecx
        jne    L_30a1
        cmp    eax, edi
        je    L_394f
        mov    eax, dword ptr [g_007da5e8]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x20]
        mov    byte ptr [ecx + edx], 0
        jmp    L_3bdd
L_394f:
        mov    eax, esi
        xor    edi, edi
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x68], eax
        jle    L_3b83
        mov    eax, dword ptr [ebp - 0x48]
        mov    ecx, dword ptr [ebp - 0x4c]
        mov    dword ptr [ebp - 0x14], eax
        mov    eax, dword ptr [ebp - 0x88]
        lea    edx, [eax*8]
        mov    dword ptr [ebp - 0x54], ecx
        mov    dword ptr [ebp - 0x34], edx
        mov    edx, dword ptr [ebp - 0x50]
        lea    ecx, [eax*4]
        shl    eax, 4
        mov    dword ptr [ebp - 0x18], ecx
        mov    dword ptr [ebp - 0x5c], eax
        add    edx, 8
L_3993:
        mov    eax, dword ptr [ebp - 0x88]
        lea    ecx, [edi + eax]
        mov    eax, dword ptr [ebp - 0x5c]
        mov    dword ptr [ebp - 0x24], ecx
        mov    ecx, dword ptr [g_007da684]
        mov    ebx, dword ptr [ecx]
        mov    ecx, dword ptr [edx - 8]
        add    eax, ebx
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [edx - 4]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [edx]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [edx + 4]
        mov    dword ptr [eax + 0xc], ecx
        mov    eax, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp + 8], eax
        fld    dword ptr [g_0076edfc]
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
        mov    dword ptr [ebp - 0x78], ebx
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
        mov    ecx, dword ptr [ebp - 0x78]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x78], ecx
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
        mov    ecx, dword ptr [ebp - 0x78]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x78], ecx
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
        mov    ecx, dword ptr [ebp - 0x78]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x78], ecx
        mov    ecx, dword ptr [g_007da608]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x78]
        mov    esi, dword ptr [ebp - 0x18]
        mov    dword ptr [esi + eax], ecx
        mov    eax, dword ptr [g_007da680]
        mov    esi, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x34]
        mov    eax, dword ptr [ebp - 0x14]
        add    ecx, esi
        mov    esi, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ecx], esi
        mov    dword ptr [ecx + 4], eax
        mov    ecx, dword ptr [ebp - 0x1c]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        jbe    L_3b42
        lea    esi, [ebp - 0x40]
        and    eax, 0xff
        mov    dword ptr [ebp - 0x30], esi
        mov    esi, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], eax
        mov    ecx, 0x7da660
L_3b14:
        test    dword ptr [ebp - 4], eax
        je    L_3b2b
        mov    eax, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [eax]
        mov    ebx, dword ptr [ecx]
        mov    al, byte ptr [eax + edi]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + esi], al
        mov    eax, dword ptr [ebp + 8]
L_3b2b:
        add    dword ptr [ebp - 0x30], 4
        mov    ebx, dword ptr [ebp - 4]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp - 4], ebx
        jl    L_3b14
L_3b42:
        mov    ebx, dword ptr [ebp - 0x18]
        mov    esi, dword ptr [ebp - 0x5c]
        mov    ecx, dword ptr [ebp - 0x14]
        add    ebx, 4
        mov    eax, 0x10
        add    esi, eax
        mov    dword ptr [ebp - 0x18], ebx
        mov    ebx, dword ptr [ebp - 0x54]
        add    ebx, eax
        add    edx, eax
        mov    dword ptr [ebp - 0x5c], esi
        mov    esi, dword ptr [ebp - 0x34]
        mov    eax, 8
        add    esi, eax
        add    ecx, eax
        mov    eax, dword ptr [ebp - 0x68]
        inc    edi
        cmp    edi, eax
        mov    dword ptr [ebp - 0x54], ebx
        mov    dword ptr [ebp - 0x34], esi
        mov    dword ptr [ebp - 0x14], ecx
        jl    L_3993
L_3b83:
        mov    ecx, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x38]
        mov    dword ptr [ebp - 8], ecx
        mov    ecx, dword ptr [ebp - 0x70]
        mov    word ptr [eax + ecx*2], dx
L_3b9c:
        mov    eax, dword ptr [ebp - 8]
        mov    edx, dword ptr [ebp - 0x88]
        mov    ecx, dword ptr [ebp - 0x70]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0x84]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x84], eax
        mov    eax, dword ptr [g_007da5e8]
        mov    dword ptr [ebp - 0x88], edx
        mov    edx, dword ptr [ebp - 0x20]
        mov    dword ptr [ebp - 0x70], ecx
        mov    ecx, dword ptr [eax]
        mov    byte ptr [ecx + edx], 0
L_3bd4:
        mov    eax, dword ptr [ebp - 0x64]
        mov    ebx, dword ptr [ebp - 0x1c]
        mov    dword ptr [ebp - 0xc], eax
L_3bdd:
        mov    ecx, dword ptr [ebp - 0xc]
L_3be0:
        mov    edx, dword ptr [ebp - 0x20]
        mov    eax, dword ptr [ebp - 0x58]
        inc    edx
        cmp    edx, eax
        mov    dword ptr [ebp - 0x20], edx
        jl    L_229b
L_3bf2:
        mov    dl, byte ptr [ebp + 0x1c]
        test    dl, dl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_3c01
        mov    eax, dword ptr [ecx + 0x30]
        jmp    L_3c0e
L_3c01:
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ebp + 0x10]
        shl    eax, 5
        add    eax, esi
L_3c0e:
        xor    esi, esi
        test    dl, dl
        mov    dword ptr [ebx + 0x44], eax
        mov    word ptr [ebx + 0xa], si
        je    L_3c20
        mov    eax, dword ptr [ecx + 0x48]
        jmp    L_3c29
L_3c20:
        mov    edx, dword ptr [ecx + 0xc]
        mov    eax, dword ptr [ecx + 0x28]
        lea    eax, [eax + edx*2]
L_3c29:
        mov    ecx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [ebx + 0x50], eax
        xor    eax, eax
        cmp    ecx, esi
        mov    word ptr [ebx + 0x54], si
        mov    dword ptr [ebp - 0x28], ecx
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp + 8], esi
        jle    L_3d93
L_3c4c:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + eax], 0
        jne    L_3c62
        inc    dword ptr [ebp + 8]
        jmp    L_3d87
L_3c62:
        mov    ecx, dword ptr [g_007da5f4]
        mov    dx, word ptr [ebp + 8]
        mov    word ptr [ecx + eax*2], dx
        test    byte ptr [ebx + 0x13], 1
        je    L_3c91
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    dl, byte ptr [edx + eax]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x17], dl
L_3c91:
        mov    ecx, dword ptr [ebx + 0xa0]
        mov    eax, dword ptr [ebx + 0x1c]
        mov    edx, dword ptr [g_007da68c]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp + 0x18], ecx
        mov    ecx, dword ptr [ebx + 0x44]
        mov    dword ptr [ebp - 0x24], eax
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x90], eax
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x8c], esi
        mov    ecx, dword ptr [ebp - 0x90]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
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
        je    L_3d28
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ecx + eax*4]
        jmp    L_3d31
L_3d28:
        mov    ecx, dword ptr [g_007b94a0]
        mov    eax, dword ptr [ebp - 0xc]
L_3d31:
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ecx + eax*8]
        mov    dword ptr [esi + 0x18], edx
        mov    eax, dword ptr [ecx + eax*8 + 4]
        mov    dword ptr [esi + 0x1c], eax
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_3d7d
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x7c]
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
L_3d7d:
        inc    word ptr [ebx + 0xa]
        mov    ecx, dword ptr [ebp - 0x28]
        mov    eax, dword ptr [ebp - 0xc]
L_3d87:
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], eax
        jl    L_3c4c
L_3d93:
        mov    eax, dword ptr [ebp - 0x58]
        xor    edi, edi
        xor    edx, edx
        test    eax, eax
        mov    dword ptr [ebp - 0x20], edi
        jle    L_3e8f
L_3da5:
        mov    eax, dword ptr [ebx + 0x60]
        mov    ecx, dword ptr [g_007da5e8]
        movzx    si, byte ptr [eax + edi]
        mov    eax, dword ptr [ecx]
        cmp    byte ptr [eax + edi], 0
        jne    L_3dc6
        and    esi, 0xffff
        jmp    L_3e7e
L_3dc6:
        and    esi, 0xffff
        mov    eax, 1
        lea    ecx, [esi - 1]
        cmp    ecx, eax
        mov    dword ptr [ebp + 0x18], esi
        jle    L_3e7e
L_3ddf:
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
        mov    esi, dword ptr [ebp + 0x18]
        inc    eax
        lea    ecx, [esi - 1]
        cmp    eax, ecx
        jl    L_3ddf
        mov    edi, dword ptr [ebp - 0x20]
L_3e7e:
        mov    eax, dword ptr [ebp - 0x58]
        add    edx, esi
        inc    edi
        cmp    edi, eax
        mov    dword ptr [ebp - 0x20], edi
        jl    L_3da5
L_3e8f:
        mov    eax, dword ptr [ebp - 0x70]
        xor    ecx, ecx
        cmp    eax, ecx
        jle    L_41e2
        mov    dword ptr [ebp - 0x20], ecx
        mov    dword ptr [ebp - 0xc], ecx
L_3ea2:
        mov    edx, dword ptr [g_007da670]
        mov    ecx, dword ptr [ebp - 0x20]
        xor    eax, eax
        mov    eax, dword ptr [edx]
        mov    ax, word ptr [eax + ecx*2]
        and    eax, 0xffff
        mov    dword ptr [ebp + 0x18], eax
        dec    eax
        cmp    eax, 1
        jle    L_41c2
        mov    edx, dword ptr [ebp - 0xc]
        mov    ebx, dword ptr [ebp - 0x1c]
        inc    edx
        dec    eax
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x78], eax
L_3ed3:
        test    byte ptr [ebx + 0x13], 1
        je    L_3f30
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebx + 0x44]
        mov    esi, dword ptr [ebp - 0xc]
        mov    cl, byte ptr [esi + ecx]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + eax + 0x17], cl
        mov    edx, dword ptr [g_007da660]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp + 8]
        mov    cl, byte ptr [eax + ecx + 1]
        mov    esi, dword ptr [ebx + 0x44]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x37], cl
        mov    edx, dword ptr [g_007da660]
        mov    ecx, dword ptr [edx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    al, byte ptr [eax + ecx]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x57], al
L_3f30:
        mov    ecx, dword ptr [g_007da680]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da608]
        mov    ecx, dword ptr [eax]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0xb8], edx
        mov    edx, dword ptr [g_007da684]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0xbc], eax
        mov    eax, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0xc0], ecx
        mov    ecx, dword ptr [ebx + 0x44]
        shl    esi, 5
        mov    dword ptr [ebp - 0x8c], eax
        inc    eax
        add    esi, ecx
        mov    dword ptr [ebp - 0xc4], eax
        mov    dword ptr [ebp - 0x90], eax
        mov    dword ptr [ebp - 0x24], esi
        mov    ecx, dword ptr [ebp - 0xbc]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
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
        mov    eax, dword ptr [ebp - 0x90]
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
        mov    ecx, dword ptr [ebp - 0xc0]
        mov    edx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ecx + edx*4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp + 8]
        mov    edi, dword ptr [ecx + eax*4 + 4]
        fstp    dword ptr [esi]
        mov    ecx, dword ptr [ecx + eax*4]
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x50], ecx
        fmul    dword ptr [esi + 4]
        mov    ecx, dword ptr [ebp - 0xb8]
        mov    dword ptr [esi + 0x30], edi
        mov    edi, dword ptr [ecx + edx*8]
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [ecx + edx*8 + 4]
        mov    dword ptr [esi + 0x1c], edx
        mov    edx, dword ptr [ecx + eax*8 + 8]
        fstp    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x38], edx
        fld    dword ptr [g_007da87c]
        mov    edx, dword ptr [ecx + eax*8 + 0xc]
        fmul    dword ptr [esi + 0x20]
        mov    dword ptr [esi + 0x3c], edx
        mov    edx, dword ptr [ecx + eax*8]
        mov    eax, dword ptr [ecx + eax*8 + 4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x5c], eax
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        fstp    dword ptr [esi + 0x20]
        mov    dword ptr [esi + 0x18], edi
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x58], edx
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
        je    L_4164
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x7c]
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
        fld    dword ptr [ebp - 0x7c]
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
        fld    dword ptr [ebp - 0x7c]
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
L_4164:
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
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
        mov    ecx, dword ptr [ebp - 0xc4]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        mov    eax, dword ptr [ebp - 0x78]
        dec    eax
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x78], eax
        jne    L_3ed3
L_41c2:
        mov    esi, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 0x70]
        add    esi, edx
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], esi
        mov    dword ptr [ebp - 0x20], eax
        jl    L_3ea2
        mov    ebx, dword ptr [ebp - 0x1c]
L_41e2:
        mov    esi, dword ptr [ebx + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        lea    edi, [esi + ecx]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        xor    edi, edi
        mov    di, word ptr [ebx + 0xa]
        mov    edx, edi
        and    edx, 0xffff
        jle    L_424d
        mov    eax, dword ptr [ebx + 0x44]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + eax + 0x1c]
        add    eax, 0x1c
        mov    esi, edx
L_4220:
        fld    dword ptr [eax - 4]
        add    eax, 0x20
        fmul    dword ptr [ebx + 0x98]
        add    ecx, 0x20
        dec    esi
        fadd    dword ptr [ebx + 0x90]
        fstp    dword ptr [ecx - 0x24]
        fld    dword ptr [eax - 0x20]
        fmul    dword ptr [ebx + 0x9c]
        fadd    dword ptr [ebx + 0x94]
        fstp    dword ptr [ecx - 0x20]
        jne    L_4220
L_424d:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_426d
        mov    eax, dword ptr [ebp + 0x10]
        mov    esi, dword ptr [eax]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        add    edx, edx
        add    esi, edx
        mov    edx, dword ptr [eax + 0xc]
        mov    dword ptr [eax], esi
        add    edx, ecx
        mov    dword ptr [eax + 0xc], edx
L_426d:
        mov    eax, dword ptr [ebp - 0x84]
        test    di, di
        pop    edi
        setne    dl
        pop    esi
        mov    byte ptr [ebx + 0x10], dl
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x00464288 (6 relocated pointers)
        __emit 0xFC
        __emit 0x24
        __emit 0x46
        __emit 0x00
        __emit 0x2B
        __emit 0x25
        __emit 0x46
        __emit 0x00
        __emit 0x33
        __emit 0x25
        __emit 0x46
        __emit 0x00
        __emit 0x3F
        __emit 0x25
        __emit 0x46
        __emit 0x00
        __emit 0x45
        __emit 0x25
        __emit 0x46
        __emit 0x00
        __emit 0x4D
        __emit 0x25
        __emit 0x46
        __emit 0x00
        // jump-table data @ 0x004642A0 (6 relocated pointers)
        __emit 0xA1
        __emit 0x25
        __emit 0x46
        __emit 0x00
        __emit 0xC9
        __emit 0x25
        __emit 0x46
        __emit 0x00
        __emit 0xD1
        __emit 0x25
        __emit 0x46
        __emit 0x00
        __emit 0xDD
        __emit 0x25
        __emit 0x46
        __emit 0x00
        __emit 0xE3
        __emit 0x25
        __emit 0x46
        __emit 0x00
        __emit 0xEB
        __emit 0x25
        __emit 0x46
        __emit 0x00
        // jump-table data @ 0x004642B8 (6 relocated pointers)
        __emit 0x29
        __emit 0x32
        __emit 0x46
        __emit 0x00
        __emit 0x7C
        __emit 0x32
        __emit 0x46
        __emit 0x00
        __emit 0x88
        __emit 0x32
        __emit 0x46
        __emit 0x00
        __emit 0xB4
        __emit 0x32
        __emit 0x46
        __emit 0x00
        __emit 0xBF
        __emit 0x32
        __emit 0x46
        __emit 0x00
        __emit 0xCA
        __emit 0x32
        __emit 0x46
        __emit 0x00
        // jump-table data @ 0x004642D0 (14 relocated pointers)
        __emit 0x66
        __emit 0x32
        __emit 0x46
        __emit 0x00
        __emit 0xAB
        __emit 0x34
        __emit 0x46
        __emit 0x00
        __emit 0xB7
        __emit 0x34
        __emit 0x46
        __emit 0x00
        __emit 0xE3
        __emit 0x34
        __emit 0x46
        __emit 0x00
        __emit 0xEE
        __emit 0x34
        __emit 0x46
        __emit 0x00
        __emit 0xF9
        __emit 0x34
        __emit 0x46
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0xA1
        __emit 0x8C
        __emit 0x95
        __emit 0x7B
        __emit 0x00
        __emit 0x83
        __emit 0xEC
        __emit 0x0C
        __emit 0x55
        __emit 0x56
        __emit 0x57
        __emit 0x50
        __emit 0xE8
        __emit 0x4F
        __emit 0x06
        __emit 0x29
        __emit 0x00
        __emit 0x68
        __emit 0xA8
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xE8
        __emit 0xC5
    }
}
