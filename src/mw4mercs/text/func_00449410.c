/*
 * FUN_00449410 (extent 0x449410-0x44b0d4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d070;
extern float  g_0076dd60;
extern float  g_007b220c;
extern int    g_007b2210;
extern int    g_007b94a0;
extern int    g_007b9894;
extern int    g_007b9898;
extern int    g_007b989c;
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
extern char   g_007da86c;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_0041cb30(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00448e50(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00449410(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0xd8
        mov    eax, dword ptr [ecx + 0x58]
        test    eax, eax
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [ebp - 0x64], 0
        jg    L_9436
        mov    byte ptr [ecx + 0x10], 0
        xor    eax, eax
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_9436:
        cmp    word ptr [ecx + 0x56], 0
        mov    eax, dword ptr [ecx + 0x18]
        mov    dword ptr [ebp - 0x48], eax
        jne    L_944b
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x98]
L_944b:
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [g_007da688]
        mov    ecx, dword ptr [ebp - 8]
        push    ebx
        push    esi
        mov    esi, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [g_007da600]
        mov    ebx, dword ptr [ecx]
        push    edi
        mov    edi, dword ptr [eax]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x38], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp - 0x20], edi
        je    L_94df
        mov    eax, dword ptr [ebp - 0x48]
        test    eax, eax
        mov    dword ptr [ebp - 0x1c], 0
        jle    L_951a
L_948a:
        cmp    byte ptr [ebx], 0
        je    L_94bc
        mov    edx, dword ptr [ebp - 0x38]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp - 0x20]
        push    edx
        push    eax
        push    esi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
        mov    ecx, dword ptr [g_007da65c]
        mov    edi, dword ptr [ecx]
        add    edi, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [edi], al
        mov    edi, dword ptr [ebp - 0x20]
L_94bc:
        mov    ecx, dword ptr [ebp - 0x38]
        mov    eax, dword ptr [ebp - 0x1c]
        add    ecx, 4
        inc    eax
        add    edi, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x38], ecx
        mov    ecx, dword ptr [ebp - 0x48]
        inc    ebx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x20], edi
        jl    L_948a
        jmp    L_951a
L_94df:
        mov    eax, dword ptr [ebp - 0x48]
        test    eax, eax
        jle    L_951a
        mov    dword ptr [ebp + 0x14], eax
L_94e9:
        cmp    byte ptr [ebx], 0
        je    L_9501
        mov    edx, dword ptr [ebp - 0x38]
        mov    eax, dword ptr [ebp + 8]
        push    edx
        push    eax
        push    esi
        mov    ecx, edi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
L_9501:
        mov    edx, dword ptr [ebp - 0x38]
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        add    edi, 0x10
        inc    ebx
        dec    eax
        mov    dword ptr [ebp - 0x38], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_94e9
L_951a:
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x24]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0xac], 0
        mov    dword ptr [ebp - 4], 0
        je    L_95d0
        test    eax, eax
        jle    L_95d0
        mov    edx, dword ptr [g_007da848]
        mov    eax, dword ptr [edx + eax*4 + 0x24]
        test    eax, eax
        je    L_95d0
        mov    edx, dword ptr [eax]
        push    0
        mov    ecx, eax
        call    dword ptr [edx + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_9575
        mov    dword ptr [g_007da864], 1
        jmp    L_95d0
L_9575:
        cmp    eax, 0x80
        jl    L_9588
        mov    dword ptr [g_007da864], 2
        jmp    L_95d0
L_9588:
        cmp    eax, 0x40
        jl    L_9599
        mov    dword ptr [g_007da864], 4
        jmp    L_95d0
L_9599:
        cmp    eax, 0x20
        jl    L_95aa
        mov    dword ptr [g_007da864], 8
        jmp    L_95d0
L_95aa:
        cmp    eax, 0x10
        jl    L_95bb
        mov    dword ptr [g_007da864], 0x10
        jmp    L_95d0
L_95bb:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_95d0:
        mov    dl, byte ptr [ebp + 0x1c]
        test    dl, dl
        je    L_95df
        mov    eax, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [eax + 0x38]
        jmp    L_95ee
L_95df:
        mov    ecx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 0x18]
        lea    eax, [eax + eax*4]
        lea    eax, [ecx + eax*8]
L_95ee:
        mov    esi, dword ptr [g_007da688]
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [esi]
        mov    dword ptr [ecx + 0xa4], eax
        xor    eax, eax
        mov    dword ptr [ebp - 0x38], esi
        cmp    dword ptr [ecx + 0x58], eax
        mov    dword ptr [ebp - 0x68], eax
        mov    dword ptr [ebp - 0x54], eax
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0xc], eax
        jle    L_a72f
L_9619:
        mov    edx, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    eax, dword ptr [edx]
        add    eax, ecx
        cmp    byte ptr [eax], 0
        mov    dword ptr [ebp + 0x14], eax
        je    L_a702
        mov    ebx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ebx + 0x48]
        mov    eax, dword ptr [ebp - 0xc]
        add    eax, edx
        xor    ecx, ecx
        mov    cl, byte ptr [eax]
        xor    edx, edx
        mov    dl, byte ptr [eax + 1]
        mov    esi, ecx
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 2]
        mov    edi, edx
        mov    dword ptr [ebp + 8], esi
        mov    dword ptr [ebp - 0x18], edi
        mov    eax, ecx
        mov    ecx, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [ecx + esi*4]
        mov    esi, dword ptr [ecx + eax*4]
        mov    dword ptr [ebp - 0x44], eax
        mov    eax, dword ptr [ecx + edi*4]
        mov    edi, eax
        and    edi, esi
        mov    dword ptr [g_007b9898], edx
        or    eax, esi
        mov    esi, dword ptr [g_007b9898]
        and    edx, edi
        or    esi, eax
        test    edx, edx
        mov    dword ptr [g_007b989c], edx
        mov    dword ptr [g_007b9898], esi
        je    L_9697
        mov    edx, dword ptr [ebp + 0x14]
        mov    byte ptr [edx], 0
        jmp    L_a702
L_9697:
        test    esi, esi
        jne    L_96c3
        mov    eax, dword ptr [ebp - 0x64]
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp - 0x18]
        inc    eax
        mov    dword ptr [ebp - 0x64], eax
        mov    eax, dword ptr [g_007da600]
        mov    eax, dword ptr [eax]
        mov    byte ptr [eax + ecx], 1
        mov    ecx, dword ptr [ebp - 0x44]
        mov    byte ptr [eax + edx], 1
        mov    byte ptr [eax + ecx], 1
        jmp    L_a702
L_96c3:
        mov    eax, dword ptr [esi*4 + 0x7b2478]
        xor    edx, edx
        cmp    eax, 1
        mov    dword ptr [ebp - 0x10], edx
        jne    L_9cae
        mov    eax, dword ptr [ebp - 0xc]
        lea    esi, [eax + 3]
        cmp    eax, esi
        mov    dword ptr [ebp - 0x3c], esi
        jge    L_9c9b
        jmp    L_96ee
L_96eb:
        mov    ecx, dword ptr [ebp - 0x38]
L_96ee:
        mov    esi, dword ptr [ebx + 0x48]
        xor    edx, edx
        mov    dl, byte ptr [esi + eax]
        inc    eax
        mov    dword ptr [ebp - 0x40], eax
        mov    edi, edx
        cmp    eax, dword ptr [ebp - 0x3c]
        jl    L_9704
        mov    eax, dword ptr [ebp - 0xc]
L_9704:
        xor    edx, edx
        mov    dl, byte ptr [esi + eax]
        mov    esi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x68]
        and    esi, 0xffff
        add    esi, eax
        mov    eax, dword ptr [ecx + edi*4]
        test    eax, eax
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [g_007b9894], eax
        jne    L_97e3
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
        mov    ecx, dword ptr [g_007da680]
        mov    edx, dword ptr [ecx]
        lea    eax, [edx + esi*8]
        lea    ecx, [eax + 4]
        push    ecx
        push    eax
        push    edi
        mov    ecx, ebx
        mov    byte ptr [ebp + 0x17], 1
        call    FUN_00448e50
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        jbe    L_97c3
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x20], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    eax, 0x7da660
L_9798:
        mov    edx, dword ptr [ebp - 0x20]
        test    ecx, edx
        je    L_97b1
        mov    ecx, dword ptr [eax - 4]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [ecx + esi], dl
        mov    ecx, dword ptr [ebp - 0x14]
L_97b1:
        mov    edx, dword ptr [ebp - 0x20]
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da670
        mov    dword ptr [ebp - 0x20], edx
        jl    L_9798
L_97c3:
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x38]
        mov    ecx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax + ecx*4]
        inc    edx
        inc    esi
        test    ecx, ecx
        mov    dword ptr [ebp - 0x10], edx
        je    L_9c84
        mov    eax, dword ptr [g_007b9894]
        jmp    L_97f2
L_97e3:
        mov    ecx, dword ptr [ecx + edx*4]
        test    ecx, ecx
        mov    byte ptr [ebp + 0x17], 0
        jne    L_9c84
L_97f2:
        or    eax, ecx
        mov    ebx, 1
        mov    dword ptr [g_007b9894], eax
        xor    edx, edx
L_9800:
        test    ebx, eax
        jne    L_9812
        shl    ebx, 1
        inc    edx
        cmp    dx, 6
        jb    L_9800
        jmp    L_9974
L_9812:
        cmp    byte ptr [ebp + 0x17], 1
        jne    L_98c3
        mov    eax, dword ptr [g_007da68c]
        mov    ebx, dword ptr [eax]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, edi
        shl    eax, 4
        shl    ecx, 4
        add    eax, ebx
        add    ecx, ebx
        mov    ebx, edx
        and    ebx, 0xffff
        cmp    ebx, 5
        ja    L_98a5
        jmp    dword ptr [ebx*4 + 0x44b0d4]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_9852:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_9961
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_996e
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_9852
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_9852
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_9852
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_9852
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_9852
L_98a5:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_990d
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_996e
L_98c3:
        mov    ecx, dword ptr [g_007da68c]
        mov    ebx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp + 8]
        mov    eax, edi
        shl    eax, 4
        shl    ecx, 4
        add    eax, ebx
        add    ecx, ebx
        mov    ebx, edx
        and    ebx, 0xffff
        cmp    ebx, 5
        ja    L_9946
        jmp    dword ptr [ebx*4 + 0x44b0ec]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_98fa:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_9961
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_990d:
        mov    dword ptr [ebp - 4], 0
        jmp    L_996e
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_98fa
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_98fa
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_98fa
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_98fa
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_98fa
L_9946:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_990d
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_996e
L_9961:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_996e:
        mov    dword ptr [ebp - 0xac], ebx
L_9974:
        cmp    byte ptr [ebp + 0x17], 1
        jne    L_9b06
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    ecx, dword ptr [ebp + 8]
        mov    ebx, dword ptr [g_007da684]
        mov    ebx, dword ptr [ebx]
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        mov    eax, edi
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, esi
        shl    edx, 4
        fmul    dword ptr [ebp - 4]
        add    edx, ebx
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
        mov    eax, dword ptr [ebp - 0xac]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_99fa
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_9a00
L_99fa:
        fld    dword ptr [g_007b220c]
L_9a00:
        mov    eax, dword ptr [eax*8 + 0x7b2404]
        mov    ebx, dword ptr [ebp - 8]
        fstp    dword ptr [edx + eax*4]
        lea    ecx, [ebp - 0xcc]
        push    ecx
        lea    edx, [ebp - 0xd0]
        push    edx
        push    edi
        mov    ecx, ebx
        call    FUN_00448e50
        mov    edx, dword ptr [ebp + 8]
        lea    eax, [ebp - 0xc4]
        push    eax
        lea    ecx, [ebp - 0xc8]
        push    ecx
        push    edx
        mov    ecx, ebx
        call    FUN_00448e50
        fld    dword ptr [ebp - 0xc8]
        fsub    dword ptr [ebp - 0xd0]
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        lea    eax, [ecx + esi*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebp - 0xd0]
        fstp    dword ptr [eax]
        fld    dword ptr [ebp - 0xc4]
        fsub    dword ptr [ebp - 0xcc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebp - 0xcc]
        fstp    dword ptr [eax + 4]
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        jbe    L_9c81
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 0x14], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    eax, 0x7da65c
L_9a99:
        mov    edx, dword ptr [ebp + 0x14]
        test    ecx, edx
        je    L_9aef
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ecx]
        mov    cl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp + 8]
        mov    byte ptr [ebp - 0xd4], cl
        mov    ecx, dword ptr [ebp - 0xd4]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x58], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [ebx + edx]
        mov    edx, dword ptr [ebp - 0x58]
        mov    ebx, dword ptr [ebp - 8]
        sub    ecx, edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x18], ecx
        fild    dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x58]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x18]
        mov    dl, byte ptr [ebp - 0x18]
        mov    byte ptr [ecx + esi], dl
        mov    ecx, dword ptr [ebp - 0x14]
L_9aef:
        mov    edx, dword ptr [ebp + 0x14]
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 0x14], edx
        jl    L_9a99
        jmp    L_9c81
L_9b06:
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp + 8]
        mov    ebx, dword ptr [g_007da684]
        mov    ebx, dword ptr [ebx]
        mov    ecx, edi
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, esi
        shl    edx, 4
        fmul    dword ptr [ebp - 4]
        add    edx, ebx
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
        mov    eax, dword ptr [ebp - 0xac]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_9b81
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_9b87
L_9b81:
        fld    dword ptr [g_007b220c]
L_9b87:
        mov    eax, dword ptr [eax*8 + 0x7b2404]
        mov    ebx, dword ptr [ebp - 8]
        fstp    dword ptr [edx + eax*4]
        mov    eax, dword ptr [ebp + 8]
        lea    ecx, [ebp - 0xbc]
        push    ecx
        lea    edx, [ebp - 0xc0]
        push    edx
        push    eax
        mov    ecx, ebx
        call    FUN_00448e50
        lea    ecx, [ebp - 0xb4]
        push    ecx
        lea    edx, [ebp - 0xb8]
        push    edx
        push    edi
        mov    ecx, ebx
        call    FUN_00448e50
        fld    dword ptr [ebp - 0xb8]
        fsub    dword ptr [ebp - 0xc0]
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        lea    eax, [ecx + esi*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebp - 0xc0]
        fstp    dword ptr [eax]
        fld    dword ptr [ebp - 0xb4]
        fsub    dword ptr [ebp - 0xbc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebp - 0xbc]
        fstp    dword ptr [eax + 4]
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        jbe    L_9c81
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 0x14], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    eax, 0x7da65c
L_9c1c:
        mov    edx, dword ptr [ebp + 0x14]
        test    ecx, edx
        je    L_9c6f
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    edx, dword ptr [ebp + 8]
        mov    dl, byte ptr [ecx + edx]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + edi]
        mov    ecx, dword ptr [eax + 4]
        mov    byte ptr [ebp - 0xd8], dl
        mov    edx, dword ptr [ebp - 0xd8]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x44], edx
        sub    ebx, edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x18], ebx
        fild    dword ptr [ebp - 0x18]
        mov    ebx, dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x44]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x18]
        mov    cl, byte ptr [ebp - 0x18]
        mov    byte ptr [edx + esi], cl
        mov    ecx, dword ptr [ebp - 0x14]
L_9c6f:
        mov    edx, dword ptr [ebp + 0x14]
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 0x14], edx
        jl    L_9c1c
L_9c81:
        inc    dword ptr [ebp - 0x10]
L_9c84:
        mov    edx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0x40]
        lea    ecx, [edx + 3]
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x3c], ecx
        jl    L_96eb
        mov    edx, dword ptr [ebp - 0x10]
L_9c9b:
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x54]
        mov    word ptr [ecx + eax*2], dx
        jmp    L_a6d8
L_9cae:
        mov    eax, dword ptr [g_007da66c]
        mov    ecx, dword ptr [eax + 0x30]
        mov    bl, byte ptr [ebx + 0x13]
        test    bl, bl
        mov    edx, dword ptr [eax + 0x40]
        mov    dword ptr [ebp - 0x88], ecx
        mov    ecx, dword ptr [eax + 0x48]
        mov    dword ptr [ebp - 0x80], edx
        mov    dword ptr [ebp - 0x7c], ecx
        jbe    L_9cf8
        and    ebx, 0xff
        mov    edx, 1
        lea    ecx, [ebp - 0x78]
        add    eax, 0x50
        mov    esi, 2
L_9ce5:
        test    ebx, edx
        je    L_9ced
        mov    edi, dword ptr [eax]
        mov    dword ptr [ecx], edi
L_9ced:
        add    eax, 8
        add    ecx, 4
        shl    edx, 1
        dec    esi
        jne    L_9ce5
L_9cf8:
        mov    eax, dword ptr [ebp - 0xc]
        lea    ecx, [eax + 3]
        cmp    eax, ecx
        mov    byte ptr [ebp + 0xb], 0
        mov    byte ptr [ebp + 0x17], 0xff
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0x40], 0
        mov    dword ptr [ebp - 0x3c], ecx
        jge    L_9e0e
        mov    ebx, dword ptr [ebp - 8]
L_9d1e:
        mov    edx, dword ptr [ebx + 0x48]
        mov    ecx, dword ptr [ebp - 0x10]
        xor    eax, eax
        mov    al, byte ptr [ecx + edx]
        mov    edx, dword ptr [g_007da68c]
        mov    esi, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x88]
        mov    edi, eax
        shl    eax, 4
        add    eax, esi
        mov    esi, dword ptr [ebp - 0x40]
        and    esi, 0xffff
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, edx
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 8], edx
        mov    dword ptr [ecx + 0xc], eax
        lea    ecx, [ebp - 0x28]
        push    ecx
        lea    edx, [ebp - 0x2c]
        push    edx
        push    edi
        mov    ecx, ebx
        call    FUN_00448e50
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp - 0x80]
        mov    dword ptr [eax + esi*8], ecx
        mov    edx, dword ptr [ebp - 0x28]
        mov    dword ptr [eax + esi*8 + 4], edx
        mov    eax, dword ptr [g_007da688]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x7c]
        mov    edx, dword ptr [ecx + edi*4]
        mov    dword ptr [eax + esi*4], edx
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        jbe    L_9df5
        and    eax, 0xff
        mov    dword ptr [ebp - 0x20], 1
        mov    dword ptr [ebp - 0x14], eax
        lea    edx, [ebp - 0x78]
        mov    ecx, 0x7da65c
        jmp    L_9db9
L_9db6:
        mov    eax, dword ptr [ebp - 0x14]
L_9db9:
        mov    ebx, dword ptr [ebp - 0x20]
        test    eax, ebx
        je    L_9ddc
        mov    eax, dword ptr [ecx]
        mov    eax, dword ptr [eax]
        mov    al, byte ptr [eax + edi]
        mov    ebx, dword ptr [edx]
        mov    byte ptr [esi + ebx], al
        cmp    al, byte ptr [ebp + 0x17]
        jae    L_9dd4
        mov    byte ptr [ebp + 0x17], al
L_9dd4:
        cmp    al, byte ptr [ebp + 0xb]
        jbe    L_9ddc
        mov    byte ptr [ebp + 0xb], al
L_9ddc:
        mov    ebx, dword ptr [ebp - 0x20]
        add    ecx, 8
        shl    ebx, 1
        add    edx, 4
        cmp    ecx, 0x7da66c
        mov    dword ptr [ebp - 0x20], ebx
        jl    L_9db6
        mov    ebx, dword ptr [ebp - 8]
L_9df5:
        mov    eax, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ebp - 0x40]
        mov    ecx, dword ptr [ebp - 0x3c]
        inc    eax
        inc    edx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0x40], edx
        jl    L_9d1e
L_9e0e:
        mov    cx, word ptr [ebp - 0x40]
        mov    eax, dword ptr [g_007da66c]
        mov    edx, dword ptr [eax]
        mov    word ptr [ebp - 0x70], cx
        mov    ecx, dword ptr [eax + 0x10]
        mov    dword ptr [ebp - 0xa0], ecx
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + 0x13]
        xor    edi, edi
        mov    dword ptr [ebp - 0xa8], edx
        mov    edx, dword ptr [eax + 0x18]
        xor    ebx, ebx
        test    cl, cl
        mov    dword ptr [ebp - 0x58], edi
        mov    dword ptr [ebp - 0x9c], edx
        jbe    L_9e7e
        mov    ebx, ecx
        and    ebx, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0x14], ebx
        lea    ecx, [ebp - 0x98]
        add    eax, 0x20
        mov    esi, 2
L_9e66:
        test    ebx, edx
        je    L_9e71
        mov    ebx, dword ptr [eax]
        mov    dword ptr [ecx], ebx
        mov    ebx, dword ptr [ebp - 0x14]
L_9e71:
        add    eax, 8
        add    ecx, 4
        shl    edx, 1
        dec    esi
        jne    L_9e66
        xor    ebx, ebx
L_9e7e:
        mov    esi, dword ptr [ebp - 0x70]
        mov    word ptr [ebp - 0x90], bx
        mov    dword ptr [ebp - 0x3c], 1
        mov    dword ptr [ebp - 0x18], 4
L_9e96:
        mov    dword ptr [ebp - 0x48], ebx
        mov    dword ptr [ebp + 0x14], 0x7b2404
        mov    dword ptr [ebp - 0x44], 6
L_9ea7:
        mov    edx, dword ptr [g_007b9898]
        test    dword ptr [ebp - 0x3c], edx
        je    L_a56d
        xor    eax, eax
        mov    ecx, esi
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0x20], ecx
        jle    L_a471
        mov    edx, dword ptr [ebp - 0x7c]
        mov    ebx, dword ptr [ebp - 0x80]
        mov    dword ptr [ebp - 0x8c], edx
        mov    edx, dword ptr [ebp - 0x88]
        mov    dword ptr [ebp - 0xb0], ebx
        lea    esi, [edx + 8]
L_9ee7:
        mov    edi, dword ptr [ebp - 0x3c]
        lea    edx, [eax + 1]
        xor    eax, eax
        cmp    edx, ecx
        setge    al
        mov    dword ptr [ebp - 0x40], edx
        dec    eax
        and    eax, edx
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 0x8c]
        mov    eax, dword ptr [eax]
        test    edi, eax
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [g_007b9894], eax
        jne    L_a00d
        mov    ecx, dword ptr [ebp - 0x90]
        mov    edi, dword ptr [ebp - 0xa8]
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
        mov    eax, dword ptr [ebp - 0x8c]
        mov    eax, dword ptr [eax]
        mov    edi, dword ptr [ebp - 0x9c]
        mov    dword ptr [edi + ecx*4], eax
        mov    edi, dword ptr [ebx]
        mov    eax, dword ptr [ebp - 0xa0]
        mov    dword ptr [eax + ecx*8], edi
        mov    edi, dword ptr [ebx + 4]
        mov    dword ptr [eax + ecx*8 + 4], edi
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_9fc0
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp - 0x30], 1
        mov    dword ptr [ebp - 0x14], edx
        mov    dword ptr [ebp - 0x4c], eax
L_9f89:
        mov    edi, dword ptr [ebp - 0x30]
        test    edx, edi
        je    L_9faa
        mov    edx, dword ptr [ebp + eax - 0x78]
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp + eax - 0x98]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    edx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x4c]
L_9faa:
        mov    edi, dword ptr [ebp - 0x30]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x4c], eax
        mov    dword ptr [ebp - 0x30], edi
        jl    L_9f89
        mov    edx, dword ptr [ebp - 0x40]
L_9fc0:
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp - 0x3c]
        mov    edi, dword ptr [ebp - 0x7c]
        inc    word ptr [ebp - 0x90]
        test    dword ptr [edi + eax*4], ecx
        je    L_a443
        mov    edx, dword ptr [ebp - 0x88]
        mov    ecx, eax
        mov    eax, dword ptr [ebp + 0x14]
        shl    ecx, 4
        cmp    eax, 0x7b242c
        lea    edi, [ecx + edx]
        ja    L_a09a
        mov    eax, dword ptr [ebp - 0x48]
        jmp    dword ptr [eax*4 + 0x44b104]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi + 4]
        jmp    L_a063
L_a00d:
        mov    eax, dword ptr [ebp - 0x7c]
        test    dword ptr [eax + ecx*4], edi
        jne    L_a443
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp - 0x88]
        shl    eax, 4
        lea    edi, [eax + ecx]
        cmp    dword ptr [ebp + 0x14], 0x7b242c
        ja    L_a241
        mov    edx, dword ptr [ebp - 0x48]
        jmp    dword ptr [edx*4 + 0x44b11c]
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_a20a
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + 4]
        jmp    L_a063
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi]
L_a063:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_a0b5
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_a076:
        mov    dword ptr [ebp - 4], 0
        jmp    L_a0c2
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi]
        jmp    L_a063
        fld    dword ptr [esi]
        fld    dword ptr [edi + 8]
        jmp    L_a063
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi + 8]
        jmp    L_a063
L_a09a:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_a076
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_a0c2
L_a0b5:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_a0c2:
        fld    dword ptr [edi]
        mov    ecx, dword ptr [ebp - 0x90]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0xa8]
        and    ecx, 0xffff
        mov    edx, ecx
        fmul    dword ptr [ebp - 4]
        shl    edx, 4
        add    eax, edx
        fadd    dword ptr [esi - 8]
        mov    edx, dword ptr [ebp + 0x14]
        mov    dword ptr [ebp - 0x4c], ecx
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
        je    L_a12b
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_a131
L_a12b:
        fld    dword ptr [g_007b220c]
L_a131:
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x80]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edi + edx*8]
        mov    edi, dword ptr [ebp - 0xa0]
        fsub    dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        fstp    dword ptr [edi + ecx*8]
        mov    edi, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx*8 + 4]
        mov    edi, dword ptr [ebp - 0xa0]
        fsub    dword ptr [ebx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + 4]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_a399
        mov    edi, ecx
        and    edi, 0xff
        mov    dword ptr [ebp - 0x30], 1
        mov    dword ptr [ebp - 0x14], edi
        xor    ecx, ecx
L_a18d:
        mov    ebx, dword ptr [ebp - 0x30]
        test    edi, ebx
        je    L_a1e2
        mov    edi, dword ptr [ebp + ecx - 0x78]
        mov    ebx, dword ptr [ebp - 0x10]
        mov    bl, byte ptr [edi + ebx]
        mov    byte ptr [ebp - 0x5c], bl
        mov    ebx, dword ptr [ebp - 0x5c]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x6c], ebx
        xor    ebx, ebx
        mov    bl, byte ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x6c]
        mov    edi, dword ptr [ebp - 0x4c]
        sub    ebx, edx
        mov    edx, dword ptr [ebp + ecx - 0x98]
        mov    dword ptr [ebp - 0x50], ebx
        fild    dword ptr [ebp - 0x50]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x6c]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x50]
        mov    bl, byte ptr [ebp - 0x50]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp + 8]
        mov    edi, dword ptr [ebp - 0x14]
L_a1e2:
        mov    ebx, dword ptr [ebp - 0x30]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 0x30], ebx
        jl    L_a18d
        jmp    L_a399
        fld    dword ptr [edi + 4]
        fld    dword ptr [esi - 4]
        jmp    L_a20a
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_a20a:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_a25c
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_a21d:
        mov    dword ptr [ebp - 4], 0
        jmp    L_a269
        fld    dword ptr [edi]
        fld    dword ptr [esi - 8]
        jmp    L_a20a
        fld    dword ptr [edi + 8]
        fld    dword ptr [esi]
        jmp    L_a20a
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_a20a
L_a241:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_a21d
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_a269
L_a25c:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_a269:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x90]
        fsub    dword ptr [edi]
        mov    edx, dword ptr [ebp - 0xa8]
        and    ecx, 0xffff
        mov    eax, ecx
        fmul    dword ptr [ebp - 4]
        shl    eax, 4
        add    eax, edx
        fadd    dword ptr [edi]
        mov    edx, dword ptr [ebp + 0x14]
        mov    dword ptr [ebp - 0x4c], ecx
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
        je    L_a2d2
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_a2d8
L_a2d2:
        fld    dword ptr [g_007b220c]
L_a2d8:
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp + 8]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [ebx]
        fsub    dword ptr [edx + edi*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx + edi*8]
        mov    edi, dword ptr [ebp - 0xa0]
        fstp    dword ptr [edi + ecx*8]
        mov    edi, dword ptr [ebp + 8]
        fld    dword ptr [ebx + 4]
        lea    edx, [edx + edi*8 + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa0]
        fstp    dword ptr [edx + ecx*8 + 4]
        xor    edx, edx
        mov    edx, dword ptr [ebp - 8]
        mov    dl, byte ptr [edx + 0x13]
        test    dl, dl
        jbe    L_a399
        and    edx, 0xff
        xor    edi, edi
        mov    dword ptr [ebp - 0x30], 1
        mov    dword ptr [ebp - 0x14], edx
        mov    dword ptr [ebp - 0x50], edi
L_a333:
        mov    ebx, dword ptr [ebp - 0x30]
        test    edx, ebx
        je    L_a386
        mov    edi, dword ptr [ebp + edi - 0x78]
        mov    edx, dword ptr [ebp + 8]
        mov    dl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x10]
        mov    byte ptr [ebp - 0x60], dl
        mov    edx, dword ptr [ebp - 0x60]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x6c], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x6c]
        mov    edi, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp - 0x24], edx
        fild    dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ebp + edi - 0x98]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x6c]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x24]
        mov    bl, byte ptr [ebp - 0x24]
        mov    byte ptr [edx + ecx], bl
        mov    edx, dword ptr [ebp - 0x14]
L_a386:
        mov    ebx, dword ptr [ebp - 0x30]
        add    edi, 4
        shl    ebx, 1
        cmp    edi, 8
        mov    dword ptr [ebp - 0x50], edi
        mov    dword ptr [ebp - 0x30], ebx
        jl    L_a333
L_a399:
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
        mov    ecx, dword ptr [ebp - 0x9c]
        mov    edx, dword ptr [ebp - 0x4c]
        mov    eax, dword ptr [ebp + 8]
        inc    word ptr [ebp - 0x90]
        mov    ebx, dword ptr [ebp - 0xb0]
        mov    dword ptr [ecx + edx*4], eax
        mov    ecx, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0x40]
        jmp    L_a446
L_a443:
        mov    ecx, dword ptr [ebp - 0x20]
L_a446:
        mov    edi, dword ptr [ebp - 0x58]
        mov    eax, edx
        mov    edx, dword ptr [ebp - 0x8c]
        add    edx, 4
        add    ebx, 8
        add    esi, 0x10
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0x8c], edx
        mov    dword ptr [ebp - 0xb0], ebx
        jl    L_9ee7
L_a471:
        mov    esi, dword ptr [g_007da66c]
        lea    eax, [edi + edi*2]
        shl    eax, 4
        mov    ecx, dword ptr [eax + esi]
        mov    edx, dword ptr [eax + esi + 0x10]
        add    eax, esi
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x88], ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0x80], edx
        xor    edx, edx
        mov    dl, byte ptr [ecx + 0x13]
        test    dl, dl
        mov    dword ptr [ebp - 0x7c], eax
        jbe    L_a4ef
        mov    esi, edx
        xor    eax, eax
        and    esi, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], esi
        lea    ecx, [ebp - 0x78]
        jmp    L_a4bd
L_a4ba:
        mov    esi, dword ptr [ebp - 0x14]
L_a4bd:
        mov    ebx, dword ptr [ebp + 8]
        test    esi, ebx
        je    L_a4d8
        lea    esi, [edi + edi*2]
        lea    ebx, [eax + esi*2]
        mov    esi, dword ptr [g_007da66c]
        mov    ebx, dword ptr [esi + ebx*8 + 0x20]
        mov    dword ptr [ecx], ebx
        jmp    L_a4de
L_a4d8:
        mov    esi, dword ptr [g_007da66c]
L_a4de:
        mov    ebx, dword ptr [ebp + 8]
        inc    eax
        shl    ebx, 1
        add    ecx, 4
        cmp    eax, 2
        mov    dword ptr [ebp + 8], ebx
        jl    L_a4ba
L_a4ef:
        mov    ax, word ptr [ebp - 0x90]
        xor    ecx, ecx
        test    edi, edi
        sete    cl
        mov    word ptr [ebp - 0x70], ax
        mov    edi, ecx
        lea    eax, [edi + edi*2]
        shl    eax, 4
        mov    ecx, dword ptr [eax + esi]
        add    eax, esi
        test    dl, dl
        mov    dword ptr [ebp - 0xa8], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x58], edi
        mov    dword ptr [ebp - 0xa0], ecx
        mov    dword ptr [ebp - 0x9c], eax
        jbe    L_a561
        xor    eax, eax
        and    edx, 0xff
        mov    ebx, 1
        mov    dword ptr [ebp - 0x14], edx
        lea    ecx, [ebp - 0x98]
L_a543:
        test    edx, ebx
        je    L_a556
        lea    edx, [edi + edi*2]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [esi + edx*8 + 0x20]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [ebp - 0x14]
L_a556:
        inc    eax
        add    ecx, 4
        shl    ebx, 1
        cmp    eax, 2
        jl    L_a543
L_a561:
        mov    esi, dword ptr [ebp - 0x70]
        xor    ebx, ebx
        mov    word ptr [ebp - 0x90], bx
L_a56d:
        mov    eax, dword ptr [ebp - 0x3c]
        mov    edx, dword ptr [ebp - 0x48]
        mov    ecx, dword ptr [ebp + 0x14]
        shl    eax, 1
        mov    dword ptr [ebp - 0x3c], eax
        mov    eax, dword ptr [ebp - 0x44]
        inc    edx
        add    ecx, 8
        dec    eax
        mov    dword ptr [ebp - 0x48], edx
        mov    dword ptr [ebp + 0x14], ecx
        mov    dword ptr [ebp - 0x44], eax
        jne    L_9ea7
        mov    edx, esi
        xor    eax, eax
        and    edx, 0xffff
        jle    L_a5a9
        mov    ecx, dword ptr [ebp - 0x7c]
L_a5a1:
        or    eax, dword ptr [ecx]
        add    ecx, 4
        dec    edx
        jne    L_a5a1
L_a5a9:
        cmp    eax, ebx
        mov    dword ptr [g_007b9898], eax
        je    L_a5cb
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, ecx
        dec    ecx
        test    edx, edx
        mov    dword ptr [ebp - 0x18], ecx
        jne    L_9e96
        cmp    eax, ebx
        jne    L_a6f4
L_a5cb:
        xor    edi, edi
        mov    eax, esi
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 0x20], eax
        jle    L_a6c0
        mov    eax, dword ptr [ebp - 8]
        mov    cl, byte ptr [eax + 0x13]
        mov    edx, dword ptr [g_007da680]
        mov    eax, dword ptr [ebp - 0x68]
        mov    edx, dword ptr [edx]
        mov    esi, dword ptr [ebp - 0x88]
        mov    ebx, dword ptr [g_007da684]
        lea    edx, [edx + eax*8]
        mov    byte ptr [ebp - 0x34], cl
        mov    ecx, dword ptr [ebp - 0x80]
        shl    eax, 4
        add    esi, 8
        add    eax, dword ptr [ebx]
        mov    dword ptr [ebp - 0x44], ecx
        mov    dword ptr [ebp - 0x18], edx
L_a614:
        mov    ebx, dword ptr [ebp - 0x68]
        add    ebx, edi
        mov    dword ptr [ebp - 0x24], ebx
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
        mov    ebx, dword ptr [ebp - 0x34]
        test    bl, bl
        jbe    L_a69c
        mov    ecx, ebx
        and    ecx, 0xff
        lea    ebx, [ebp - 0x78]
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    edx, 0x7da660
        mov    dword ptr [ebp + 0x14], ebx
L_a660:
        mov    ebx, dword ptr [ebp + 8]
        test    ecx, ebx
        je    L_a67f
        mov    ecx, dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [ecx]
        mov    cl, byte ptr [ecx + edi]
        mov    ebx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x24]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + edi], cl
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edi, dword ptr [ebp - 0x10]
L_a67f:
        add    dword ptr [ebp + 0x14], 4
        mov    ebx, dword ptr [ebp + 8]
        add    edx, 8
        shl    ebx, 1
        cmp    edx, 0x7da670
        mov    dword ptr [ebp + 8], ebx
        jl    L_a660
        mov    ecx, dword ptr [ebp - 0x44]
        mov    edx, dword ptr [ebp - 0x18]
L_a69c:
        mov    ebx, dword ptr [ebp - 0x20]
        inc    edi
        add    edx, 8
        add    ecx, 8
        add    eax, 0x10
        add    esi, 0x10
        cmp    edi, ebx
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [ebp - 0x44], ecx
        jl    L_a614
        mov    esi, dword ptr [ebp - 0x70]
L_a6c0:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x70]
        mov    ecx, dword ptr [ebp - 0x54]
        mov    word ptr [eax + ecx*2], dx
        mov    dword ptr [ebp - 0x10], esi
        mov    edx, esi
L_a6d8:
        mov    esi, dword ptr [ebp - 0x68]
        mov    ecx, dword ptr [ebp - 0x54]
        mov    eax, dword ptr [ebp - 0x64]
        and    edx, 0xffff
        add    esi, edx
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x68], esi
        mov    dword ptr [ebp - 0x54], ecx
        mov    dword ptr [ebp - 0x64], eax
L_a6f4:
        mov    eax, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    byte ptr [ecx + edx], 0
L_a702:
        mov    esi, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0x1c]
        add    esi, 3
        mov    dword ptr [ebp - 0xc], esi
        mov    esi, dword ptr [ebp - 8]
        mov    ecx, dword ptr [esi + 0x58]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], eax
        jl    L_9619
        mov    dl, byte ptr [ebp + 0x1c]
L_a723:
        test    dl, dl
        je    L_a734
        mov    ebx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ebx + 0x30]
        jmp    L_a743
L_a72f:
        mov    esi, dword ptr [ebp - 8]
        jmp    L_a723
L_a734:
        mov    ecx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ecx]
        mov    edi, dword ptr [ecx + 0x10]
        shl    eax, 5
        add    eax, edi
        mov    ebx, ecx
L_a743:
        xor    ecx, ecx
        test    dl, dl
        mov    dword ptr [esi + 0x44], eax
        mov    word ptr [esi + 0xa], cx
        je    L_a755
        mov    eax, dword ptr [ebx + 0x48]
        jmp    L_a75e
L_a755:
        mov    eax, dword ptr [ebx + 0xc]
        mov    edx, dword ptr [ebx + 0x28]
        lea    eax, [edx + eax*2]
L_a75e:
        mov    dword ptr [esi + 0x50], eax
        mov    word ptr [esi + 0x54], cx
        mov    eax, dword ptr [esi + 0x18]
        xor    edi, edi
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp + 0x14], ecx
        jle    L_a9a2
L_a77b:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + edi], 0
        jne    L_a791
        inc    dword ptr [ebp + 0x14]
        jmp    L_a996
L_a791:
        mov    ecx, dword ptr [ebp + 0x14]
        mov    eax, edi
        sub    eax, ecx
        mov    ecx, dword ptr [g_007da5f4]
        mov    word ptr [ecx + edi*2], ax
        lea    edx, [ebp - 0x28]
        push    edx
        lea    eax, [ebp - 0x2c]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00448e50
        lea    ecx, [ebp - 0x28]
        push    ecx
        lea    edx, [ebp - 0x2c]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00448e50
        test    byte ptr [g_007da86c], 2
        jle    L_a8bc
        mov    eax, dword ptr [esi + 0x28]
        test    ah, 0x3c
        je    L_a8bc
        cmp    dword ptr [g_007b2210], 1
        jne    L_a8bc
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0xc]
        lea    ebx, [edx*8]
        lea    eax, [ebp - 0x2c]
        sub    eax, ebx
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp - 0x34], ecx
        mov    ecx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        mov    ecx, dword ptr [ecx + 0xa4]
        lea    eax, [eax + eax*4]
        lea    esi, [ecx + eax*8]
        mov    dword ptr [ebp + 8], esi
        mov    ecx, dword ptr [ebp - 0x34]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp + 8]
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
        mov    edx, dword ptr [g_007b94a0]
        mov    eax, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebx + eax]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], edx
        mov    edx, dword ptr [ebx + eax + 4]
        mov    eax, dword ptr [ebp - 8]
        fstp    dword ptr [esi]
        mov    dword ptr [esi + 0x18], ecx
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x20], ecx
        fmul    dword ptr [esi + 4]
        mov    cl, byte ptr [eax + 0x13]
        test    cl, 1
        mov    dword ptr [esi + 0x1c], edx
        fadd    dword ptr [g_007da870]
        mov    dword ptr [esi + 0x24], edx
        fstp    dword ptr [esi + 4]
        je    L_a982
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0xc]
        mov    dl, byte ptr [edx + esi]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        mov    eax, dword ptr [eax + 0x44]
        shl    ecx, 5
        mov    byte ptr [ecx + eax + 0x17], dl
        jmp    L_a982
L_a8bc:
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0xc]
        lea    eax, [edx*8]
        lea    ebx, [ebp - 0x2c]
        xor    esi, esi
        sub    ebx, eax
        mov    eax, dword ptr [ebp - 8]
        mov    si, word ptr [eax + 0xa]
        mov    dword ptr [ebp - 0x34], ecx
        mov    ecx, dword ptr [eax + 0x44]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp + 8], esi
        mov    ecx, dword ptr [ebp - 0x34]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp + 8]
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
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [esi + 0x10], eax
        fadd    dword ptr [g_007da874]
        lea    eax, [ecx*8]
        mov    edx, dword ptr [eax + ebx]
        mov    eax, dword ptr [eax + ebx + 4]
        mov    ecx, dword ptr [ebp - 8]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x1c], eax
        fmul    dword ptr [esi + 4]
        mov    al, byte ptr [ecx + 0x13]
        test    al, 1
        mov    dword ptr [esi + 0x18], edx
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_a982
        mov    edx, dword ptr [g_007da65c]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 8]
        mov    esi, dword ptr [ebp - 0xc]
        mov    cl, byte ptr [ecx + esi]
        xor    edx, edx
        mov    dx, word ptr [eax + 0xa]
        mov    eax, dword ptr [eax + 0x44]
        shl    edx, 5
        mov    byte ptr [edx + eax + 0x17], cl
L_a982:
        mov    eax, dword ptr [ebp - 8]
        inc    word ptr [eax + 0xa]
        mov    edi, dword ptr [ebp - 0xc]
        mov    ebx, dword ptr [ebp + 0x10]
        mov    esi, eax
        mov    eax, dword ptr [ebp - 0x10]
        xor    ecx, ecx
L_a996:
        inc    edi
        cmp    edi, eax
        mov    dword ptr [ebp - 0xc], edi
        jl    L_a77b
L_a9a2:
        mov    edx, dword ptr [esi + 0x58]
        xor    eax, eax
        cmp    edx, ecx
        mov    dword ptr [ebp - 0x1c], ecx
        jle    L_aa2c
        mov    edx, dword ptr [g_007da5f4]
L_a9b4:
        mov    edi, dword ptr [g_007d98fc]
        mov    edi, dword ptr [edi]
        cmp    byte ptr [edi + ecx], 0
        je    L_aa1c
        mov    ecx, dword ptr [esi + 0x48]
        mov    edi, dword ptr [esi + 0x50]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0x54]
        mov    bx, word ptr [edx + ebx*2]
        mov    word ptr [edi + ecx*2], bx
        mov    ecx, dword ptr [esi + 0x48]
        mov    edi, dword ptr [esi + 0x50]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx + 2]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0x54]
        mov    bx, word ptr [edx + ebx*2]
        mov    word ptr [edi + ecx*2 + 2], bx
        mov    ecx, dword ptr [esi + 0x48]
        mov    edi, dword ptr [esi + 0x50]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx + 1]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0x54]
        mov    bx, word ptr [edx + ebx*2]
        mov    word ptr [edi + ecx*2 + 4], bx
        add    word ptr [esi + 0x54], 3
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    ebx, dword ptr [ebp + 0x10]
L_aa1c:
        mov    edi, dword ptr [esi + 0x58]
        add    eax, 3
        inc    ecx
        cmp    ecx, edi
        mov    dword ptr [ebp - 0x1c], ecx
        jl    L_a9b4
        xor    ecx, ecx
L_aa2c:
        mov    eax, dword ptr [ebp - 0x54]
        cmp    eax, ecx
        jle    L_aedd
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0xc], ecx
L_aa3d:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    ax, word ptr [eax + ecx*2]
        mov    dword ptr [ebp - 0x10], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x18], eax
        dec    eax
        cmp    eax, 1
        jle    L_aeba
        mov    edx, dword ptr [ebp - 0xc]
        mov    ebx, dword ptr [ebp - 8]
        lea    eax, [edx + 1]
        mov    dword ptr [ebp + 0x14], eax
L_aa71:
        test    byte ptr [g_007da86c], 2
        jle    L_ac9d
        mov    eax, dword ptr [ebx + 0x28]
        test    ah, 0x3c
        je    L_ac9d
        cmp    dword ptr [g_007b2210], 1
        jne    L_ac9d
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da684]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x5c], ecx
        mov    ecx, dword ptr [ebp + 0x14]
        mov    dword ptr [ebp - 0x60], eax
        mov    dword ptr [ebp - 0x34], ecx
        mov    ecx, dword ptr [ebp - 0x10]
        lea    eax, [edx + 1]
        add    eax, ecx
        mov    dword ptr [ebp + 8], eax
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ebx + 0xa4]
        lea    esi, [eax + edx*8]
        mov    dword ptr [ebp - 0x24], esi
        mov    ecx, dword ptr [ebp - 0x60]
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
        mov    eax, dword ptr [ebp + 8]
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
        mov    eax, dword ptr [ebp - 0x34]
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
        mov    eax, dword ptr [g_007b94a0]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [esi + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x38], eax
        mov    dword ptr [esi + 0x60], eax
        mov    eax, dword ptr [ebp - 0x5c]
        mov    edx, dword ptr [eax + ecx*8]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        lea    ecx, [ecx*8 + 4]
        fmul    dword ptr [esi + 4]
        mov    dword ptr [ebp - 0x34], ecx
        mov    ecx, dword ptr [ecx + eax]
        mov    dword ptr [esi + 0x18], edx
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [esi + 0x1c], ecx
        mov    ecx, dword ptr [eax + edx*8]
        fstp    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x40], ecx
        fld    dword ptr [g_007da87c]
        mov    ecx, dword ptr [eax + edx*8 + 4]
        fmul    dword ptr [esi + 0x28]
        mov    dword ptr [esi + 0x44], ecx
        mov    ecx, dword ptr [ebp + 0x14]
        mov    edi, dword ptr [eax + ecx*8]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x68], edi
        mov    edi, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x6c], edi
        mov    edi, dword ptr [ebp - 0xc]
        fstp    dword ptr [esi + 0x28]
        fld    dword ptr [g_007da878]
        mov    edi, dword ptr [eax + edi*8]
        fmul    dword ptr [esi + 0x2c]
        mov    dword ptr [esi + 0x20], edi
        mov    edi, dword ptr [ebp - 0x34]
        mov    edi, dword ptr [edi + eax]
        fadd    dword ptr [g_007da870]
        mov    dword ptr [esi + 0x24], edi
        mov    edi, dword ptr [eax + edx*8]
        mov    edx, dword ptr [eax + edx*8 + 4]
        fstp    dword ptr [esi + 0x2c]
        mov    dword ptr [esi + 0x4c], edx
        fld    dword ptr [g_007da87c]
        mov    edx, dword ptr [eax + ecx*8]
        fmul    dword ptr [esi + 0x50]
        mov    eax, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x74], eax
        mov    al, byte ptr [ebx + 0x13]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x48], edi
        mov    dword ptr [esi + 0x70], edx
        fstp    dword ptr [esi + 0x50]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x54]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x54]
        test    al, 1
        je    L_ae58
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0xa4]
        mov    edi, dword ptr [ebp - 0xc]
        mov    dl, byte ptr [edi + edx]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*4]
        mov    byte ptr [esi + eax*8 + 0x17], dl
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebp + 0x14]
        mov    dl, byte ptr [esi + edx + 1]
        mov    edi, dword ptr [ebx + 0xa4]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*4]
        mov    byte ptr [edi + eax*8 + 0x3f], dl
        mov    ecx, dword ptr [ecx]
        mov    cl, byte ptr [esi + ecx]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ebx + 0xa4]
        mov    byte ptr [eax + edx*8 + 0x67], cl
        jmp    L_ae58
L_ac9d:
        mov    edx, dword ptr [g_007da680]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [g_007da684]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0xc]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x5c], eax
        mov    eax, dword ptr [ebp + 0x14]
        mov    dword ptr [ebp - 0x34], eax
        lea    eax, [ecx + 1]
        mov    ecx, dword ptr [ebx + 0x44]
        mov    dword ptr [ebp - 0x60], edx
        mov    edx, dword ptr [ebp - 0x10]
        shl    esi, 5
        add    eax, edx
        add    esi, ecx
        mov    dword ptr [ebp + 8], eax
        mov    dword ptr [ebp - 0x24], esi
        mov    ecx, dword ptr [ebp - 0x60]
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
        mov    eax, dword ptr [ebp + 8]
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
        mov    eax, dword ptr [ebp - 0x34]
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
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [esi + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x30], eax
        mov    dword ptr [esi + 0x50], eax
        mov    eax, dword ptr [ebp - 0x5c]
        fstp    dword ptr [esi]
        mov    edx, dword ptr [eax + ecx*8]
        fld    dword ptr [g_007da878]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        fmul    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x1c], ecx
        mov    ecx, dword ptr [ebp + 8]
        mov    dword ptr [esi + 0x18], edx
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [eax + ecx*8]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x3c], ecx
        fstp    dword ptr [esi + 4]
        mov    ecx, dword ptr [ebp + 0x14]
        fld    dword ptr [g_007da87c]
        mov    dword ptr [esi + 0x38], edx
        fmul    dword ptr [esi + 0x20]
        mov    edx, dword ptr [eax + ecx*8]
        mov    eax, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x5c], eax
        fadd    dword ptr [g_007da874]
        mov    al, byte ptr [ebx + 0x13]
        test    al, 1
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
        je    L_ae58
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    esi, dword ptr [ebx + 0x44]
        mov    edi, dword ptr [ebp - 0xc]
        mov    cl, byte ptr [edi + ecx]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x17], cl
        mov    edx, dword ptr [eax]
        mov    esi, dword ptr [ebp + 0x14]
        mov    dl, byte ptr [esi + edx + 1]
        mov    edi, dword ptr [ebx + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        mov    byte ptr [ecx + edi + 0x37], dl
        mov    eax, dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x44]
        mov    al, byte ptr [esi + eax]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        mov    byte ptr [ecx + edx + 0x57], al
L_ae58:
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        mov    esi, dword ptr [ebp + 0x14]
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
        mov    ecx, dword ptr [ebp - 0x18]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        mov    eax, dword ptr [ebp - 0x10]
        inc    eax
        inc    esi
        dec    ecx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp + 0x14], esi
        jl    L_aa71
L_aeba:
        mov    esi, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 0x54]
        add    esi, edx
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], esi
        mov    dword ptr [ebp - 0x1c], eax
        jl    L_aa3d
        mov    esi, dword ptr [ebp - 8]
        mov    ebx, dword ptr [ebp + 0x10]
L_aedd:
        cmp    dword ptr [g_007b2210], 1
        jne    L_b096
        test    byte ptr [g_007da86c], 2
        jle    L_afa7
        mov    eax, dword ptr [esi + 0x28]
        test    ah, 0x3c
        je    L_afa7
        xor    edx, edx
        mov    dx, word ptr [esi + 0xa]
        test    edx, edx
        jle    L_af94
        mov    ecx, dword ptr [esi + 0xa4]
        add    ecx, 0x20
        mov    edi, edx
        mov    ebx, 0xffffff
L_af21:
        fld    dword ptr [ecx - 8]
        fmul    dword ptr [esi + 0x9c]
        fstp    dword ptr [ecx]
        fld    dword ptr [ecx - 4]
        fmul    dword ptr [esi + 0xa0]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [ecx - 0x14]
        fcomp    dword ptr [esi + 0x8c]
        fnstsw  ax
        test    ah, 1
        je    L_af4d
        and    dword ptr [ecx - 0x10], ebx
        jmp    L_af8b
L_af4d:
        fld    dword ptr [ecx - 0x14]
        fcomp    dword ptr [esi + 0x88]
        fnstsw  ax
        test    ah, 1
        je    L_af8b
        fld    dword ptr [ecx - 0x14]
        fsub    dword ptr [esi + 0x8c]
        fmul    dword ptr [esi + 0x90]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 0x14]
        and    eax, 0xffff
        shl    eax, 0x18
        or    eax, ebx
        and    dword ptr [ecx - 0x10], eax
L_af8b:
        add    ecx, 0x28
        dec    edi
        jne    L_af21
        mov    ebx, dword ptr [ebp + 0x10]
L_af94:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_b0b7
        add    dword ptr [ebx + 4], edx
        jmp    L_b0a9
L_afa7:
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
        jle    L_b072
        mov    eax, dword ptr [edx + 0x44]
        mov    ecx, esi
        shl    ecx, 5
        lea    ecx, [ecx + eax + 0xc]
        lea    edi, [eax + 0x1c]
        mov    ebx, esi
L_afed:
        fld    dword ptr [edi - 4]
        fmul    dword ptr [edx + 0x9c]
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [edi]
        fmul    dword ptr [edx + 0xa0]
        fstp    dword ptr [ecx + 0x10]
        fld    dword ptr [ecx]
        fcomp    dword ptr [edx + 0x8c]
        fnstsw  ax
        test    ah, 1
        je    L_b01c
        and    dword ptr [ecx + 4], 0xffffff
        jmp    L_b062
L_b01c:
        fld    dword ptr [ecx]
        mov    eax, dword ptr [ebp + 0x14]
        fcomp    dword ptr [edx + 0x88]
        inc    eax
        mov    dword ptr [ebp + 0x14], eax
        fnstsw  ax
        test    ah, 1
        je    L_b062
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
L_b062:
        add    edi, 0x20
        add    ecx, 0x20
        dec    ebx
        jne    L_afed
        cmp    word ptr [ebp + 0x14], 0
        jne    L_b078
L_b072:
        mov    byte ptr [edx + 0x64], 0
        jmp    L_b07c
L_b078:
        mov    byte ptr [edx + 0x64], 1
L_b07c:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_b0b7
        mov    eax, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [eax]
        lea    ecx, [esi + esi]
        mov    esi, dword ptr [ebp - 8]
        add    edx, ecx
        mov    dword ptr [eax], edx
        mov    ebx, eax
        jmp    L_b0a9
L_b096:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_b0b7
        mov    eax, dword ptr [ebx]
        xor    edx, edx
        mov    dx, word ptr [esi + 0xa]
        add    eax, edx
        mov    dword ptr [ebx], eax
L_b0a9:
        mov    ecx, dword ptr [ebx + 0xc]
        xor    eax, eax
        mov    ax, word ptr [esi + 0x54]
        add    ecx, eax
        mov    dword ptr [ebx + 0xc], ecx
L_b0b7:
        mov    eax, dword ptr [ebp - 8]
        cmp    word ptr [eax + 0xa], 0
        pop    edi
        setne    cl
        pop    esi
        mov    byte ptr [eax + 0x10], cl
        mov    eax, dword ptr [ebp - 0x64]
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x0044B0D4 (6 relocated pointers)
        __emit 0x46
        __emit 0x98
        __emit 0x44
        __emit 0x00
        __emit 0x75
        __emit 0x98
        __emit 0x44
        __emit 0x00
        __emit 0x7D
        __emit 0x98
        __emit 0x44
        __emit 0x00
        __emit 0x89
        __emit 0x98
        __emit 0x44
        __emit 0x00
        __emit 0x8F
        __emit 0x98
        __emit 0x44
        __emit 0x00
        __emit 0x97
        __emit 0x98
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x0044B0EC (6 relocated pointers)
        __emit 0xEE
        __emit 0x98
        __emit 0x44
        __emit 0x00
        __emit 0x16
        __emit 0x99
        __emit 0x44
        __emit 0x00
        __emit 0x1E
        __emit 0x99
        __emit 0x44
        __emit 0x00
        __emit 0x2A
        __emit 0x99
        __emit 0x44
        __emit 0x00
        __emit 0x30
        __emit 0x99
        __emit 0x44
        __emit 0x00
        __emit 0x38
        __emit 0x99
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x0044B104 (6 relocated pointers)
        __emit 0xFF
        __emit 0x9F
        __emit 0x44
        __emit 0x00
        __emit 0x50
        __emit 0xA0
        __emit 0x44
        __emit 0x00
        __emit 0x58
        __emit 0xA0
        __emit 0x44
        __emit 0x00
        __emit 0x7F
        __emit 0xA0
        __emit 0x44
        __emit 0x00
        __emit 0x86
        __emit 0xA0
        __emit 0x44
        __emit 0x00
        __emit 0x8D
        __emit 0xA0
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x0044B11C (14 relocated pointers)
        __emit 0x3F
        __emit 0xA0
        __emit 0x44
        __emit 0x00
        __emit 0xF7
        __emit 0xA1
        __emit 0x44
        __emit 0x00
        __emit 0xFF
        __emit 0xA1
        __emit 0x44
        __emit 0x00
        __emit 0x26
        __emit 0xA2
        __emit 0x44
        __emit 0x00
        __emit 0x2D
        __emit 0xA2
        __emit 0x44
        __emit 0x00
        __emit 0x34
        __emit 0xA2
        __emit 0x44
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x83
        __emit 0xEC
        __emit 0x60
        __emit 0x53
        __emit 0x55
        __emit 0x56
        __emit 0x8B
        __emit 0xF1
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x70
        __emit 0x8B
        __emit 0x51
        __emit 0x1C
        __emit 0x8B
        __emit 0x41
        __emit 0x0C
        __emit 0x89
        __emit 0x54
    }
}
