/*
 * FUN_0043a770 (extent 0x43a770-0x43d0ec) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_0076e4dc;
extern float  g_0076e4e0;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007b9574;
extern int    g_007b982c;
extern int    g_007b9830;
extern int    g_007b9834;
extern int    g_007b9864;
extern int    g_007b9868;
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
extern void __cdecl FUN_004428f0(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0043a770(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1f0
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x90]
        test    eax, eax
        push    edi
        mov    dword ptr [ebp - 8], esi
        je    L_d0bb
        mov    ecx, dword ptr [eax + 4]
        test    ecx, ecx
        je    L_d0bb
        mov    eax, dword ptr [g_007b9574]
        test    eax, eax
        ja    L_d0bb
        mov    eax, dword ptr [esi + 0x58]
        test    eax, eax
        mov    dword ptr [ebp - 0xb8], 0
        jg    L_a7c7
        mov    byte ptr [esi + 0x10], 0
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_a7c7:
        cmp    word ptr [esi + 0x56], 0
        mov    eax, dword ptr [esi + 0x18]
        mov    dword ptr [ebp - 0x18], eax
        jne    L_a7de
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x98]
L_a7de:
        mov    eax, dword ptr [g_007da68c]
        mov    ebx, dword ptr [eax]
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [g_007da600]
        mov    edi, dword ptr [ecx]
        mov    dword ptr [ebp - 0x40], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp + 0x18], ebx
        je    L_a86f
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        mov    dword ptr [ebp - 0x28], 0
        jle    L_a8aa
L_a81a:
        cmp    byte ptr [edi], 0
        je    L_a84c
        mov    edx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp + 0x18]
        push    edx
        push    eax
        push    esi
        mov    byte ptr [edi], 0
        call    FUN_0041cb30
        mov    ecx, dword ptr [g_007da65c]
        mov    ebx, dword ptr [ecx]
        add    ebx, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [ebx], al
        mov    ebx, dword ptr [ebp + 0x18]
L_a84c:
        mov    ecx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp - 0x28]
        add    ecx, 4
        inc    eax
        add    ebx, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x40], ecx
        mov    ecx, dword ptr [ebp - 0x18]
        inc    edi
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp + 0x18], ebx
        jl    L_a81a
        jmp    L_a8aa
L_a86f:
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        jle    L_a8aa
        mov    dword ptr [ebp + 0x14], eax
L_a879:
        cmp    byte ptr [edi], 0
        je    L_a891
        mov    edx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp + 8]
        push    edx
        push    eax
        push    esi
        mov    ecx, ebx
        mov    byte ptr [edi], 0
        call    FUN_0041cb30
L_a891:
        mov    edx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        add    ebx, 0x10
        inc    edi
        dec    eax
        mov    dword ptr [ebp - 0x40], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_a879
L_a8aa:
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x24]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0xc8], 0
        mov    dword ptr [ebp - 4], 0
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0xc0], 0
        mov    dword ptr [ebp - 0xc4], 0
        je    L_a9a0
        test    eax, eax
        jle    L_a9a0
        mov    edx, dword ptr [g_007da848]
        mov    esi, dword ptr [edx + eax*4 + 0x24]
        test    esi, esi
        je    L_a9a0
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_a921
        mov    dword ptr [g_007da864], 1
        jmp    L_a97c
L_a921:
        cmp    eax, 0x80
        jl    L_a934
        mov    dword ptr [g_007da864], 2
        jmp    L_a97c
L_a934:
        cmp    eax, 0x40
        jl    L_a945
        mov    dword ptr [g_007da864], 4
        jmp    L_a97c
L_a945:
        cmp    eax, 0x20
        jl    L_a956
        mov    dword ptr [g_007da864], 8
        jmp    L_a97c
L_a956:
        cmp    eax, 0x10
        jl    L_a967
        mov    dword ptr [g_007da864], 0x10
        jmp    L_a97c
L_a967:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_a97c:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_a9af
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_a9af
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0xc0], edx
        mov    dword ptr [ebp - 0xc4], eax
L_a9a0:
        mov    bl, byte ptr [ebp + 0x1c]
        test    bl, bl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_a9b5
        mov    eax, dword ptr [ecx + 0x38]
        jmp    L_a9c1
L_a9af:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_a9a0
L_a9b5:
        mov    eax, dword ptr [ecx + 4]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ecx + 0x18]
        lea    eax, [eax + edx*8]
L_a9c1:
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ecx + 0x84], eax
        mov    eax, dword ptr [ecx + 0x64]
        and    eax, 0x3fff
        mov    byte ptr [ebp + 0x1b], 0
        mov    dword ptr [ebp - 0xd8], 0
        mov    dword ptr [ebp - 0xdc], 0
        je    L_aa2c
        xor    edi, edi
        cmp    eax, edi
        jle    L_aa2e
        mov    edx, dword ptr [g_007da848]
        mov    eax, dword ptr [edx + eax*4 + 0x24]
        cmp    eax, edi
        je    L_aa2e
        mov    dl, byte ptr [eax + 0x24]
        test    dl, dl
        jne    L_aa26
        mov    eax, dword ptr [eax + 0x28]
        cmp    eax, edi
        je    L_aa26
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x1b], 1
        mov    dword ptr [ebp - 0xd8], edx
        mov    dword ptr [ebp - 0xdc], eax
        jmp    L_aa2e
L_aa26:
        mov    byte ptr [ebp + 0x1b], 0
        jmp    L_aa2e
L_aa2c:
        xor    edi, edi
L_aa2e:
        mov    eax, dword ptr [ecx + 0x18]
        cmp    eax, 0x100
        mov    dword ptr [ebp - 0x58], edi
        mov    dword ptr [ebp - 0x88], eax
        jle    L_aa4b
        mov    dword ptr [ebp - 0x88], 0x100
L_aa4b:
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x40], eax
        cmp    dword ptr [ecx + 0x58], edi
        mov    dword ptr [ebp - 0xb0], edi
        mov    dword ptr [ebp - 0x8c], edi
        mov    dword ptr [ebp - 0x28], edi
        mov    dword ptr [ebp - 0xc], edi
        jle    L_c5ce
L_aa71:
        mov    ecx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x28]
        mov    cl, byte ptr [eax + edx]
        add    eax, edx
        test    cl, cl
        mov    dword ptr [ebp + 8], eax
        je    L_c5ad
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ecx + 0x48]
        mov    ecx, dword ptr [ebp - 0x40]
        xor    eax, eax
        mov    al, byte ptr [esi + edi]
        xor    ebx, ebx
        mov    bl, byte ptr [esi + edi + 1]
        xor    edx, edx
        mov    dl, byte ptr [esi + edi + 2]
        mov    dword ptr [ebp - 0x54], esi
        mov    ecx, dword ptr [ecx + eax*4]
        mov    dword ptr [ebp - 0x24], eax
        mov    eax, dword ptr [ebp - 0x40]
        mov    dword ptr [ebp - 0x38], ebx
        mov    dword ptr [ebp - 0x60], edx
        mov    edx, dword ptr [eax + edx*4]
        mov    eax, dword ptr [eax + ebx*4]
        mov    ebx, eax
        and    ebx, edx
        mov    edi, ecx
        or    eax, edx
        and    ecx, ebx
        or    edi, eax
        test    ecx, ecx
        mov    dword ptr [g_007b9834], ecx
        mov    dword ptr [g_007b9830], edi
        je    L_aae5
        mov    ecx, dword ptr [ebp + 8]
        mov    byte ptr [ecx], 0
        jmp    L_c5ad
L_aae5:
        test    edi, edi
        jne    L_ab18
        mov    eax, dword ptr [ebp - 0xb8]
        mov    edx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ebp - 0x24]
        inc    eax
        mov    dword ptr [ebp - 0xb8], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x38]
        mov    byte ptr [eax + ecx], 1
        mov    ecx, dword ptr [ebp - 0x60]
        mov    byte ptr [eax + edx], 1
        mov    byte ptr [eax + ecx], 1
        jmp    L_c5ad
L_ab18:
        cmp    dword ptr [edi*4 + 0x7b2478], 1
        mov    dword ptr [ebp - 0x20], 0
        jne    L_b6e8
        mov    edx, dword ptr [ebp - 0xc]
        lea    esi, [edx + 3]
        cmp    edx, esi
        mov    ecx, edx
        jge    L_b6cd
        jmp    L_ab42
L_ab3f:
        mov    edx, dword ptr [ebp - 0xc]
L_ab42:
        mov    eax, dword ptr [ebp - 8]
        mov    eax, dword ptr [eax + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0x50], ecx
        mov    edi, ebx
        jl    L_ab59
        mov    ecx, edx
L_ab59:
        mov    esi, dword ptr [ebp - 0x20]
        mov    ebx, dword ptr [ebp - 0x40]
        xor    edx, edx
        mov    dl, byte ptr [eax + ecx]
        and    esi, 0xffff
        mov    eax, edx
        add    esi, dword ptr [ebp - 0xb0]
        mov    edx, dword ptr [ebx + edi*4]
        test    edx, edx
        mov    dword ptr [ebp - 0x34], eax
        mov    dword ptr [ebp - 0x3c], esi
        mov    dword ptr [g_007b982c], edx
        jne    L_ac85
        mov    ecx, dword ptr [g_007da68c]
        mov    ebx, dword ptr [ecx]
        mov    edx, dword ptr [g_007da684]
        mov    eax, edi
        shl    eax, 4
        add    eax, ebx
        mov    ebx, dword ptr [edx]
        mov    edx, dword ptr [eax]
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, ebx
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    ebx, dword ptr [g_007da680]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 8], edx
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [eax + 0x90]
        mov    edx, dword ptr [ecx]
        mov    edx, dword ptr [edx + edi*4]
        mov    ecx, dword ptr [g_007da608]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [ecx + esi*4], edx
        mov    ecx, dword ptr [eax + 0x1c]
        lea    eax, [esi*8]
        mov    edx, eax
        add    edx, dword ptr [ebx]
        mov    ebx, dword ptr [ecx + edi*8]
        mov    dword ptr [edx], ebx
        mov    ebx, dword ptr [ecx + edi*8 + 4]
        mov    dword ptr [edx + 4], ebx
        mov    edx, dword ptr [ebp - 0x88]
        mov    ebx, dword ptr [g_007b9868]
        add    eax, dword ptr [ebx]
        add    edx, edi
        mov    ebx, dword ptr [ecx + edx*8]
        mov    ecx, dword ptr [ecx + edx*8 + 4]
        mov    edx, dword ptr [ebp - 8]
        mov    dword ptr [eax], ebx
        mov    dword ptr [eax + 4], ecx
        xor    eax, eax
        mov    al, byte ptr [edx + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        jbe    L_ac57
        and    eax, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da660
L_ac34:
        test    eax, edx
        je    L_ac4a
        mov    eax, dword ptr [ecx - 4]
        mov    eax, dword ptr [eax]
        mov    ebx, dword ptr [ecx]
        mov    al, byte ptr [eax + edi]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + esi], al
        mov    eax, dword ptr [ebp - 0x10]
L_ac4a:
        add    ecx, 8
        shl    edx, 1
        cmp    ecx, 0x7da670
        jl    L_ac34
L_ac57:
        mov    eax, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0x40]
        inc    eax
        mov    dword ptr [ebp - 0x20], eax
        mov    eax, dword ptr [ebp - 0x34]
        lea    ecx, [eax*4]
        mov    dword ptr [ebp - 0x18], ecx
        mov    ecx, dword ptr [ecx + edx]
        inc    esi
        test    ecx, ecx
        mov    dword ptr [ebp - 0x3c], esi
        je    L_b6bc
        mov    edx, dword ptr [g_007b982c]
        jmp    L_ac9e
L_ac85:
        lea    ecx, [eax*4]
        mov    dword ptr [ebp - 0x18], ecx
        mov    ecx, dword ptr [ecx + ebx]
        test    ecx, ecx
        mov    byte ptr [ebp + 0xb], 0
        jne    L_b6bc
L_ac9e:
        or    edx, ecx
        mov    dword ptr [ebp - 0x5c], 1
        mov    dword ptr [g_007b982c], edx
        xor    ebx, ebx
L_acaf:
        mov    ecx, dword ptr [ebp - 0x5c]
        test    ecx, edx
        jne    L_acc7
        shl    ecx, 1
        inc    ebx
        cmp    bx, 6
        mov    dword ptr [ebp - 0x5c], ecx
        jb    L_acaf
        jmp    L_ae28
L_acc7:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_ad76
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x34]
        mov    ecx, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_ad58
        jmp    dword ptr [ebx*4 + 0x43d0ec]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_ad05:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_ae12
        fstp    st(0)
        mov    dword ptr [ebp - 4], 0
        fstp    st(0)
        jmp    L_ae1f
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_ad05
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_ad05
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_ad05
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_ad05
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_ad05
L_ad58:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_adbe
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_ae1f
L_ad76:
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x34]
        mov    eax, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_adf7
        jmp    dword ptr [ebx*4 + 0x43d104]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_adab:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_ae12
        fstp    st(0)
        fstp    st(0)
L_adbe:
        mov    dword ptr [ebp - 4], 0
        jmp    L_ae1f
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_adab
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_adab
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_adab
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_adab
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_adab
L_adf7:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_adbe
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_ae1f
L_ae12:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
L_ae1f:
        mov    eax, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp - 0xc8], ebx
L_ae28:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_b280
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    ecx, eax
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
        mov    eax, dword ptr [ebp - 0xc8]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_aeab
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_aeb1
L_aeab:
        fld    dword ptr [g_007b220c]
L_aeb1:
        mov    ecx, dword ptr [ebp - 0xc8]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x90]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [eax + ecx]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x178], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x174], edx
        fild    qword ptr [ebp - 0x178]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x180], esi
        fmul    dword ptr [g_0076e4e0]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x17c], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x148]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x180]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x18c], edx
        mov    dword ptr [ebp - 0x190], esi
        fmul    dword ptr [g_0076e4e0]
        mov    dword ptr [ebp - 0x1a0], ecx
        mov    dword ptr [ebp - 0x19c], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x14c]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x190]
        mov    dword ptr [ebp - 0x1b0], ecx
        mov    dword ptr [ebp - 0x1ac], edx
        shr    eax, 8
        fmul    dword ptr [g_0076e4e0]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1c0], ecx
        fstp    dword ptr [ebp - 0x150]
        mov    dword ptr [ebp - 0x1bc], edx
        fild    qword ptr [ebp - 0x1a0]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076e4e0]
        mov    dword ptr [ebp - 0x1d0], ecx
        mov    dword ptr [ebp - 0x1cc], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x144]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x1b0]
        mov    dword ptr [ebp - 0x1e0], eax
        mov    dword ptr [ebp - 0x1dc], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076e4e0]
        push    edx
        lea    eax, [ebp - 0x120]
        lea    ecx, [ebp - 0x150]
        fstp    dword ptr [ebp - 0x118]
        push    eax
        fild    qword ptr [ebp - 0x1c0]
        push    ecx
        mov    dword ptr [ebp - 0xf0], 0xbf800000
        mov    dword ptr [ebp - 0xf4], 0xbf800000
        fmul    dword ptr [g_0076e4e0]
        mov    dword ptr [ebp - 0xf8], 0xbf800000
        mov    dword ptr [ebp - 0xec], 0xbf800000
        lea    ecx, [ebp - 0xf8]
        fstp    dword ptr [ebp - 0x11c]
        fild    qword ptr [ebp - 0x1d0]
        fmul    dword ptr [g_0076e4e0]
        fstp    dword ptr [ebp - 0x120]
        fild    qword ptr [ebp - 0x1e0]
        fmul    dword ptr [g_0076e4e0]
        fstp    dword ptr [ebp - 0x114]
        call    FUN_004286e0
        lea    edx, [ebp - 0xf8]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076e4dc]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x10c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x10c]
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
        fstp    dword ptr [ebp - 0x10c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x10c]
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
        fstp    dword ptr [ebp - 0x10c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x10c]
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
        fstp    dword ptr [ebp - 0x10c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x10c]
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
        mov    eax, dword ptr [ebp - 0xe4]
        mov    ecx, dword ptr [ebp - 0x3c]
        mov    esi, dword ptr [g_007da680]
        mov    ebx, dword ptr [esi]
        mov    esi, dword ptr [ebp - 0x34]
        mov    dword ptr [edx + ecx*4], eax
        mov    edx, dword ptr [ebp - 8]
        mov    eax, dword ptr [edx + 0x1c]
        fld    dword ptr [eax + esi*8]
        shl    ecx, 3
        fsub    dword ptr [eax + edi*8]
        mov    edx, ecx
        add    edx, ebx
        mov    ebx, dword ptr [ebp - 0x88]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + esi*8 + 4]
        add    esi, ebx
        fsub    dword ptr [eax + edi*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8 + 4]
        fstp    dword ptr [edx + 4]
        lea    edx, [eax + esi*8]
        fld    dword ptr [edx]
        lea    esi, [edi + ebx]
        fsub    dword ptr [eax + esi*8]
        lea    eax, [eax + esi*8]
        mov    esi, dword ptr [g_007b9868]
        mov    ebx, dword ptr [esi]
        fmul    dword ptr [ebp - 4]
        add    ecx, ebx
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_b6b9
        mov    ebx, dword ptr [ebp - 0x34]
        and    eax, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da65c
L_b218:
        mov    edx, dword ptr [ebp + 8]
        test    eax, edx
        je    L_b268
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [eax]
        mov    al, byte ptr [edx + edi]
        mov    byte ptr [ebp - 0x110], al
        mov    esi, dword ptr [ebp - 0x110]
        xor    eax, eax
        mov    al, byte ptr [edx + ebx]
        mov    edx, dword ptr [ecx + 4]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x38], esi
        sub    eax, esi
        mov    esi, dword ptr [ebp - 0x3c]
        mov    dword ptr [ebp - 0x24], eax
        fild    dword ptr [ebp - 0x24]
        mov    eax, dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x38]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x24]
        mov    dl, byte ptr [ebp - 0x24]
        mov    byte ptr [eax + esi], dl
        mov    eax, dword ptr [ebp - 0x10]
L_b268:
        mov    esi, dword ptr [ebp + 8]
        add    ecx, 8
        shl    esi, 1
        cmp    ecx, 0x7da66c
        mov    dword ptr [ebp + 8], esi
        jl    L_b218
        jmp    L_b6b9
L_b280:
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
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
        mov    eax, dword ptr [ebp - 0xc8]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_b2f7
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_b2fd
L_b2f7:
        fld    dword ptr [g_007b220c]
L_b2fd:
        mov    ecx, dword ptr [ebp - 0xc8]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x90]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [edx + ecx]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x1f0], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x1ec], edx
        fild    qword ptr [ebp - 0x1f0]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x168], esi
        fmul    dword ptr [g_0076e4e0]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x164], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x138]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x168]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1e4], edx
        mov    dword ptr [ebp - 0x1e8], esi
        fmul    dword ptr [g_0076e4e0]
        mov    dword ptr [ebp - 0x158], ecx
        mov    dword ptr [ebp - 0x154], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x13c]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x1e8]
        mov    dword ptr [ebp - 0x1b8], ecx
        mov    dword ptr [ebp - 0x1b4], edx
        shr    eax, 8
        fmul    dword ptr [g_0076e4e0]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x188], ecx
        fstp    dword ptr [ebp - 0x140]
        mov    dword ptr [ebp - 0x184], edx
        fild    qword ptr [ebp - 0x158]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076e4e0]
        mov    dword ptr [ebp - 0x1d8], ecx
        mov    dword ptr [ebp - 0x1d4], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x134]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x1b8]
        mov    dword ptr [ebp - 0x198], eax
        mov    dword ptr [ebp - 0x194], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076e4e0]
        push    edx
        lea    eax, [ebp - 0x130]
        lea    ecx, [ebp - 0x140]
        fstp    dword ptr [ebp - 0x128]
        push    eax
        fild    qword ptr [ebp - 0x188]
        push    ecx
        mov    dword ptr [ebp - 0x100], 0xbf800000
        mov    dword ptr [ebp - 0x104], 0xbf800000
        fmul    dword ptr [g_0076e4e0]
        mov    dword ptr [ebp - 0x108], 0xbf800000
        mov    dword ptr [ebp - 0xfc], 0xbf800000
        lea    ecx, [ebp - 0x108]
        fstp    dword ptr [ebp - 0x12c]
        fild    qword ptr [ebp - 0x1d8]
        fmul    dword ptr [g_0076e4e0]
        fstp    dword ptr [ebp - 0x130]
        fild    qword ptr [ebp - 0x198]
        fmul    dword ptr [g_0076e4e0]
        fstp    dword ptr [ebp - 0x124]
        call    FUN_004286e0
        lea    edx, [ebp - 0x108]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076e4dc]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xd4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xd4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xe8], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xd4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xd4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe8], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xd4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xd4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe8], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xd4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xd4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe8], ecx
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xe8]
        mov    ecx, dword ptr [ebp - 0x3c]
        mov    esi, dword ptr [g_007da680]
        mov    ebx, dword ptr [esi]
        mov    esi, dword ptr [ebp - 0x34]
        mov    dword ptr [edx + ecx*4], eax
        mov    edx, dword ptr [ebp - 8]
        mov    eax, dword ptr [edx + 0x1c]
        fld    dword ptr [eax + edi*8]
        shl    ecx, 3
        fsub    dword ptr [eax + esi*8]
        mov    edx, ecx
        add    edx, ebx
        mov    ebx, dword ptr [ebp - 0x88]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + esi*8]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + edi*8 + 4]
        fsub    dword ptr [eax + esi*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + esi*8 + 4]
        add    esi, ebx
        fstp    dword ptr [edx + 4]
        lea    edx, [edi + ebx]
        fld    dword ptr [eax + edx*8]
        lea    edx, [eax + edx*8]
        fsub    dword ptr [eax + esi*8]
        lea    eax, [eax + esi*8]
        mov    esi, dword ptr [g_007b9868]
        mov    ebx, dword ptr [esi]
        fmul    dword ptr [ebp - 4]
        add    ecx, ebx
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_b6b9
        and    eax, 0xff
        mov    ebx, 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da65c
L_b65c:
        test    eax, ebx
        je    L_b6ac
        mov    edx, dword ptr [ecx]
        mov    edx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x34]
        mov    al, byte ptr [edx + eax]
        mov    byte ptr [ebp - 0xbc], al
        mov    esi, dword ptr [ebp - 0xbc]
        xor    eax, eax
        mov    al, byte ptr [edx + edi]
        mov    edx, dword ptr [ecx + 4]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x24], esi
        sub    eax, esi
        mov    esi, dword ptr [ebp - 0x3c]
        mov    dword ptr [ebp + 8], eax
        fild    dword ptr [ebp + 8]
        mov    eax, dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x24]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
        mov    byte ptr [eax + esi], dl
        mov    eax, dword ptr [ebp - 0x10]
L_b6ac:
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da66c
        jl    L_b65c
L_b6b9:
        inc    dword ptr [ebp - 0x20]
L_b6bc:
        mov    eax, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x50]
        lea    esi, [eax + 3]
        cmp    ecx, esi
        jl    L_ab3f
L_b6cd:
        mov    ecx, dword ptr [g_007da670]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x8c]
        mov    cx, word ptr [ebp - 0x20]
        mov    word ptr [edx + eax*2], cx
        jmp    L_c56f
L_b6e8:
        mov    eax, dword ptr [g_007da66c]
        mov    edx, dword ptr [eax + 0x30]
        mov    ecx, dword ptr [eax + 0x38]
        mov    ebx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0x80], edx
        mov    edx, dword ptr [eax + 0x40]
        mov    dword ptr [ebp - 0x78], edx
        mov    dl, byte ptr [ebx + 0x13]
        test    dl, dl
        mov    dword ptr [ebp - 0x7c], ecx
        mov    ecx, dword ptr [eax + 0x48]
        mov    dword ptr [ebp - 0x74], ecx
        mov    byte ptr [ebp - 0xe0], dl
        jbe    L_b753
        mov    ebx, edx
        and    ebx, 0xff
        mov    edi, 1
        mov    dword ptr [ebp - 0x10], ebx
        lea    ecx, [ebp - 0x70]
        add    eax, 0x50
        mov    dword ptr [ebp + 8], 2
        jmp    L_b737
L_b734:
        mov    ebx, dword ptr [ebp - 0x10]
L_b737:
        test    ebx, edi
        je    L_b73f
        mov    ebx, dword ptr [eax]
        mov    dword ptr [ecx], ebx
L_b73f:
        mov    ebx, dword ptr [ebp + 8]
        add    eax, 8
        add    ecx, 4
        shl    edi, 1
        dec    ebx
        mov    dword ptr [ebp + 8], ebx
        jne    L_b734
        mov    ebx, dword ptr [ebp - 8]
L_b753:
        mov    eax, dword ptr [ebp - 0xc]
        xor    edi, edi
        lea    ecx, [eax + 3]
        cmp    eax, ecx
        mov    byte ptr [ebp - 0x49], 0
        mov    byte ptr [ebp + 0xb], 0xff
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x50], edi
        jge    L_b93d
        mov    edx, dword ptr [g_007da68c]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebx + 0x90]
        mov    dword ptr [ebp - 0x24], ecx
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebx + 0x1c]
        mov    dword ptr [ebp - 0x38], ecx
        mov    ecx, dword ptr [g_007da688]
        mov    dword ptr [ebp - 0x18], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x60], edx
        mov    edx, dword ptr [ebp - 0x80]
        jmp    L_b7a3
L_b79d:
        mov    edx, dword ptr [ebp - 0x80]
        mov    esi, dword ptr [ebp - 0x54]
L_b7a3:
        mov    ebx, dword ptr [ebp - 0x24]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + eax]
        and    edi, 0xffff
        mov    eax, edi
        shl    eax, 4
        mov    dword ptr [ebp - 0x1c4], 0
        mov    dword ptr [ebp - 0x1a4], 0
        mov    esi, ecx
        shl    ecx, 4
        add    ecx, ebx
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [eax + edx], ebx
        mov    ebx, dword ptr [ecx + 4]
        mov    dword ptr [eax + edx + 4], ebx
        mov    ebx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + edx + 8], ebx
        mov    dword ptr [eax + edx + 0xc], ecx
        mov    edx, dword ptr [ebp - 0x38]
        mov    ecx, dword ptr [edx + esi*4]
        mov    edx, ecx
        and    edx, 0xff
        mov    dword ptr [ebp - 0x1c8], edx
        fild    qword ptr [ebp - 0x1c8]
        mov    edx, dword ptr [ebp - 0x7c]
        shr    ecx, 8
        mov    ebx, ecx
        fmul    dword ptr [g_0076e4e0]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x1a8], ebx
        shr    ecx, 8
        fstp    dword ptr [eax + edx + 8]
        mov    ebx, ecx
        fild    qword ptr [ebp - 0x1a8]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x160], ebx
        xor    ebx, ebx
        fmul    dword ptr [g_0076e4e0]
        mov    dword ptr [ebp - 0x15c], ebx
        shr    ecx, 8
        and    ecx, 0xff
        fstp    dword ptr [eax + edx + 4]
        mov    dword ptr [ebp - 0x16c], ebx
        fild    qword ptr [ebp - 0x160]
        mov    dword ptr [ebp - 0x170], ecx
        mov    ecx, dword ptr [ebp - 0x78]
        fmul    dword ptr [g_0076e4e0]
        fstp    dword ptr [eax + edx]
        fild    qword ptr [ebp - 0x170]
        fmul    dword ptr [g_0076e4e0]
        fstp    dword ptr [eax + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ebx, dword ptr [edx + esi*8]
        mov    dword ptr [ecx + eax], ebx
        mov    ebx, dword ptr [edx + esi*8 + 4]
        mov    dword ptr [ecx + eax + 4], ebx
        mov    ebx, dword ptr [ebp - 0x88]
        add    ebx, esi
        mov    edx, dword ptr [edx + ebx*8]
        mov    dword ptr [ecx + eax + 8], edx
        mov    edx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [edx + ebx*8 + 4]
        mov    dword ptr [ecx + eax + 0xc], edx
        mov    eax, dword ptr [ebp - 0x60]
        mov    edx, dword ptr [ebp - 0x74]
        mov    ecx, dword ptr [eax + esi*4]
        mov    dword ptr [edx + edi*4], ecx
        mov    edx, dword ptr [ebp - 0xe0]
        test    dl, dl
        jbe    L_b921
        mov    eax, edx
        and    eax, 0xff
        mov    dword ptr [ebp - 0x44], 1
        mov    dword ptr [ebp - 0x10], eax
        lea    edx, [ebp - 0x70]
        mov    ecx, 0x7da65c
        jmp    L_b8e2
L_b8df:
        mov    eax, dword ptr [ebp - 0x10]
L_b8e2:
        mov    ebx, dword ptr [ebp - 0x44]
        test    eax, ebx
        je    L_b905
        mov    eax, dword ptr [ecx]
        mov    eax, dword ptr [eax]
        mov    al, byte ptr [eax + esi]
        mov    ebx, dword ptr [edx]
        mov    byte ptr [edi + ebx], al
        cmp    al, byte ptr [ebp + 0xb]
        jae    L_b8fd
        mov    byte ptr [ebp + 0xb], al
L_b8fd:
        cmp    al, byte ptr [ebp - 0x49]
        jbe    L_b905
        mov    byte ptr [ebp - 0x49], al
L_b905:
        mov    ebx, dword ptr [ebp - 0x44]
        add    ecx, 8
        shl    ebx, 1
        add    edx, 4
        cmp    ecx, 0x7da66c
        mov    dword ptr [ebp - 0x44], ebx
        jl    L_b8df
        mov    edx, dword ptr [ebp - 0xe0]
L_b921:
        mov    eax, dword ptr [ebp - 0x14]
        mov    edi, dword ptr [ebp - 0x50]
        mov    ecx, dword ptr [ebp - 0xc]
        inc    eax
        inc    edi
        add    ecx, 3
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x50], edi
        jl    L_b79d
L_b93d:
        mov    eax, dword ptr [g_007da66c]
        mov    esi, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xa8], esi
        mov    esi, dword ptr [eax + 0x10]
        mov    word ptr [ebp - 0x68], di
        mov    edi, dword ptr [eax]
        xor    ecx, ecx
        test    dl, dl
        mov    dword ptr [ebp - 0xa4], esi
        mov    esi, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0xcc], ecx
        mov    dword ptr [ebp - 0xac], edi
        mov    dword ptr [ebp - 0xa0], esi
        jbe    L_b9b7
        and    edx, 0xff
        mov    ebx, 1
        mov    dword ptr [ebp - 0x10], edx
        lea    esi, [ebp - 0x9c]
        add    eax, 0x20
        mov    dword ptr [ebp + 8], 2
        jmp    L_b998
L_b995:
        mov    edx, dword ptr [ebp - 0x10]
L_b998:
        test    edx, ebx
        je    L_b9a6
        mov    edx, dword ptr [eax]
        mov    dword ptr [esi], edx
        mov    edi, dword ptr [ebp - 0xac]
L_b9a6:
        mov    edx, dword ptr [ebp + 8]
        add    eax, 8
        add    esi, 4
        shl    ebx, 1
        dec    edx
        mov    dword ptr [ebp + 8], edx
        jne    L_b995
L_b9b7:
        mov    ebx, dword ptr [ebp - 0x68]
        mov    word ptr [ebp - 0x94], 0
        mov    dword ptr [ebp - 0x5c], 1
        mov    dword ptr [ebp - 0x24], 4
L_b9d1:
        mov    dword ptr [ebp - 0x44], 0
        mov    dword ptr [ebp - 0x3c], 0x7b2404
        mov    dword ptr [ebp - 0x38], 6
L_b9e6:
        mov    eax, dword ptr [ebp - 0x5c]
        test    dword ptr [g_007b9830], eax
        je    L_c2ad
        mov    eax, ebx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x14], 0
        mov    dword ptr [ebp - 0x18], eax
        jle    L_c19c
        mov    ecx, dword ptr [ebp - 0x74]
        mov    eax, dword ptr [ebp - 0x80]
        mov    edx, dword ptr [ebp - 0x78]
        mov    dword ptr [ebp - 0xd0], ecx
        mov    ecx, dword ptr [ebp - 0x7c]
        lea    ebx, [ecx + 0xc]
        sub    ecx, eax
        mov    dword ptr [ebp - 0x90], ecx
        mov    ecx, edx
        sub    ecx, eax
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x60], ebx
        lea    esi, [eax + 8]
        mov    dword ptr [ebp - 0x20], ecx
L_ba39:
        mov    edx, dword ptr [ebp - 0x14]
        lea    eax, [edx + 1]
        mov    edx, dword ptr [ebp - 0x18]
        xor    ecx, ecx
        cmp    eax, edx
        mov    edx, dword ptr [ebp - 0x5c]
        setge    cl
        mov    dword ptr [ebp - 0x50], eax
        dec    ecx
        and    ecx, eax
        mov    eax, dword ptr [ebp - 0xd0]
        mov    eax, dword ptr [eax]
        test    edx, eax
        mov    dword ptr [ebp - 0x34], ecx
        mov    dword ptr [g_007b982c], eax
        jne    L_bba7
        mov    edx, dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x94]
        and    ecx, 0xffff
        mov    eax, ecx
        shl    eax, 4
        mov    dword ptr [eax + edi], edx
        mov    edx, dword ptr [esi - 4]
        mov    dword ptr [eax + edi + 4], edx
        mov    edx, dword ptr [esi]
        mov    dword ptr [eax + edi + 8], edx
        mov    edx, dword ptr [esi + 4]
        mov    dword ptr [eax + edi + 0xc], edx
        mov    edx, dword ptr [ebp - 0xd0]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0xa0]
        mov    dword ptr [edi + ecx*4], edx
        mov    edi, dword ptr [ebx - 0xc]
        mov    edx, dword ptr [ebp - 0xa8]
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [ebx - 8]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [ebp - 0x90]
        mov    edi, dword ptr [edi + esi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [ebx]
        mov    dword ptr [eax + edx + 0xc], edi
        mov    edx, dword ptr [ebp + 8]
        mov    edi, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa4]
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [ebp + 8]
        mov    edi, dword ptr [edi + 4]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [ebp - 0x20]
        mov    edi, dword ptr [edi + esi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [ebp - 0x20]
        mov    edi, dword ptr [edi + esi + 4]
        mov    dword ptr [eax + edx + 0xc], edi
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_bb5c
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp - 0x84], 1
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp - 0x2c], eax
L_bb1f:
        mov    edi, dword ptr [ebp - 0x84]
        test    edx, edi
        je    L_bb43
        mov    edx, dword ptr [ebp + eax - 0x70]
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp + eax - 0x9c]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x2c]
L_bb43:
        mov    edi, dword ptr [ebp - 0x84]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x84], edi
        jl    L_bb1f
L_bb5c:
        mov    eax, dword ptr [ebp - 0x34]
        mov    ecx, dword ptr [ebp - 0x74]
        mov    edx, dword ptr [ebp - 0x5c]
        mov    edi, dword ptr [ecx + eax*4]
        inc    word ptr [ebp - 0x94]
        test    edi, edx
        je    L_c15b
        mov    edi, eax
        mov    eax, dword ptr [ebp - 0x3c]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_bc47
        mov    ecx, dword ptr [ebp - 0x44]
        jmp    dword ptr [ecx*4 + 0x43d11c]
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x80]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        jmp    L_bc03
L_bba7:
        mov    eax, dword ptr [ebp - 0x74]
        test    dword ptr [eax + ecx*4], edx
        jne    L_c161
        mov    edi, dword ptr [ebp - 0x34]
        mov    eax, dword ptr [ebp - 0x3c]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_bea5
        mov    eax, dword ptr [ebp - 0x44]
        jmp    dword ptr [eax*4 + 0x43d134]
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_be61
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 4]
        jmp    L_bc03
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x80]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
L_bc03:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_bc65
        fstp    st(0)
        mov    dword ptr [ebp - 4], 0
        fstp    st(0)
        jmp    L_bc72
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi + edx]
        jmp    L_bc03
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [esi]
        fld    dword ptr [edi + edx + 8]
        jmp    L_bc03
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x80]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        jmp    L_bc03
L_bc47:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_bc59
        int 3    
L_bc59:
        mov    edx, dword ptr [ebp - 0x80]
        mov    dword ptr [ebp - 4], 0
        jmp    L_bc72
L_bc65:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
L_bc72:
        fld    dword ptr [edi + edx]
        mov    eax, dword ptr [ebp - 0x94]
        fsub    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0xac]
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x84], eax
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
        mov    edx, dword ptr [ebp - 0x3c]
        cmp    dword ptr [edx + 4], 0
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [ecx + 0xc]
        je    L_bcde
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_bce4
L_bcde:
        fld    dword ptr [g_007b220c]
L_bce4:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [ecx + edx*4]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fsub    dword ptr [ebx - 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 0xc]
        fstp    dword ptr [eax + edx]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [edi + edx + 4]
        mov    edx, dword ptr [ebp - 0xa8]
        fsub    dword ptr [ebx - 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 8]
        fstp    dword ptr [eax + edx + 4]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [edi + edx + 8]
        mov    edx, dword ptr [ebp - 0x90]
        fsub    dword ptr [edx + esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [eax + edx + 8]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0xa8]
        fsub    dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp - 0x78]
        fstp    dword ptr [eax + edx + 0xc]
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edi + ebx]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa4]
        fstp    dword ptr [eax + edx]
        fld    dword ptr [edi + ebx + 4]
        mov    ebx, dword ptr [ebp + 8]
        fsub    dword ptr [ebx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + 4]
        mov    ebx, dword ptr [ebp - 0x78]
        fstp    dword ptr [eax + edx + 4]
        fld    dword ptr [edi + ebx + 8]
        mov    ebx, dword ptr [ebp - 0x20]
        fsub    dword ptr [ebx + esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + esi]
        mov    ebx, dword ptr [ebp - 0x78]
        fstp    dword ptr [eax + edx + 8]
        fld    dword ptr [edi + ebx + 0xc]
        mov    edi, dword ptr [ebp - 0x20]
        fsub    dword ptr [esi + edi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + edi + 4]
        fstp    dword ptr [eax + edx + 0xc]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_c0ab
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 0x2c], 1
        mov    dword ptr [ebp - 0x10], edx
        xor    eax, eax
L_bdd4:
        mov    edi, dword ptr [ebp - 0x2c]
        test    edx, edi
        je    L_be30
        mov    edi, dword ptr [ebp + eax - 0x70]
        mov    edx, dword ptr [ebp - 0x14]
        mov    dl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x34]
        mov    byte ptr [ebp - 0xb4], dl
        mov    edx, dword ptr [ebp - 0xb4]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x54], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x54]
        mov    edi, dword ptr [ebp - 0x84]
        mov    dword ptr [ebp - 0x1c], edx
        fild    dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp + eax - 0x9c]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x54]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x1c]
        mov    bl, byte ptr [ebp - 0x1c]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x10]
L_be30:
        mov    ebx, dword ptr [ebp - 0x2c]
        add    eax, 4
        shl    ebx, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x2c], ebx
        jl    L_bdd4
        jmp    L_c0ab
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx + 4]
        fld    dword ptr [esi - 4]
        jmp    L_be61
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_be61:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_bec3
        fstp    st(0)
        mov    dword ptr [ebp - 4], 0
        fstp    st(0)
        jmp    L_bed0
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx]
        fld    dword ptr [esi - 8]
        jmp    L_be61
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx + 8]
        fld    dword ptr [esi]
        jmp    L_be61
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_be61
L_bea5:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_beb7
        int 3    
L_beb7:
        mov    edx, dword ptr [ebp - 0x80]
        mov    dword ptr [ebp - 4], 0
        jmp    L_bed0
L_bec3:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
L_bed0:
        fld    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0x94]
        fsub    dword ptr [edi + edx]
        mov    ecx, dword ptr [ebp - 0xac]
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x84], eax
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
        mov    edx, dword ptr [ebp - 0x80]
        lea    edx, [edi + edx + 8]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x80]
        lea    edx, [edi + edx + 0xc]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x3c]
        cmp    dword ptr [edx + 4], 0
        fstp    dword ptr [ecx + 0xc]
        je    L_bf46
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_bf4c
L_bf46:
        fld    dword ptr [g_007b220c]
L_bf4c:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [ecx + edx*4]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [ebx - 0xc]
        fsub    dword ptr [edi + edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [eax + edx]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [ebx - 8]
        lea    edx, [edi + edx + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [eax + edx + 4]
        mov    edx, dword ptr [ebp - 0x90]
        fld    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x7c]
        fsub    dword ptr [edi + edx + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx + 8]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [eax + edx + 8]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [ebx]
        lea    edx, [edi + edx + 0xc]
        fsub    dword ptr [edx]
        mov    ebx, dword ptr [ebp - 0xa4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [eax + edx + 0xc]
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x78]
        fsub    dword ptr [edi + edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx]
        fstp    dword ptr [eax + ebx]
        mov    ebx, dword ptr [ebp + 8]
        fld    dword ptr [ebx + 4]
        mov    ebx, dword ptr [ebp - 0xa4]
        fsub    dword ptr [edi + edx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx + 4]
        fstp    dword ptr [eax + ebx + 4]
        mov    ebx, dword ptr [ebp - 0x20]
        fld    dword ptr [ebx + esi]
        mov    ebx, dword ptr [ebp - 0xa4]
        fsub    dword ptr [edi + edx + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx + 8]
        lea    edi, [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x20]
        fstp    dword ptr [eax + ebx + 8]
        fld    dword ptr [esi + edx + 4]
        fsub    dword ptr [edi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        fstp    dword ptr [eax + ebx + 0xc]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_c0ab
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 0x2c], 1
        mov    dword ptr [ebp - 0x10], edx
        xor    eax, eax
L_c045:
        mov    edi, dword ptr [ebp - 0x2c]
        test    edx, edi
        je    L_c09b
        mov    edi, dword ptr [ebp + eax - 0x70]
        mov    edx, dword ptr [ebp - 0x34]
        mov    dl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x14]
        mov    byte ptr [ebp - 0x64], dl
        mov    edx, dword ptr [ebp - 0x64]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x54], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x54]
        mov    edi, dword ptr [ebp - 0x84]
        mov    dword ptr [ebp - 0x1c], edx
        fild    dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp + eax - 0x9c]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x54]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x1c]
        mov    bl, byte ptr [ebp - 0x1c]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x10]
L_c09b:
        mov    ebx, dword ptr [ebp - 0x2c]
        add    eax, 4
        shl    ebx, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x2c], ebx
        jl    L_c045
L_c0ab:
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0x54], 0
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
        mov    dword ptr [ebp - 0x54], edx
        mov    ecx, dword ptr [ebp - 0xa0]
        mov    eax, dword ptr [ebp - 0x54]
        mov    edx, dword ptr [ebp - 0x84]
        inc    word ptr [ebp - 0x94]
        mov    ebx, dword ptr [ebp - 0x60]
        mov    edi, dword ptr [ebp - 0xac]
        mov    dword ptr [ecx + edx*4], eax
        mov    ecx, dword ptr [ebp - 0xcc]
        jmp    L_c167
L_c15b:
        mov    edi, dword ptr [ebp - 0xac]
L_c161:
        mov    ecx, dword ptr [ebp - 0xcc]
L_c167:
        mov    eax, dword ptr [ebp - 0x50]
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x14], eax
        mov    eax, dword ptr [ebp - 0xd0]
        add    eax, 4
        add    edx, 0x10
        mov    dword ptr [ebp - 0xd0], eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp + 8], edx
        mov    edx, dword ptr [ebp - 0x18]
        add    ebx, 0x10
        add    esi, 0x10
        cmp    eax, edx
        mov    dword ptr [ebp - 0x60], ebx
        jl    L_ba39
L_c19c:
        mov    edx, dword ptr [g_007da66c]
        lea    eax, [ecx + ecx*2]
        shl    eax, 4
        add    eax, edx
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0x80], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x7c], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x78], edx
        xor    edx, edx
        mov    edx, dword ptr [ebp - 8]
        mov    dl, byte ptr [edx + 0x13]
        test    dl, dl
        mov    dword ptr [ebp - 0x74], eax
        jbe    L_c211
        mov    edi, edx
        xor    eax, eax
        and    edi, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x10], edi
        lea    esi, [ebp - 0x70]
L_c1e4:
        mov    ebx, dword ptr [ebp + 8]
        test    edi, ebx
        je    L_c200
        mov    ebx, dword ptr [g_007da66c]
        lea    edi, [ecx + ecx*2]
        lea    edi, [eax + edi*2]
        mov    edi, dword ptr [ebx + edi*8 + 0x20]
        mov    dword ptr [esi], edi
        mov    edi, dword ptr [ebp - 0x10]
L_c200:
        mov    ebx, dword ptr [ebp + 8]
        inc    eax
        shl    ebx, 1
        add    esi, 4
        cmp    eax, 2
        mov    dword ptr [ebp + 8], ebx
        jl    L_c1e4
L_c211:
        mov    ax, word ptr [ebp - 0x94]
        mov    esi, dword ptr [g_007da66c]
        mov    word ptr [ebp - 0x68], ax
        xor    eax, eax
        test    ecx, ecx
        sete    al
        mov    ecx, eax
        lea    eax, [ecx + ecx*2]
        shl    eax, 4
        mov    edi, dword ptr [eax + esi]
        add    eax, esi
        test    dl, dl
        mov    esi, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xa8], esi
        mov    esi, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0xcc], ecx
        mov    dword ptr [ebp - 0xac], edi
        mov    dword ptr [ebp - 0xa4], esi
        mov    dword ptr [ebp - 0xa0], eax
        jbe    L_c2a1
        xor    eax, eax
        and    edx, 0xff
        mov    ebx, 1
        mov    dword ptr [ebp - 0x10], edx
        lea    esi, [ebp - 0x9c]
L_c277:
        test    edx, ebx
        je    L_c296
        mov    edi, dword ptr [g_007da66c]
        lea    edx, [ecx + ecx*2]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [edi + edx*8 + 0x20]
        mov    dword ptr [esi], edx
        mov    edi, dword ptr [ebp - 0xac]
        mov    edx, dword ptr [ebp - 0x10]
L_c296:
        inc    eax
        add    esi, 4
        shl    ebx, 1
        cmp    eax, 2
        jl    L_c277
L_c2a1:
        mov    ebx, dword ptr [ebp - 0x68]
        mov    word ptr [ebp - 0x94], 0
L_c2ad:
        mov    eax, dword ptr [ebp - 0x5c]
        mov    esi, dword ptr [ebp - 0x44]
        mov    edx, dword ptr [ebp - 0x3c]
        shl    eax, 1
        mov    dword ptr [ebp - 0x5c], eax
        mov    eax, dword ptr [ebp - 0x38]
        inc    esi
        add    edx, 8
        dec    eax
        mov    dword ptr [ebp - 0x44], esi
        mov    dword ptr [ebp - 0x3c], edx
        mov    dword ptr [ebp - 0x38], eax
        jne    L_b9e6
        mov    esi, ebx
        xor    eax, eax
        and    esi, 0xffff
        jle    L_c2e9
        mov    edx, dword ptr [ebp - 0x74]
L_c2e1:
        or    eax, dword ptr [edx]
        add    edx, 4
        dec    esi
        jne    L_c2e1
L_c2e9:
        test    eax, eax
        mov    dword ptr [g_007b9830], eax
        je    L_c30b
        mov    edx, dword ptr [ebp - 0x24]
        mov    esi, edx
        dec    edx
        test    esi, esi
        mov    dword ptr [ebp - 0x24], edx
        jne    L_b9d1
        test    eax, eax
        jne    L_c59f
L_c30b:
        mov    eax, ebx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x14], 0
        mov    dword ptr [ebp - 0x18], eax
        jle    L_c553
        mov    eax, dword ptr [ebp - 0xb0]
        mov    ecx, dword ptr [ebp - 0x78]
        lea    esi, [eax*4]
        lea    edx, [eax*8]
        shl    eax, 4
        mov    dword ptr [ebp - 0x44], eax
        mov    eax, dword ptr [ebp - 0x80]
        mov    dword ptr [ebp - 0x2c], esi
        mov    esi, ecx
        sub    esi, eax
        lea    edi, [eax + 8]
        mov    eax, dword ptr [ebp - 0x7c]
        sub    eax, ecx
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x20], esi
        mov    dword ptr [ebp - 0x1c], eax
L_c35a:
        mov    ecx, dword ptr [ebp - 0xb0]
        mov    eax, dword ptr [ebp - 0x14]
        mov    esi, dword ptr [ebp - 0x44]
        add    eax, ecx
        mov    ecx, dword ptr [edi - 8]
        mov    dword ptr [ebp - 0x38], eax
        mov    eax, dword ptr [g_007da684]
        mov    eax, dword ptr [eax]
        add    eax, esi
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [edi - 4]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [edi]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [edi + 4]
        mov    dword ptr [eax + 0xc], ecx
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp + 8]
        add    eax, ecx
        mov    dword ptr [ebp - 0x24], eax
        fld    dword ptr [g_0076e4dc]
        mov    esi, dword ptr [ebp - 0x24]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x48]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x48]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x30], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x48]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x48]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x30]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x30], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x48]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x48]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x30]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x30], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x48]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x48]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x30]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x30], ecx
        mov    eax, dword ptr [g_007da608]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x30]
        mov    esi, dword ptr [ebp - 0x2c]
        mov    dword ptr [ecx + esi], eax
        mov    eax, dword ptr [ebp + 8]
        mov    esi, dword ptr [eax]
        mov    ecx, dword ptr [g_007da680]
        mov    ecx, dword ptr [ecx]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ecx + edx], esi
        mov    dword ptr [ecx + edx + 4], eax
        mov    eax, dword ptr [ebp - 0x20]
        mov    esi, dword ptr [eax + edi]
        mov    ecx, dword ptr [g_007b9868]
        mov    ecx, dword ptr [ecx]
        mov    eax, dword ptr [eax + edi + 4]
        mov    dword ptr [ecx + edx], esi
        mov    dword ptr [ecx + edx + 4], eax
        mov    ecx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        jbe    L_c51e
        and    eax, 0xff
        lea    esi, [ebp - 0x70]
        mov    dword ptr [ebp - 0x90], 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da660
        mov    dword ptr [ebp - 0x50], esi
L_c4df:
        mov    esi, dword ptr [ebp - 0x90]
        test    eax, esi
        je    L_c501
        mov    eax, dword ptr [ebp - 0x50]
        mov    eax, dword ptr [eax]
        mov    ebx, dword ptr [ebp - 0x14]
        mov    al, byte ptr [eax + ebx]
        mov    esi, dword ptr [ecx]
        mov    esi, dword ptr [esi]
        mov    ebx, dword ptr [ebp - 0x38]
        mov    byte ptr [esi + ebx], al
        mov    eax, dword ptr [ebp - 0x10]
L_c501:
        add    dword ptr [ebp - 0x50], 4
        mov    ebx, dword ptr [ebp - 0x90]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp - 0x90], ebx
        jl    L_c4df
L_c51e:
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    esi, dword ptr [ebp - 0x44]
        mov    eax, dword ptr [ebp - 0x14]
        add    ecx, 4
        mov    dword ptr [ebp - 0x2c], ecx
        mov    ecx, 0x10
        add    esi, ecx
        mov    dword ptr [ebp - 0x44], esi
        mov    esi, dword ptr [ebp + 8]
        add    esi, ecx
        add    edi, ecx
        mov    ecx, dword ptr [ebp - 0x18]
        inc    eax
        add    edx, 8
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp + 8], esi
        jl    L_c35a
L_c553:
        mov    ecx, dword ptr [ebp - 0x68]
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x68]
        mov    dword ptr [ebp - 0x20], ecx
        mov    ecx, dword ptr [ebp - 0x8c]
        mov    word ptr [eax + ecx*2], dx
L_c56f:
        mov    eax, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0xb0]
        mov    ecx, dword ptr [ebp - 0x8c]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0xb8]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0xb0], edx
        mov    dword ptr [ebp - 0x8c], ecx
        mov    dword ptr [ebp - 0xb8], eax
L_c59f:
        mov    eax, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x28]
        mov    byte ptr [ecx + edx], 0
L_c5ad:
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x58]
        add    edi, 3
        inc    eax
        cmp    eax, edx
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp - 0x28], eax
        jl    L_aa71
        mov    bl, byte ptr [ebp + 0x1c]
L_c5ce:
        test    bl, bl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_c5da
        mov    eax, dword ptr [ecx + 0x30]
        jmp    L_c5e4
L_c5da:
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [ecx + 0x10]
        shl    eax, 5
        add    eax, edx
L_c5e4:
        mov    edx, dword ptr [ebp - 8]
        xor    esi, esi
        test    bl, bl
        mov    dword ptr [edx + 0x44], eax
        mov    word ptr [edx + 0xa], si
        je    L_c5f9
        mov    ecx, dword ptr [ecx + 0x48]
        jmp    L_c602
L_c5f9:
        mov    edx, dword ptr [ecx + 0xc]
        mov    eax, dword ptr [ecx + 0x28]
        lea    ecx, [eax + edx*2]
L_c602:
        mov    eax, dword ptr [ebp - 8]
        mov    dword ptr [eax + 0x50], ecx
        mov    word ptr [eax + 0x54], si
        mov    ecx, dword ptr [eax + 0x18]
        xor    ebx, ebx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0x14], ecx
        mov    dword ptr [ebp - 0xc], ebx
        mov    dword ptr [ebp + 8], esi
        jle    L_c8ad
L_c622:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + ebx], 0
        jne    L_c638
        inc    dword ptr [ebp + 8]
        jmp    L_c8a1
L_c638:
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, ebx
        sub    ecx, edx
        mov    edx, dword ptr [g_007da5f4]
        mov    word ptr [edx + ebx*2], cx
        test    byte ptr [g_007da86c], 2
        jle    L_c75a
        mov    ecx, dword ptr [eax + 0x28]
        test    ch, 0x3c
        je    L_c75a
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x90]
        mov    edx, dword ptr [edx]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    dword ptr [ebp - 0x30], edx
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    dword ptr [ebp - 0x18], eax
        mov    dword ptr [ebp - 0x64], edx
        mov    edx, dword ptr [ebp - 0x88]
        lea    eax, [eax + edx*8]
        mov    dword ptr [ebp - 0x1c], eax
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ecx + 0x84]
        lea    esi, [eax + edx*8]
        mov    dword ptr [ebp - 0x48], esi
        mov    ecx, dword ptr [ebp - 0x64]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x48]
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
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_c6ff
        mov    ecx, eax
        mov    eax, dword ptr [ecx + ebx*4]
        jmp    L_c704
L_c6ff:
        mov    eax, dword ptr [g_007b94a0]
L_c704:
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x18], edx
        mov    eax, dword ptr [eax + ebx*8 + 4]
        mov    dword ptr [esi + 0x1c], eax
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x20], ecx
        mov    edx, dword ptr [eax + ebx*8 + 4]
        mov    eax, dword ptr [ebp - 8]
        test    byte ptr [eax + 0x13], 1
        mov    dword ptr [esi + 0x24], edx
        je    L_c850
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 8]
        mov    dl, byte ptr [edx + ebx]
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        mov    ecx, dword ptr [ecx + 0x84]
        lea    eax, [eax + eax*4]
        mov    byte ptr [ecx + eax*8 + 0x17], dl
        jmp    L_c850
L_c75a:
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [eax + 0x90]
        xor    esi, esi
        mov    si, word ptr [eax + 0xa]
        mov    dword ptr [ebp - 0x1c], ecx
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [g_007da68c]
        mov    dword ptr [ebp - 0x30], ecx
        mov    ecx, dword ptr [edx]
        mov    dword ptr [ebp - 0x64], ecx
        mov    ecx, dword ptr [eax + 0x44]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x48], esi
        mov    ecx, dword ptr [ebp - 0x64]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x48]
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
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_c7e7
        mov    edx, eax
        mov    eax, dword ptr [edx + ebx*4]
        jmp    L_c7ec
L_c7e7:
        mov    eax, dword ptr [g_007b94a0]
L_c7ec:
        mov    edi, dword ptr [g_007b9864]
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x18], ecx
        mov    edx, dword ptr [eax + ebx*8 + 4]
        mov    ecx, dword ptr [ebp - 0x58]
        lea    eax, [ecx*8]
        add    eax, dword ptr [edi]
        inc    ecx
        mov    dword ptr [esi + 0x1c], edx
        mov    dword ptr [ebp - 0x58], ecx
        mov    ecx, dword ptr [ebp - 0x88]
        lea    edx, [ebx + ecx]
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ecx + 0x1c]
        mov    edi, dword ptr [esi + edx*8]
        mov    edx, dword ptr [esi + edx*8 + 4]
        mov    dword ptr [eax], edi
        mov    dword ptr [eax + 4], edx
        test    byte ptr [ecx + 0x13], 1
        je    L_c850
        mov    eax, dword ptr [g_007da65c]
        mov    edx, dword ptr [eax]
        mov    dl, byte ptr [edx + ebx]
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        mov    ecx, dword ptr [ecx + 0x44]
        shl    eax, 5
        mov    byte ptr [eax + ecx + 0x17], dl
L_c850:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_c894
        mov    eax, dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0xc0]
        mov    edx, dword ptr [eax + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    ecx, [ecx + edx + 0x18]
        fstp    dword ptr [ecx]
        mov    edx, dword ptr [eax + 0x44]
        fld    dword ptr [ebp - 0xc4]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x1c]
        lea    ecx, [ecx + edx + 0x1c]
        fstp    dword ptr [ecx]
        jmp    L_c897
L_c894:
        mov    eax, dword ptr [ebp - 8]
L_c897:
        inc    word ptr [eax + 0xa]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 8]
L_c8a1:
        inc    ebx
        cmp    ebx, ecx
        mov    dword ptr [ebp - 0xc], ebx
        jl    L_c622
L_c8ad:
        mov    esi, dword ptr [eax + 0x58]
        xor    edx, edx
        xor    ecx, ecx
        test    esi, esi
        mov    dword ptr [ebp - 0x28], edx
        jle    L_c948
L_c8bf:
        mov    esi, dword ptr [g_007d98fc]
        mov    esi, dword ptr [esi]
        cmp    byte ptr [esi + edx], 0
        je    L_c936
        mov    edx, dword ptr [eax + 0x48]
        mov    edi, dword ptr [g_007da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + edx]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        xor    ebx, ebx
        mov    word ptr [esi + edx*2], di
        mov    edx, dword ptr [eax + 0x48]
        mov    bl, byte ptr [ecx + edx + 2]
        mov    edi, dword ptr [g_007da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        xor    ebx, ebx
        mov    word ptr [esi + edx*2 + 2], di
        mov    edx, dword ptr [eax + 0x48]
        mov    bl, byte ptr [ecx + edx + 1]
        mov    edi, dword ptr [g_007da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        mov    word ptr [esi + edx*2 + 4], di
        add    word ptr [eax + 0x54], 3
        mov    edx, dword ptr [ebp - 0x28]
L_c936:
        mov    esi, dword ptr [eax + 0x58]
        add    ecx, 3
        inc    edx
        cmp    edx, esi
        mov    dword ptr [ebp - 0x28], edx
        jl    L_c8bf
L_c948:
        mov    eax, dword ptr [ebp - 0x8c]
        test    eax, eax
        jle    L_cfaf
        mov    ecx, dword ptr [ebp - 0x8c]
        xor    eax, eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp - 0xc], eax
        jle    L_cfaf
L_c96c:
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x28]
        mov    ax, word ptr [ecx + edx*2]
        mov    dword ptr [ebp - 0x14], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x60], eax
        dec    eax
        cmp    eax, 1
        jle    L_cf8f
        mov    eax, dword ptr [ebp - 0x58]
        mov    ebx, dword ptr [ebp - 8]
        lea    ecx, [eax*8]
        mov    eax, dword ptr [ebp - 0xc]
        lea    edx, [eax*8 + 8]
        lea    eax, [eax*4 + 4]
        mov    dword ptr [ebp - 0x38], ecx
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x18], eax
L_c9ba:
        test    byte ptr [g_007da86c], 2
        jle    L_cc15
        mov    eax, dword ptr [ebx + 0x28]
        test    ah, 0x3c
        je    L_cc15
        mov    ecx, dword ptr [g_007b9868]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xd4], edx
        mov    edx, dword ptr [g_007da608]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0xbc], ecx
        mov    ecx, dword ptr [g_007da684]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 0xb4], eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x1c], edx
        lea    edx, [ecx + eax]
        lea    eax, [eax + ecx + 1]
        mov    dword ptr [ebp - 0x30], eax
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x48], edx
        mov    edx, dword ptr [ebx + 0x84]
        lea    ecx, [eax + eax*4]
        lea    esi, [edx + ecx*8]
        mov    dword ptr [ebp - 0x64], esi
        mov    ecx, dword ptr [ebp - 0x1c]
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
        mov    eax, dword ptr [ebp - 0x30]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 8]
        fstp    st(0)
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
        mov    eax, dword ptr [ebp - 0x48]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 0x30]
        fstp    st(0)
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
        fstp    st(0)
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov    edx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0xb4]
        mov    ecx, dword ptr [eax + edx*4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x30]
        mov    edi, dword ptr [eax + ecx*4]
        fstp    dword ptr [esi]
        mov    dword ptr [esi + 0x38], edi
        fld    dword ptr [g_007da878]
        mov    edi, dword ptr [ebp - 0x18]
        fmul    dword ptr [esi + 4]
        mov    eax, dword ptr [edi + eax]
        mov    dword ptr [esi + 0x60], eax
        mov    eax, dword ptr [ebp - 0xbc]
        fadd    dword ptr [g_007da870]
        mov    edi, dword ptr [eax + edx*8]
        mov    dword ptr [esi + 0x18], edi
        lea    edi, [edx*8 + 4]
        fstp    dword ptr [esi + 4]
        mov    dword ptr [ebp - 0x48], edi
        fld    dword ptr [g_007da87c]
        mov    edi, dword ptr [eax + edi]
        fmul    dword ptr [esi + 0x28]
        mov    dword ptr [esi + 0x1c], edi
        mov    edi, dword ptr [eax + ecx*8]
        mov    dword ptr [esi + 0x40], edi
        fadd    dword ptr [g_007da874]
        mov    edi, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x44], edi
        mov    edi, dword ptr [ebp + 8]
        mov    edi, dword ptr [edi + eax]
        fstp    dword ptr [esi + 0x28]
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x68], edi
        fmul    dword ptr [esi + 0x2c]
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi + eax + 4]
        mov    dword ptr [esi + 0x6c], eax
        fadd    dword ptr [g_007da870]
        mov    eax, dword ptr [ebp - 0xd4]
        mov    edx, dword ptr [eax + edx*8]
        mov    dword ptr [esi + 0x20], edx
        mov    edx, dword ptr [ebp - 0x48]
        fstp    dword ptr [esi + 0x2c]
        fld    dword ptr [g_007da87c]
        mov    edx, dword ptr [eax + edx]
        fmul    dword ptr [esi + 0x50]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x50]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x54]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x54]
        mov    dword ptr [esi + 0x24], edx
        mov    edx, dword ptr [eax + ecx*8]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x48], edx
        mov    edx, dword ptr [edi + eax]
        mov    eax, dword ptr [edi + eax + 4]
        mov    dword ptr [esi + 0x74], eax
        test    byte ptr [ebx + 0x13], 1
        mov    dword ptr [esi + 0x4c], ecx
        mov    dword ptr [esi + 0x70], edx
        je    L_ce6d
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
        mov    esi, dword ptr [ebp - 0x14]
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
        jmp    L_ce6d
L_cc15:
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da608]
        mov    eax, dword ptr [edx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0xbc], ecx
        mov    ecx, dword ptr [g_007da684]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 0xb4], eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x1c], edx
        lea    edx, [ecx + eax]
        mov    dword ptr [ebp - 0x48], edx
        mov    edx, dword ptr [ebx + 0x44]
        shl    esi, 5
        lea    eax, [eax + ecx + 1]
        add    esi, edx
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp - 0x30], eax
        mov    dword ptr [ebp - 0x64], esi
        mov    ecx, dword ptr [ebp - 0x1c]
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
        mov    eax, dword ptr [ebp - 0x30]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 8]
        fstp    st(0)
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
        mov    eax, dword ptr [ebp - 0x48]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 0x28]
        fstp    st(0)
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
        fstp    st(0)
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov    eax, dword ptr [ebp - 0xb4]
        mov    edi, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [eax + edi*4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x30]
        mov    edx, dword ptr [eax + ecx*4]
        fstp    dword ptr [esi]
        mov    dword ptr [esi + 0x30], edx
        fld    dword ptr [g_007da878]
        mov    edx, dword ptr [ebp - 0x18]
        fmul    dword ptr [esi + 4]
        mov    eax, dword ptr [edx + eax]
        mov    dword ptr [esi + 0x50], eax
        mov    eax, dword ptr [ebp - 0xbc]
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [eax + edi*8]
        mov    dword ptr [esi + 0x18], edx
        mov    edx, dword ptr [eax + edi*8 + 4]
        fstp    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x1c], edx
        fld    dword ptr [g_007da87c]
        mov    edx, dword ptr [eax + ecx*8]
        fmul    dword ptr [esi + 0x20]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x3c], ecx
        mov    ecx, dword ptr [ebp + 8]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x38], edx
        mov    edx, dword ptr [ecx + eax]
        mov    eax, dword ptr [ecx + eax + 4]
        fstp    dword ptr [esi + 0x20]
        mov    ecx, dword ptr [ebp - 0x58]
        fld    dword ptr [g_007da878]
        inc    ecx
        fmul    dword ptr [esi + 0x24]
        mov    dword ptr [ebp - 0x58], ecx
        mov    ecx, dword ptr [g_007b9868]
        mov    dword ptr [esi + 0x58], edx
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [ebp - 0x38]
        mov    dword ptr [esi + 0x5c], eax
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [g_007b9864]
        fstp    dword ptr [esi + 0x24]
        fld    dword ptr [g_007da87c]
        mov    ecx, dword ptr [ecx]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x40]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x44]
        mov    esi, edx
        add    edx, 8
        mov    edi, dword ptr [eax + edi*8]
        mov    dword ptr [esi + ecx], edi
        mov    edi, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [eax + edi*8 + 4]
        mov    dword ptr [esi + ecx + 4], edi
        inc    dword ptr [ebp - 0x58]
        mov    edi, dword ptr [ebp - 0x24]
        mov    edi, dword ptr [eax + edi*8]
        mov    esi, edx
        mov    dword ptr [esi + ecx], edi
        mov    edi, dword ptr [ebp - 0x24]
        mov    edi, dword ptr [eax + edi*8 + 4]
        add    edx, 8
        mov    dword ptr [esi + ecx + 4], edi
        mov    edi, dword ptr [ebp - 0x58]
        mov    esi, edx
        add    edx, 8
        inc    edi
        mov    dword ptr [ebp - 0x38], edx
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x58], edi
        mov    edi, dword ptr [eax + edx]
        mov    edx, dword ptr [eax + edx + 4]
        test    byte ptr [ebx + 0x13], 1
        mov    dword ptr [esi + ecx], edi
        mov    dword ptr [esi + ecx + 4], edx
        je    L_ce6d
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
        mov    esi, dword ptr [ebp - 0x14]
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
L_ce6d:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_cf20
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xc0]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xc4]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xc0]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x38]
        lea    eax, [edx + eax + 0x38]
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xc4]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x3c]
        lea    eax, [ecx + edx + 0x3c]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xc0]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x58]
        lea    eax, [eax + ecx + 0x58]
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xc4]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x5c]
        lea    eax, [edx + eax + 0x5c]
        fstp    dword ptr [eax]
L_cf20:
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        mov    edi, dword ptr [ebp - 0x18]
        mov    esi, dword ptr [ebp + 8]
        add    edi, 4
        add    esi, 8
        mov    dword ptr [ebp - 0x18], edi
        mov    dword ptr [ebp + 8], esi
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
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [ebp - 0x60]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        inc    ecx
        lea    eax, [edx - 1]
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x14], ecx
        jl    L_c9ba
L_cf8f:
        mov    eax, dword ptr [ebp - 0x60]
        mov    esi, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x8c]
        add    esi, eax
        mov    eax, dword ptr [ebp - 0x28]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], esi
        mov    dword ptr [ebp - 0x28], eax
        jl    L_c96c
L_cfaf:
        test    byte ptr [g_007da86c], 2
        jle    L_cfe4
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x28]
        test    ah, 0x3c
        je    L_cfe4
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_d09e
        mov    eax, dword ptr [ebp + 0x10]
        mov    esi, dword ptr [eax + 4]
        xor    edx, edx
        mov    dx, word ptr [ecx + 0xa]
        add    esi, edx
        mov    dword ptr [eax + 4], esi
        jmp    L_d095
L_cfe4:
        mov    ebx, dword ptr [ebp - 8]
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
        je    L_d04e
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        test    edx, edx
        jle    L_d080
        mov    ecx, dword ptr [g_007b9864]
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + esi + 0x1c]
        mov    esi, edx
L_d02b:
        fld    dword ptr [ebp - 0xd8]
        add    eax, 8
        fadd    dword ptr [eax - 8]
        add    ecx, 0x20
        dec    esi
        fstp    dword ptr [ecx - 0x24]
        fld    dword ptr [ebp - 0xdc]
        fadd    dword ptr [eax - 4]
        fstp    dword ptr [ecx - 0x20]
        jne    L_d02b
        jmp    L_d080
L_d04e:
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        test    edx, edx
        jle    L_d080
        mov    esi, dword ptr [ebx + 0x44]
        mov    eax, dword ptr [g_007b9864]
        mov    eax, dword ptr [eax]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + esi + 0x1c]
        mov    esi, edx
L_d06d:
        mov    edi, dword ptr [eax]
        mov    dword ptr [ecx - 4], edi
        mov    edi, dword ptr [eax + 4]
        mov    dword ptr [ecx], edi
        add    eax, 8
        add    ecx, 0x20
        dec    esi
        jne    L_d06d
L_d080:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_d09e
        mov    eax, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [eax]
        add    edx, edx
        add    ecx, edx
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [ebp - 8]
L_d095:
        xor    edx, edx
        mov    dx, word ptr [ecx + 0x54]
        add    dword ptr [eax + 0xc], edx
L_d09e:
        mov    eax, dword ptr [ebp - 8]
        cmp    word ptr [eax + 0xa], 0
        setne    cl
        mov    byte ptr [eax + 0x10], cl
        mov    eax, dword ptr [ebp - 0xb8]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_d0bb:
        mov    edx, dword ptr [ebp + 0x1c]
        mov    eax, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp + 0x14]
        push    edx
        mov    edx, dword ptr [ebp + 0x10]
        push    eax
        push    ecx
        push    edx
        push    ecx
        lea    eax, [ebp + 0xc]
        mov    ecx, esp
        push    eax
        call    FUN_00423e00
        mov    ecx, dword ptr [ebp + 8]
        push    ecx
        mov    ecx, esi
        call    FUN_004428f0
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        nop    
        // jump-table data @ 0x0043D0EC (6 relocated pointers)
        __emit 0xF9
        __emit 0xAC
        __emit 0x43
        __emit 0x00
        __emit 0x28
        __emit 0xAD
        __emit 0x43
        __emit 0x00
        __emit 0x30
        __emit 0xAD
        __emit 0x43
        __emit 0x00
        __emit 0x3C
        __emit 0xAD
        __emit 0x43
        __emit 0x00
        __emit 0x42
        __emit 0xAD
        __emit 0x43
        __emit 0x00
        __emit 0x4A
        __emit 0xAD
        __emit 0x43
        __emit 0x00
        // jump-table data @ 0x0043D104 (6 relocated pointers)
        __emit 0x9F
        __emit 0xAD
        __emit 0x43
        __emit 0x00
        __emit 0xC7
        __emit 0xAD
        __emit 0x43
        __emit 0x00
        __emit 0xCF
        __emit 0xAD
        __emit 0x43
        __emit 0x00
        __emit 0xDB
        __emit 0xAD
        __emit 0x43
        __emit 0x00
        __emit 0xE1
        __emit 0xAD
        __emit 0x43
        __emit 0x00
        __emit 0xE9
        __emit 0xAD
        __emit 0x43
        __emit 0x00
        // jump-table data @ 0x0043D11C (6 relocated pointers)
        __emit 0x94
        __emit 0xBB
        __emit 0x43
        __emit 0x00
        __emit 0xE7
        __emit 0xBB
        __emit 0x43
        __emit 0x00
        __emit 0xF3
        __emit 0xBB
        __emit 0x43
        __emit 0x00
        __emit 0x1F
        __emit 0xBC
        __emit 0x43
        __emit 0x00
        __emit 0x2A
        __emit 0xBC
        __emit 0x43
        __emit 0x00
        __emit 0x35
        __emit 0xBC
        __emit 0x43
        __emit 0x00
        // jump-table data @ 0x0043D134 (14 relocated pointers)
        __emit 0xD1
        __emit 0xBB
        __emit 0x43
        __emit 0x00
        __emit 0x45
        __emit 0xBE
        __emit 0x43
        __emit 0x00
        __emit 0x51
        __emit 0xBE
        __emit 0x43
        __emit 0x00
        __emit 0x7D
        __emit 0xBE
        __emit 0x43
        __emit 0x00
        __emit 0x88
        __emit 0xBE
        __emit 0x43
        __emit 0x00
        __emit 0x93
        __emit 0xBE
        __emit 0x43
        __emit 0x00
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
        __emit 0x00
        __emit 0x56
        __emit 0x89
        __emit 0x5D
        __emit 0xFC
        __emit 0x89
        __emit 0xBB
        __emit 0x90
    }
}
