/*
 * FUN_00468560 (extent 0x468560-0x46aaf4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_0076efe4;
extern float  g_0076efe8;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007b9574;
extern int    g_007d9944;
extern int    g_007d9948;
extern int    g_007d994c;
extern int    g_007d997c;
extern int    g_007d9980;
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
extern void __cdecl FUN_004701a0(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00468560(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1ec
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x98]
        test    eax, eax
        push    esi
        push    edi
        mov    dword ptr [ebp - 0x18], ebx
        je    L_aac3
        mov    ecx, dword ptr [eax + 4]
        test    ecx, ecx
        je    L_aac3
        mov    eax, dword ptr [g_007b9574]
        test    eax, eax
        ja    L_aac3
        mov    eax, dword ptr [ebx + 0x64]
        test    eax, eax
        mov    dword ptr [ebp - 0x88], 0
        ja    L_85b7
        mov    byte ptr [ebx + 0x10], 0
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_85b7:
        cmp    word ptr [ebx + 0x56], 0
        mov    eax, dword ptr [ebx + 0x18]
        mov    dword ptr [ebp - 0x4c], eax
        jne    L_85ce
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 0x98]
L_85ce:
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    edi, dword ptr [ebx + 0x14]
        mov    dword ptr [ebp + 0x18], ecx
        mov    ecx, dword ptr [g_007da600]
        mov    esi, dword ptr [ecx]
        mov    dword ptr [ebp - 0x10], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp - 0x24], esi
        je    L_8668
        mov    eax, dword ptr [ebp - 0x4c]
        test    eax, eax
        mov    dword ptr [ebp - 0x1c], 0
        jle    L_86aa
L_860a:
        cmp    byte ptr [esi], 0
        je    L_863f
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp - 0x24]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    edi
        mov    byte ptr [edx], 0
        call    FUN_0041cb30
        mov    edx, dword ptr [g_007da65c]
        mov    esi, dword ptr [edx]
        add    esi, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp + 0x14]
        push    edi
        call    FUN_00421f00
        mov    byte ptr [esi], al
        mov    esi, dword ptr [ebp - 0x24]
L_863f:
        mov    ecx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp + 0x18]
        add    ecx, 4
        inc    eax
        add    edx, 0x10
        add    edi, 0xc
        mov    dword ptr [ebp - 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x4c]
        inc    esi
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp + 0x18], edx
        mov    dword ptr [ebp - 0x24], esi
        jl    L_860a
        jmp    L_86aa
L_8668:
        mov    eax, dword ptr [ebp - 0x4c]
        test    eax, eax
        jle    L_86aa
        mov    dword ptr [ebp + 0x14], eax
L_8672:
        cmp    byte ptr [esi], 0
        je    L_868b
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    edi
        mov    byte ptr [esi], 0
        call    FUN_0041cb30
L_868b:
        mov    eax, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp - 0x10]
        add    eax, 0x10
        mov    dword ptr [ebp + 0x18], eax
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    edi, 0xc
        inc    esi
        dec    eax
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_8672
L_86aa:
        mov    edi, dword ptr [ebx + 0x24]
        and    edi, 0x3fff
        mov    edx, dword ptr [ebx + 0x64]
        mov    dword ptr [ebp - 0x8c], 0
        mov    dword ptr [ebp - 4], 0
        mov    dword ptr [ebp - 0x4c], edx
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x94], 0
        mov    dword ptr [ebp - 0x9c], 0
        je    L_87a3
        test    edi, edi
        jle    L_87a3
        mov    eax, dword ptr [g_007da848]
        mov    esi, dword ptr [eax + edi*4 + 0x24]
        test    esi, esi
        je    L_87a3
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_8724
        mov    dword ptr [g_007da864], 1
        jmp    L_877f
L_8724:
        cmp    eax, 0x80
        jl    L_8737
        mov    dword ptr [g_007da864], 2
        jmp    L_877f
L_8737:
        cmp    eax, 0x40
        jl    L_8748
        mov    dword ptr [g_007da864], 4
        jmp    L_877f
L_8748:
        cmp    eax, 0x20
        jl    L_8759
        mov    dword ptr [g_007da864], 8
        jmp    L_877f
L_8759:
        cmp    eax, 0x10
        jl    L_876a
        mov    dword ptr [g_007da864], 0x10
        jmp    L_877f
L_876a:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_877f:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_87ce
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_87ce
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x94], edx
        mov    dword ptr [ebp - 0x9c], eax
L_87a3:
        test    dword ptr [ebx + 0x68], 0x3fff
        mov    byte ptr [ebp + 0x1b], 0
        mov    dword ptr [ebp - 0xdc], 0
        mov    dword ptr [ebp - 0xd4], 0
        je    L_880a
        xor    ecx, ecx
        cmp    edi, ecx
        jg    L_87d4
        xor    edi, edi
        jmp    L_87de
L_87ce:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_87a3
L_87d4:
        mov    edx, dword ptr [g_007da848]
        mov    edi, dword ptr [edx + edi*4 + 0x24]
L_87de:
        mov    al, byte ptr [edi + 0x24]
        test    al, al
        jne    L_8804
        mov    edi, dword ptr [edi + 0x28]
        cmp    edi, ecx
        je    L_8804
        mov    eax, dword ptr [edi + 0xc]
        mov    edx, dword ptr [edi + 0x1c]
        mov    byte ptr [ebp + 0x1b], 1
        mov    dword ptr [ebp - 0xdc], eax
        mov    dword ptr [ebp - 0xd4], edx
        jmp    L_880c
L_8804:
        mov    byte ptr [ebp + 0x1b], 0
        jmp    L_880c
L_880a:
        xor    ecx, ecx
L_880c:
        mov    eax, dword ptr [ebx + 0x18]
        cmp    eax, 0x100
        mov    dword ptr [ebp - 0x48], ecx
        mov    dword ptr [ebp - 0x78], eax
        jle    L_8823
        mov    dword ptr [ebp - 0x78], 0x100
L_8823:
        cmp    word ptr [ebx + 0x56], cx
        mov    dword ptr [ebp - 0x3c], ecx
        mov    dword ptr [ebp - 0x84], ecx
        jne    L_883c
        mov    eax, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [eax + 0x98]
L_883c:
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
        mov    eax, dword ptr [ebp - 0x4c]
        xor    ecx, ecx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0xc], ecx
        jle    L_a30b
        mov    esi, ecx
L_886c:
        mov    edx, dword ptr [g_007da5e8]
        mov    edx, dword ptr [edx]
        mov    eax, dword ptr [ebx + 0x60]
        movzx    ax, byte ptr [eax + esi]
        add    edx, esi
        cmp    byte ptr [edx], 0
        mov    dword ptr [ebp - 0x38], edx
        jne    L_8895
        and    eax, 0xffff
        add    ecx, eax
        mov    dword ptr [ebp - 0xc], ecx
        jmp    L_a2fc
L_8895:
        and    eax, 0xffff
        lea    esi, [eax + ecx]
        xor    edi, edi
        cmp    ecx, esi
        mov    dword ptr [g_007d994c], 0x3f
        mov    dword ptr [g_007d9948], edi
        mov    dword ptr [ebp - 0x80], esi
        mov    eax, ecx
        jge    L_88fa
        mov    ecx, dword ptr [g_007da688]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebx + 0x48]
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x14], ecx
L_88c9:
        mov    ecx, dword ptr [ebp - 0x14]
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        mov    ecx, dword ptr [ebp + 8]
        or    edi, dword ptr [ecx + edx*4]
        lea    ecx, [ecx + edx*4]
        mov    edx, dword ptr [g_007d994c]
        and    edx, dword ptr [ecx]
        inc    eax
        cmp    eax, esi
        mov    dword ptr [g_007d994c], edx
        jl    L_88c9
        test    edx, edx
        mov    dword ptr [g_007d9948], edi
        je    L_8902
        mov    edx, dword ptr [ebp - 0x38]
L_88fa:
        mov    byte ptr [edx], 0
        jmp    L_a2ed
L_8902:
        test    edi, edi
        jne    L_8938
        mov    eax, dword ptr [ebp - 0x88]
        mov    ecx, dword ptr [ebp - 0x18]
        inc    eax
        mov    dword ptr [ebp - 0x88], eax
        mov    eax, dword ptr [ebp - 0xc]
L_8919:
        mov    edx, dword ptr [ecx + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + eax]
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        inc    eax
        mov    byte ptr [ebx + edx], 1
        cmp    eax, dword ptr [ebp - 0x80]
        jl    L_8919
        jmp    L_a2ed
L_8938:
        cmp    dword ptr [edi*4 + 0x7b2478], 1
        mov    dword ptr [ebp - 0x10], 0
        jne    L_947d
        mov    ecx, dword ptr [ebp - 0xc]
L_8950:
        mov    eax, dword ptr [ebx + 0x48]
        xor    edx, edx
        mov    dl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0x14], ecx
        mov    esi, ecx
        mov    edi, edx
        jl    L_8967
        mov    esi, dword ptr [ebp - 0xc]
L_8967:
        mov    edx, dword ptr [ebp - 0x3c]
        xor    ecx, ecx
        mov    cl, byte ptr [eax + esi]
        mov    esi, dword ptr [ebp - 0x10]
        and    esi, 0xffff
        add    esi, edx
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [eax + edi*4]
        test    edx, edx
        mov    dword ptr [ebp - 0x2c], ecx
        mov    dword ptr [ebp - 0x34], esi
        mov    dword ptr [g_007d9944], edx
        jne    L_8a6f
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
        mov    ecx, dword ptr [ebx + 0x98]
        mov    edx, dword ptr [ecx]
        mov    edx, dword ptr [edx + edi*4]
        mov    eax, dword ptr [g_007da608]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebx + 0x1c]
        mov    dword ptr [ecx + esi*4], edx
        mov    ecx, dword ptr [g_007da680]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [eax + edi*8]
        mov    dword ptr [edx + esi*8], ecx
        mov    ecx, dword ptr [eax + edi*8 + 4]
        mov    dword ptr [edx + esi*8 + 4], ecx
        mov    edx, dword ptr [ebp - 0x78]
        lea    ecx, [edi + edx]
        mov    ebx, dword ptr [eax + ecx*8]
        mov    edx, dword ptr [g_007d9980]
        mov    edx, dword ptr [edx]
        mov    eax, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [edx + esi*8], ebx
        mov    ebx, dword ptr [ebp - 0x18]
        mov    dword ptr [edx + esi*8 + 4], eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        jbe    L_8a3c
        test    al, 1
        je    L_8a3c
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [ecx + esi], dl
L_8a3c:
        mov    ecx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x2c]
        mov    edx, dword ptr [g_007da688]
        inc    ecx
        mov    dword ptr [ebp - 0x10], ecx
        lea    ecx, [eax*4]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ecx + eax]
        inc    esi
        test    edx, edx
        mov    dword ptr [ebp - 0x34], esi
        mov    dword ptr [ebp - 0x30], ecx
        je    L_9454
        mov    edx, dword ptr [g_007d9944]
        jmp    L_8a86
L_8a6f:
        mov    ecx, dword ptr [ebp - 0x2c]
        shl    ecx, 2
        cmp    dword ptr [ecx + eax], 0
        mov    byte ptr [ebp + 0xb], 0
        mov    dword ptr [ebp - 0x30], ecx
        jne    L_9454
L_8a86:
        or    edx, dword ptr [ecx + eax]
        mov    dword ptr [ebp - 8], 1
        mov    eax, dword ptr [ebp - 8]
        mov    dword ptr [g_007d9944], edx
        xor    ebx, ebx
L_8a9b:
        test    eax, edx
        jne    L_8aad
        shl    eax, 1
        inc    ebx
        cmp    bx, 6
        jb    L_8a9b
        jmp    L_8c0b
L_8aad:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_8b5d
        mov    edx, dword ptr [g_007da68c]
        mov    eax, dword ptr [ebp - 0x2c]
        mov    edx, dword ptr [edx]
        mov    ecx, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_8b3f
        jmp    dword ptr [ebx*4 + 0x46aaf4]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_8aec:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_8bf8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_8c05
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_8aec
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_8aec
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_8aec
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_8aec
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_8aec
L_8b3f:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_8ba4
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_8c05
L_8b5d:
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    eax, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_8bdd
        jmp    dword ptr [ebx*4 + 0x46ab0c]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_8b91:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_8bf8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_8ba4:
        mov    dword ptr [ebp - 4], 0
        jmp    L_8c05
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_8b91
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_8b91
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_8b91
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_8b91
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_8b91
L_8bdd:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_8ba4
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_8c05
L_8bf8:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_8c05:
        mov    dword ptr [ebp - 0x8c], ebx
L_8c0b:
        cmp    byte ptr [ebp + 0xb], 1
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        jne    L_9035
        mov    ecx, dword ptr [ebp - 0x2c]
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        mov    eax, edi
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        shl    esi, 4
        add    edx, esi
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
        mov    eax, dword ptr [ebp - 0x8c]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_8c8f
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_8c95
L_8c8f:
        fld    dword ptr [g_007b220c]
L_8c95:
        mov    ecx, dword ptr [ebp - 0x8c]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ecx + 0x98]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x30]
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
        mov    dword ptr [ebp - 0x17c], esi
        fmul    dword ptr [g_0076efe8]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x178], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x144]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x17c]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x188], edx
        mov    dword ptr [ebp - 0x18c], esi
        fmul    dword ptr [g_0076efe8]
        mov    dword ptr [ebp - 0x19c], ecx
        mov    dword ptr [ebp - 0x198], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x148]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x18c]
        mov    dword ptr [ebp - 0x1ac], ecx
        mov    dword ptr [ebp - 0x1a8], edx
        shr    eax, 8
        fmul    dword ptr [g_0076efe8]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1bc], ecx
        fstp    dword ptr [ebp - 0x14c]
        mov    dword ptr [ebp - 0x1b8], edx
        fild    qword ptr [ebp - 0x19c]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076efe8]
        mov    dword ptr [ebp - 0x1cc], ecx
        mov    dword ptr [ebp - 0x1c8], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x140]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x1ac]
        mov    dword ptr [ebp - 0x1dc], eax
        mov    dword ptr [ebp - 0x1d8], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076efe8]
        push    edx
        lea    eax, [ebp - 0x11c]
        lea    ecx, [ebp - 0x14c]
        fstp    dword ptr [ebp - 0x114]
        push    eax
        fild    qword ptr [ebp - 0x1bc]
        push    ecx
        mov    dword ptr [ebp - 0xec], 0xbf800000
        mov    dword ptr [ebp - 0xf0], 0xbf800000
        fmul    dword ptr [g_0076efe8]
        mov    dword ptr [ebp - 0xf4], 0xbf800000
        mov    dword ptr [ebp - 0xe8], 0xbf800000
        lea    ecx, [ebp - 0xf4]
        fstp    dword ptr [ebp - 0x118]
        fild    qword ptr [ebp - 0x1cc]
        fmul    dword ptr [g_0076efe8]
        fstp    dword ptr [ebp - 0x11c]
        fild    qword ptr [ebp - 0x1dc]
        fmul    dword ptr [g_0076efe8]
        fstp    dword ptr [ebp - 0x110]
        call    FUN_004286e0
        lea    edx, [ebp - 0xf4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076efe4]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x108]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x108]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xe0], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x108]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x108]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe0], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x108]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x108]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe0], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x108]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x108]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe0], ecx
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x34]
        mov    eax, dword ptr [ebp - 0xe0]
        mov    ebx, dword ptr [ebp - 0x18]
        mov    esi, dword ptr [ebp - 0x2c]
        mov    dword ptr [edx + ecx*4], eax
        mov    eax, dword ptr [ebx + 0x1c]
        fld    dword ptr [eax + esi*8]
        lea    edx, [ecx*8]
        fsub    dword ptr [eax + edi*8]
        mov    ecx, dword ptr [g_007da680]
        mov    ecx, dword ptr [ecx]
        add    ecx, edx
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + esi*8 + 4]
        fsub    dword ptr [eax + edi*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8 + 4]
        fstp    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp - 0x78]
        add    esi, ecx
        fld    dword ptr [eax + esi*8]
        add    ecx, edi
        fsub    dword ptr [eax + ecx*8]
        lea    esi, [eax + esi*8]
        lea    eax, [eax + ecx*8]
        mov    ecx, dword ptr [g_007d9980]
        mov    ecx, dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        add    ecx, edx
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_944a
        test    al, 1
        je    L_944a
        mov    edx, dword ptr [g_007da65c]
        mov    eax, dword ptr [edx]
        mov    cl, byte ptr [eax + edi]
        mov    esi, dword ptr [ebp - 0x2c]
        xor    edx, edx
        mov    dl, byte ptr [eax + esi]
        mov    eax, dword ptr [g_007da660]
        mov    byte ptr [ebp - 0x10c], cl
        mov    ecx, dword ptr [ebp - 0x10c]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x38], ecx
        sub    edx, ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp + 8], edx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x38]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
        jmp    L_9444
L_9035:
        mov    eax, dword ptr [ebp - 0x2c]
        mov    ecx, edi
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        shl    esi, 4
        add    edx, esi
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
        mov    eax, dword ptr [ebp - 0x8c]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_90a7
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_90ad
L_90a7:
        fld    dword ptr [g_007b220c]
L_90ad:
        mov    ecx, dword ptr [ebp - 0x8c]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ecx + 0x98]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [edx + ecx]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x1ec], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x1e8], edx
        fild    qword ptr [ebp - 0x1ec]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x164], esi
        fmul    dword ptr [g_0076efe8]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x160], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x134]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x164]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1e0], edx
        mov    dword ptr [ebp - 0x1e4], esi
        fmul    dword ptr [g_0076efe8]
        mov    dword ptr [ebp - 0x154], ecx
        mov    dword ptr [ebp - 0x150], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x138]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x1e4]
        mov    dword ptr [ebp - 0x1b4], ecx
        mov    dword ptr [ebp - 0x1b0], edx
        shr    eax, 8
        fmul    dword ptr [g_0076efe8]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x184], ecx
        fstp    dword ptr [ebp - 0x13c]
        mov    dword ptr [ebp - 0x180], edx
        fild    qword ptr [ebp - 0x154]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076efe8]
        mov    dword ptr [ebp - 0x1d4], ecx
        mov    dword ptr [ebp - 0x1d0], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x130]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x1b4]
        mov    dword ptr [ebp - 0x194], eax
        mov    dword ptr [ebp - 0x190], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076efe8]
        push    edx
        lea    eax, [ebp - 0x12c]
        lea    ecx, [ebp - 0x13c]
        fstp    dword ptr [ebp - 0x124]
        push    eax
        fild    qword ptr [ebp - 0x184]
        push    ecx
        mov    dword ptr [ebp - 0xfc], 0xbf800000
        mov    dword ptr [ebp - 0x100], 0xbf800000
        fmul    dword ptr [g_0076efe8]
        mov    dword ptr [ebp - 0x104], 0xbf800000
        mov    dword ptr [ebp - 0xf8], 0xbf800000
        lea    ecx, [ebp - 0x104]
        fstp    dword ptr [ebp - 0x128]
        fild    qword ptr [ebp - 0x1d4]
        fmul    dword ptr [g_0076efe8]
        fstp    dword ptr [ebp - 0x12c]
        fild    qword ptr [ebp - 0x194]
        fmul    dword ptr [g_0076efe8]
        fstp    dword ptr [ebp - 0x120]
        call    FUN_004286e0
        lea    edx, [ebp - 0x104]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076efe4]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xe4], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe4], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe4], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe4], ecx
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x34]
        mov    eax, dword ptr [ebp - 0xe4]
        mov    dword ptr [edx + ecx*4], eax
        mov    edx, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [edx + 0x1c]
        mov    edx, dword ptr [ebp - 0x2c]
        fld    dword ptr [eax + edi*8]
        fsub    dword ptr [eax + edx*8]
        lea    esi, [ecx*8]
        mov    ecx, dword ptr [g_007da680]
        mov    ecx, dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        add    ecx, esi
        fadd    dword ptr [eax + edx*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + edi*8 + 4]
        fsub    dword ptr [eax + edx*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edx*8 + 4]
        fstp    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp - 0x78]
        lea    ebx, [edi + ecx]
        fld    dword ptr [eax + ebx*8]
        lea    ebx, [eax + ebx*8]
        add    edx, ecx
        fsub    dword ptr [eax + edx*8]
        lea    eax, [eax + edx*8]
        mov    edx, dword ptr [g_007d9980]
        mov    ecx, dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        add    ecx, esi
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [ebx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        mov    eax, dword ptr [ebp - 0x18]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_944a
        test    al, 1
        je    L_944a
        mov    ecx, dword ptr [g_007da65c]
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [ebp - 0x2c]
        mov    cl, byte ptr [eax + edx]
        xor    edx, edx
        mov    dl, byte ptr [eax + edi]
        mov    eax, dword ptr [g_007da660]
        mov    byte ptr [ebp - 0xcc], cl
        mov    ecx, dword ptr [ebp - 0xcc]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x38], ecx
        sub    edx, ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp + 8], edx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x38]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
L_9444:
        mov    eax, dword ptr [ebp - 0x34]
        mov    byte ptr [ecx + eax], dl
L_944a:
        mov    eax, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [ebp - 0x18]
        inc    eax
        mov    dword ptr [ebp - 0x10], eax
L_9454:
        mov    esi, dword ptr [ebp - 0x80]
        mov    ecx, dword ptr [ebp - 0x14]
        cmp    ecx, esi
        jl    L_8950
        mov    ecx, dword ptr [g_007da670]
        mov    edx, dword ptr [ecx]
        mov    ax, word ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x84]
        mov    word ptr [edx + ecx*2], ax
        jmp    L_a2b5
L_947d:
        mov    esi, dword ptr [g_007da66c]
        mov    eax, dword ptr [esi + 0x38]
        mov    edx, dword ptr [esi + 0x30]
        mov    ecx, dword ptr [esi + 0x40]
        mov    dword ptr [ebp - 0x68], eax
        mov    eax, dword ptr [esi + 0x48]
        mov    dword ptr [ebp - 0x60], eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        mov    dword ptr [ebp - 0x6c], edx
        mov    dword ptr [ebp - 0x64], ecx
        mov    byte ptr [ebp - 0xd8], al
        jbe    L_94df
        and    eax, 0xff
        mov    dword ptr [ebp - 0x20], eax
        mov    edi, 1
        lea    ecx, [ebp - 0x5c]
        lea    eax, [esi + 0x50]
        mov    dword ptr [ebp + 8], 2
L_94c2:
        test    dword ptr [ebp - 0x20], edi
        je    L_94ce
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [ebp - 0x6c]
L_94ce:
        mov    esi, dword ptr [ebp + 8]
        add    eax, 8
        add    ecx, 4
        shl    edi, 1
        dec    esi
        mov    dword ptr [ebp + 8], esi
        jne    L_94c2
L_94df:
        mov    eax, dword ptr [g_007da68c]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x38], eax
        mov    eax, dword ptr [ebx + 0x98]
        mov    eax, dword ptr [eax]
        mov    dword ptr [ebp - 0x7c], eax
        mov    eax, dword ptr [ebx + 0x1c]
        mov    dword ptr [ebp - 0x40], eax
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        xor    edi, edi
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x24], edi
        mov    dword ptr [ebp - 0xc0], eax
        jmp    L_9517
L_9514:
        mov    edx, dword ptr [ebp - 0x6c]
L_9517:
        mov    esi, dword ptr [ebp - 0x14]
        mov    ebx, dword ptr [ebp - 0x38]
        xor    eax, eax
        mov    al, byte ptr [esi + ecx]
        and    edi, 0xffff
        mov    dword ptr [ebp - 0x1c0], 0
        mov    dword ptr [ebp - 0x1a0], 0
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
        mov    dword ptr [eax + edx + 8], ebx
        mov    dword ptr [eax + edx + 0xc], ecx
        mov    edx, dword ptr [ebp - 0x7c]
        mov    ecx, dword ptr [edx + esi*4]
        mov    edx, ecx
        and    edx, 0xff
        mov    dword ptr [ebp - 0x1c4], edx
        fild    qword ptr [ebp - 0x1c4]
        mov    edx, dword ptr [ebp - 0x68]
        shr    ecx, 8
        mov    ebx, ecx
        fmul    dword ptr [g_0076efe8]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x1a4], ebx
        shr    ecx, 8
        fstp    dword ptr [eax + edx + 8]
        mov    ebx, ecx
        fild    qword ptr [ebp - 0x1a4]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x15c], ebx
        xor    ebx, ebx
        fmul    dword ptr [g_0076efe8]
        mov    dword ptr [ebp - 0x158], ebx
        shr    ecx, 8
        and    ecx, 0xff
        fstp    dword ptr [eax + edx + 4]
        mov    dword ptr [ebp - 0x168], ebx
        fild    qword ptr [ebp - 0x15c]
        mov    dword ptr [ebp - 0x16c], ecx
        mov    ecx, dword ptr [ebp - 0x64]
        fmul    dword ptr [g_0076efe8]
        fstp    dword ptr [eax + edx]
        fild    qword ptr [ebp - 0x16c]
        fmul    dword ptr [g_0076efe8]
        fstp    dword ptr [eax + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x40]
        mov    ebx, dword ptr [edx + esi*8]
        mov    dword ptr [eax + ecx], ebx
        mov    ebx, dword ptr [edx + esi*8 + 4]
        mov    dword ptr [eax + ecx + 4], ebx
        mov    ebx, dword ptr [ebp - 0x78]
        add    ebx, esi
        mov    edx, dword ptr [edx + ebx*8]
        mov    dword ptr [eax + ecx + 8], edx
        mov    edx, dword ptr [ebp - 0x40]
        mov    edx, dword ptr [edx + ebx*8 + 4]
        mov    dword ptr [eax + ecx + 0xc], edx
        mov    eax, dword ptr [ebp - 0xc0]
        mov    ecx, dword ptr [eax + esi*4]
        mov    eax, dword ptr [ebp - 0xd8]
        test    al, al
        mov    edx, dword ptr [ebp - 0x60]
        mov    dword ptr [edx + edi*4], ecx
        jbe    L_9688
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], edx
        lea    ecx, [ebp - 0x5c]
        mov    eax, 0x7da65c
L_9657:
        mov    ebx, dword ptr [ebp - 8]
        test    edx, ebx
        je    L_966d
        mov    edx, dword ptr [eax]
        mov    edx, dword ptr [edx]
        mov    dl, byte ptr [edx + esi]
        mov    ebx, dword ptr [ecx]
        mov    byte ptr [edi + ebx], dl
        mov    edx, dword ptr [ebp - 0x20]
L_966d:
        mov    ebx, dword ptr [ebp - 8]
        add    eax, 8
        shl    ebx, 1
        add    ecx, 4
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp - 8], ebx
        jl    L_9657
        mov    eax, dword ptr [ebp - 0xd8]
L_9688:
        mov    ecx, dword ptr [ebp + 8]
        mov    edi, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ebp - 0x80]
        inc    ecx
        inc    edi
        cmp    ecx, edx
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x24], edi
        jl    L_9514
        mov    ecx, dword ptr [g_007da66c]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0xb8], edx
        mov    edx, dword ptr [ecx + 8]
        mov    dword ptr [ebp - 0xb4], edx
        mov    edx, dword ptr [ecx + 0x10]
        mov    word ptr [ebp - 0x54], di
        xor    edi, edi
        test    al, al
        mov    dword ptr [ebp - 0xb0], edx
        mov    edx, dword ptr [ecx + 0x18]
        mov    dword ptr [ebp - 0x50], edi
        mov    dword ptr [ebp - 0xac], edx
        jbe    L_9708
        and    eax, 0xff
        mov    esi, 1
        mov    dword ptr [ebp - 0x20], eax
        lea    edx, [ebp - 0xa8]
        add    ecx, 0x20
        mov    ebx, 2
L_96f2:
        test    eax, esi
        je    L_96fd
        mov    eax, dword ptr [ecx]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ebp - 0x20]
L_96fd:
        add    ecx, 8
        add    edx, 4
        shl    esi, 1
        dec    ebx
        jne    L_96f2
L_9708:
        mov    ebx, dword ptr [ebp - 0x18]
        mov    esi, dword ptr [ebp - 0x60]
        mov    word ptr [ebp - 0xa0], 0
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x38], 4
L_9725:
        mov    dword ptr [ebp - 0x44], 0
        mov    dword ptr [ebp - 0x34], 0x7b2404
        mov    dword ptr [ebp - 0x7c], 6
L_973a:
        mov    ecx, dword ptr [ebp - 8]
        test    dword ptr [g_007d9948], ecx
        je    L_9fe1
        mov    eax, dword ptr [ebp - 0x54]
        and    eax, 0xffff
        mov    dword ptr [ebp + 8], 0
        mov    dword ptr [ebp - 0x24], eax
        jle    L_9ecc
        mov    ecx, dword ptr [ebp - 0x68]
        mov    edx, dword ptr [ebp - 0x6c]
        mov    eax, dword ptr [ebp - 0x64]
        lea    ebx, [ecx + 0xc]
        sub    ecx, edx
        mov    dword ptr [ebp - 0x30], eax
        sub    eax, edx
        mov    dword ptr [ebp - 0xc4], esi
        mov    dword ptr [ebp - 0xc0], ebx
        lea    esi, [edx + 8]
        mov    dword ptr [ebp - 0x40], ecx
        mov    dword ptr [ebp - 0x10], eax
        jmp    L_978e
L_978b:
        mov    edx, dword ptr [ebp - 0x6c]
L_978e:
        mov    eax, dword ptr [ebp + 8]
        lea    edi, [eax + 1]
        mov    eax, dword ptr [ebp - 0x24]
        xor    ecx, ecx
        cmp    edi, eax
        mov    eax, dword ptr [ebp - 0xc4]
        mov    eax, dword ptr [eax]
        setge    cl
        mov    dword ptr [ebp - 0x14], edi
        mov    dword ptr [g_007d9944], eax
        dec    ecx
        and    ecx, edi
        test    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 0x2c], ecx
        jne    L_98ef
        mov    edi, dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0xa0]
        mov    edx, dword ptr [ebp - 0xb8]
        and    ecx, 0xffff
        mov    eax, ecx
        shl    eax, 4
        mov    dword ptr [edx + eax], edi
        mov    edi, dword ptr [esi - 4]
        mov    dword ptr [edx + eax + 4], edi
        mov    edi, dword ptr [esi]
        mov    dword ptr [edx + eax + 8], edi
        mov    edi, dword ptr [esi + 4]
        mov    dword ptr [edx + eax + 0xc], edi
        mov    edx, dword ptr [ebp - 0xc4]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0xac]
        mov    dword ptr [edi + ecx*4], edx
        mov    edi, dword ptr [ebx - 0xc]
        mov    edx, dword ptr [ebp - 0xb4]
        mov    dword ptr [edx + eax], edi
        mov    edi, dword ptr [ebx - 8]
        mov    dword ptr [edx + eax + 4], edi
        mov    edi, dword ptr [ebp - 0x40]
        mov    edi, dword ptr [edi + esi]
        mov    dword ptr [edx + eax + 8], edi
        mov    edi, dword ptr [ebx]
        mov    dword ptr [edx + eax + 0xc], edi
        mov    edx, dword ptr [ebp - 0x30]
        mov    edi, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xb0]
        mov    dword ptr [edx + eax], edi
        mov    edi, dword ptr [ebp - 0x30]
        mov    edi, dword ptr [edi + 4]
        mov    dword ptr [edx + eax + 4], edi
        mov    edi, dword ptr [ebp - 0x10]
        mov    edi, dword ptr [edi + esi]
        mov    dword ptr [edx + eax + 8], edi
        mov    edi, dword ptr [ebp - 0x10]
        mov    edi, dword ptr [edi + esi + 4]
        mov    dword ptr [edx + eax + 0xc], edi
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0x18]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_98a6
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], edx
        mov    dword ptr [ebp - 0x74], eax
L_9872:
        mov    edi, dword ptr [ebp - 8]
        test    edx, edi
        je    L_9893
        mov    edx, dword ptr [ebp + eax - 0x5c]
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp + eax - 0xa8]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    eax, dword ptr [ebp - 0x74]
        mov    edx, dword ptr [ebp - 0x20]
L_9893:
        mov    edi, dword ptr [ebp - 8]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x74], eax
        mov    dword ptr [ebp - 8], edi
        jl    L_9872
L_98a6:
        mov    edi, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp - 0x60]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [eax + edi*4]
        inc    word ptr [ebp - 0xa0]
        test    edx, ecx
        je    L_9e94
        mov    eax, dword ptr [ebp - 0x34]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_998e
        mov    ecx, dword ptr [ebp - 0x44]
        jmp    dword ptr [ecx*4 + 0x46ab24]
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x6c]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        jmp    L_994a
L_98ef:
        mov    eax, dword ptr [ebp - 0x60]
        mov    edi, dword ptr [ebp - 8]
        test    dword ptr [eax + ecx*4], edi
        jne    L_9e94
        mov    eax, dword ptr [ebp - 0x34]
        mov    edi, ecx
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_9bdd
        mov    eax, dword ptr [ebp - 0x44]
        jmp    dword ptr [eax*4 + 0x46ab3c]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_9ba2
        mov    edx, dword ptr [ebp - 0x6c]
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 4]
        jmp    L_994a
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x6c]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
L_994a:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_99ac
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_99b9
        mov    edx, dword ptr [ebp - 0x6c]
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi + edx]
        jmp    L_994a
        mov    edx, dword ptr [ebp - 0x6c]
        fld    dword ptr [esi]
        fld    dword ptr [edi + edx + 8]
        jmp    L_994a
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x6c]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        jmp    L_994a
L_998e:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_99a0
        int 3    
L_99a0:
        mov    edx, dword ptr [ebp - 0x6c]
        mov    dword ptr [ebp - 4], 0
        jmp    L_99b9
L_99ac:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_99b9:
        fld    dword ptr [edi + edx]
        mov    eax, dword ptr [ebp - 0xa0]
        fsub    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0xb8]
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x74], eax
        fmul    dword ptr [ebp - 4]
        shl    eax, 4
        add    ecx, eax
        fadd    dword ptr [esi - 8]
        fstp    dword ptr [ecx]
        fld    dword ptr [edi + edx + 4]
        fsub    dword ptr [esi - 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [edi + edx + 8]
        fsub    dword ptr [esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x34]
        cmp    dword ptr [edx + 4], 0
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [ecx + 0xc]
        je    L_9a22
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_9a28
L_9a22:
        fld    dword ptr [g_007b220c]
L_9a28:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [ecx + edx*4]
        mov    edx, dword ptr [ebp - 0x68]
        fld    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0xb4]
        fsub    dword ptr [ebx - 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 0xc]
        fstp    dword ptr [edx + eax]
        mov    edx, dword ptr [ebp - 0x68]
        fld    dword ptr [edi + edx + 4]
        mov    edx, dword ptr [ebp - 0xb4]
        fsub    dword ptr [ebx - 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 8]
        fstp    dword ptr [edx + eax + 4]
        mov    edx, dword ptr [ebp - 0x68]
        fld    dword ptr [edi + edx + 8]
        mov    edx, dword ptr [ebp - 0x40]
        fsub    dword ptr [edx + esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0xb4]
        fstp    dword ptr [edx + eax + 8]
        mov    edx, dword ptr [ebp - 0x68]
        fld    dword ptr [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0xb4]
        fsub    dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp - 0x64]
        fstp    dword ptr [edx + eax + 0xc]
        mov    edx, dword ptr [ebp - 0x30]
        fld    dword ptr [edi + ebx]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xb0]
        fstp    dword ptr [edx + eax]
        fld    dword ptr [edi + ebx + 4]
        mov    ebx, dword ptr [ebp - 0x30]
        fsub    dword ptr [ebx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + 4]
        mov    ebx, dword ptr [ebp - 0x64]
        fstp    dword ptr [edx + eax + 4]
        fld    dword ptr [edi + ebx + 8]
        mov    ebx, dword ptr [ebp - 0x10]
        fsub    dword ptr [ebx + esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + esi]
        mov    ebx, dword ptr [ebp - 0x64]
        fstp    dword ptr [edx + eax + 8]
        fld    dword ptr [edi + ebx + 0xc]
        mov    edi, dword ptr [ebp - 0x10]
        fsub    dword ptr [esi + edi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + edi + 4]
        fstp    dword ptr [edx + eax + 0xc]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0x18]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_9ded
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], edx
        xor    eax, eax
L_9b15:
        mov    edi, dword ptr [ebp - 8]
        test    edx, edi
        je    L_9b77
        mov    edi, dword ptr [ebp + eax - 0x5c]
        mov    edx, dword ptr [ebp + 8]
        mov    dl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x2c]
        mov    byte ptr [ebp - 0xd0], dl
        mov    edx, dword ptr [ebp - 0xd0]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x90], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x90]
        mov    edi, dword ptr [ebp - 0x74]
        mov    dword ptr [ebp - 0x28], edx
        fild    dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ebp + eax - 0xa8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x90]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x28]
        mov    bl, byte ptr [ebp - 0x28]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x20]
L_9b77:
        mov    ebx, dword ptr [ebp - 8]
        add    eax, 4
        shl    ebx, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 8], ebx
        jl    L_9b15
        jmp    L_9ded
        fld    dword ptr [edi + edx + 4]
        fld    dword ptr [esi - 4]
        jmp    L_9ba2
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_9ba2:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_9bfb
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_9c08
        fld    dword ptr [edi + edx]
        fld    dword ptr [esi - 8]
        jmp    L_9ba2
        fld    dword ptr [edi + edx + 8]
        fld    dword ptr [esi]
        jmp    L_9ba2
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_9ba2
L_9bdd:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_9bef
        int 3    
L_9bef:
        mov    edx, dword ptr [ebp - 0x6c]
        mov    dword ptr [ebp - 4], 0
        jmp    L_9c08
L_9bfb:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_9c08:
        fld    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0xa0]
        fsub    dword ptr [edi + edx]
        mov    ecx, dword ptr [ebp - 0xb8]
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x74], eax
        fmul    dword ptr [ebp - 4]
        shl    eax, 4
        add    ecx, eax
        fadd    dword ptr [edi + edx]
        lea    edx, [edi + edx + 4]
        fstp    dword ptr [ecx]
        fld    dword ptr [esi - 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x6c]
        lea    edx, [edi + edx + 8]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x6c]
        lea    edx, [edi + edx + 0xc]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x34]
        cmp    dword ptr [edx + 4], 0
        fstp    dword ptr [ecx + 0xc]
        je    L_9c7b
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_9c81
L_9c7b:
        fld    dword ptr [g_007b220c]
L_9c81:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [ecx + edx*4]
        mov    edx, dword ptr [ebp - 0x68]
        fld    dword ptr [ebx - 0xc]
        fsub    dword ptr [edi + edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0xb4]
        fstp    dword ptr [edx + eax]
        mov    edx, dword ptr [ebp - 0x68]
        fld    dword ptr [ebx - 8]
        lea    edx, [edi + edx + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xb4]
        fstp    dword ptr [edx + eax + 4]
        mov    edx, dword ptr [ebp - 0x40]
        fld    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x68]
        fsub    dword ptr [edi + edx + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx + 8]
        mov    edx, dword ptr [ebp - 0xb4]
        fstp    dword ptr [edx + eax + 8]
        mov    edx, dword ptr [ebp - 0x68]
        fld    dword ptr [ebx]
        lea    edx, [edi + edx + 0xc]
        fsub    dword ptr [edx]
        mov    ebx, dword ptr [ebp - 0xb0]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xb4]
        fstp    dword ptr [edx + eax + 0xc]
        mov    edx, dword ptr [ebp - 0x30]
        fld    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x64]
        fsub    dword ptr [edi + edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx]
        fstp    dword ptr [ebx + eax]
        mov    ebx, dword ptr [ebp - 0x30]
        fld    dword ptr [ebx + 4]
        mov    ebx, dword ptr [ebp - 0xb0]
        fsub    dword ptr [edi + edx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx + 4]
        fstp    dword ptr [ebx + eax + 4]
        mov    ebx, dword ptr [ebp - 0x10]
        fld    dword ptr [ebx + esi]
        mov    ebx, dword ptr [ebp - 0xb0]
        fsub    dword ptr [edi + edx + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx + 8]
        lea    edi, [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x10]
        fstp    dword ptr [ebx + eax + 8]
        fld    dword ptr [esi + edx + 4]
        fsub    dword ptr [edi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        fstp    dword ptr [ebx + eax + 0xc]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0x18]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_9ded
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], edx
        xor    eax, eax
L_9d7b:
        mov    edi, dword ptr [ebp - 8]
        test    edx, edi
        je    L_9ddd
        mov    edi, dword ptr [ebp + eax - 0x5c]
        mov    edx, dword ptr [ebp - 0x2c]
        mov    dl, byte ptr [edx + edi]
        mov    ebx, dword ptr [ebp + 8]
        mov    byte ptr [ebp - 0xbc], dl
        mov    edx, dword ptr [ebp - 0xbc]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x90], edx
        xor    edx, edx
        mov    dl, byte ptr [ebx + edi]
        sub    edx, dword ptr [ebp - 0x90]
        mov    edi, dword ptr [ebp - 0x74]
        mov    dword ptr [ebp - 0x28], edx
        fild    dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ebp + eax - 0xa8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x90]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x28]
        mov    bl, byte ptr [ebp - 0x28]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x20]
L_9ddd:
        mov    ebx, dword ptr [ebp - 8]
        add    eax, 4
        shl    ebx, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 8], ebx
        jl    L_9d7b
L_9ded:
        mov    dword ptr [ebp - 0x28], ecx
        mov    dword ptr [ebp + 8], 0
        mov    edi, dword ptr [ebp - 0x28]
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
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp - 0xac]
        mov    edx, dword ptr [ebp - 0x74]
        inc    word ptr [ebp - 0xa0]
        mov    edi, dword ptr [ebp - 0x50]
        mov    ebx, dword ptr [ebp - 0xc0]
        mov    dword ptr [ecx + edx*4], eax
        jmp    L_9e97
L_9e94:
        mov    edi, dword ptr [ebp - 0x50]
L_9e97:
        mov    ecx, dword ptr [ebp - 0xc4]
        mov    edx, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp - 0x14]
        add    ecx, 4
        mov    dword ptr [ebp - 0xc4], ecx
        mov    ecx, dword ptr [ebp - 0x24]
        add    ebx, 0x10
        add    edx, 0x10
        add    esi, 0x10
        cmp    eax, ecx
        mov    dword ptr [ebp + 8], eax
        mov    dword ptr [ebp - 0xc0], ebx
        mov    dword ptr [ebp - 0x30], edx
        jl    L_978b
L_9ecc:
        mov    ecx, dword ptr [g_007da66c]
        mov    ebx, dword ptr [ebp - 0x18]
        lea    eax, [edi + edi*2]
        shl    eax, 4
        mov    edx, dword ptr [eax + ecx]
        add    eax, ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x68], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [ebx + 0x13]
        test    cl, cl
        mov    dword ptr [ebp - 0x6c], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x64], edx
        mov    dword ptr [ebp - 0x60], eax
        jbe    L_9f45
        mov    esi, ecx
        xor    eax, eax
        and    esi, 0xff
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], esi
        lea    edx, [ebp - 0x5c]
L_9f15:
        mov    ebx, dword ptr [ebp - 8]
        test    esi, ebx
        je    L_9f31
        mov    ebx, dword ptr [g_007da66c]
        lea    esi, [edi + edi*2]
        lea    esi, [eax + esi*2]
        mov    esi, dword ptr [ebx + esi*8 + 0x20]
        mov    dword ptr [edx], esi
        mov    esi, dword ptr [ebp - 0x20]
L_9f31:
        mov    ebx, dword ptr [ebp - 8]
        inc    eax
        shl    ebx, 1
        add    edx, 4
        cmp    eax, 2
        mov    dword ptr [ebp - 8], ebx
        jl    L_9f15
        mov    ebx, dword ptr [ebp - 0x18]
L_9f45:
        mov    dx, word ptr [ebp - 0xa0]
        xor    eax, eax
        test    edi, edi
        sete    al
        mov    word ptr [ebp - 0x54], dx
        mov    edi, eax
        mov    eax, dword ptr [g_007da66c]
        lea    edx, [edi + edi*2]
        shl    edx, 4
        add    eax, edx
        test    cl, cl
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0xb8], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xb4], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x50], edi
        mov    dword ptr [ebp - 0xb0], edx
        mov    dword ptr [ebp - 0xac], eax
        jbe    L_9fd5
        xor    eax, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], ecx
        lea    edx, [ebp - 0xa8]
L_9fa8:
        mov    esi, dword ptr [ebp - 8]
        test    ecx, esi
        je    L_9fc4
        mov    esi, dword ptr [g_007da66c]
        lea    ecx, [edi + edi*2]
        lea    ecx, [eax + ecx*2]
        mov    ecx, dword ptr [esi + ecx*8 + 0x20]
        mov    dword ptr [edx], ecx
        mov    ecx, dword ptr [ebp - 0x20]
L_9fc4:
        mov    esi, dword ptr [ebp - 8]
        inc    eax
        shl    esi, 1
        add    edx, 4
        cmp    eax, 2
        mov    dword ptr [ebp - 8], esi
        jl    L_9fa8
L_9fd5:
        mov    esi, dword ptr [ebp - 0x60]
        mov    word ptr [ebp - 0xa0], 0
L_9fe1:
        mov    eax, dword ptr [ebp - 8]
        mov    edx, dword ptr [ebp - 0x44]
        mov    ecx, dword ptr [ebp - 0x34]
        shl    eax, 1
        mov    dword ptr [ebp - 8], eax
        mov    eax, dword ptr [ebp - 0x7c]
        inc    edx
        add    ecx, 8
        dec    eax
        mov    dword ptr [ebp - 0x44], edx
        mov    dword ptr [ebp - 0x34], ecx
        mov    dword ptr [ebp - 0x7c], eax
        jne    L_973a
        mov    edx, dword ptr [ebp - 0x54]
        xor    eax, eax
        and    edx, 0xffff
        jle    L_a049
        mov    ecx, esi
L_a015:
        or    eax, dword ptr [ecx]
        add    ecx, 4
        dec    edx
        jne    L_a015
        test    eax, eax
        je    L_a049
        mov    ecx, dword ptr [ebp - 0x38]
        mov    edx, ecx
        dec    ecx
        test    edx, edx
        mov    dword ptr [ebp - 0x38], ecx
        jne    L_9725
        test    eax, eax
        je    L_a049
        mov    eax, dword ptr [g_007da5e8]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    byte ptr [ecx + edx], 0
        jmp    L_a2f6
L_a049:
        mov    eax, dword ptr [ebp - 0x54]
        and    eax, 0xffff
        mov    dword ptr [ebp + 8], 0
        mov    dword ptr [ebp - 0x24], eax
        jle    L_a299
        mov    eax, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x64]
        lea    edx, [eax*4]
        lea    edi, [eax*8]
        shl    eax, 4
        mov    dword ptr [ebp - 0x50], eax
        mov    eax, dword ptr [ebp - 0x6c]
        mov    esi, ecx
        sub    esi, eax
        mov    dword ptr [ebp - 0x40], edx
        lea    edx, [eax + 8]
        mov    eax, dword ptr [ebp - 0x68]
        sub    eax, ecx
        mov    dword ptr [ebp - 0x44], ecx
        mov    dword ptr [ebp - 0x10], esi
        mov    dword ptr [ebp - 0x28], eax
L_a096:
        mov    eax, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp + 8]
        add    ecx, eax
        mov    eax, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp - 0x7c], ecx
        mov    ecx, dword ptr [g_007da684]
        mov    esi, dword ptr [ecx]
        mov    ecx, dword ptr [edx - 8]
        add    eax, esi
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [edx - 4]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [edx]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [edx + 4]
        mov    dword ptr [eax + 0xc], ecx
        mov    eax, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ebp - 0x44]
        add    eax, ecx
        mov    dword ptr [ebp - 0x38], eax
        fld    dword ptr [g_0076efe4]
        mov    esi, dword ptr [ebp - 0x38]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x98]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x98]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x70], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x98]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x98]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x70]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x70], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x98]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x98]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x70]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x70], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x98]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x98]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x70]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x70], ecx
        mov    eax, dword ptr [g_007da608]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x70]
        mov    esi, dword ptr [ebp - 0x40]
        mov    dword ptr [esi + ecx], eax
        mov    eax, dword ptr [ebp - 0x44]
        mov    esi, dword ptr [eax]
        mov    ecx, dword ptr [g_007da680]
        mov    ecx, dword ptr [ecx]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ecx + edi], esi
        mov    dword ptr [ecx + edi + 4], eax
        mov    eax, dword ptr [ebp - 0x10]
        mov    esi, dword ptr [eax + edx]
        mov    ecx, dword ptr [g_007d9980]
        mov    ecx, dword ptr [ecx]
        mov    eax, dword ptr [eax + edx + 4]
        mov    dword ptr [ecx + edi], esi
        mov    dword ptr [ecx + edi + 4], eax
        mov    ecx, dword ptr [ebp - 0x18]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        jbe    L_a264
        and    eax, 0xff
        lea    esi, [ebp - 0x5c]
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], eax
        mov    ecx, 0x7da660
        mov    dword ptr [ebp - 0x14], esi
L_a22e:
        mov    esi, dword ptr [ebp - 8]
        test    eax, esi
        je    L_a24d
        mov    eax, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [eax]
        mov    ebx, dword ptr [ebp + 8]
        mov    al, byte ptr [eax + ebx]
        mov    esi, dword ptr [ecx]
        mov    esi, dword ptr [esi]
        mov    ebx, dword ptr [ebp - 0x7c]
        mov    byte ptr [esi + ebx], al
        mov    eax, dword ptr [ebp - 0x20]
L_a24d:
        add    dword ptr [ebp - 0x14], 4
        mov    ebx, dword ptr [ebp - 8]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp - 8], ebx
        jl    L_a22e
L_a264:
        mov    ecx, dword ptr [ebp - 0x40]
        mov    esi, dword ptr [ebp - 0x50]
        mov    eax, dword ptr [ebp + 8]
        add    ecx, 4
        mov    dword ptr [ebp - 0x40], ecx
        mov    ecx, 0x10
        add    esi, ecx
        mov    dword ptr [ebp - 0x50], esi
        mov    esi, dword ptr [ebp - 0x44]
        add    esi, ecx
        add    edx, ecx
        mov    ecx, dword ptr [ebp - 0x24]
        inc    eax
        add    edi, 8
        cmp    eax, ecx
        mov    dword ptr [ebp + 8], eax
        mov    dword ptr [ebp - 0x44], esi
        jl    L_a096
L_a299:
        mov    ecx, dword ptr [ebp - 0x54]
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x54]
        mov    dword ptr [ebp - 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x84]
        mov    word ptr [eax + ecx*2], dx
L_a2b5:
        mov    eax, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x84]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0x88]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x88], eax
        mov    eax, dword ptr [g_007da5e8]
        mov    dword ptr [ebp - 0x3c], edx
        mov    edx, dword ptr [ebp - 0x1c]
        mov    dword ptr [ebp - 0x84], ecx
        mov    ecx, dword ptr [eax]
        mov    byte ptr [ecx + edx], 0
L_a2ed:
        mov    eax, dword ptr [ebp - 0x80]
        mov    ebx, dword ptr [ebp - 0x18]
        mov    dword ptr [ebp - 0xc], eax
L_a2f6:
        mov    ecx, dword ptr [ebp - 0xc]
        mov    esi, dword ptr [ebp - 0x1c]
L_a2fc:
        mov    eax, dword ptr [ebp - 0x4c]
        inc    esi
        cmp    esi, eax
        mov    dword ptr [ebp - 0x1c], esi
        jl    L_886c
L_a30b:
        mov    dl, byte ptr [ebp + 0x1c]
        test    dl, dl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_a31a
        mov    eax, dword ptr [ecx + 0x30]
        jmp    L_a327
L_a31a:
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ebp + 0x10]
        shl    eax, 5
        add    eax, esi
L_a327:
        xor    edi, edi
        test    dl, dl
        mov    dword ptr [ebx + 0x44], eax
        mov    word ptr [ebx + 0xa], di
        je    L_a339
        mov    eax, dword ptr [ecx + 0x48]
        jmp    L_a342
L_a339:
        mov    edx, dword ptr [ecx + 0xc]
        mov    eax, dword ptr [ecx + 0x28]
        lea    eax, [eax + edx*2]
L_a342:
        mov    ecx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [ebx + 0x50], eax
        xor    eax, eax
        cmp    ecx, edi
        mov    word ptr [ebx + 0x54], di
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 0x14], edi
        jle    L_a4de
L_a365:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + eax], 0
        jne    L_a37b
        inc    dword ptr [ebp - 0x14]
        jmp    L_a4d2
L_a37b:
        mov    ecx, dword ptr [g_007da5f4]
        mov    dx, word ptr [ebp - 0x14]
        mov    word ptr [ecx + eax*2], dx
        test    byte ptr [ebx + 0x13], 1
        je    L_a3aa
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    dl, byte ptr [edx + eax]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x17], dl
L_a3aa:
        mov    eax, dword ptr [ebx + 0x1c]
        mov    ecx, dword ptr [ebx + 0x98]
        mov    edx, dword ptr [ecx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x28], eax
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xbc], ecx
        mov    ecx, dword ptr [ebx + 0x44]
        mov    dword ptr [ebp - 0x70], edx
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x98], esi
        mov    ecx, dword ptr [ebp - 0xbc]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x98]
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
        mov    eax, dword ptr [ebp - 0x70]
        test    eax, eax
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_a440
        mov    edx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [eax + edx*4]
        jmp    L_a448
L_a440:
        mov    eax, dword ptr [g_007b94a0]
        mov    edx, dword ptr [ebp - 0xc]
L_a448:
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [eax + edx*8]
        mov    dword ptr [esi + 0x18], ecx
        mov    eax, dword ptr [eax + edx*8 + 4]
        mov    dword ptr [esi + 0x1c], eax
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_a49a
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x94]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + eax + 0x18]
        lea    eax, [ecx + eax + 0x18]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x9c]
        shl    ecx, 5
        fadd    dword ptr [ecx + eax + 0x1c]
        lea    eax, [ecx + eax + 0x1c]
        fstp    dword ptr [eax]
L_a49a:
        mov    ecx, dword ptr [ebp - 0x48]
        mov    esi, dword ptr [g_007d997c]
        mov    edi, dword ptr [esi]
        lea    eax, [ecx*8]
        inc    ecx
        mov    dword ptr [ebp - 0x48], ecx
        mov    ecx, dword ptr [ebp - 0x78]
        add    edx, ecx
        mov    ecx, dword ptr [ebx + 0x1c]
        mov    esi, dword ptr [ecx + edx*8]
        mov    edx, dword ptr [ecx + edx*8 + 4]
        mov    ecx, dword ptr [ebp + 8]
        add    eax, edi
        inc    word ptr [ebx + 0xa]
        mov    dword ptr [eax], esi
        mov    dword ptr [eax + 4], edx
        mov    eax, dword ptr [ebp - 0xc]
        xor    edi, edi
L_a4d2:
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], eax
        jl    L_a365
L_a4de:
        mov    eax, dword ptr [ebp - 0x4c]
        xor    edx, edx
        cmp    eax, edi
        mov    dword ptr [ebp - 0x1c], edi
        jle    L_a5da
L_a4ee:
        mov    eax, dword ptr [ebx + 0x60]
        mov    ecx, dword ptr [g_007da5e8]
        movzx    si, byte ptr [eax + edi]
        mov    eax, dword ptr [ecx]
        cmp    byte ptr [eax + edi], 0
        jne    L_a50f
        and    esi, 0xffff
        jmp    L_a5c7
L_a50f:
        and    esi, 0xffff
        mov    eax, 1
        lea    ecx, [esi - 1]
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x24], esi
        jle    L_a5c7
L_a528:
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
        mov    esi, dword ptr [ebp - 0x24]
        inc    eax
        lea    ecx, [esi - 1]
        cmp    eax, ecx
        jl    L_a528
        mov    edi, dword ptr [ebp - 0x1c]
L_a5c7:
        mov    eax, dword ptr [ebp - 0x4c]
        add    edx, esi
        inc    edi
        cmp    edi, eax
        mov    dword ptr [ebp - 0x1c], edi
        jl    L_a4ee
        xor    edi, edi
L_a5da:
        mov    eax, dword ptr [ebp - 0x84]
        cmp    eax, edi
        jle    L_a9e8
        mov    dword ptr [ebp - 0x1c], edi
        mov    dword ptr [ebp - 0xc], edi
L_a5ee:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    ax, word ptr [eax + ecx*2]
        mov    dword ptr [ebp + 8], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x24], eax
        dec    eax
        cmp    eax, 1
        jle    L_a9c5
        mov    edx, dword ptr [ebp - 0x48]
        mov    ebx, dword ptr [ebp - 0x18]
        lea    eax, [edx*8]
        mov    dword ptr [ebp - 0x70], eax
        mov    eax, dword ptr [ebp - 0xc]
        lea    ecx, [eax*8 + 8]
        lea    edx, [eax*4 + 4]
        mov    dword ptr [ebp - 0x3c], ecx
        mov    dword ptr [ebp - 0x14], edx
L_a63d:
        test    byte ptr [ebx + 0x13], 1
        je    L_a69e
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xc]
        mov    cl, byte ptr [ecx + eax]
        mov    esi, dword ptr [ebx + 0x44]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x17], cl
        mov    edx, dword ptr [g_007da660]
        mov    ecx, dword ptr [edx]
        mov    esi, dword ptr [ebp + 8]
        mov    edi, dword ptr [ebx + 0x44]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        add    ecx, esi
        mov    cl, byte ptr [ecx + eax + 1]
        shl    edx, 5
        mov    byte ptr [edx + edi + 0x37], cl
        mov    edx, dword ptr [g_007da660]
        mov    ecx, dword ptr [edx]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        add    ecx, esi
        mov    esi, dword ptr [ebx + 0x44]
        mov    al, byte ptr [ecx + eax]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x57], al
L_a69e:
        mov    ecx, dword ptr [g_007da680]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da608]
        mov    ecx, dword ptr [eax]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0xc8], edx
        mov    edx, dword ptr [g_007da684]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0xcc], ecx
        mov    ecx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0xd0], eax
        lea    eax, [ecx + edx]
        mov    ecx, dword ptr [ebx + 0x44]
        shl    esi, 5
        mov    dword ptr [ebp - 0x98], eax
        inc    eax
        add    esi, ecx
        mov    dword ptr [ebp - 0xbc], eax
        mov    dword ptr [ebp - 0x28], esi
        mov    ecx, dword ptr [ebp - 0xd0]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x28]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0xbc]
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
        mov    eax, dword ptr [ebp - 0x98]
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
        mov    eax, dword ptr [ebp - 0xcc]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [eax + ecx*4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], edx
        mov    edx, dword ptr [ebp - 0x14]
        mov    edi, dword ptr [edx + eax + 4]
        fstp    dword ptr [esi]
        mov    eax, dword ptr [edx + eax]
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x50], eax
        fmul    dword ptr [esi + 4]
        mov    eax, dword ptr [ebp - 0xc8]
        mov    edx, dword ptr [eax + ecx*8]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        fadd    dword ptr [g_007da870]
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi + 0x1c], ecx
        mov    ecx, dword ptr [ebp - 0x3c]
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
        je    L_a8e7
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x94]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x9c]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x94]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x38]
        lea    eax, [edx + eax + 0x38]
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x9c]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x3c]
        lea    eax, [ecx + edx + 0x3c]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x94]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x58]
        lea    eax, [eax + ecx + 0x58]
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x9c]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x5c]
        lea    eax, [edx + eax + 0x5c]
        fstp    dword ptr [eax]
L_a8e7:
        mov    ecx, dword ptr [ebp - 0x48]
        mov    edx, dword ptr [ebp - 0x70]
        mov    edi, dword ptr [ebp - 0xc]
        inc    ecx
        mov    dword ptr [ebp - 0x48], ecx
        mov    ecx, dword ptr [g_007d9980]
        mov    eax, dword ptr [ecx]
        mov    edi, dword ptr [eax + edi*8]
        mov    ecx, dword ptr [g_007d997c]
        mov    ecx, dword ptr [ecx]
        mov    esi, edx
        mov    dword ptr [ecx + esi], edi
        mov    edi, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [eax + edi*8 + 4]
        mov    dword ptr [ecx + esi + 4], edi
        mov    edi, dword ptr [ebp - 0x48]
        add    edx, 8
        inc    edi
        mov    dword ptr [ebp - 0x48], edi
        mov    edi, dword ptr [ebp - 0x3c]
        mov    edi, dword ptr [edi + eax + 8]
        mov    esi, edx
        mov    dword ptr [ecx + esi], edi
        mov    edi, dword ptr [ebp - 0x3c]
        mov    edi, dword ptr [edi + eax + 0xc]
        mov    dword ptr [ecx + esi + 4], edi
        mov    edi, dword ptr [ebp - 0x48]
        add    edx, 8
        mov    esi, edx
        add    edx, 8
        inc    edi
        mov    dword ptr [ebp - 0x70], edx
        mov    edx, dword ptr [ebp - 0x3c]
        mov    dword ptr [ebp - 0x48], edi
        mov    edi, dword ptr [edx + eax]
        mov    eax, dword ptr [edx + eax + 4]
        mov    dword ptr [ecx + esi], edi
        mov    dword ptr [ecx + esi + 4], eax
        mov    si, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        mov    edi, dword ptr [ebp - 0x14]
        add    edi, 4
        add    edx, 8
        mov    dword ptr [ebp - 0x14], edi
        mov    dword ptr [ebp - 0x3c], edx
        mov    word ptr [eax + ecx*2], si
        mov    cx, word ptr [ebx + 0xa]
        mov    esi, dword ptr [ebx + 0x50]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0x54]
        inc    cx
        mov    word ptr [esi + eax*2 + 2], cx
        mov    cx, word ptr [ebx + 0xa]
        mov    esi, dword ptr [ebx + 0x50]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0x54]
        add    cx, 2
        mov    word ptr [esi + eax*2 + 4], cx
        mov    ecx, dword ptr [ebp - 0x24]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        mov    eax, dword ptr [ebp + 8]
        inc    eax
        dec    ecx
        cmp    eax, ecx
        mov    dword ptr [ebp + 8], eax
        jl    L_a63d
L_a9c5:
        mov    esi, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x24]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 0x84]
        add    esi, edx
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], esi
        mov    dword ptr [ebp - 0x1c], eax
        jl    L_a5ee
        mov    ebx, dword ptr [ebp - 0x18]
L_a9e8:
        mov    esi, dword ptr [ebx + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        lea    edi, [esi + ecx]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        mov    al, byte ptr [ebp + 0x1b]
        and    ecx, 3
        test    al, al
        rep movsb
        je    L_aa53
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        and    edx, 0xffff
        jle    L_aa89
        mov    ecx, dword ptr [g_007d997c]
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + esi + 0x1c]
        mov    esi, edx
L_aa30:
        fld    dword ptr [ebp - 0xdc]
        add    eax, 8
        fadd    dword ptr [eax - 8]
        add    ecx, 0x20
        dec    esi
        fstp    dword ptr [ecx - 0x24]
        fld    dword ptr [ebp - 0xd4]
        fadd    dword ptr [eax - 4]
        fstp    dword ptr [ecx - 0x20]
        jne    L_aa30
        jmp    L_aa89
L_aa53:
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        and    edx, 0xffff
        jle    L_aa89
        mov    esi, dword ptr [ebx + 0x44]
        mov    eax, dword ptr [g_007d997c]
        mov    eax, dword ptr [eax]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + esi + 0x1c]
        mov    esi, edx
L_aa76:
        mov    edi, dword ptr [eax]
        mov    dword ptr [ecx - 4], edi
        mov    edi, dword ptr [eax + 4]
        mov    dword ptr [ecx], edi
        add    eax, 8
        add    ecx, 0x20
        dec    esi
        jne    L_aa76
L_aa89:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_aaa9
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
L_aaa9:
        cmp    word ptr [ebx + 0xa], 0
        mov    eax, dword ptr [ebp - 0x88]
        setne    dl
        mov    byte ptr [ebx + 0x10], dl
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_aac3:
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
        call    FUN_004701a0
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        nop    
        // jump-table data @ 0x0046AAF4 (6 relocated pointers)
        __emit 0xE0
        __emit 0x8A
        __emit 0x46
        __emit 0x00
        __emit 0x0F
        __emit 0x8B
        __emit 0x46
        __emit 0x00
        __emit 0x17
        __emit 0x8B
        __emit 0x46
        __emit 0x00
        __emit 0x23
        __emit 0x8B
        __emit 0x46
        __emit 0x00
        __emit 0x29
        __emit 0x8B
        __emit 0x46
        __emit 0x00
        __emit 0x31
        __emit 0x8B
        __emit 0x46
        __emit 0x00
        // jump-table data @ 0x0046AB0C (6 relocated pointers)
        __emit 0x85
        __emit 0x8B
        __emit 0x46
        __emit 0x00
        __emit 0xAD
        __emit 0x8B
        __emit 0x46
        __emit 0x00
        __emit 0xB5
        __emit 0x8B
        __emit 0x46
        __emit 0x00
        __emit 0xC1
        __emit 0x8B
        __emit 0x46
        __emit 0x00
        __emit 0xC7
        __emit 0x8B
        __emit 0x46
        __emit 0x00
        __emit 0xCF
        __emit 0x8B
        __emit 0x46
        __emit 0x00
        // jump-table data @ 0x0046AB24 (6 relocated pointers)
        __emit 0xDC
        __emit 0x98
        __emit 0x46
        __emit 0x00
        __emit 0x2E
        __emit 0x99
        __emit 0x46
        __emit 0x00
        __emit 0x3A
        __emit 0x99
        __emit 0x46
        __emit 0x00
        __emit 0x66
        __emit 0x99
        __emit 0x46
        __emit 0x00
        __emit 0x71
        __emit 0x99
        __emit 0x46
        __emit 0x00
        __emit 0x7C
        __emit 0x99
        __emit 0x46
        __emit 0x00
        // jump-table data @ 0x0046AB3C (14 relocated pointers)
        __emit 0x1B
        __emit 0x99
        __emit 0x46
        __emit 0x00
        __emit 0x8C
        __emit 0x9B
        __emit 0x46
        __emit 0x00
        __emit 0x95
        __emit 0x9B
        __emit 0x46
        __emit 0x00
        __emit 0xBE
        __emit 0x9B
        __emit 0x46
        __emit 0x00
        __emit 0xC6
        __emit 0x9B
        __emit 0x46
        __emit 0x00
        __emit 0xCE
        __emit 0x9B
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
        __emit 0xBB
        __emit 0x88
        __emit 0x00
        __emit 0x00
    }
}
