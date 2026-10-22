/*
 * FUN_00432470 (extent 0x432470-0x434ca0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d070;
extern float  g_0076dd60;
extern float  g_0076e2c0;
extern float  g_0076e2c4;
extern float  g_007b220c;
extern int    g_007b2210;
extern int    g_007b94a0;
extern int    g_007b9574;
extern int    g_007b9800;
extern int    g_007b9804;
extern int    g_007b9808;
extern int    g_007d98fc;
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
extern char   g_007da86c;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_0041cb30(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00423e00(void);
extern void __cdecl FUN_004286e0(void);
extern void __cdecl FUN_00455da0(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00432470(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1dc
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0xb0]
        test    eax, eax
        push    edi
        mov    dword ptr [ebp - 8], esi
        je    L_4c6f
        mov    ecx, dword ptr [eax + 4]
        test    ecx, ecx
        je    L_4c6f
        mov    eax, dword ptr [g_007b9574]
        test    eax, eax
        ja    L_4c6f
        mov    eax, dword ptr [esi + 0x58]
        test    eax, eax
        mov    dword ptr [ebp - 0xac], 0
        jg    L_24c7
        mov    byte ptr [esi + 0x10], 0
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_24c7:
        cmp    word ptr [esi + 0x56], 0
        mov    eax, dword ptr [esi + 0x18]
        mov    dword ptr [ebp - 0x18], eax
        jne    L_24de
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x98]
L_24de:
        mov    eax, dword ptr [g_007da68c]
        mov    edi, dword ptr [eax]
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [g_007da600]
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x30], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp + 0x18], edi
        je    L_256f
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        mov    dword ptr [ebp - 0x20], 0
        jle    L_25aa
L_251a:
        cmp    byte ptr [ebx], 0
        je    L_254c
        mov    edx, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp + 0x18]
        push    edx
        push    eax
        push    esi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
        mov    ecx, dword ptr [g_007da65c]
        mov    edi, dword ptr [ecx]
        add    edi, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [edi], al
        mov    edi, dword ptr [ebp + 0x18]
L_254c:
        mov    ecx, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp - 0x20]
        add    ecx, 4
        inc    eax
        add    edi, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x30], ecx
        mov    ecx, dword ptr [ebp - 0x18]
        inc    ebx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebp + 0x18], edi
        jl    L_251a
        jmp    L_25aa
L_256f:
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        jle    L_25aa
        mov    dword ptr [ebp + 0x14], eax
L_2579:
        cmp    byte ptr [ebx], 0
        je    L_2591
        mov    edx, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp + 8]
        push    edx
        push    eax
        push    esi
        mov    ecx, edi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
L_2591:
        mov    edx, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        add    edi, 0x10
        inc    ebx
        dec    eax
        mov    dword ptr [ebp - 0x30], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_2579
L_25aa:
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x24]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0xa8], 0
        mov    dword ptr [ebp - 4], 0
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0xb4], 0
        mov    dword ptr [ebp - 0xb0], 0
        je    L_26a0
        test    eax, eax
        jle    L_26a0
        mov    edx, dword ptr [g_007da848]
        mov    esi, dword ptr [edx + eax*4 + 0x24]
        test    esi, esi
        je    L_26a0
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_2621
        mov    dword ptr [g_007da864], 1
        jmp    L_267c
L_2621:
        cmp    eax, 0x80
        jl    L_2634
        mov    dword ptr [g_007da864], 2
        jmp    L_267c
L_2634:
        cmp    eax, 0x40
        jl    L_2645
        mov    dword ptr [g_007da864], 4
        jmp    L_267c
L_2645:
        cmp    eax, 0x20
        jl    L_2656
        mov    dword ptr [g_007da864], 8
        jmp    L_267c
L_2656:
        cmp    eax, 0x10
        jl    L_2667
        mov    dword ptr [g_007da864], 0x10
        jmp    L_267c
L_2667:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_267c:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_26af
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_26af
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0xb4], edx
        mov    dword ptr [ebp - 0xb0], eax
L_26a0:
        mov    bl, byte ptr [ebp + 0x1c]
        test    bl, bl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_26b5
        mov    eax, dword ptr [ecx + 0x38]
        jmp    L_26c1
L_26af:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_26a0
L_26b5:
        mov    eax, dword ptr [ecx + 4]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ecx + 0x18]
        lea    eax, [eax + edx*8]
L_26c1:
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ecx + 0xa4], eax
        mov    eax, dword ptr [ecx + 0x68]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0xc4], 0
        mov    dword ptr [ebp - 0xc0], 0
        je    L_271c
        xor    edx, edx
        cmp    eax, edx
        jle    L_271e
        mov    esi, dword ptr [g_007da848]
        mov    eax, dword ptr [esi + eax*4 + 0x24]
        cmp    eax, edx
        je    L_271e
        cmp    byte ptr [eax + 0x24], dl
        jne    L_271e
        mov    eax, dword ptr [eax + 0x28]
        cmp    eax, edx
        je    L_271e
        mov    esi, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    dword ptr [ebp - 0xc4], esi
        mov    dword ptr [ebp - 0xc0], eax
        jmp    L_271e
L_271c:
        xor    edx, edx
L_271e:
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        mov    dword ptr [ebp - 0x30], eax
        cmp    dword ptr [ecx + 0x58], edx
        mov    dword ptr [ebp - 0xa0], edx
        mov    dword ptr [ebp - 0x7c], edx
        mov    dword ptr [ebp - 0x20], edx
        mov    dword ptr [ebp - 0x14], edx
        jle    L_411f
L_2740:
        mov    ecx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x20]
        mov    cl, byte ptr [eax + edx]
        add    eax, edx
        test    cl, cl
        mov    dword ptr [ebp + 8], eax
        je    L_40fe
        mov    ecx, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ecx + 0x48]
        mov    esi, dword ptr [ebp - 0x14]
        xor    edx, edx
        mov    dl, byte ptr [ecx + esi + 2]
        xor    eax, eax
        mov    al, byte ptr [ecx + esi]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + esi + 1]
        mov    dword ptr [ebp - 0xb8], ecx
        mov    edi, edx
        mov    edx, dword ptr [ebp - 0x30]
        mov    edx, dword ptr [edx + eax*4]
        mov    dword ptr [ebp + 0x18], eax
        mov    eax, dword ptr [ebp - 0x30]
        mov    dword ptr [ebp - 0x74], edi
        mov    edi, dword ptr [eax + edi*4]
        mov    eax, dword ptr [eax + ebx*4]
        mov    dword ptr [ebp - 0x2c], ebx
        mov    ebx, eax
        and    ebx, edi
        mov    dword ptr [g_007b9804], edx
        or    eax, edi
        mov    edi, dword ptr [g_007b9804]
        and    edx, ebx
        or    edi, eax
        test    edx, edx
        mov    dword ptr [g_007b9808], edx
        mov    dword ptr [g_007b9804], edi
        je    L_27c6
        mov    ecx, dword ptr [ebp + 8]
        mov    byte ptr [ecx], 0
        jmp    L_40fe
L_27c6:
        test    edi, edi
        jne    L_27f9
        mov    eax, dword ptr [ebp - 0xac]
        mov    edx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ebp + 0x18]
        inc    eax
        mov    dword ptr [ebp - 0xac], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x2c]
        mov    byte ptr [eax + ecx], 1
        mov    ecx, dword ptr [ebp - 0x74]
        mov    byte ptr [eax + edx], 1
        mov    byte ptr [eax + ecx], 1
        jmp    L_40fe
L_27f9:
        cmp    dword ptr [edi*4 + 0x7b2478], 1
        mov    dword ptr [ebp - 0xc], 0
        jne    L_3328
        lea    edx, [esi + 3]
        cmp    esi, edx
        mov    ecx, esi
        jge    L_3314
L_281b:
        mov    eax, dword ptr [ebp - 8]
        mov    eax, dword ptr [eax + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x24], ecx
        mov    edi, ebx
        jge    L_2832
        mov    esi, ecx
L_2832:
        xor    edx, edx
        mov    dl, byte ptr [eax + esi]
        mov    esi, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0xa0]
        and    esi, 0xffff
        add    esi, eax
        mov    eax, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [eax + edi*4]
        test    ecx, ecx
        mov    dword ptr [ebp + 0x18], edx
        mov    dword ptr [ebp - 0x34], esi
        mov    dword ptr [g_007b9800], ecx
        jne    L_2943
        mov    ecx, dword ptr [g_007da68c]
        mov    ebx, dword ptr [ecx]
        mov    eax, edi
        shl    eax, 4
        add    eax, ebx
        mov    ebx, dword ptr [g_007da684]
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, dword ptr [ebx]
        mov    ebx, dword ptr [eax]
        mov    dword ptr [ecx], ebx
        mov    ebx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], ebx
        mov    ebx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [ebp - 8]
        mov    dword ptr [ecx + 8], ebx
        mov    ecx, dword ptr [eax + 0xb0]
        mov    ecx, dword ptr [ecx]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    ebx, dword ptr [g_007da608]
        mov    ebx, dword ptr [ebx]
        mov    eax, dword ptr [eax + 0x1c]
        mov    dword ptr [ebx + esi*4], ecx
        mov    ebx, dword ptr [eax + edi*8]
        mov    ecx, dword ptr [g_007da680]
        mov    ecx, dword ptr [ecx]
        mov    eax, dword ptr [eax + edi*8 + 4]
        mov    dword ptr [ecx + esi*8], ebx
        mov    dword ptr [ecx + esi*8 + 4], eax
        mov    ecx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        jbe    L_2918
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x18], 1
        mov    dword ptr [ebp - 0x10], ecx
        mov    eax, 0x7da660
L_28ed:
        mov    ebx, dword ptr [ebp - 0x18]
        test    ecx, ebx
        je    L_2906
        mov    ecx, dword ptr [eax - 4]
        mov    ecx, dword ptr [ecx]
        mov    ebx, dword ptr [eax]
        mov    cl, byte ptr [ecx + edi]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + esi], cl
        mov    ecx, dword ptr [ebp - 0x10]
L_2906:
        mov    ebx, dword ptr [ebp - 0x18]
        add    eax, 8
        shl    ebx, 1
        cmp    eax, 0x7da670
        mov    dword ptr [ebp - 0x18], ebx
        jl    L_28ed
L_2918:
        mov    eax, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x30]
        inc    eax
        mov    dword ptr [ebp - 0xc], eax
        lea    eax, [edx*4]
        mov    dword ptr [ebp - 0x18], eax
        mov    eax, dword ptr [eax + ecx]
        inc    esi
        test    eax, eax
        mov    dword ptr [ebp - 0x34], esi
        je    L_3303
        mov    ecx, dword ptr [g_007b9800]
        jmp    L_295c
L_2943:
        lea    ebx, [edx*4]
        mov    eax, dword ptr [ebx + eax]
        test    eax, eax
        mov    byte ptr [ebp + 0xb], 0
        mov    dword ptr [ebp - 0x18], ebx
        jne    L_3303
L_295c:
        or    ecx, eax
        mov    dword ptr [ebp - 0x44], 1
        mov    dword ptr [g_007b9800], ecx
        xor    ebx, ebx
L_296d:
        mov    eax, dword ptr [ebp - 0x44]
        test    eax, ecx
        jne    L_2985
        shl    eax, 1
        inc    ebx
        cmp    bx, 6
        mov    dword ptr [ebp - 0x44], eax
        jb    L_296d
        jmp    L_2ae6
L_2985:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_2a35
        mov    edx, dword ptr [g_007da68c]
        mov    eax, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [edx]
        mov    ecx, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_2a17
        jmp    dword ptr [ebx*4 + 0x434ca0]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_29c4:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_2ad0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_2add
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_29c4
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_29c4
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_29c4
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_29c4
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_29c4
L_2a17:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_2a7c
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_2add
L_2a35:
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp + 0x18]
        mov    eax, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_2ab5
        jmp    dword ptr [ebx*4 + 0x434cb8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_2a69:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_2ad0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_2a7c:
        mov    dword ptr [ebp - 4], 0
        jmp    L_2add
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_2a69
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_2a69
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_2a69
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_2a69
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_2a69
L_2ab5:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_2a7c
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_2add
L_2ad0:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_2add:
        mov    edx, dword ptr [ebp + 0x18]
        mov    dword ptr [ebp - 0xa8], ebx
L_2ae6:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_2f02
        mov    ecx, dword ptr [g_007da68c]
        mov    ebx, dword ptr [ecx]
        mov    ecx, edx
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        shl    ecx, 4
        fld    dword ptr [ecx + ebx]
        add    ecx, ebx
        mov    eax, edi
        shl    eax, 4
        fsub    dword ptr [eax + ebx]
        add    eax, ebx
        shl    esi, 4
        add    edx, esi
        fmul    dword ptr [ebp - 4]
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
        mov    eax, dword ptr [ebp - 0xa8]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_2b69
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_2b6f
L_2b69:
        fld    dword ptr [g_007b220c]
L_2b6f:
        mov    ecx, dword ptr [ebp - 0xa8]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0xb0]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [eax + ecx]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x174], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x170], edx
        fild    qword ptr [ebp - 0x174]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x16c], esi
        fmul    dword ptr [g_0076e2c4]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x168], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x104]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x16c]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x178], edx
        mov    dword ptr [ebp - 0x17c], esi
        fmul    dword ptr [g_0076e2c4]
        mov    dword ptr [ebp - 0x18c], ecx
        mov    dword ptr [ebp - 0x188], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x108]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x17c]
        mov    dword ptr [ebp - 0x19c], ecx
        mov    dword ptr [ebp - 0x198], edx
        shr    eax, 8
        fmul    dword ptr [g_0076e2c4]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1ac], ecx
        fstp    dword ptr [ebp - 0x10c]
        mov    dword ptr [ebp - 0x1a8], edx
        fild    qword ptr [ebp - 0x18c]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076e2c4]
        mov    dword ptr [ebp - 0x1bc], ecx
        mov    dword ptr [ebp - 0x1b8], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x100]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x19c]
        mov    dword ptr [ebp - 0x1cc], eax
        mov    dword ptr [ebp - 0x1c8], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076e2c4]
        push    edx
        lea    eax, [ebp - 0x13c]
        lea    ecx, [ebp - 0x10c]
        fstp    dword ptr [ebp - 0x134]
        push    eax
        fild    qword ptr [ebp - 0x1ac]
        push    ecx
        mov    dword ptr [ebp - 0xdc], 0xbf800000
        mov    dword ptr [ebp - 0xe0], 0xbf800000
        fmul    dword ptr [g_0076e2c4]
        mov    dword ptr [ebp - 0xe4], 0xbf800000
        mov    dword ptr [ebp - 0xd8], 0xbf800000
        lea    ecx, [ebp - 0xe4]
        fstp    dword ptr [ebp - 0x138]
        fild    qword ptr [ebp - 0x1bc]
        fmul    dword ptr [g_0076e2c4]
        fstp    dword ptr [ebp - 0x13c]
        fild    qword ptr [ebp - 0x1cc]
        fmul    dword ptr [g_0076e2c4]
        fstp    dword ptr [ebp - 0x130]
        call    FUN_004286e0
        lea    edx, [ebp - 0xe4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076e2c0]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xfc]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xfc]
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
        fstp    dword ptr [ebp - 0xfc]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xfc]
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
        fstp    dword ptr [ebp - 0xfc]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xfc]
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
        fstp    dword ptr [ebp - 0xfc]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xfc]
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
        mov    ecx, dword ptr [ebp - 0x34]
        mov    esi, dword ptr [ebp - 8]
        mov    ebx, dword ptr [ebp + 0x18]
        mov    dword ptr [edx + ecx*4], eax
        mov    eax, dword ptr [esi + 0x1c]
        fld    dword ptr [eax + ebx*8]
        mov    edx, dword ptr [g_007da680]
        fsub    dword ptr [eax + edi*8]
        mov    edx, dword ptr [edx]
        lea    ecx, [edx + ecx*8]
        lea    edx, [eax + edi*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + ebx*8 + 4]
        xor    eax, eax
        fsub    dword ptr [edx]
        mov    al, byte ptr [esi + 0x13]
        test    al, al
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        fstp    dword ptr [ecx + 4]
        jbe    L_3300
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x10], ecx
        mov    eax, 0x7da65c
        mov    edx, ebx
L_2e9b:
        mov    esi, dword ptr [ebp + 8]
        test    ecx, esi
        je    L_2eeb
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    bl, byte ptr [edi + ecx]
        mov    byte ptr [ebp - 0xd4], bl
        mov    esi, dword ptr [ebp - 0xd4]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + ecx]
        mov    ecx, dword ptr [eax + 4]
        mov    ecx, dword ptr [ecx]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x2c], esi
        sub    ebx, esi
        mov    esi, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp + 0x18], ebx
        fild    dword ptr [ebp + 0x18]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x2c]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 0x18]
        mov    bl, byte ptr [ebp + 0x18]
        mov    byte ptr [ecx + esi], bl
        mov    ecx, dword ptr [ebp - 0x10]
L_2eeb:
        mov    ebx, dword ptr [ebp + 8]
        add    eax, 8
        shl    ebx, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 8], ebx
        jl    L_2e9b
        jmp    L_3300
L_2f02:
        mov    eax, dword ptr [g_007da68c]
        mov    ebx, dword ptr [eax]
        mov    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        mov    ecx, edi
        shl    ecx, 4
        fld    dword ptr [ecx + ebx]
        add    ecx, ebx
        shl    eax, 4
        fsub    dword ptr [eax + ebx]
        add    eax, ebx
        shl    esi, 4
        add    edx, esi
        fmul    dword ptr [ebp - 4]
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
        mov    eax, dword ptr [ebp - 0xa8]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_2f7a
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_2f80
L_2f7a:
        fld    dword ptr [g_007b220c]
L_2f80:
        mov    ecx, dword ptr [ebp - 0xa8]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0xb0]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [edx + ecx]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x1dc], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x1d8], edx
        fild    qword ptr [ebp - 0x1dc]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x154], esi
        fmul    dword ptr [g_0076e2c4]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x150], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x124]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x154]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1d0], edx
        mov    dword ptr [ebp - 0x1d4], esi
        fmul    dword ptr [g_0076e2c4]
        mov    dword ptr [ebp - 0x164], ecx
        mov    dword ptr [ebp - 0x160], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x128]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x1d4]
        mov    dword ptr [ebp - 0x1a4], ecx
        mov    dword ptr [ebp - 0x1a0], edx
        shr    eax, 8
        fmul    dword ptr [g_0076e2c4]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x144], ecx
        fstp    dword ptr [ebp - 0x12c]
        mov    dword ptr [ebp - 0x140], edx
        fild    qword ptr [ebp - 0x164]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076e2c4]
        mov    dword ptr [ebp - 0x1c4], ecx
        mov    dword ptr [ebp - 0x1c0], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x120]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x1a4]
        mov    dword ptr [ebp - 0x184], eax
        mov    dword ptr [ebp - 0x180], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076e2c4]
        push    edx
        lea    eax, [ebp - 0x11c]
        lea    ecx, [ebp - 0x12c]
        fstp    dword ptr [ebp - 0x114]
        push    eax
        fild    qword ptr [ebp - 0x144]
        push    ecx
        mov    dword ptr [ebp - 0xec], 0xbf800000
        mov    dword ptr [ebp - 0xf0], 0xbf800000
        fmul    dword ptr [g_0076e2c4]
        mov    dword ptr [ebp - 0xf4], 0xbf800000
        mov    dword ptr [ebp - 0xe8], 0xbf800000
        lea    ecx, [ebp - 0xf4]
        fstp    dword ptr [ebp - 0x118]
        fild    qword ptr [ebp - 0x1c4]
        fmul    dword ptr [g_0076e2c4]
        fstp    dword ptr [ebp - 0x11c]
        fild    qword ptr [ebp - 0x184]
        fmul    dword ptr [g_0076e2c4]
        fstp    dword ptr [ebp - 0x110]
        call    FUN_004286e0
        lea    edx, [ebp - 0xf4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076e2c0]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xf8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xf8]
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
        fstp    dword ptr [ebp - 0xf8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xf8]
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
        fstp    dword ptr [ebp - 0xf8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xf8]
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
        fstp    dword ptr [ebp - 0xf8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xf8]
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
        mov    ecx, dword ptr [ebp - 0x34]
        mov    esi, dword ptr [ebp - 8]
        mov    dword ptr [edx + ecx*4], eax
        mov    eax, dword ptr [esi + 0x1c]
        mov    edx, dword ptr [g_007da680]
        fld    dword ptr [eax + edi*8]
        mov    edx, dword ptr [edx]
        lea    ecx, [edx + ecx*8]
        mov    edx, dword ptr [ebp + 0x18]
        fsub    dword ptr [eax + edx*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edx*8]
        lea    edx, [eax + edx*8 + 4]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + edi*8 + 4]
        xor    eax, eax
        fsub    dword ptr [edx]
        mov    al, byte ptr [esi + 0x13]
        test    al, al
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        fstp    dword ptr [ecx + 4]
        jbe    L_3300
        mov    ecx, eax
        and    ecx, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0x10], ecx
        mov    eax, 0x7da65c
L_32a4:
        test    ecx, edx
        je    L_32f4
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    esi, dword ptr [ebp + 0x18]
        mov    bl, byte ptr [ecx + esi]
        mov    byte ptr [ebp - 0x9c], bl
        mov    esi, dword ptr [ebp - 0x9c]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + edi]
        mov    ecx, dword ptr [eax + 4]
        mov    ecx, dword ptr [ecx]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x2c], esi
        sub    ebx, esi
        mov    esi, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp + 8], ebx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x2c]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    bl, byte ptr [ebp + 8]
        mov    byte ptr [ecx + esi], bl
        mov    ecx, dword ptr [ebp - 0x10]
L_32f4:
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da66c
        jl    L_32a4
L_3300:
        inc    dword ptr [ebp - 0xc]
L_3303:
        mov    esi, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebp - 0x24]
        lea    edx, [esi + 3]
        cmp    ecx, edx
        jl    L_281b
L_3314:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x7c]
        mov    dx, word ptr [ebp - 0xc]
        jmp    L_40c2
L_3328:
        mov    eax, dword ptr [g_007da66c]
        mov    edx, dword ptr [eax + 0x30]
        mov    dword ptr [ebp - 0x60], edx
        mov    edx, dword ptr [eax + 0x38]
        mov    dword ptr [ebp - 0x5c], edx
        mov    edx, dword ptr [eax + 0x40]
        mov    dword ptr [ebp - 0x58], edx
        mov    edx, dword ptr [eax + 0x48]
        mov    dword ptr [ebp - 0x54], edx
        mov    edx, dword ptr [ebp - 8]
        mov    dl, byte ptr [edx + 0x13]
        test    dl, dl
        mov    byte ptr [ebp - 0xd0], dl
        jbe    L_339b
        mov    edi, edx
        and    edi, 0xff
        lea    ebx, [ebp - 0x50]
        mov    dword ptr [ebp + 0x18], 1
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp + 8], ebx
        add    eax, 0x50
        mov    dword ptr [ebp - 0x24], 2
L_3377:
        mov    ebx, dword ptr [ebp + 0x18]
        test    edi, ebx
        je    L_3388
        mov    edi, dword ptr [eax]
        mov    ebx, dword ptr [ebp + 8]
        mov    dword ptr [ebx], edi
        mov    edi, dword ptr [ebp - 0x10]
L_3388:
        add    dword ptr [ebp + 8], 4
        shl    dword ptr [ebp + 0x18], 1
        mov    ebx, dword ptr [ebp - 0x24]
        add    eax, 8
        dec    ebx
        mov    dword ptr [ebp - 0x24], ebx
        jne    L_3377
L_339b:
        xor    edi, edi
        lea    ebx, [esi + 3]
        cmp    esi, ebx
        mov    eax, esi
        mov    byte ptr [ebp + 0x1b], 0
        mov    byte ptr [ebp + 0xb], 0xff
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 0x3c], edi
        jge    L_3571
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    ebx, dword ptr [ebp - 0x60]
        mov    dword ptr [ebp - 0x2c], edx
        mov    edx, dword ptr [ebp - 8]
        mov    esi, dword ptr [edx + 0xb0]
        mov    edx, dword ptr [edx + 0x1c]
        mov    esi, dword ptr [esi]
        mov    dword ptr [ebp - 0x24], edx
        mov    edx, dword ptr [g_007da688]
        mov    edx, dword ptr [edx]
        mov    dword ptr [ebp - 0x74], esi
        mov    dword ptr [ebp - 0x70], edx
        jmp    L_33ed
L_33e7:
        mov    ecx, dword ptr [ebp - 0xb8]
L_33ed:
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        and    edi, 0xffff
        mov    eax, edi
        shl    eax, 4
        mov    dword ptr [ebp - 0x1b0], 0
        mov    dword ptr [ebp - 0x190], 0
        mov    esi, edx
        mov    edx, dword ptr [ebp - 0x2c]
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebx + eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [ebx + eax + 4], edx
        mov    edx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [ebx + eax + 8], edx
        mov    edx, dword ptr [ebp - 0x74]
        mov    dword ptr [ebx + eax + 0xc], ecx
        mov    ecx, dword ptr [edx + esi*4]
        mov    edx, ecx
        and    edx, 0xff
        mov    dword ptr [ebp - 0x1b4], edx
        fild    qword ptr [ebp - 0x1b4]
        mov    edx, dword ptr [ebp - 0x5c]
        shr    ecx, 8
        mov    ebx, ecx
        fmul    dword ptr [g_0076e2c4]
        and    ebx, 0xff
        shr    ecx, 8
        mov    dword ptr [ebp - 0x194], ebx
        fstp    dword ptr [edx + eax + 8]
        mov    ebx, ecx
        fild    qword ptr [ebp - 0x194]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x14c], ebx
        xor    ebx, ebx
        fmul    dword ptr [g_0076e2c4]
        mov    dword ptr [ebp - 0x148], ebx
        shr    ecx, 8
        and    ecx, 0xff
        fstp    dword ptr [edx + eax + 4]
        mov    dword ptr [ebp - 0x15c], ecx
        fild    qword ptr [ebp - 0x14c]
        mov    ecx, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0x158], ebx
        fmul    dword ptr [g_0076e2c4]
        fstp    dword ptr [edx + eax]
        fild    qword ptr [ebp - 0x15c]
        fmul    dword ptr [g_0076e2c4]
        fstp    dword ptr [edx + eax + 0xc]
        mov    eax, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [eax + esi*8]
        mov    eax, dword ptr [eax + esi*8 + 4]
        mov    dword ptr [ecx + edi*8], edx
        mov    dword ptr [ecx + edi*8 + 4], eax
        mov    ecx, dword ptr [ebp - 0x70]
        mov    edx, dword ptr [ecx + esi*4]
        mov    eax, dword ptr [ebp - 0x54]
        mov    dword ptr [eax + edi*4], edx
        mov    edx, dword ptr [ebp - 0xd0]
        test    dl, dl
        jbe    L_3552
        and    edx, 0xff
        mov    dword ptr [ebp - 0x18], 1
        mov    dword ptr [ebp - 0x10], edx
        lea    ebx, [ebp - 0x50]
        mov    ecx, 0x7da65c
        jmp    L_3513
L_3510:
        mov    edx, dword ptr [ebp - 0x10]
L_3513:
        mov    eax, dword ptr [ebp - 0x18]
        test    edx, eax
        je    L_3536
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [edx]
        mov    al, byte ptr [eax + esi]
        mov    edx, dword ptr [ebx]
        mov    byte ptr [edx + edi], al
        cmp    al, byte ptr [ebp + 0xb]
        jae    L_352e
        mov    byte ptr [ebp + 0xb], al
L_352e:
        cmp    al, byte ptr [ebp + 0x1b]
        jbe    L_3536
        mov    byte ptr [ebp + 0x1b], al
L_3536:
        mov    edx, dword ptr [ebp - 0x18]
        add    ecx, 8
        shl    edx, 1
        add    ebx, 4
        cmp    ecx, 0x7da66c
        mov    dword ptr [ebp - 0x18], edx
        jl    L_3510
        mov    edx, dword ptr [ebp - 0xd0]
L_3552:
        mov    eax, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    ebx, dword ptr [ebp - 0x60]
        inc    eax
        inc    edi
        add    ecx, 3
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 0x3c], edi
        jl    L_33e7
L_3571:
        mov    eax, dword ptr [g_007da66c]
        mov    esi, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x94], esi
        mov    esi, dword ptr [eax + 0x10]
        mov    word ptr [ebp - 0x48], di
        mov    edi, dword ptr [eax]
        xor    ecx, ecx
        test    dl, dl
        mov    dword ptr [ebp - 0x90], esi
        mov    esi, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x6c], ecx
        mov    dword ptr [ebp - 0x98], edi
        mov    dword ptr [ebp - 0x8c], esi
        jbe    L_35e8
        and    edx, 0xff
        mov    ebx, 1
        mov    dword ptr [ebp - 0x10], edx
        lea    esi, [ebp - 0x88]
        add    eax, 0x20
        mov    dword ptr [ebp + 8], 2
        jmp    L_35c9
L_35c6:
        mov    edx, dword ptr [ebp - 0x10]
L_35c9:
        test    edx, ebx
        je    L_35d7
        mov    edx, dword ptr [eax]
        mov    dword ptr [esi], edx
        mov    edi, dword ptr [ebp - 0x98]
L_35d7:
        mov    edx, dword ptr [ebp + 8]
        add    eax, 8
        add    esi, 4
        shl    ebx, 1
        dec    edx
        mov    dword ptr [ebp + 8], edx
        jne    L_35c6
L_35e8:
        mov    ebx, dword ptr [ebp - 0x48]
        mov    word ptr [ebp - 0x80], 0
        mov    dword ptr [ebp - 0x44], 1
        mov    dword ptr [ebp - 0x2c], 4
L_35ff:
        mov    dword ptr [ebp - 0x64], 0
        mov    dword ptr [ebp - 0x34], 0x7b2404
        mov    dword ptr [ebp - 0x74], 6
L_3614:
        mov    eax, dword ptr [ebp - 0x44]
        test    dword ptr [g_007b9804], eax
        je    L_3e27
        xor    eax, eax
        mov    edx, ebx
        and    edx, 0xffff
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 0x18], edx
        jle    L_3d20
        mov    ecx, dword ptr [ebp - 0x58]
        mov    edx, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp - 0x78], ecx
        mov    ecx, dword ptr [ebp - 0x5c]
        mov    dword ptr [ebp - 0xbc], edx
        mov    edx, dword ptr [ebp - 0x60]
        lea    ebx, [ecx + 0xc]
        sub    ecx, edx
        lea    esi, [edx + 8]
        mov    edx, dword ptr [ebp - 0x18]
        mov    dword ptr [ebp - 0xb8], ebx
        mov    dword ptr [ebp - 0x3c], ecx
L_3662:
        inc    eax
        xor    ecx, ecx
        cmp    eax, edx
        mov    edx, dword ptr [ebp - 0x44]
        setge    cl
        mov    dword ptr [ebp - 0x24], eax
        dec    ecx
        and    ecx, eax
        mov    eax, dword ptr [ebp - 0xbc]
        mov    eax, dword ptr [eax]
        test    edx, eax
        mov    dword ptr [ebp + 0x18], ecx
        mov    dword ptr [g_007b9800], eax
        jne    L_379b
        mov    ecx, dword ptr [ebp - 0x80]
        mov    edx, dword ptr [esi - 8]
        and    ecx, 0xffff
        mov    eax, ecx
        shl    eax, 4
        mov    dword ptr [edi + eax], edx
        mov    edx, dword ptr [esi - 4]
        mov    dword ptr [edi + eax + 4], edx
        mov    edx, dword ptr [esi]
        mov    dword ptr [edi + eax + 8], edx
        mov    edx, dword ptr [esi + 4]
        mov    dword ptr [edi + eax + 0xc], edx
        mov    edx, dword ptr [ebp - 0xbc]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x8c]
        mov    dword ptr [edi + ecx*4], edx
        mov    edx, dword ptr [ebp - 0x94]
        mov    edi, dword ptr [ebx - 0xc]
        mov    dword ptr [edx + eax], edi
        mov    edi, dword ptr [ebx - 8]
        mov    dword ptr [edx + eax + 4], edi
        mov    edi, dword ptr [ebp - 0x3c]
        mov    edi, dword ptr [edi + esi]
        mov    dword ptr [edx + eax + 8], edi
        mov    edi, dword ptr [ebx]
        mov    dword ptr [edx + eax + 0xc], edi
        mov    edx, dword ptr [ebp - 0x78]
        mov    edi, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x90]
        mov    dword ptr [eax + ecx*8], edi
        mov    edx, dword ptr [edx + 4]
        mov    dword ptr [eax + ecx*8 + 4], edx
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_3753
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp - 0x28], eax
L_371f:
        mov    edi, dword ptr [ebp + 8]
        test    edx, edi
        je    L_3740
        mov    edx, dword ptr [ebp + eax - 0x50]
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp + eax - 0x88]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    eax, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ebp - 0x10]
L_3740:
        mov    edi, dword ptr [ebp + 8]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp + 8], edi
        jl    L_371f
L_3753:
        mov    eax, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0x54]
        mov    edx, dword ptr [ebp - 0x44]
        mov    edi, dword ptr [ecx + eax*4]
        inc    word ptr [ebp - 0x80]
        test    edi, edx
        je    L_3ce2
        mov    edi, eax
        mov    eax, dword ptr [ebp - 0x34]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_383b
        mov    ecx, dword ptr [ebp - 0x64]
        jmp    dword ptr [ecx*4 + 0x434cd0]
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x60]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        jmp    L_37f7
L_379b:
        mov    eax, dword ptr [ebp - 0x54]
        test    dword ptr [eax + ecx*4], edx
        jne    L_3ced
        mov    edi, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp - 0x34]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_3a69
        mov    eax, dword ptr [ebp - 0x64]
        jmp    dword ptr [eax*4 + 0x434ce8]
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_3a25
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 4]
        jmp    L_37f7
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x60]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
L_37f7:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_3859
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_3866
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi + edx]
        jmp    L_37f7
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [esi]
        fld    dword ptr [edi + edx + 8]
        jmp    L_37f7
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x60]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        jmp    L_37f7
L_383b:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_384d
        int 3    
L_384d:
        mov    edx, dword ptr [ebp - 0x60]
        mov    dword ptr [ebp - 4], 0
        jmp    L_3866
L_3859:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_3866:
        fld    dword ptr [edi + edx]
        mov    ecx, dword ptr [ebp - 0x80]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0x98]
        and    ecx, 0xffff
        mov    dword ptr [ebp + 8], ecx
        fmul    dword ptr [ebp - 4]
        shl    ecx, 4
        add    eax, ecx
        fadd    dword ptr [esi - 8]
        fstp    dword ptr [eax]
        fld    dword ptr [edi + edx + 4]
        fsub    dword ptr [esi - 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edi + edx + 8]
        fsub    dword ptr [esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x34]
        cmp    dword ptr [edx + 4], 0
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_38cd
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_38d3
L_38cd:
        fld    dword ptr [g_007b220c]
L_38d3:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x94]
        fsub    dword ptr [ebx - 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 0xc]
        fstp    dword ptr [edx + ecx]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [edi + edx + 4]
        mov    edx, dword ptr [ebp - 0x94]
        fsub    dword ptr [ebx - 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 8]
        fstp    dword ptr [edx + ecx + 4]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [edi + edx + 8]
        mov    edx, dword ptr [ebp - 0x3c]
        fsub    dword ptr [edx + esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x94]
        fstp    dword ptr [edx + ecx + 8]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x94]
        fsub    dword ptr [ebx]
        mov    edi, dword ptr [ebp - 0x90]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp + 8]
        fstp    dword ptr [edx + ecx + 0xc]
        mov    edx, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0x58]
        fld    dword ptr [ecx + edx*8]
        mov    ecx, dword ptr [ebp - 0x78]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x58]
        fld    dword ptr [ebx + edx*8 + 4]
        fsub    dword ptr [ecx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp + 8]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_3c43
        mov    edi, ecx
        and    edi, 0xff
        mov    dword ptr [ebp - 0x28], 1
        mov    dword ptr [ebp - 0x10], edi
        xor    ecx, ecx
L_3999:
        mov    ebx, dword ptr [ebp - 0x28]
        test    edi, ebx
        je    L_39f4
        mov    edi, dword ptr [ebp + ecx - 0x50]
        mov    ebx, dword ptr [ebp - 0xc]
        mov    bl, byte ptr [edi + ebx]
        mov    byte ptr [ebp - 0xa4], bl
        mov    ebx, dword ptr [ebp - 0xa4]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x70], ebx
        xor    ebx, ebx
        mov    bl, byte ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x70]
        mov    edi, dword ptr [ebp + 8]
        sub    ebx, edx
        mov    edx, dword ptr [ebp + ecx - 0x88]
        mov    dword ptr [ebp - 0x1c], ebx
        fild    dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x70]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x1c]
        mov    bl, byte ptr [ebp - 0x1c]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp + 0x18]
        mov    edi, dword ptr [ebp - 0x10]
L_39f4:
        mov    ebx, dword ptr [ebp - 0x28]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 0x28], ebx
        jl    L_3999
        jmp    L_3c43
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [edi + edx + 4]
        fld    dword ptr [esi - 4]
        jmp    L_3a25
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_3a25:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_3a87
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_3a94
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [edi + edx]
        fld    dword ptr [esi - 8]
        jmp    L_3a25
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [edi + edx + 8]
        fld    dword ptr [esi]
        jmp    L_3a25
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_3a25
L_3a69:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_3a7b
        int 3    
L_3a7b:
        mov    edx, dword ptr [ebp - 0x60]
        mov    dword ptr [ebp - 4], 0
        jmp    L_3a94
L_3a87:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_3a94:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x80]
        fsub    dword ptr [edi + edx]
        mov    eax, dword ptr [ebp - 0x98]
        and    ecx, 0xffff
        mov    dword ptr [ebp + 8], ecx
        fmul    dword ptr [ebp - 4]
        shl    ecx, 4
        add    eax, ecx
        fadd    dword ptr [edi + edx]
        lea    edx, [edi + edx + 4]
        fstp    dword ptr [eax]
        fld    dword ptr [esi - 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x60]
        lea    edx, [edi + edx + 8]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x60]
        lea    edx, [edi + edx + 0xc]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x34]
        cmp    dword ptr [edx + 4], 0
        fstp    dword ptr [eax + 0xc]
        je    L_3b05
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_3b0b
L_3b05:
        fld    dword ptr [g_007b220c]
L_3b0b:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx - 0xc]
        fsub    dword ptr [edi + edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x94]
        fstp    dword ptr [edx + ecx]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx - 8]
        lea    edx, [edi + edx + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x94]
        fstp    dword ptr [edx + ecx + 4]
        mov    edx, dword ptr [ebp - 0x5c]
        lea    edx, [edi + edx + 8]
        mov    dword ptr [ebp - 0x1c], edx
        mov    edx, dword ptr [ebp - 0x3c]
        fld    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x1c]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x94]
        fstp    dword ptr [edx + ecx + 8]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx]
        lea    edi, [edi + edx + 0xc]
        fsub    dword ptr [edi]
        mov    edx, dword ptr [ebp - 0x94]
        mov    ebx, dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        mov    edi, dword ptr [ebp - 0x90]
        fstp    dword ptr [edx + ecx + 0xc]
        mov    ecx, dword ptr [ebp - 0x78]
        fld    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x58]
        mov    edx, dword ptr [ebp + 0x18]
        fsub    dword ptr [ecx + edx*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + edx*8]
        lea    ecx, [ecx + edx*8 + 4]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x78]
        fld    dword ptr [ebx + 4]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [ebp + 8]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_3c43
        and    ecx, 0xff
        xor    edi, edi
        mov    dword ptr [ebp - 0x28], 1
        mov    dword ptr [ebp - 0x10], ecx
        mov    dword ptr [ebp + 0x18], edi
L_3bda:
        mov    ebx, dword ptr [ebp - 0x28]
        test    ecx, ebx
        je    L_3c30
        mov    edi, dword ptr [ebp + edi - 0x50]
        mov    cl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0xc]
        mov    byte ptr [ebp - 0x40], cl
        mov    ecx, dword ptr [ebp - 0x40]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x70], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edi + ebx]
        sub    ecx, dword ptr [ebp - 0x70]
        mov    edi, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x1c], ecx
        fild    dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp + ecx - 0x88]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x70]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x1c]
        mov    bl, byte ptr [ebp - 0x1c]
        mov    byte ptr [ecx + edi], bl
        mov    edi, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0x10]
L_3c30:
        mov    ebx, dword ptr [ebp - 0x28]
        add    edi, 4
        shl    ebx, 1
        cmp    edi, 8
        mov    dword ptr [ebp + 0x18], edi
        mov    dword ptr [ebp - 0x28], ebx
        jl    L_3bda
L_3c43:
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp + 0x18], 0
        mov    edi, dword ptr [ebp - 0x1c]
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
        mov    dword ptr [ebp + 0x18], edx
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp - 0x8c]
        mov    ecx, dword ptr [ebp + 8]
        inc    word ptr [ebp - 0x80]
        mov    ebx, dword ptr [ebp - 0xb8]
        mov    dword ptr [eax + ecx*4], edx
L_3ce2:
        mov    ecx, dword ptr [ebp - 0x6c]
        mov    edi, dword ptr [ebp - 0x98]
        jmp    L_3cf0
L_3ced:
        mov    ecx, dword ptr [ebp - 0x6c]
L_3cf0:
        mov    edx, dword ptr [ebp - 0xbc]
        mov    eax, dword ptr [ebp - 0x24]
        add    edx, 4
        mov    dword ptr [ebp - 0xbc], edx
        add    dword ptr [ebp - 0x78], 8
        mov    edx, dword ptr [ebp - 0x18]
        add    ebx, 0x10
        add    esi, 0x10
        cmp    eax, edx
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 0xb8], ebx
        jl    L_3662
L_3d20:
        mov    eax, dword ptr [g_007da66c]
        lea    edx, [ecx + ecx*2]
        shl    edx, 4
        add    eax, edx
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0x60], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x5c], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x58], edx
        mov    edx, dword ptr [ebp - 8]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + 0x13]
        test    bl, bl
        mov    dword ptr [ebp - 0x54], eax
        jbe    L_3d94
        mov    edx, ebx
        xor    eax, eax
        and    edx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x10], edx
        lea    esi, [ebp - 0x50]
L_3d67:
        mov    edi, dword ptr [ebp + 8]
        test    edx, edi
        je    L_3d83
        mov    edi, dword ptr [g_007da66c]
        lea    edx, [ecx + ecx*2]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [edi + edx*8 + 0x20]
        mov    dword ptr [esi], edx
        mov    edx, dword ptr [ebp - 0x10]
L_3d83:
        mov    edi, dword ptr [ebp + 8]
        inc    eax
        shl    edi, 1
        add    esi, 4
        cmp    eax, 2
        mov    dword ptr [ebp + 8], edi
        jl    L_3d67
L_3d94:
        mov    ax, word ptr [ebp - 0x80]
        xor    edx, edx
        test    ecx, ecx
        sete    dl
        mov    word ptr [ebp - 0x48], ax
        mov    ecx, edx
        mov    edx, dword ptr [g_007da66c]
        lea    eax, [ecx + ecx*2]
        shl    eax, 4
        mov    edi, dword ptr [eax + edx]
        add    eax, edx
        test    bl, bl
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x94], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x6c], ecx
        mov    dword ptr [ebp - 0x98], edi
        mov    dword ptr [ebp - 0x90], edx
        mov    dword ptr [ebp - 0x8c], eax
        jbe    L_3e1e
        xor    eax, eax
        and    ebx, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0x10], ebx
        lea    esi, [ebp - 0x88]
L_3df4:
        test    ebx, edx
        je    L_3e13
        mov    ebx, dword ptr [g_007da66c]
        lea    edi, [ecx + ecx*2]
        lea    edi, [eax + edi*2]
        mov    edi, dword ptr [ebx + edi*8 + 0x20]
        mov    ebx, dword ptr [ebp - 0x10]
        mov    dword ptr [esi], edi
        mov    edi, dword ptr [ebp - 0x98]
L_3e13:
        inc    eax
        add    esi, 4
        shl    edx, 1
        cmp    eax, 2
        jl    L_3df4
L_3e1e:
        mov    ebx, dword ptr [ebp - 0x48]
        mov    word ptr [ebp - 0x80], 0
L_3e27:
        mov    eax, dword ptr [ebp - 0x44]
        mov    esi, dword ptr [ebp - 0x64]
        mov    edx, dword ptr [ebp - 0x34]
        shl    eax, 1
        mov    dword ptr [ebp - 0x44], eax
        mov    eax, dword ptr [ebp - 0x74]
        inc    esi
        add    edx, 8
        dec    eax
        mov    dword ptr [ebp - 0x64], esi
        mov    dword ptr [ebp - 0x34], edx
        mov    dword ptr [ebp - 0x74], eax
        jne    L_3614
        mov    esi, ebx
        xor    eax, eax
        and    esi, 0xffff
        jle    L_3e63
        mov    edx, dword ptr [ebp - 0x54]
L_3e5b:
        or    eax, dword ptr [edx]
        add    edx, 4
        dec    esi
        jne    L_3e5b
L_3e63:
        test    eax, eax
        mov    dword ptr [g_007b9804], eax
        je    L_3e95
        mov    edx, dword ptr [ebp - 0x2c]
        mov    esi, edx
        dec    edx
        test    esi, esi
        mov    dword ptr [ebp - 0x2c], edx
        jne    L_35ff
        test    eax, eax
        je    L_3e95
        mov    ecx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x20]
        mov    byte ptr [edx + eax], 0
        jmp    L_40fe
L_3e95:
        mov    eax, dword ptr [ebp - 0x48]
        xor    edx, edx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x18], eax
        jle    L_40ad
        mov    eax, dword ptr [ebp - 0x5c]
        mov    ecx, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0x28], eax
        mov    eax, dword ptr [ebp - 0xa0]
        mov    dword ptr [ebp - 0x6c], ecx
        lea    ecx, [eax*8]
        mov    dword ptr [ebp - 0x64], ecx
        lea    ecx, [eax*4]
        shl    eax, 4
        mov    dword ptr [ebp - 0x3c], eax
        mov    eax, dword ptr [ebp - 0x60]
        mov    dword ptr [ebp - 0x24], ecx
        lea    edi, [eax + 8]
L_3eda:
        mov    ecx, dword ptr [g_007da684]
        mov    ebx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [edi - 8]
        add    eax, ebx
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [edi - 4]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [edi]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [edi + 4]
        mov    dword ptr [eax + 0xc], ecx
        mov    eax, dword ptr [ebp - 0x28]
        mov    dword ptr [ebp + 8], eax
        fld    dword ptr [g_0076e2c0]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x38]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x38]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x68], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x38]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x38]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x68]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x68], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x38]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x38]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x68]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x68], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x38]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x38]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x68]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x68], ecx
        mov    ecx, dword ptr [g_007da608]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x68]
        mov    esi, dword ptr [ebp - 0x24]
        mov    dword ptr [esi + eax], ecx
        mov    eax, dword ptr [g_007da680]
        mov    esi, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x64]
        mov    eax, dword ptr [ebp - 0x6c]
        add    ecx, esi
        mov    esi, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ecx], esi
        mov    dword ptr [ecx + 4], eax
        mov    ecx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        jbe    L_406c
        and    eax, 0xff
        lea    esi, [ebp - 0x50]
        mov    dword ptr [ebp + 0x18], 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da660
        mov    dword ptr [ebp + 8], esi
L_4034:
        mov    esi, dword ptr [ebp + 0x18]
        test    eax, esi
        je    L_4055
        mov    esi, dword ptr [ecx]
        mov    ebx, dword ptr [esi]
        mov    eax, dword ptr [ebp + 8]
        mov    eax, dword ptr [eax]
        mov    esi, dword ptr [ebp - 0xa0]
        mov    al, byte ptr [eax + edx]
        add    esi, edx
        mov    byte ptr [ebx + esi], al
        mov    eax, dword ptr [ebp - 0x10]
L_4055:
        add    dword ptr [ebp + 8], 4
        mov    ebx, dword ptr [ebp + 0x18]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp + 0x18], ebx
        jl    L_4034
L_406c:
        mov    ebx, dword ptr [ebp - 0x24]
        mov    esi, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x6c]
        add    ebx, 4
        mov    eax, 0x10
        add    esi, eax
        mov    dword ptr [ebp - 0x24], ebx
        mov    ebx, dword ptr [ebp - 0x28]
        add    ebx, eax
        add    edi, eax
        mov    dword ptr [ebp - 0x3c], esi
        mov    esi, dword ptr [ebp - 0x64]
        mov    eax, 8
        add    esi, eax
        add    ecx, eax
        mov    eax, dword ptr [ebp - 0x18]
        inc    edx
        cmp    edx, eax
        mov    dword ptr [ebp - 0x28], ebx
        mov    dword ptr [ebp - 0x64], esi
        mov    dword ptr [ebp - 0x6c], ecx
        jl    L_3eda
L_40ad:
        mov    ecx, dword ptr [ebp - 0x48]
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x48]
        mov    dword ptr [ebp - 0xc], ecx
        mov    ecx, dword ptr [ebp - 0x7c]
L_40c2:
        mov    word ptr [eax + ecx*2], dx
        mov    eax, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0xa0]
        mov    ecx, dword ptr [ebp - 0x7c]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0xac]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0xac], eax
        mov    eax, dword ptr [g_007d98fc]
        mov    dword ptr [ebp - 0xa0], edx
        mov    edx, dword ptr [ebp - 0x20]
        mov    dword ptr [ebp - 0x7c], ecx
        mov    ecx, dword ptr [eax]
        mov    byte ptr [ecx + edx], 0
L_40fe:
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x58]
        add    edi, 3
        inc    eax
        cmp    eax, edx
        mov    dword ptr [ebp - 0x14], edi
        mov    dword ptr [ebp - 0x20], eax
        jl    L_2740
        mov    bl, byte ptr [ebp + 0x1c]
L_411f:
        test    bl, bl
        mov    edx, dword ptr [ebp + 0x10]
        je    L_412b
        mov    ecx, dword ptr [edx + 0x30]
        jmp    L_4135
L_412b:
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [edx + 0x10]
        shl    ecx, 5
        add    ecx, eax
L_4135:
        mov    eax, dword ptr [ebp - 8]
        xor    esi, esi
        test    bl, bl
        mov    dword ptr [eax + 0x44], ecx
        mov    word ptr [eax + 0xa], si
        je    L_414a
        mov    ecx, dword ptr [edx + 0x48]
        jmp    L_4153
L_414a:
        mov    ecx, dword ptr [edx + 0xc]
        mov    edx, dword ptr [edx + 0x28]
        lea    ecx, [edx + ecx*2]
L_4153:
        mov    dword ptr [eax + 0x50], ecx
        mov    word ptr [eax + 0x54], si
        mov    ecx, dword ptr [eax + 0x18]
        xor    ebx, ebx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0xc], ecx
        mov    dword ptr [ebp - 0x14], ebx
        mov    dword ptr [ebp + 8], esi
        jle    L_43c9
L_4170:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + ebx], 0
        jne    L_4186
        inc    dword ptr [ebp + 8]
        jmp    L_43bb
L_4186:
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, ebx
        sub    ecx, edx
        mov    edx, dword ptr [g_007da5f4]
        mov    word ptr [edx + ebx*2], cx
        test    byte ptr [g_007da86c], 2
        jle    L_42a3
        mov    ecx, dword ptr [eax + 0x28]
        test    ch, 0x3c
        je    L_42a3
        cmp    dword ptr [g_007b2210], 1
        jne    L_42a3
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [ecx + 0xb0]
        mov    dword ptr [ebp - 0x24], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [g_007da68c]
        mov    dword ptr [ebp + 0x18], eax
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x40], eax
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ecx + 0xa4]
        lea    esi, [eax + edx*8]
        mov    dword ptr [ebp - 0x38], esi
        mov    ecx, dword ptr [ebp - 0x40]
        fld1    
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x38]
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
        je    L_424e
        mov    ecx, eax
        mov    eax, dword ptr [ecx + ebx*4]
        jmp    L_4253
L_424e:
        mov    eax, dword ptr [g_007b94a0]
L_4253:
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x18], edx
        mov    ecx, dword ptr [eax + ebx*8 + 4]
        mov    dword ptr [esi + 0x1c], ecx
        mov    edx, dword ptr [eax + ebx*8]
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [esi + 0x20], edx
        mov    eax, dword ptr [eax + ebx*8 + 4]
        mov    dword ptr [esi + 0x24], eax
        test    byte ptr [ecx + 0x13], 1
        je    L_436a
        mov    edx, dword ptr [g_007da65c]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + ebx]
        xor    edx, edx
        mov    dx, word ptr [eax + 0xa]
        mov    eax, dword ptr [eax + 0x44]
        shl    edx, 5
        mov    byte ptr [edx + eax + 0x17], cl
        jmp    L_436a
L_42a3:
        mov    eax, dword ptr [ebp - 8]
        mov    edx, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax + 0xb0]
        xor    esi, esi
        mov    si, word ptr [eax + 0xa]
        mov    dword ptr [ebp - 0x1c], edx
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [g_007da68c]
        mov    dword ptr [ebp + 0x18], edx
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [eax + 0x44]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x40], edx
        mov    dword ptr [ebp - 0x38], esi
        mov    ecx, dword ptr [ebp - 0x40]
        fld1    
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x38]
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
        je    L_432e
        mov    eax, dword ptr [eax + ebx*4]
        jmp    L_4333
L_432e:
        mov    eax, dword ptr [g_007b94a0]
L_4333:
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x18], ecx
        mov    edx, dword ptr [eax + ebx*8 + 4]
        mov    eax, dword ptr [ebp - 8]
        test    byte ptr [eax + 0x13], 1
        mov    dword ptr [esi + 0x1c], edx
        je    L_436a
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    dl, byte ptr [edx + ebx]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        mov    eax, dword ptr [eax + 0x44]
        shl    ecx, 5
        mov    byte ptr [ecx + eax + 0x17], dl
L_436a:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_43ae
        mov    eax, dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0xb4]
        mov    edx, dword ptr [eax + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    ecx, [ecx + edx + 0x18]
        fstp    dword ptr [ecx]
        mov    edx, dword ptr [eax + 0x44]
        fld    dword ptr [ebp - 0xb0]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x1c]
        lea    ecx, [ecx + edx + 0x1c]
        fstp    dword ptr [ecx]
        jmp    L_43b1
L_43ae:
        mov    eax, dword ptr [ebp - 8]
L_43b1:
        inc    word ptr [eax + 0xa]
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ebp - 0xc]
L_43bb:
        inc    ebx
        cmp    ebx, ecx
        mov    dword ptr [ebp - 0x14], ebx
        jl    L_4170
        xor    esi, esi
L_43c9:
        mov    edi, dword ptr [eax + 0x58]
        xor    edx, edx
        xor    ecx, ecx
        cmp    edi, esi
        mov    dword ptr [ebp - 0x20], edx
        jle    L_4466
L_43db:
        mov    esi, dword ptr [g_007d98fc]
        mov    esi, dword ptr [esi]
        cmp    byte ptr [esi + edx], 0
        je    L_4452
        mov    edx, dword ptr [eax + 0x48]
        mov    edi, dword ptr [g_007da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + ecx]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        xor    ebx, ebx
        mov    word ptr [esi + edx*2], di
        mov    edx, dword ptr [eax + 0x48]
        mov    bl, byte ptr [edx + ecx + 2]
        mov    edi, dword ptr [g_007da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        xor    ebx, ebx
        mov    word ptr [esi + edx*2 + 2], di
        mov    edx, dword ptr [eax + 0x48]
        mov    bl, byte ptr [edx + ecx + 1]
        mov    edi, dword ptr [g_007da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        mov    word ptr [esi + edx*2 + 4], di
        add    word ptr [eax + 0x54], 3
        mov    edx, dword ptr [ebp - 0x20]
L_4452:
        mov    esi, dword ptr [eax + 0x58]
        add    ecx, 3
        inc    edx
        cmp    edx, esi
        mov    dword ptr [ebp - 0x20], edx
        jl    L_43db
        xor    esi, esi
L_4466:
        mov    eax, dword ptr [ebp - 0x7c]
        cmp    eax, esi
        jle    L_4a3e
        mov    dword ptr [ebp - 0x20], esi
        mov    dword ptr [ebp - 0x14], esi
L_4477:
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x20]
        mov    ax, word ptr [ecx + edx*2]
        mov    dword ptr [ebp - 0xc], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x2c], eax
        dec    eax
        cmp    eax, 1
        jle    L_4a21
        mov    eax, dword ptr [ebp - 0x14]
        mov    ebx, dword ptr [ebp - 8]
        lea    ecx, [eax*8 + 8]
        lea    edx, [eax*4 + 4]
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp + 0x18], edx
L_44b8:
        test    byte ptr [g_007da86c], 2
        jle    L_4714
        mov    eax, dword ptr [ebx + 0x28]
        test    ah, 0x3c
        je    L_4714
        cmp    dword ptr [g_007b2210], 1
        jne    L_4714
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da608]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x9c], ecx
        mov    ecx, dword ptr [g_007da684]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0xa4], eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 0x1c], edx
        lea    edx, [ecx + eax]
        lea    eax, [eax + ecx + 1]
        mov    dword ptr [ebp - 0x68], eax
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x38], edx
        mov    edx, dword ptr [ebx + 0xa4]
        lea    ecx, [eax + eax*4]
        lea    esi, [edx + ecx*8]
        mov    dword ptr [ebp - 0x40], esi
        mov    ecx, dword ptr [ebp - 0x1c]
        fld1    
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x40]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x68]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x34]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x28]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x2c]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x38]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 0x30]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x5c]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x50]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x54]
        fld    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x58]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov    edx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0xa4]
        mov    ecx, dword ptr [eax + edx*4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x68]
        mov    edi, dword ptr [eax + ecx*4]
        fstp    dword ptr [esi]
        mov    dword ptr [esi + 0x38], edi
        fld    dword ptr [g_007da878]
        mov    edi, dword ptr [ebp + 0x18]
        fmul    dword ptr [esi + 4]
        mov    eax, dword ptr [eax + edi]
        mov    dword ptr [esi + 0x60], eax
        mov    eax, dword ptr [ebp - 0x9c]
        fadd    dword ptr [g_007da870]
        mov    edi, dword ptr [eax + edx*8]
        mov    dword ptr [esi + 0x18], edi
        lea    edi, [edx*8 + 4]
        fstp    dword ptr [esi + 4]
        mov    edx, dword ptr [eax + edx*8]
        fld    dword ptr [g_007da87c]
        mov    dword ptr [ebp - 0x38], edi
        fmul    dword ptr [esi + 0x28]
        mov    edi, dword ptr [edi + eax]
        mov    dword ptr [esi + 0x1c], edi
        mov    edi, dword ptr [eax + ecx*8]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x40], edi
        mov    edi, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x44], edi
        fstp    dword ptr [esi + 0x28]
        mov    edi, dword ptr [ebp + 8]
        fld    dword ptr [g_007da878]
        mov    edi, dword ptr [eax + edi]
        fmul    dword ptr [esi + 0x2c]
        mov    dword ptr [esi + 0x20], edx
        mov    edx, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [edx + eax]
        fadd    dword ptr [g_007da870]
        mov    dword ptr [esi + 0x68], edi
        mov    edi, dword ptr [ebp + 8]
        mov    edi, dword ptr [eax + edi + 4]
        fstp    dword ptr [esi + 0x2c]
        mov    dword ptr [esi + 0x24], edx
        fld    dword ptr [g_007da87c]
        mov    edx, dword ptr [eax + ecx*8]
        fmul    dword ptr [esi + 0x50]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x6c], edi
        mov    dword ptr [esi + 0x48], edx
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x50]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x54]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x54]
        mov    dword ptr [esi + 0x4c], ecx
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [eax + ecx]
        mov    eax, dword ptr [eax + ecx + 4]
        mov    dword ptr [esi + 0x74], eax
        test    byte ptr [ebx + 0x13], 1
        mov    dword ptr [esi + 0x70], edx
        je    L_4901
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    dl, byte ptr [edx + ecx]
        mov    esi, dword ptr [ebx + 0xa4]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*4]
        mov    byte ptr [esi + eax*8 + 0x17], dl
        mov    eax, dword ptr [g_007da660]
        mov    edx, dword ptr [eax]
        mov    esi, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [ebx + 0xa4]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        add    edx, esi
        mov    dl, byte ptr [edx + ecx + 1]
        lea    eax, [eax + eax*4]
        mov    byte ptr [edi + eax*8 + 0x3f], dl
        mov    eax, dword ptr [g_007da660]
        mov    edx, dword ptr [eax]
        add    edx, esi
        mov    esi, dword ptr [ebx + 0xa4]
        mov    cl, byte ptr [edx + ecx]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*4]
        mov    byte ptr [esi + eax*8 + 0x67], cl
        jmp    L_4901
L_4714:
        mov    edx, dword ptr [g_007da680]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [g_007da608]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x9c], eax
        mov    eax, dword ptr [g_007da684]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x14]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x1c], ecx
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0xa4], edx
        lea    edx, [ecx + eax]
        lea    eax, [eax + ecx + 1]
        mov    ecx, dword ptr [ebx + 0x44]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x38], edx
        mov    dword ptr [ebp - 0x68], eax
        mov    dword ptr [ebp - 0x40], esi
        mov    ecx, dword ptr [ebp - 0x1c]
        fld1    
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x40]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x68]
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
        mov    eax, dword ptr [ebp - 0x38]
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
        mov    eax, dword ptr [ebp - 0xa4]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [eax + ecx*4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], edx
        mov    edx, dword ptr [ebp - 0x68]
        mov    edi, dword ptr [eax + edx*4]
        fstp    dword ptr [esi]
        mov    dword ptr [esi + 0x30], edi
        fld    dword ptr [g_007da878]
        mov    edi, dword ptr [ebp + 0x18]
        fmul    dword ptr [esi + 4]
        mov    eax, dword ptr [eax + edi]
        mov    dword ptr [esi + 0x50], eax
        mov    eax, dword ptr [ebp - 0x9c]
        fadd    dword ptr [g_007da870]
        mov    edi, dword ptr [eax + ecx*8]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x1c], ecx
        fstp    dword ptr [esi + 4]
        mov    ecx, dword ptr [eax + edx*8]
        fld    dword ptr [g_007da87c]
        mov    edx, dword ptr [eax + edx*8 + 4]
        fmul    dword ptr [esi + 0x20]
        mov    dword ptr [esi + 0x38], ecx
        mov    ecx, dword ptr [ebp + 8]
        mov    dword ptr [esi + 0x3c], edx
        fadd    dword ptr [g_007da874]
        mov    edx, dword ptr [eax + ecx]
        mov    eax, dword ptr [eax + ecx + 4]
        mov    dword ptr [esi + 0x5c], eax
        fstp    dword ptr [esi + 0x20]
        mov    al, byte ptr [ebx + 0x13]
        test    al, 1
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x24]
        mov    dword ptr [esi + 0x18], edi
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
        je    L_4901
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    dl, byte ptr [edx + eax]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x17], dl
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0xc]
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
L_4901:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_49b4
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xb4]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        xor    edx, edx
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x18]
        lea    eax, [eax + ecx + 0x18]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xb0]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x1c]
        lea    eax, [edx + eax + 0x1c]
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xb4]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x38]
        lea    eax, [ecx + edx + 0x38]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xb0]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x3c]
        lea    eax, [eax + ecx + 0x3c]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xb4]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x58]
        lea    eax, [edx + eax + 0x58]
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xb0]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x5c]
        lea    eax, [ecx + edx + 0x5c]
        fstp    dword ptr [eax]
L_49b4:
        mov    dx, word ptr [ebx + 0xa]
        mov    ecx, dword ptr [ebx + 0x50]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0x54]
        mov    edi, dword ptr [ebp + 0x18]
        mov    esi, dword ptr [ebp + 8]
        add    edi, 4
        add    esi, 8
        mov    dword ptr [ebp + 0x18], edi
        mov    dword ptr [ebp + 8], esi
        mov    word ptr [ecx + eax*2], dx
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        inc    ax
        mov    word ptr [edx + ecx*2 + 2], ax
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        add    ax, 2
        mov    word ptr [edx + ecx*2 + 4], ax
        mov    ecx, dword ptr [ebp - 0xc]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        mov    eax, dword ptr [ebp - 0x2c]
        inc    ecx
        dec    eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0xc], ecx
        jl    L_44b8
L_4a21:
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    esi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x20]
        add    esi, ecx
        mov    ecx, dword ptr [ebp - 0x7c]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x14], esi
        mov    dword ptr [ebp - 0x20], eax
        jl    L_4477
L_4a3e:
        cmp    dword ptr [g_007b2210], 1
        mov    edx, dword ptr [ebp - 8]
        jne    L_4c30
        test    byte ptr [g_007da86c], 2
        jle    L_4b27
        mov    eax, dword ptr [edx + 0x28]
        test    ah, 0x3c
        je    L_4b27
        xor    esi, esi
        mov    si, word ptr [edx + 0xa]
        test    esi, esi
        jle    L_4b11
        mov    ecx, dword ptr [edx + 0xa4]
        add    ecx, 0x20
        mov    edi, esi
        mov    ebx, 0xffffff
L_4a85:
        fld    dword ptr [ecx - 8]
        fmul    dword ptr [edx + 0x9c]
        fadd    dword ptr [edx + 0x94]
        fadd    dword ptr [ebp - 0xc4]
        fstp    dword ptr [ecx]
        fld    dword ptr [ecx - 4]
        fmul    dword ptr [edx + 0xa0]
        fadd    dword ptr [ebp - 0xc0]
        fadd    dword ptr [edx + 0x98]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [ecx - 0x14]
        fcomp    dword ptr [edx + 0x8c]
        fnstsw  ax
        test    ah, 1
        je    L_4ac9
        and    dword ptr [ecx - 0x10], ebx
        jmp    L_4b07
L_4ac9:
        fld    dword ptr [ecx - 0x14]
        fcomp    dword ptr [edx + 0x88]
        fnstsw  ax
        test    ah, 1
        je    L_4b07
        fld    dword ptr [ecx - 0x14]
        fsub    dword ptr [edx + 0x8c]
        fmul    dword ptr [edx + 0x90]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 0x14]
        and    eax, 0xffff
        shl    eax, 0x18
        or    eax, ebx
        and    dword ptr [ecx - 0x10], eax
L_4b07:
        add    ecx, 0x28
        dec    edi
        jne    L_4a85
L_4b11:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_4c52
        mov    eax, dword ptr [ebp + 0x10]
        add    dword ptr [eax + 4], esi
        jmp    L_4c49
L_4b27:
        mov    edx, dword ptr [ebp - 8]
        mov    esi, dword ptr [edx + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [edx + 0xa]
        mov    dword ptr [ebp + 0x14], 0
        shl    ecx, 5
        lea    edi, [esi + ecx]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        xor    esi, esi
        mov    si, word ptr [edx + 0xa]
        test    esi, esi
        jle    L_4c0e
        mov    eax, dword ptr [edx + 0x44]
        mov    ecx, esi
        shl    ecx, 5
        lea    ecx, [ecx + eax + 0xc]
        lea    edi, [eax + 0x1c]
        mov    ebx, esi
L_4b6d:
        fld    dword ptr [edi - 4]
        fmul    dword ptr [edx + 0x9c]
        fadd    dword ptr [edx + 0x94]
        fadd    dword ptr [ebp - 0xc4]
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [edx + 0xa0]
        fmul    dword ptr [edi]
        fadd    dword ptr [ebp - 0xc0]
        fadd    dword ptr [edx + 0x98]
        fstp    dword ptr [ecx + 0x10]
        fld    dword ptr [ecx]
        fcomp    dword ptr [edx + 0x8c]
        fnstsw  ax
        test    ah, 1
        je    L_4bb4
        and    dword ptr [ecx + 4], 0xffffff
        jmp    L_4bfa
L_4bb4:
        fld    dword ptr [ecx]
        mov    eax, dword ptr [ebp + 0x14]
        fcomp    dword ptr [edx + 0x88]
        inc    eax
        mov    dword ptr [ebp + 0x14], eax
        fnstsw  ax
        test    ah, 1
        je    L_4bfa
        fld    dword ptr [ecx]
        fsub    dword ptr [edx + 0x8c]
        fmul    dword ptr [edx + 0x90]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp + 8]
        and    eax, 0xffff
        shl    eax, 0x18
        or    eax, 0xffffff
        and    dword ptr [ecx + 4], eax
L_4bfa:
        add    edi, 0x20
        add    ecx, 0x20
        dec    ebx
        jne    L_4b6d
        cmp    word ptr [ebp + 0x14], 0
        jne    L_4c14
L_4c0e:
        mov    byte ptr [edx + 0x64], 0
        jmp    L_4c18
L_4c14:
        mov    byte ptr [edx + 0x64], 1
L_4c18:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_4c52
        mov    eax, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [eax]
        lea    ecx, [esi + esi]
        add    edx, ecx
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ebp - 8]
        jmp    L_4c46
L_4c30:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_4c52
        mov    eax, dword ptr [ebp + 0x10]
        mov    esi, dword ptr [eax]
        xor    ecx, ecx
        mov    cx, word ptr [edx + 0xa]
        add    esi, ecx
        mov    dword ptr [eax], esi
L_4c46:
        mov    eax, dword ptr [ebp + 0x10]
L_4c49:
        xor    ecx, ecx
        mov    cx, word ptr [edx + 0x54]
        add    dword ptr [eax + 0xc], ecx
L_4c52:
        mov    eax, dword ptr [ebp - 8]
        cmp    word ptr [eax + 0xa], 0
        setne    dl
        mov    byte ptr [eax + 0x10], dl
        mov    eax, dword ptr [ebp - 0xac]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_4c6f:
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
        mov    ecx, esi
        call    FUN_00455da0
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        nop    
        // jump-table data @ 0x00434CA0 (6 relocated pointers)
        __emit 0xB8
        __emit 0x29
        __emit 0x43
        __emit 0x00
        __emit 0xE7
        __emit 0x29
        __emit 0x43
        __emit 0x00
        __emit 0xEF
        __emit 0x29
        __emit 0x43
        __emit 0x00
        __emit 0xFB
        __emit 0x29
        __emit 0x43
        __emit 0x00
        __emit 0x01
        __emit 0x2A
        __emit 0x43
        __emit 0x00
        __emit 0x09
        __emit 0x2A
        __emit 0x43
        __emit 0x00
        // jump-table data @ 0x00434CB8 (6 relocated pointers)
        __emit 0x5D
        __emit 0x2A
        __emit 0x43
        __emit 0x00
        __emit 0x85
        __emit 0x2A
        __emit 0x43
        __emit 0x00
        __emit 0x8D
        __emit 0x2A
        __emit 0x43
        __emit 0x00
        __emit 0x99
        __emit 0x2A
        __emit 0x43
        __emit 0x00
        __emit 0x9F
        __emit 0x2A
        __emit 0x43
        __emit 0x00
        __emit 0xA7
        __emit 0x2A
        __emit 0x43
        __emit 0x00
        // jump-table data @ 0x00434CD0 (6 relocated pointers)
        __emit 0x88
        __emit 0x37
        __emit 0x43
        __emit 0x00
        __emit 0xDB
        __emit 0x37
        __emit 0x43
        __emit 0x00
        __emit 0xE7
        __emit 0x37
        __emit 0x43
        __emit 0x00
        __emit 0x13
        __emit 0x38
        __emit 0x43
        __emit 0x00
        __emit 0x1E
        __emit 0x38
        __emit 0x43
        __emit 0x00
        __emit 0x29
        __emit 0x38
        __emit 0x43
        __emit 0x00
        // jump-table data @ 0x00434CE8 (14 relocated pointers)
        __emit 0xC5
        __emit 0x37
        __emit 0x43
        __emit 0x00
        __emit 0x09
        __emit 0x3A
        __emit 0x43
        __emit 0x00
        __emit 0x15
        __emit 0x3A
        __emit 0x43
        __emit 0x00
        __emit 0x41
        __emit 0x3A
        __emit 0x43
        __emit 0x00
        __emit 0x4C
        __emit 0x3A
        __emit 0x43
        __emit 0x00
        __emit 0x57
        __emit 0x3A
        __emit 0x43
        __emit 0x00
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
        __emit 0xBB
        __emit 0xA8
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x56
        __emit 0x89
        __emit 0x5D
        __emit 0xFC
        __emit 0x89
        __emit 0xBB
        __emit 0xB0
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xFF
    }
}
