/*
 * FUN_00465820 (extent 0x465820-0x467038) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007d9930;
extern int    g_007d9934;
extern int    g_007d9938;
extern int    g_007da5e8;
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

__declspec(naked) void FUN_00465820(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0xb8
        mov    eax, dword ptr [ecx + 0x64]
        test    eax, eax
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [ebp - 0x4c], 0
        ja    L_5846
        mov    byte ptr [ecx + 0x10], 0
        xor    eax, eax
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_5846:
        cmp    word ptr [ecx + 0x56], 0
        mov    eax, dword ptr [ecx + 0x18]
        mov    dword ptr [ebp - 0x3c], eax
        jne    L_585b
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x98]
L_585b:
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
        mov    dword ptr [ebp - 0x10], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp - 0x28], edi
        je    L_58ef
        mov    eax, dword ptr [ebp - 0x3c]
        test    eax, eax
        mov    dword ptr [ebp - 0x1c], 0
        jle    L_592a
L_589a:
        cmp    byte ptr [ebx], 0
        je    L_58cc
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp - 0x28]
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
        mov    edi, dword ptr [ebp - 0x28]
L_58cc:
        mov    ecx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x1c]
        add    ecx, 4
        inc    eax
        add    edi, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x3c]
        inc    ebx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x28], edi
        jl    L_589a
        jmp    L_592a
L_58ef:
        mov    eax, dword ptr [ebp - 0x3c]
        test    eax, eax
        jle    L_592a
        mov    dword ptr [ebp + 0x14], eax
L_58f9:
        cmp    byte ptr [ebx], 0
        je    L_5911
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp + 8]
        push    edx
        push    eax
        push    esi
        mov    ecx, edi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
L_5911:
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        add    edi, 0x10
        inc    ebx
        dec    eax
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_58f9
L_592a:
        mov    eax, dword ptr [ebp - 8]
        mov    ebx, dword ptr [eax + 0x64]
        mov    eax, dword ptr [eax + 0x24]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0xb0], 0
        mov    dword ptr [ebp - 4], 0
        mov    dword ptr [ebp - 0x3c], ebx
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x50], 0
        mov    dword ptr [ebp - 0x54], 0
        je    L_5a22
        test    eax, eax
        jle    L_5a22
        mov    ecx, dword ptr [g_007da848]
        mov    esi, dword ptr [ecx + eax*4 + 0x24]
        test    esi, esi
        je    L_5a22
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_59a1
        mov    dword ptr [g_007da864], 1
        jmp    L_59fc
L_59a1:
        cmp    eax, 0x80
        jl    L_59b4
        mov    dword ptr [g_007da864], 2
        jmp    L_59fc
L_59b4:
        cmp    eax, 0x40
        jl    L_59c5
        mov    dword ptr [g_007da864], 4
        jmp    L_59fc
L_59c5:
        cmp    eax, 0x20
        jl    L_59d6
        mov    dword ptr [g_007da864], 8
        jmp    L_59fc
L_59d6:
        cmp    eax, 0x10
        jl    L_59e7
        mov    dword ptr [g_007da864], 0x10
        jmp    L_59fc
L_59e7:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_59fc:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_5a98
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_5a98
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x50], edx
        mov    dword ptr [ebp - 0x54], eax
L_5a22:
        mov    ecx, dword ptr [ebp - 8]
        xor    eax, eax
        cmp    word ptr [ecx + 0x56], ax
        mov    dword ptr [ebp - 0x58], eax
        mov    dword ptr [ebp - 0x48], eax
        jne    L_5a3b
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x98]
L_5a3b:
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
        xor    eax, eax
        cmp    ebx, eax
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0xc], eax
        jle    L_69de
L_5a66:
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [eax + 0x60]
        movzx    ax, byte ptr [edx + ecx]
        mov    edx, dword ptr [g_007da5e8]
        mov    edx, dword ptr [edx]
        add    edx, ecx
        cmp    byte ptr [edx], 0
        mov    dword ptr [ebp + 8], edx
        jne    L_5a9e
        mov    ecx, dword ptr [ebp - 0xc]
        and    eax, 0xffff
        add    ecx, eax
        mov    dword ptr [ebp - 0xc], ecx
        jmp    L_69cc
L_5a98:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_5a22
L_5a9e:
        mov    ecx, dword ptr [ebp - 0xc]
        and    eax, 0xffff
        lea    edi, [eax + ecx]
        xor    esi, esi
        cmp    ecx, edi
        mov    ebx, 0x3f
        mov    dword ptr [g_007d9938], ebx
        mov    dword ptr [g_007d9934], esi
        mov    dword ptr [ebp - 0x44], edi
        mov    eax, ecx
        jge    L_5b05
        mov    ecx, dword ptr [g_007da688]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0x28], edx
        mov    edx, dword ptr [ecx + 0x48]
        mov    dword ptr [ebp - 0x20], edx
L_5ad9:
        mov    edx, dword ptr [ebp - 0x20]
        xor    ecx, ecx
        mov    cl, byte ptr [edx + eax]
        mov    edx, dword ptr [ebp - 0x28]
        lea    ecx, [edx + ecx*4]
        mov    edx, dword ptr [ecx]
        and    ebx, edx
        or    esi, edx
        inc    eax
        cmp    eax, edi
        jl    L_5ad9
        test    ebx, ebx
        mov    dword ptr [g_007d9934], esi
        mov    dword ptr [g_007d9938], ebx
        je    L_5b0d
        mov    edx, dword ptr [ebp + 8]
L_5b05:
        mov    byte ptr [edx], 0
        jmp    L_69c6
L_5b0d:
        test    esi, esi
        jne    L_5b3d
        mov    eax, dword ptr [ebp - 0x4c]
        mov    ecx, dword ptr [ebp - 8]
        inc    eax
        mov    dword ptr [ebp - 0x4c], eax
        mov    eax, dword ptr [ebp - 0xc]
L_5b1e:
        mov    edx, dword ptr [ecx + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + eax]
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        inc    eax
        mov    byte ptr [ebx + edx], 1
        cmp    eax, dword ptr [ebp - 0x44]
        jl    L_5b1e
        jmp    L_69c6
L_5b3d:
        mov    eax, dword ptr [esi*4 + 0x7b2478]
        mov    edx, 1
        cmp    eax, edx
        mov    dword ptr [ebp - 0x14], 0
        jne    L_5fe4
        mov    ecx, dword ptr [ebp - 0xc]
L_5b5b:
        mov    eax, dword ptr [ebp - 8]
        mov    eax, dword ptr [eax + 0x48]
        xor    edx, edx
        mov    dl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, edi
        mov    dword ptr [ebp - 0x20], ecx
        mov    esi, edx
        jl    L_5b73
        mov    ecx, dword ptr [ebp - 0xc]
L_5b73:
        mov    edi, dword ptr [ebp - 0x14]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx]
        mov    eax, dword ptr [ebp - 0x58]
        and    edi, 0xffff
        add    edi, eax
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [eax + esi*4]
        test    ecx, ecx
        mov    dword ptr [g_007d9930], ecx
        jne    L_5c30
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    eax, esi
        shl    eax, 4
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    ecx, edi
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
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [edx + esi*8]
        mov    edx, dword ptr [edx + esi*8 + 4]
        mov    dword ptr [ecx + edi*8], eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        mov    dword ptr [ecx + edi*8 + 4], edx
        jbe    L_5c12
        test    al, 1
        je    L_5c12
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    dl, byte ptr [edx + esi]
        mov    byte ptr [ecx + edi], dl
L_5c12:
        inc    dword ptr [ebp - 0x14]
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [eax + ebx*4]
        inc    edi
        test    ecx, ecx
        je    L_5fc0
        mov    ecx, dword ptr [g_007d9930]
        jmp    L_5c3e
L_5c30:
        cmp    dword ptr [eax + ebx*4], 0
        mov    byte ptr [ebp + 0xb], 0
        jne    L_5fc0
L_5c3e:
        or    ecx, dword ptr [eax + ebx*4]
        xor    eax, eax
        mov    edx, 1
        mov    dword ptr [g_007d9930], ecx
        mov    dword ptr [ebp - 0x10], eax
L_5c51:
        test    edx, ecx
        jne    L_5c66
        shl    edx, 1
        inc    eax
        cmp    ax, 6
        jb    L_5c51
        mov    dword ptr [ebp - 0x10], eax
        jmp    L_5d86
L_5c66:
        mov    dword ptr [ebp - 0x10], eax
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_5cff
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    eax, ebx
        mov    ecx, esi
        shl    eax, 4
        shl    ecx, 4
        add    eax, edx
        add    ecx, edx
        mov    edx, dword ptr [ebp - 0x10]
        and    edx, 0xffff
        cmp    edx, 5
        mov    dword ptr [ebp - 0x24], edx
        ja    L_5cde
        jmp    dword ptr [edx*4 + 0x467038]
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_5cbb
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_5cbb
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
L_5cbb:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_5d73
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_5d80
L_5cde:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5d67
        int 3    
        mov    edx, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp - 4], 0
        jmp    L_5d80
L_5cff:
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    eax, esi
        mov    ecx, ebx
        shl    eax, 4
        shl    ecx, 4
        add    eax, edx
        add    ecx, edx
        mov    edx, dword ptr [ebp - 0x10]
        and    edx, 0xffff
        cmp    edx, 5
        mov    dword ptr [ebp - 0x24], edx
        ja    L_5d55
        jmp    dword ptr [edx*4 + 0x467050]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
        jmp    L_5cbb
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_5cbb
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_5cbb
L_5d55:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5d67
        int 3    
L_5d67:
        mov    edx, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp - 4], 0
        jmp    L_5d80
L_5d73:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_5d80:
        mov    dword ptr [ebp - 0xb0], edx
L_5d86:
        cmp    byte ptr [ebp + 0xb], 1
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        jne    L_5eaf
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        mov    eax, ebx
        shl    eax, 4
        add    eax, ecx
        mov    dword ptr [ebp + 8], eax
        mov    eax, esi
        shl    eax, 4
        add    eax, ecx
        mov    ecx, edi
        shl    ecx, 4
        add    ecx, edx
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsub    dword ptr [eax]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [edx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0xb0]
        mov    edx, dword ptr [eax*8 + 0x7b2408]
        test    edx, edx
        fstp    dword ptr [ecx + 0xc]
        je    L_5e0e
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_5e14
L_5e0e:
        fld    dword ptr [g_007b220c]
L_5e14:
        mov    eax, dword ptr [eax*8 + 0x7b2404]
        mov    edx, dword ptr [g_007da680]
        fstp    dword ptr [ecx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x1c]
        fld    dword ptr [eax + ebx*8]
        mov    ecx, dword ptr [edx]
        fsub    dword ptr [eax + esi*8]
        lea    ecx, [ecx + edi*8]
        lea    edx, [eax + esi*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + esi*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + ebx*8 + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 8]
        mov    al, byte ptr [edx + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_5fbd
        test    al, 1
        je    L_5fbd
        mov    eax, dword ptr [g_007da65c]
        mov    eax, dword ptr [eax]
        mov    cl, byte ptr [eax + esi]
        xor    edx, edx
        mov    dl, byte ptr [eax + ebx]
        mov    byte ptr [ebp - 0xb4], cl
        mov    esi, dword ptr [ebp - 0xb4]
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x2c], esi
        sub    edx, esi
        mov    dword ptr [ebp + 8], edx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x2c]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
        jmp    L_5fba
L_5eaf:
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        mov    eax, esi
        shl    eax, 4
        add    eax, ecx
        mov    dword ptr [ebp + 8], eax
        mov    eax, ebx
        shl    eax, 4
        add    eax, ecx
        mov    ecx, edi
        shl    ecx, 4
        add    ecx, edx
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsub    dword ptr [eax]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [edx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0xb0]
        mov    edx, dword ptr [eax*8 + 0x7b2408]
        test    edx, edx
        fstp    dword ptr [ecx + 0xc]
        je    L_5f26
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_5f2c
L_5f26:
        fld    dword ptr [g_007b220c]
L_5f2c:
        mov    eax, dword ptr [eax*8 + 0x7b2404]
        mov    edx, dword ptr [g_007da680]
        fstp    dword ptr [ecx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x1c]
        fld    dword ptr [eax + esi*8]
        mov    ecx, dword ptr [edx]
        fsub    dword ptr [eax + ebx*8]
        lea    ecx, [ecx + edi*8]
        lea    edx, [eax + ebx*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + ebx*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + esi*8 + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 8]
        mov    al, byte ptr [edx + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_5fbd
        test    al, 1
        je    L_5fbd
        mov    eax, dword ptr [g_007da65c]
        mov    eax, dword ptr [eax]
        mov    cl, byte ptr [eax + ebx]
        xor    edx, edx
        mov    dl, byte ptr [eax + esi]
        mov    byte ptr [ebp - 0xac], cl
        mov    ecx, dword ptr [ebp - 0xac]
        mov    eax, dword ptr [g_007da660]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x2c], ecx
        sub    edx, ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp + 8], edx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x2c]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
L_5fba:
        mov    byte ptr [ecx + edi], dl
L_5fbd:
        inc    dword ptr [ebp - 0x14]
L_5fc0:
        mov    edi, dword ptr [ebp - 0x44]
        mov    ecx, dword ptr [ebp - 0x20]
        cmp    ecx, edi
        jl    L_5b5b
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [ebp - 0x48]
        mov    word ptr [ecx + edx*2], ax
        jmp    L_699d
L_5fe4:
        mov    eax, dword ptr [g_007da66c]
        mov    ecx, dword ptr [eax + 0x30]
        mov    dword ptr [ebp - 0x8c], ecx
        mov    ecx, dword ptr [eax + 0x40]
        mov    dword ptr [ebp - 0x84], ecx
        mov    ecx, dword ptr [eax + 0x48]
        mov    dword ptr [ebp - 0x80], ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        mov    byte ptr [ebp - 0x6c], cl
        jbe    L_6034
        mov    edi, ecx
        and    edi, 0xff
        lea    ecx, [ebp - 0x7c]
        add    eax, 0x50
        mov    esi, 2
L_6021:
        test    edi, edx
        je    L_6029
        mov    ebx, dword ptr [eax]
        mov    dword ptr [ecx], ebx
L_6029:
        add    eax, 8
        add    ecx, 4
        shl    edx, 1
        dec    esi
        jne    L_6021
L_6034:
        mov    eax, dword ptr [g_007da68c]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x2c], eax
        mov    eax, dword ptr [ebp - 8]
        mov    edi, dword ptr [eax + 0x1c]
        xor    edx, edx
        mov    dword ptr [ebp - 0x18], ecx
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp - 0x40], edi
L_6052:
        mov    esi, dword ptr [ebp - 0x20]
        mov    ebx, dword ptr [ebp - 0x2c]
        xor    eax, eax
        mov    al, byte ptr [esi + ecx]
        and    edx, 0xffff
        mov    ecx, edx
        shl    ecx, 4
        mov    esi, eax
        shl    eax, 4
        add    eax, ebx
        add    ecx, dword ptr [ebp - 0x8c]
        mov    ebx, dword ptr [eax]
        mov    dword ptr [ecx], ebx
        mov    ebx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], ebx
        mov    ebx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [ebp - 0x84]
        mov    dword ptr [ecx + 8], ebx
        mov    ecx, dword ptr [edi + esi*8]
        mov    dword ptr [eax + edx*8], ecx
        mov    ecx, dword ptr [edi + esi*8 + 4]
        mov    dword ptr [eax + edx*8 + 4], ecx
        mov    eax, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [eax + esi*4]
        mov    eax, dword ptr [ebp - 0x80]
        mov    dword ptr [eax + edx*4], ecx
        mov    eax, dword ptr [ebp - 0x6c]
        test    al, al
        jbe    L_60fd
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], ecx
        lea    edi, [ebp - 0x7c]
        mov    eax, 0x7da65c
L_60cc:
        mov    ebx, dword ptr [ebp + 8]
        test    ecx, ebx
        je    L_60e2
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    cl, byte ptr [ecx + esi]
        mov    ebx, dword ptr [edi]
        mov    byte ptr [edx + ebx], cl
        mov    ecx, dword ptr [ebp - 0x14]
L_60e2:
        mov    ebx, dword ptr [ebp + 8]
        add    eax, 8
        shl    ebx, 1
        add    edi, 4
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 8], ebx
        jl    L_60cc
        mov    eax, dword ptr [ebp - 0x6c]
        mov    edi, dword ptr [ebp - 0x40]
L_60fd:
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ebp - 0x10]
        mov    esi, dword ptr [ebp - 0x44]
        inc    ecx
        inc    edx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0x18], ecx
        mov    dword ptr [ebp - 0x10], edx
        jl    L_6052
        test    al, al
        mov    ecx, dword ptr [g_007da66c]
        mov    word ptr [ebp - 0x74], dx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0xa8], edx
        mov    edx, dword ptr [ecx + 0x10]
        mov    dword ptr [ebp - 0xa0], edx
        mov    edx, dword ptr [ecx + 0x18]
        mov    dword ptr [ebp - 0x5c], 0
        mov    dword ptr [ebp - 0x9c], edx
        jbe    L_6170
        and    eax, 0xff
        mov    esi, 1
        lea    edx, [ebp - 0x98]
        add    ecx, 0x20
        mov    edi, 2
L_615d:
        test    eax, esi
        je    L_6165
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [edx], ebx
L_6165:
        add    ecx, 8
        add    edx, 4
        shl    esi, 1
        dec    edi
        jne    L_615d
L_6170:
        mov    ebx, dword ptr [ebp - 0x74]
        mov    edx, 1
        mov    word ptr [ebp - 0x90], 0
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x2c], 4
L_618b:
        mov    dword ptr [ebp - 0x70], 0
        mov    dword ptr [ebp - 0x24], 0x7b2404
        mov    dword ptr [ebp - 0x40], 6
L_61a0:
        test    dword ptr [g_007d9934], edx
        je    L_6828
        xor    esi, esi
        mov    ecx, ebx
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0x18], esi
        mov    dword ptr [ebp - 0x28], ecx
        jle    L_6732
        mov    eax, dword ptr [ebp - 0x84]
        mov    dword ptr [ebp - 0x10], eax
        mov    eax, dword ptr [ebp - 0x80]
        mov    dword ptr [ebp - 0x68], eax
        mov    eax, dword ptr [ebp - 0x8c]
        lea    edi, [eax + 8]
        mov    dword ptr [ebp - 0xb8], edi
        jmp    L_61e5
L_61e2:
        mov    ecx, dword ptr [ebp - 0x28]
L_61e5:
        lea    eax, [esi + 1]
        xor    ebx, ebx
        cmp    eax, ecx
        setge    bl
        mov    dword ptr [ebp - 0x20], eax
        dec    ebx
        and    ebx, eax
        mov    eax, dword ptr [ebp - 0x68]
        mov    eax, dword ptr [eax]
        test    edx, eax
        mov    ecx, ebx
        mov    dword ptr [ebp - 0x38], ecx
        mov    dword ptr [g_007d9930], eax
        jne    L_62f3
        mov    ecx, dword ptr [ebp - 0x90]
        mov    ebx, dword ptr [ebp - 0xa8]
        and    ecx, 0xffff
        mov    eax, ecx
        shl    eax, 4
        add    eax, ebx
        mov    ebx, dword ptr [edi - 8]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [edi - 4]
        mov    dword ptr [eax + 4], ebx
        mov    ebx, dword ptr [edi]
        mov    dword ptr [eax + 8], ebx
        mov    ebx, dword ptr [edi + 4]
        mov    dword ptr [eax + 0xc], ebx
        mov    eax, dword ptr [ebp - 0x68]
        mov    eax, dword ptr [eax]
        mov    ebx, dword ptr [ebp - 0x9c]
        mov    dword ptr [ebx + ecx*4], eax
        mov    eax, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xa0]
        mov    dword ptr [eax + ecx*8], ebx
        mov    ebx, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [ebx + 4]
        mov    dword ptr [eax + ecx*8 + 4], ebx
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_62aa
        mov    ebx, eax
        and    ebx, 0xff
        mov    edx, 1
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x14], ebx
        xor    eax, eax
L_6282:
        test    ebx, edx
        je    L_629d
        mov    edx, dword ptr [ebp + eax - 0x7c]
        mov    ebx, dword ptr [ebp + eax - 0x98]
        mov    dl, byte ptr [edx + esi]
        mov    byte ptr [ebx + ecx], dl
        mov    ebx, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [ebp + 8]
L_629d:
        add    eax, 4
        shl    edx, 1
        cmp    eax, 8
        mov    dword ptr [ebp + 8], edx
        jl    L_6282
L_62aa:
        mov    ecx, dword ptr [ebp - 0x80]
        mov    eax, dword ptr [ebp - 0x38]
        mov    esi, dword ptr [ecx + eax*4]
        inc    word ptr [ebp - 0x90]
        test    esi, edx
        je    L_6706
        mov    ecx, dword ptr [ebp - 0x8c]
        shl    eax, 4
        lea    ebx, [eax + ecx]
        cmp    dword ptr [ebp - 0x24], 0x7b242c
        ja    L_6380
        mov    edx, dword ptr [ebp - 0x70]
        jmp    dword ptr [edx*4 + 0x467068]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [edi - 4]
        fld    dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx + 4]
        jmp    L_6349
L_62f3:
        mov    eax, dword ptr [ebp - 0x80]
        test    dword ptr [eax + ecx*4], edx
        jne    L_6706
        mov    eax, dword ptr [ebp - 0x38]
        mov    ecx, dword ptr [ebp - 0x8c]
        shl    eax, 4
        lea    ebx, [eax + ecx]
        cmp    dword ptr [ebp - 0x24], 0x7b242c
        ja    L_6519
        mov    edx, dword ptr [ebp - 0x70]
        jmp    dword ptr [edx*4 + 0x467080]
        fld    dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx + 4]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [edi - 4]
        jmp    L_64e2
        fld    dword ptr [edi - 4]
        fld    dword ptr [ebx + 4]
        jmp    L_6349
        fld    dword ptr [edi + 4]
        fsub    dword ptr [edi - 8]
        fld    dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx]
L_6349:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_639b
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_635c:
        mov    dword ptr [ebp - 4], 0
        jmp    L_63a8
        fld    dword ptr [edi - 8]
        fld    dword ptr [ebx]
        jmp    L_6349
        fld    dword ptr [edi]
        fld    dword ptr [ebx + 8]
        jmp    L_6349
        fld    dword ptr [edi + 4]
        fsub    dword ptr [edi]
        fld    dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx + 8]
        jmp    L_6349
L_6380:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_635c
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_63a8
L_639b:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_63a8:
        fld    dword ptr [ebx]
        mov    esi, dword ptr [ebp - 0x90]
        fsub    dword ptr [edi - 8]
        mov    ecx, dword ptr [ebp - 0xa8]
        and    esi, 0xffff
        mov    eax, esi
        fmul    dword ptr [ebp - 4]
        shl    eax, 4
        add    eax, ecx
        fadd    dword ptr [edi - 8]
        mov    ecx, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ecx + 4]
        test    edx, edx
        fstp    dword ptr [eax]
        fld    dword ptr [ebx + 4]
        fsub    dword ptr [edi - 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi - 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ebx + 8]
        fsub    dword ptr [edi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [ebx + 0xc]
        fsub    dword ptr [edi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_640e
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_6414
L_640e:
        fld    dword ptr [g_007b220c]
L_6414:
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x10]
        fstp    dword ptr [eax + edx*4]
        mov    edi, dword ptr [ebp - 0x84]
        mov    ebx, dword ptr [ebp - 0x38]
        fld    dword ptr [edi + ebx*8]
        mov    edx, dword ptr [ebp - 0xa0]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        fstp    dword ptr [edx + esi*8]
        fld    dword ptr [edi + ebx*8 + 4]
        fsub    dword ptr [ecx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        fstp    dword ptr [edx + esi*8 + 4]
        jbe    L_6664
        mov    edx, ecx
        and    edx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], edx
        xor    ecx, ecx
L_646d:
        mov    edi, dword ptr [ebp + 8]
        test    edx, edi
        je    L_64ba
        mov    edi, dword ptr [ebp + ecx - 0x7c]
        mov    edx, dword ptr [ebp - 0x18]
        mov    dl, byte ptr [edi + edx]
        mov    byte ptr [ebp - 0x64], dl
        mov    edx, dword ptr [ebp - 0x64]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x38], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x38]
        mov    edi, dword ptr [ebp + ecx - 0x98]
        mov    dword ptr [ebp - 0x34], edx
        fild    dword ptr [ebp - 0x34]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x38]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x34]
        mov    dl, byte ptr [ebp - 0x34]
        mov    byte ptr [edi + esi], dl
        mov    edx, dword ptr [ebp - 0x14]
L_64ba:
        mov    edi, dword ptr [ebp + 8]
        add    ecx, 4
        shl    edi, 1
        cmp    ecx, 8
        mov    dword ptr [ebp + 8], edi
        jl    L_646d
        jmp    L_6664
        fld    dword ptr [ebx + 4]
        fld    dword ptr [edi - 4]
        jmp    L_64e2
        fld    dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [edi - 8]
L_64e2:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_6534
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_64f5:
        mov    dword ptr [ebp - 4], 0
        jmp    L_6541
        fld    dword ptr [ebx]
        fld    dword ptr [edi - 8]
        jmp    L_64e2
        fld    dword ptr [ebx + 8]
        fld    dword ptr [edi]
        jmp    L_64e2
        fld    dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx + 8]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [edi]
        jmp    L_64e2
L_6519:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_64f5
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_6541
L_6534:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_6541:
        fld    dword ptr [edi - 8]
        mov    esi, dword ptr [ebp - 0x90]
        fsub    dword ptr [ebx]
        mov    ecx, dword ptr [ebp - 0xa8]
        and    esi, 0xffff
        mov    eax, esi
        fmul    dword ptr [ebp - 4]
        shl    eax, 4
        add    eax, ecx
        fadd    dword ptr [ebx]
        mov    ecx, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ecx + 4]
        test    edx, edx
        fstp    dword ptr [eax]
        fld    dword ptr [edi - 4]
        fsub    dword ptr [ebx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edi]
        fsub    dword ptr [ebx + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + 8]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [ebx + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + 0xc]
        fstp    dword ptr [eax + 0xc]
        je    L_65a7
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_65ad
L_65a7:
        fld    dword ptr [g_007b220c]
L_65ad:
        mov    edx, dword ptr [ecx]
        mov    ebx, dword ptr [ebp - 0x10]
        fstp    dword ptr [eax + edx*4]
        mov    ecx, dword ptr [ebp - 0x84]
        fld    dword ptr [ebx]
        mov    edx, dword ptr [ebp - 0x38]
        fsub    dword ptr [ecx + edx*8]
        mov    edi, dword ptr [ebp - 0xa0]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + edx*8]
        lea    ecx, [ecx + edx*8 + 4]
        fstp    dword ptr [edi + esi*8]
        fld    dword ptr [ebx + 4]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        fstp    dword ptr [edi + esi*8 + 4]
        jbe    L_6664
        mov    edi, ecx
        and    edi, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], edi
        xor    ecx, ecx
L_6604:
        mov    ebx, dword ptr [ebp + 8]
        test    edi, ebx
        je    L_6654
        mov    edi, dword ptr [ebp + ecx - 0x7c]
        mov    dl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x18]
        mov    byte ptr [ebp - 0x60], dl
        mov    edx, dword ptr [ebp - 0x60]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x34], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x34]
        mov    edi, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 0x30], edx
        fild    dword ptr [ebp - 0x30]
        mov    edx, dword ptr [ebp + ecx - 0x98]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x34]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x30]
        mov    bl, byte ptr [ebp - 0x30]
        mov    byte ptr [edx + esi], bl
        mov    edx, dword ptr [ebp - 0x38]
L_6654:
        mov    ebx, dword ptr [ebp + 8]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp + 8], ebx
        jl    L_6604
L_6664:
        mov    dword ptr [ebp - 0x30], eax
        mov    dword ptr [ebp - 0x34], 0
        mov    edi, dword ptr [ebp - 0x30]
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
        mov    dword ptr [ebp - 0x34], edx
        mov    eax, dword ptr [ebp - 0x34]
        mov    ecx, dword ptr [ebp - 0x9c]
        inc    word ptr [ebp - 0x90]
        mov    edx, dword ptr [ebp + 8]
        mov    edi, dword ptr [ebp - 0xb8]
        mov    dword ptr [ecx + esi*4], eax
L_6706:
        mov    eax, dword ptr [ebp - 0x68]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    esi, dword ptr [ebp - 0x20]
        add    eax, 4
        mov    dword ptr [ebp - 0x68], eax
        mov    eax, dword ptr [ebp - 0x28]
        add    edi, 0x10
        add    ecx, 8
        cmp    esi, eax
        mov    dword ptr [ebp - 0x18], esi
        mov    dword ptr [ebp - 0xb8], edi
        mov    dword ptr [ebp - 0x10], ecx
        jl    L_61e2
L_6732:
        mov    eax, dword ptr [ebp - 0x5c]
        mov    ecx, dword ptr [g_007da66c]
        lea    eax, [eax + eax*2]
        shl    eax, 4
        add    eax, ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0x8c], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x84], ecx
        mov    ecx, dword ptr [ebp - 8]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + 0x13]
        test    bl, bl
        mov    dword ptr [ebp - 0x80], eax
        jbe    L_67a2
        mov    esi, ebx
        xor    eax, eax
        and    esi, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0x14], esi
        lea    ecx, [ebp - 0x7c]
L_677b:
        test    esi, edx
        je    L_6797
        mov    esi, dword ptr [ebp - 0x5c]
        mov    edi, dword ptr [g_007da66c]
        lea    esi, [esi + esi*2]
        lea    esi, [eax + esi*2]
        mov    esi, dword ptr [edi + esi*8 + 0x20]
        mov    dword ptr [ecx], esi
        mov    esi, dword ptr [ebp - 0x14]
L_6797:
        inc    eax
        add    ecx, 4
        shl    edx, 1
        cmp    eax, 2
        jl    L_677b
L_67a2:
        mov    ax, word ptr [ebp - 0x90]
        mov    edi, dword ptr [ebp - 0x5c]
        mov    word ptr [ebp - 0x74], ax
        xor    eax, eax
        test    edi, edi
        sete    al
        lea    ecx, [eax + eax*2]
        mov    dword ptr [ebp - 0x5c], eax
        mov    eax, dword ptr [g_007da66c]
        shl    ecx, 4
        add    eax, ecx
        test    bl, bl
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xa8], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0xa0], ecx
        mov    dword ptr [ebp - 0x9c], eax
        jbe    L_681c
        xor    eax, eax
        mov    edx, 1
        and    ebx, 0xff
        lea    ecx, [ebp - 0x98]
L_67f8:
        test    ebx, edx
        je    L_6811
        mov    esi, dword ptr [ebp - 0x5c]
        mov    edi, dword ptr [g_007da66c]
        lea    esi, [esi + esi*2]
        lea    esi, [eax + esi*2]
        mov    esi, dword ptr [edi + esi*8 + 0x20]
        mov    dword ptr [ecx], esi
L_6811:
        inc    eax
        add    ecx, 4
        shl    edx, 1
        cmp    eax, 2
        jl    L_67f8
L_681c:
        mov    ebx, dword ptr [ebp - 0x74]
        mov    word ptr [ebp - 0x90], 0
L_6828:
        mov    esi, dword ptr [ebp - 0x70]
        mov    ecx, dword ptr [ebp - 0x24]
        mov    eax, dword ptr [ebp - 0x40]
        shl    edx, 1
        inc    esi
        add    ecx, 8
        dec    eax
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x70], esi
        mov    dword ptr [ebp - 0x24], ecx
        mov    dword ptr [ebp - 0x40], eax
        jne    L_61a0
        mov    esi, ebx
        xor    eax, eax
        and    esi, 0xffff
        jle    L_688e
        mov    ecx, dword ptr [ebp - 0x80]
L_6859:
        or    eax, dword ptr [ecx]
        add    ecx, 4
        dec    esi
        jne    L_6859
        test    eax, eax
        je    L_688e
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    esi, ecx
        dec    ecx
        test    esi, esi
        mov    dword ptr [ebp - 0x2c], ecx
        jne    L_618b
        test    eax, eax
        je    L_688e
        mov    ecx, dword ptr [g_007da5e8]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    byte ptr [edx + eax], 0
        jmp    L_69cc
L_688e:
        xor    edi, edi
        mov    eax, ebx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x18], edi
        mov    dword ptr [ebp - 0x28], eax
        jle    L_6985
        mov    ecx, dword ptr [ebp - 8]
        mov    dl, byte ptr [ecx + 0x13]
        mov    eax, dword ptr [g_007da680]
        mov    esi, dword ptr [ebp - 0x8c]
        mov    ecx, dword ptr [ebp - 0x84]
        mov    ebx, dword ptr [g_007da684]
        mov    byte ptr [ebp - 0x6c], dl
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x58]
        lea    edx, [edx + eax*8]
        shl    eax, 4
        add    esi, 8
        add    eax, dword ptr [ebx]
        mov    dword ptr [ebp - 0x40], ecx
        mov    dword ptr [ebp - 0x2c], edx
L_68d9:
        mov    ebx, dword ptr [ebp - 0x58]
        add    ebx, edi
        mov    dword ptr [ebp - 0x30], ebx
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
        mov    ebx, dword ptr [ebp - 0x6c]
        test    bl, bl
        jbe    L_6961
        mov    ecx, ebx
        and    ecx, 0xff
        lea    ebx, [ebp - 0x7c]
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    edx, 0x7da660
        mov    dword ptr [ebp - 0x20], ebx
L_6925:
        mov    ebx, dword ptr [ebp + 8]
        test    ecx, ebx
        je    L_6944
        mov    ecx, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ecx]
        mov    cl, byte ptr [ecx + edi]
        mov    ebx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x30]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + edi], cl
        mov    edi, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ebp - 0x14]
L_6944:
        add    dword ptr [ebp - 0x20], 4
        mov    ebx, dword ptr [ebp + 8]
        add    edx, 8
        shl    ebx, 1
        cmp    edx, 0x7da670
        mov    dword ptr [ebp + 8], ebx
        jl    L_6925
        mov    edx, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp - 0x40]
L_6961:
        mov    ebx, dword ptr [ebp - 0x28]
        inc    edi
        add    edx, 8
        add    ecx, 8
        add    eax, 0x10
        add    esi, 0x10
        cmp    edi, ebx
        mov    dword ptr [ebp - 0x18], edi
        mov    dword ptr [ebp - 0x2c], edx
        mov    dword ptr [ebp - 0x40], ecx
        jl    L_68d9
        mov    ebx, dword ptr [ebp - 0x74]
L_6985:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x48]
        mov    dx, word ptr [ebp - 0x74]
        mov    word ptr [eax + ecx*2], dx
        mov    dword ptr [ebp - 0x14], ebx
        mov    eax, ebx
L_699d:
        mov    edx, dword ptr [ebp - 0x58]
        mov    ecx, dword ptr [ebp - 0x48]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0x4c]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x4c], eax
        mov    eax, dword ptr [g_007da5e8]
        mov    dword ptr [ebp - 0x58], edx
        mov    edx, dword ptr [ebp - 0x1c]
        mov    dword ptr [ebp - 0x48], ecx
        mov    ecx, dword ptr [eax]
        mov    byte ptr [ecx + edx], 0
L_69c6:
        mov    eax, dword ptr [ebp - 0x44]
        mov    dword ptr [ebp - 0xc], eax
L_69cc:
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 0x3c]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], eax
        jl    L_5a66
L_69de:
        mov    dl, byte ptr [ebp + 0x1c]
        test    dl, dl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_69ed
        mov    eax, dword ptr [ecx + 0x30]
        jmp    L_69f7
L_69ed:
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ecx + 0x10]
        shl    eax, 5
        add    eax, esi
L_69f7:
        mov    esi, dword ptr [ebp - 8]
        xor    ebx, ebx
        test    dl, dl
        mov    dword ptr [esi + 0x44], eax
        mov    word ptr [esi + 0xa], bx
        je    L_6a0c
        mov    eax, dword ptr [ecx + 0x48]
        jmp    L_6a15
L_6a0c:
        mov    edx, dword ptr [ecx + 0xc]
        mov    eax, dword ptr [ecx + 0x28]
        lea    eax, [eax + edx*2]
L_6a15:
        mov    ecx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esi + 0x50], eax
        xor    eax, eax
        cmp    ecx, ebx
        mov    word ptr [esi + 0x54], bx
        mov    dword ptr [ebp - 0x18], ecx
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp + 8], ebx
        jle    L_6b5a
L_6a38:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + eax], 0
        jne    L_6a4e
        inc    dword ptr [ebp + 8]
        jmp    L_6b4e
L_6a4e:
        mov    ecx, dword ptr [g_007da5f4]
        mov    dx, word ptr [ebp + 8]
        mov    word ptr [ecx + eax*2], dx
        test    byte ptr [esi + 0x13], 1
        je    L_6a7d
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    edi, dword ptr [esi + 0x44]
        mov    dl, byte ptr [edx + eax]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xa]
        shl    ecx, 5
        mov    byte ptr [ecx + edi + 0x17], dl
L_6a7d:
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [esi + 0x44]
        mov    eax, dword ptr [esi + 0x1c]
        xor    ebx, ebx
        mov    bx, word ptr [esi + 0xa]
        mov    dword ptr [ebp - 0x64], eax
        mov    dword ptr [ebp - 0x60], edx
        shl    ebx, 5
        add    ebx, ecx
        mov    dword ptr [ebp - 0x30], ebx
        mov    ecx, dword ptr [ebp - 0x60]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x30]
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
        fmul    dword ptr [ebx]
        mov    eax, dword ptr [g_007b94a0]
        mov    ecx, dword ptr [ebp - 0x64]
        mov    dword ptr [ebx + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov    eax, dword ptr [ebp - 0xc]
        fstp    dword ptr [ebx]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [ebx + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 4]
        mov    edx, dword ptr [ecx + eax*8]
        mov    dword ptr [ebx + 0x18], edx
        mov    eax, dword ptr [ecx + eax*8 + 4]
        mov    dword ptr [ebx + 0x1c], eax
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_6b42
        mov    edx, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x54]
        xor    eax, eax
        mov    ax, word ptr [esi + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        fstp    dword ptr [eax]
L_6b42:
        inc    word ptr [esi + 0xa]
        mov    eax, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x18]
        xor    ebx, ebx
L_6b4e:
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], eax
        jl    L_6a38
L_6b5a:
        mov    eax, dword ptr [ebp - 0x3c]
        xor    edx, edx
        cmp    eax, ebx
        mov    dword ptr [ebp - 0x1c], ebx
        jle    L_6c56
L_6b6a:
        mov    eax, dword ptr [esi + 0x60]
        mov    ecx, dword ptr [g_007da5e8]
        movzx    di, byte ptr [eax + ebx]
        mov    eax, dword ptr [ecx]
        cmp    byte ptr [eax + ebx], 0
        jne    L_6b8b
        and    edi, 0xffff
        jmp    L_6c43
L_6b8b:
        and    edi, 0xffff
        mov    eax, 1
        lea    ecx, [edi - 1]
        cmp    ecx, eax
        mov    dword ptr [ebp + 8], edi
        jle    L_6c43
L_6ba4:
        mov    ebx, dword ptr [g_007da5f4]
        xor    ecx, ecx
        mov    ecx, dword ptr [esi + 0x48]
        mov    cl, byte ptr [ecx + edx]
        mov    edi, ecx
        movzx    cx, cl
        and    edi, 0xff
        sub    cx, word ptr [ebx + edi*2]
        mov    ebx, dword ptr [esi + 0x50]
        xor    edi, edi
        mov    di, word ptr [esi + 0x54]
        mov    word ptr [ebx + edi*2], cx
        mov    ebx, dword ptr [g_007da5f4]
        xor    ecx, ecx
        mov    ecx, dword ptr [esi + 0x48]
        add    ecx, eax
        mov    cl, byte ptr [ecx + edx + 1]
        mov    edi, ecx
        and    edi, 0xff
        movzx    cx, cl
        sub    cx, word ptr [ebx + edi*2]
        mov    ebx, dword ptr [esi + 0x50]
        xor    edi, edi
        mov    di, word ptr [esi + 0x54]
        mov    word ptr [ebx + edi*2 + 2], cx
        mov    ebx, dword ptr [g_007da5f4]
        xor    ecx, ecx
        mov    ecx, dword ptr [esi + 0x48]
        add    ecx, eax
        mov    cl, byte ptr [ecx + edx]
        mov    edi, ecx
        and    edi, 0xff
        movzx    cx, cl
        sub    cx, word ptr [ebx + edi*2]
        mov    ebx, dword ptr [esi + 0x50]
        xor    edi, edi
        mov    di, word ptr [esi + 0x54]
        mov    word ptr [ebx + edi*2 + 4], cx
        add    word ptr [esi + 0x54], 3
        mov    edi, dword ptr [ebp + 8]
        inc    eax
        lea    ecx, [edi - 1]
        cmp    eax, ecx
        jl    L_6ba4
        mov    ebx, dword ptr [ebp - 0x1c]
L_6c43:
        mov    eax, dword ptr [ebp - 0x3c]
        add    edx, edi
        inc    ebx
        cmp    ebx, eax
        mov    dword ptr [ebp - 0x1c], ebx
        jl    L_6b6a
        xor    ebx, ebx
L_6c56:
        mov    eax, dword ptr [ebp - 0x48]
        cmp    eax, ebx
        jle    L_6f91
        mov    dword ptr [ebp - 0x1c], ebx
        mov    dword ptr [ebp - 0xc], ebx
L_6c67:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    ax, word ptr [eax + ecx*2]
        mov    dword ptr [ebp - 0x18], 1
        and    eax, 0xffff
        mov    dword ptr [ebp + 8], eax
        dec    eax
        cmp    eax, 1
        jle    L_6f74
        mov    edx, dword ptr [ebp - 0xc]
        mov    ebx, dword ptr [ebp - 8]
        lea    eax, [edx*8 + 8]
        mov    dword ptr [ebp - 0x20], eax
L_6c9f:
        test    byte ptr [ebx + 0x13], 1
        je    L_6d03
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    dl, byte ptr [edx + eax]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x17], dl
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0x18]
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
L_6d03:
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da684]
        mov    eax, dword ptr [edx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0xb4], ecx
        mov    ecx, dword ptr [ebp - 0x18]
        mov    dword ptr [ebp - 0xac], eax
        mov    eax, dword ptr [ebp - 0xc]
        lea    edx, [eax + ecx]
        lea    eax, [eax + ecx + 1]
        mov    ecx, dword ptr [ebx + 0x44]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x30], edx
        mov    dword ptr [ebp - 0x60], eax
        mov    dword ptr [ebp - 0x64], esi
        mov    ecx, dword ptr [ebp - 0xac]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x64]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x60]
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
        mov    eax, dword ptr [ebp - 0x30]
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
        mov    eax, dword ptr [ebp - 0xb4]
        fstp    dword ptr [esi]
        mov    edx, dword ptr [eax + ecx*8]
        fld    dword ptr [g_007da878]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        fmul    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi + 0x1c], ecx
        mov    ecx, dword ptr [ebp - 0x20]
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
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
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
        je    L_6f15
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x54]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x50]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x38]
        lea    eax, [edx + eax + 0x38]
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x54]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x3c]
        lea    eax, [ecx + edx + 0x3c]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x50]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x58]
        lea    eax, [eax + ecx + 0x58]
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x54]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x5c]
        lea    eax, [edx + eax + 0x5c]
        fstp    dword ptr [eax]
L_6f15:
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        add    dword ptr [ebp - 0x20], 8
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
        mov    eax, dword ptr [ebp - 0x18]
        inc    eax
        dec    ecx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x18], eax
        jl    L_6c9f
L_6f74:
        mov    esi, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 0x48]
        add    esi, edx
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], esi
        mov    dword ptr [ebp - 0x1c], eax
        jl    L_6c67
L_6f91:
        mov    eax, dword ptr [ebp - 8]
        mov    esi, dword ptr [eax + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        xor    ebx, ebx
        shl    ecx, 5
        lea    edi, [esi + ecx]
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    bx, word ptr [eax + 0xa]
        mov    esi, ebx
        and    esi, 0xffff
        jle    L_6fff
        mov    ecx, dword ptr [eax + 0x44]
        mov    edx, esi
        shl    edx, 5
        lea    edx, [edx + ecx + 0x1c]
        add    ecx, 0x1c
        mov    edi, esi
L_6fd2:
        fld    dword ptr [ecx - 4]
        add    ecx, 0x20
        fmul    dword ptr [eax + 0x98]
        add    edx, 0x20
        dec    edi
        fadd    dword ptr [eax + 0x90]
        fstp    dword ptr [edx - 0x24]
        fld    dword ptr [eax + 0x9c]
        fmul    dword ptr [ecx - 0x20]
        fadd    dword ptr [eax + 0x94]
        fstp    dword ptr [edx - 0x20]
        jne    L_6fd2
L_6fff:
        mov    cl, byte ptr [ebp + 0x1c]
        test    cl, cl
        jne    L_7020
        mov    ecx, dword ptr [ebp + 0x10]
        mov    edi, dword ptr [ecx]
        lea    edx, [esi + esi]
        mov    esi, dword ptr [ecx + 0xc]
        add    edi, edx
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    dword ptr [ecx], edi
        add    esi, edx
        mov    dword ptr [ecx + 0xc], esi
L_7020:
        test    bx, bx
        pop    edi
        setne    cl
        pop    esi
        mov    byte ptr [eax + 0x10], cl
        mov    eax, dword ptr [ebp - 0x4c]
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x00467038 (6 relocated pointers)
        __emit 0x2D
        __emit 0x5D
        __emit 0x46
        __emit 0x00
        __emit 0x3B
        __emit 0x5D
        __emit 0x46
        __emit 0x00
        __emit 0x46
        __emit 0x5D
        __emit 0x46
        __emit 0x00
        __emit 0xA1
        __emit 0x5C
        __emit 0x46
        __emit 0x00
        __emit 0xA7
        __emit 0x5C
        __emit 0x46
        __emit 0x00
        __emit 0xAF
        __emit 0x5C
        __emit 0x46
        __emit 0x00
        // jump-table data @ 0x00467050 (6 relocated pointers)
        __emit 0x2D
        __emit 0x5D
        __emit 0x46
        __emit 0x00
        __emit 0x3B
        __emit 0x5D
        __emit 0x46
        __emit 0x00
        __emit 0x46
        __emit 0x5D
        __emit 0x46
        __emit 0x00
        __emit 0xA1
        __emit 0x5C
        __emit 0x46
        __emit 0x00
        __emit 0xA7
        __emit 0x5C
        __emit 0x46
        __emit 0x00
        __emit 0xAF
        __emit 0x5C
        __emit 0x46
        __emit 0x00
        // jump-table data @ 0x00467068 (6 relocated pointers)
        __emit 0xE5
        __emit 0x62
        __emit 0x46
        __emit 0x00
        __emit 0x36
        __emit 0x63
        __emit 0x46
        __emit 0x00
        __emit 0x3E
        __emit 0x63
        __emit 0x46
        __emit 0x00
        __emit 0x65
        __emit 0x63
        __emit 0x46
        __emit 0x00
        __emit 0x6C
        __emit 0x63
        __emit 0x46
        __emit 0x00
        __emit 0x73
        __emit 0x63
        __emit 0x46
        __emit 0x00
        // jump-table data @ 0x00467080 (14 relocated pointers)
        __emit 0x25
        __emit 0x63
        __emit 0x46
        __emit 0x00
        __emit 0xCF
        __emit 0x64
        __emit 0x46
        __emit 0x00
        __emit 0xD7
        __emit 0x64
        __emit 0x46
        __emit 0x00
        __emit 0xFE
        __emit 0x64
        __emit 0x46
        __emit 0x00
        __emit 0x05
        __emit 0x65
        __emit 0x46
        __emit 0x00
        __emit 0x0C
        __emit 0x65
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
        __emit 0x18
        __emit 0x53
        __emit 0x55
        __emit 0x56
        __emit 0x57
        __emit 0x50
        __emit 0xE8
        __emit 0x9E
        __emit 0xD8
        __emit 0x28
        __emit 0x00
        __emit 0x68
        __emit 0xA0
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xE8
    }
}
