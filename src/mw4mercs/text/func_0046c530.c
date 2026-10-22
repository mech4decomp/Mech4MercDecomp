/*
 * FUN_0046c530 (extent 0x46c530-0x46eaa0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_0076f0d8;
extern float  g_0076f0dc;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007d995c;
extern int    g_007d9960;
extern int    g_007d9964;
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

__declspec(naked) void FUN_0046c530(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1ec
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x8c]
        test    eax, eax
        push    esi
        push    edi
        mov    dword ptr [ebp - 0x18], ebx
        jne    L_c57b
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
L_c57b:
        mov    eax, dword ptr [ebx + 0x64]
        test    eax, eax
        mov    dword ptr [ebp - 0x88], 0
        ja    L_c59b
        mov    byte ptr [ebx + 0x10], 0
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_c59b:
        cmp    word ptr [ebx + 0x56], 0
        mov    ecx, dword ptr [ebx + 0x18]
        mov    dword ptr [ebp - 0x4c], ecx
        jne    L_c5b2
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 0x98]
L_c5b2:
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
        je    L_c64c
        mov    eax, dword ptr [ebp - 0x4c]
        test    eax, eax
        mov    dword ptr [ebp - 0x1c], 0
        jle    L_c68e
L_c5ee:
        cmp    byte ptr [esi], 0
        je    L_c623
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
L_c623:
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
        jl    L_c5ee
        jmp    L_c68e
L_c64c:
        mov    eax, dword ptr [ebp - 0x4c]
        test    eax, eax
        jle    L_c68e
        mov    dword ptr [ebp + 0x14], eax
L_c656:
        cmp    byte ptr [esi], 0
        je    L_c66f
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    edi
        mov    byte ptr [esi], 0
        call    FUN_0041cb30
L_c66f:
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
        jne    L_c656
L_c68e:
        mov    edi, dword ptr [ebx + 0x24]
        and    edi, 0x3fff
        mov    edx, dword ptr [ebx + 0x64]
        mov    dword ptr [ebp - 0x8c], 0
        mov    dword ptr [ebp - 4], 0
        mov    dword ptr [ebp - 0x4c], edx
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x94], 0
        mov    dword ptr [ebp - 0x9c], 0
        je    L_c787
        test    edi, edi
        jle    L_c787
        mov    eax, dword ptr [g_007da848]
        mov    esi, dword ptr [eax + edi*4 + 0x24]
        test    esi, esi
        je    L_c787
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_c708
        mov    dword ptr [g_007da864], 1
        jmp    L_c763
L_c708:
        cmp    eax, 0x80
        jl    L_c71b
        mov    dword ptr [g_007da864], 2
        jmp    L_c763
L_c71b:
        cmp    eax, 0x40
        jl    L_c72c
        mov    dword ptr [g_007da864], 4
        jmp    L_c763
L_c72c:
        cmp    eax, 0x20
        jl    L_c73d
        mov    dword ptr [g_007da864], 8
        jmp    L_c763
L_c73d:
        cmp    eax, 0x10
        jl    L_c74e
        mov    dword ptr [g_007da864], 0x10
        jmp    L_c763
L_c74e:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_c763:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_c7b2
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_c7b2
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x94], edx
        mov    dword ptr [ebp - 0x9c], eax
L_c787:
        test    dword ptr [ebx + 0x68], 0x3fff
        mov    byte ptr [ebp + 0x1b], 0
        mov    dword ptr [ebp - 0xdc], 0
        mov    dword ptr [ebp - 0xd4], 0
        je    L_c7ee
        xor    ecx, ecx
        cmp    edi, ecx
        jg    L_c7b8
        xor    edi, edi
        jmp    L_c7c2
L_c7b2:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_c787
L_c7b8:
        mov    edx, dword ptr [g_007da848]
        mov    edi, dword ptr [edx + edi*4 + 0x24]
L_c7c2:
        mov    al, byte ptr [edi + 0x24]
        test    al, al
        jne    L_c7e8
        mov    edi, dword ptr [edi + 0x28]
        cmp    edi, ecx
        je    L_c7e8
        mov    eax, dword ptr [edi + 0xc]
        mov    edx, dword ptr [edi + 0x1c]
        mov    byte ptr [ebp + 0x1b], 1
        mov    dword ptr [ebp - 0xdc], eax
        mov    dword ptr [ebp - 0xd4], edx
        jmp    L_c7f0
L_c7e8:
        mov    byte ptr [ebp + 0x1b], 0
        jmp    L_c7f0
L_c7ee:
        xor    ecx, ecx
L_c7f0:
        mov    eax, dword ptr [ebx + 0x18]
        cmp    eax, 0x100
        mov    dword ptr [ebp - 0x48], ecx
        mov    dword ptr [ebp - 0x78], eax
        jle    L_c807
        mov    dword ptr [ebp - 0x78], 0x100
L_c807:
        cmp    word ptr [ebx + 0x56], cx
        mov    dword ptr [ebp - 0x3c], ecx
        mov    dword ptr [ebp - 0x84], ecx
        jne    L_c820
        mov    eax, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [eax + 0x98]
L_c820:
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
        jle    L_e2e7
        mov    esi, ecx
L_c850:
        mov    edx, dword ptr [g_007da5e8]
        mov    edx, dword ptr [edx]
        mov    eax, dword ptr [ebx + 0x60]
        movzx    ax, byte ptr [esi + eax]
        add    edx, esi
        cmp    byte ptr [edx], 0
        mov    dword ptr [ebp - 0x38], edx
        jne    L_c879
        and    eax, 0xffff
        add    ecx, eax
        mov    dword ptr [ebp - 0xc], ecx
        jmp    L_e2d8
L_c879:
        and    eax, 0xffff
        lea    esi, [eax + ecx]
        xor    edi, edi
        cmp    ecx, esi
        mov    dword ptr [g_007d9964], 0x3f
        mov    dword ptr [g_007d9960], edi
        mov    dword ptr [ebp - 0x80], esi
        mov    eax, ecx
        jge    L_c8de
        mov    ecx, dword ptr [g_007da688]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebx + 0x48]
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x14], ecx
L_c8ad:
        mov    ecx, dword ptr [ebp - 0x14]
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        mov    ecx, dword ptr [ebp + 8]
        or    edi, dword ptr [ecx + edx*4]
        lea    ecx, [ecx + edx*4]
        mov    edx, dword ptr [g_007d9964]
        and    edx, dword ptr [ecx]
        inc    eax
        cmp    eax, esi
        mov    dword ptr [g_007d9964], edx
        jl    L_c8ad
        test    edx, edx
        mov    dword ptr [g_007d9960], edi
        je    L_c8e6
        mov    edx, dword ptr [ebp - 0x38]
L_c8de:
        mov    byte ptr [edx], 0
        jmp    L_e2c9
L_c8e6:
        test    edi, edi
        jne    L_c91c
        mov    eax, dword ptr [ebp - 0x88]
        mov    ecx, dword ptr [ebp - 0x18]
        inc    eax
        mov    dword ptr [ebp - 0x88], eax
        mov    eax, dword ptr [ebp - 0xc]
L_c8fd:
        mov    edx, dword ptr [ecx + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + edx]
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        inc    eax
        mov    byte ptr [ebx + edx], 1
        cmp    eax, dword ptr [ebp - 0x80]
        jl    L_c8fd
        jmp    L_e2c9
L_c91c:
        cmp    dword ptr [edi*4 + 0x7b2478], 1
        mov    dword ptr [ebp - 0x10], 0
        jne    L_d45b
        mov    ecx, dword ptr [ebp - 0xc]
L_c934:
        mov    eax, dword ptr [ebx + 0x48]
        xor    edx, edx
        mov    dl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0x14], ecx
        mov    esi, ecx
        mov    edi, edx
        jl    L_c94b
        mov    esi, dword ptr [ebp - 0xc]
L_c94b:
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
        mov    dword ptr [g_007d995c], edx
        jne    L_ca51
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
        mov    ecx, dword ptr [ebx + 0x88]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [g_007da680]
        mov    dword ptr [eax + esi*4], ecx
        mov    eax, dword ptr [ebx + 0x1c]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [eax + edi*8]
        mov    dword ptr [ecx + esi*8], edx
        mov    edx, dword ptr [eax + edi*8 + 4]
        mov    dword ptr [ecx + esi*8 + 4], edx
        mov    ecx, dword ptr [ebp - 0x78]
        lea    edx, [edi + ecx]
        mov    ebx, dword ptr [eax + edx*8]
        mov    ecx, dword ptr [g_007d9980]
        mov    ecx, dword ptr [ecx]
        mov    edx, dword ptr [eax + edx*8 + 4]
        mov    dword ptr [ecx + esi*8], ebx
        mov    ebx, dword ptr [ebp - 0x18]
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        mov    dword ptr [ecx + esi*8 + 4], edx
        jbe    L_ca1f
        test    al, 1
        je    L_ca1f
        mov    eax, dword ptr [g_007da65c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da660]
        mov    eax, dword ptr [edx]
        mov    cl, byte ptr [ecx + edi]
        mov    byte ptr [eax + esi], cl
L_ca1f:
        mov    ecx, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        inc    ecx
        mov    dword ptr [ebp - 0x10], ecx
        lea    ecx, [edx*4]
        mov    edx, dword ptr [ecx + eax]
        inc    esi
        test    edx, edx
        mov    dword ptr [ebp - 0x34], esi
        mov    dword ptr [ebp - 0x30], ecx
        je    L_d432
        mov    edx, dword ptr [g_007d995c]
        jmp    L_ca68
L_ca51:
        mov    ecx, dword ptr [ebp - 0x2c]
        shl    ecx, 2
        cmp    dword ptr [ecx + eax], 0
        mov    byte ptr [ebp + 0xb], 0
        mov    dword ptr [ebp - 0x30], ecx
        jne    L_d432
L_ca68:
        or    edx, dword ptr [ecx + eax]
        mov    dword ptr [ebp - 8], 1
        mov    eax, dword ptr [ebp - 8]
        mov    dword ptr [g_007d995c], edx
        xor    ebx, ebx
L_ca7d:
        test    eax, edx
        jne    L_ca8f
        shl    eax, 1
        inc    ebx
        cmp    bx, 6
        jb    L_ca7d
        jmp    L_cbed
L_ca8f:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_cb3f
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
        ja    L_cb21
        jmp    dword ptr [ebx*4 + 0x46eaa0]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_cace:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_cbda
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_cbe7
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_cace
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_cace
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_cace
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_cace
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_cace
L_cb21:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_cb86
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_cbe7
L_cb3f:
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
        ja    L_cbbf
        jmp    dword ptr [ebx*4 + 0x46eab8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_cb73:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_cbda
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_cb86:
        mov    dword ptr [ebp - 4], 0
        jmp    L_cbe7
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_cb73
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_cb73
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_cb73
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_cb73
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_cb73
L_cbbf:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_cb86
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_cbe7
L_cbda:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_cbe7:
        mov    dword ptr [ebp - 0x8c], ebx
L_cbed:
        cmp    byte ptr [ebp + 0xb], 1
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        jne    L_d015
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
        je    L_cc71
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_cc77
L_cc71:
        fld    dword ptr [g_007b220c]
L_cc77:
        mov    ecx, dword ptr [ebp - 0x8c]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ecx + 0x88]
        mov    edx, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [edx + ecx]
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
        fmul    dword ptr [g_0076f0dc]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x178], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x144]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x17c]
        mov    dword ptr [ebp - 0x188], edx
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x18c], esi
        fmul    dword ptr [g_0076f0dc]
        mov    dword ptr [ebp - 0x19c], ecx
        mov    dword ptr [ebp - 0x198], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x148]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x18c]
        mov    dword ptr [ebp - 0x1ac], ecx
        mov    dword ptr [ebp - 0x1a8], edx
        shr    eax, 8
        fmul    dword ptr [g_0076f0dc]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1bc], ecx
        fstp    dword ptr [ebp - 0x14c]
        mov    dword ptr [ebp - 0x1b8], edx
        fild    qword ptr [ebp - 0x19c]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076f0dc]
        mov    dword ptr [ebp - 0x1cc], ecx
        mov    dword ptr [ebp - 0x1c8], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x140]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x1ac]
        mov    dword ptr [ebp - 0x1dc], eax
        mov    dword ptr [ebp - 0x1d8], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076f0dc]
        push    edx
        lea    eax, [ebp - 0x11c]
        push    eax
        fstp    dword ptr [ebp - 0x114]
        lea    ecx, [ebp - 0x14c]
        fild    qword ptr [ebp - 0x1bc]
        push    ecx
        lea    ecx, [ebp - 0xf4]
        mov    dword ptr [ebp - 0xec], 0xbf800000
        fmul    dword ptr [g_0076f0dc]
        mov    dword ptr [ebp - 0xf0], 0xbf800000
        mov    dword ptr [ebp - 0xf4], 0xbf800000
        mov    dword ptr [ebp - 0xe8], 0xbf800000
        fstp    dword ptr [ebp - 0x118]
        fild    qword ptr [ebp - 0x1cc]
        fmul    dword ptr [g_0076f0dc]
        fstp    dword ptr [ebp - 0x11c]
        fild    qword ptr [ebp - 0x1dc]
        fmul    dword ptr [g_0076f0dc]
        fstp    dword ptr [ebp - 0x110]
        call    FUN_004286e0
        lea    edx, [ebp - 0xf4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076f0d8]
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
        jbe    L_d428
        test    al, 1
        je    L_d428
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
        jmp    L_d422
L_d015:
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
        je    L_d087
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_d08d
L_d087:
        fld    dword ptr [g_007b220c]
L_d08d:
        mov    ecx, dword ptr [ebp - 0x8c]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ecx + 0x88]
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
        fmul    dword ptr [g_0076f0dc]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x160], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x134]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x164]
        mov    dword ptr [ebp - 0x1e0], edx
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1e4], esi
        fmul    dword ptr [g_0076f0dc]
        mov    dword ptr [ebp - 0x154], ecx
        mov    dword ptr [ebp - 0x150], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x138]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x1e4]
        mov    dword ptr [ebp - 0x1b4], ecx
        mov    dword ptr [ebp - 0x1b0], edx
        shr    eax, 8
        fmul    dword ptr [g_0076f0dc]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x184], ecx
        fstp    dword ptr [ebp - 0x13c]
        mov    dword ptr [ebp - 0x180], edx
        fild    qword ptr [ebp - 0x154]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076f0dc]
        mov    dword ptr [ebp - 0x1d4], ecx
        mov    dword ptr [ebp - 0x1d0], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x130]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x1b4]
        mov    dword ptr [ebp - 0x194], eax
        mov    dword ptr [ebp - 0x190], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076f0dc]
        push    edx
        lea    eax, [ebp - 0x12c]
        push    eax
        fstp    dword ptr [ebp - 0x124]
        lea    ecx, [ebp - 0x13c]
        fild    qword ptr [ebp - 0x184]
        push    ecx
        lea    ecx, [ebp - 0x104]
        mov    dword ptr [ebp - 0xfc], 0xbf800000
        fmul    dword ptr [g_0076f0dc]
        mov    dword ptr [ebp - 0x100], 0xbf800000
        mov    dword ptr [ebp - 0x104], 0xbf800000
        mov    dword ptr [ebp - 0xf8], 0xbf800000
        fstp    dword ptr [ebp - 0x128]
        fild    qword ptr [ebp - 0x1d4]
        fmul    dword ptr [g_0076f0dc]
        fstp    dword ptr [ebp - 0x12c]
        fild    qword ptr [ebp - 0x194]
        fmul    dword ptr [g_0076f0dc]
        fstp    dword ptr [ebp - 0x120]
        call    FUN_004286e0
        lea    edx, [ebp - 0x104]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076f0d8]
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
        jbe    L_d428
        test    al, 1
        je    L_d428
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
L_d422:
        mov    eax, dword ptr [ebp - 0x34]
        mov    byte ptr [ecx + eax], dl
L_d428:
        mov    eax, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [ebp - 0x18]
        inc    eax
        mov    dword ptr [ebp - 0x10], eax
L_d432:
        mov    esi, dword ptr [ebp - 0x80]
        mov    ecx, dword ptr [ebp - 0x14]
        cmp    ecx, esi
        jl    L_c934
        mov    ecx, dword ptr [g_007da670]
        mov    edx, dword ptr [ecx]
        mov    ax, word ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x84]
        mov    word ptr [edx + ecx*2], ax
        jmp    L_e291
L_d45b:
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
        jbe    L_d4bd
        and    eax, 0xff
        mov    dword ptr [ebp - 0x20], eax
        mov    edi, 1
        lea    ecx, [ebp - 0x5c]
        lea    eax, [esi + 0x50]
        mov    dword ptr [ebp + 8], 2
L_d4a0:
        test    dword ptr [ebp - 0x20], edi
        je    L_d4ac
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [ebp - 0x6c]
L_d4ac:
        mov    esi, dword ptr [ebp + 8]
        add    eax, 8
        add    ecx, 4
        shl    edi, 1
        dec    esi
        mov    dword ptr [ebp + 8], esi
        jne    L_d4a0
L_d4bd:
        mov    eax, dword ptr [g_007da68c]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x38], eax
        mov    eax, dword ptr [ebx + 0x88]
        mov    dword ptr [ebp - 0x7c], eax
        mov    eax, dword ptr [ebx + 0x1c]
        mov    dword ptr [ebp - 0x40], eax
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        xor    edi, edi
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x24], edi
        mov    dword ptr [ebp - 0xc0], eax
        jmp    L_d4f3
L_d4f0:
        mov    edx, dword ptr [ebp - 0x6c]
L_d4f3:
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
        fmul    dword ptr [g_0076f0dc]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x1a4], ebx
        shr    ecx, 8
        fstp    dword ptr [eax + edx + 8]
        mov    ebx, ecx
        fild    qword ptr [ebp - 0x1a4]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x15c], ebx
        xor    ebx, ebx
        fmul    dword ptr [g_0076f0dc]
        mov    dword ptr [ebp - 0x158], ebx
        shr    ecx, 8
        and    ecx, 0xff
        fstp    dword ptr [eax + edx + 4]
        mov    dword ptr [ebp - 0x168], ebx
        fild    qword ptr [ebp - 0x15c]
        mov    dword ptr [ebp - 0x16c], ecx
        mov    ecx, dword ptr [ebp - 0x64]
        fmul    dword ptr [g_0076f0dc]
        fstp    dword ptr [eax + edx]
        fild    qword ptr [ebp - 0x16c]
        fmul    dword ptr [g_0076f0dc]
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
        jbe    L_d664
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], edx
        lea    ecx, [ebp - 0x5c]
        mov    eax, 0x7da65c
L_d633:
        mov    ebx, dword ptr [ebp - 8]
        test    edx, ebx
        je    L_d649
        mov    edx, dword ptr [eax]
        mov    edx, dword ptr [edx]
        mov    dl, byte ptr [edx + esi]
        mov    ebx, dword ptr [ecx]
        mov    byte ptr [ebx + edi], dl
        mov    edx, dword ptr [ebp - 0x20]
L_d649:
        mov    ebx, dword ptr [ebp - 8]
        add    eax, 8
        shl    ebx, 1
        add    ecx, 4
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp - 8], ebx
        jl    L_d633
        mov    eax, dword ptr [ebp - 0xd8]
L_d664:
        mov    ecx, dword ptr [ebp + 8]
        mov    edi, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ebp - 0x80]
        inc    ecx
        inc    edi
        cmp    ecx, edx
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x24], edi
        jl    L_d4f0
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
        jbe    L_d6e4
        and    eax, 0xff
        mov    esi, 1
        mov    dword ptr [ebp - 0x20], eax
        lea    edx, [ebp - 0xa8]
        add    ecx, 0x20
        mov    ebx, 2
L_d6ce:
        test    eax, esi
        je    L_d6d9
        mov    eax, dword ptr [ecx]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ebp - 0x20]
L_d6d9:
        add    ecx, 8
        add    edx, 4
        shl    esi, 1
        dec    ebx
        jne    L_d6ce
L_d6e4:
        mov    ebx, dword ptr [ebp - 0x18]
        mov    esi, dword ptr [ebp - 0x60]
        mov    word ptr [ebp - 0xa0], 0
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x38], 4
L_d701:
        mov    dword ptr [ebp - 0x44], 0
        mov    dword ptr [ebp - 0x34], 0x7b2404
        mov    dword ptr [ebp - 0x7c], 6
L_d716:
        mov    ecx, dword ptr [ebp - 8]
        test    dword ptr [g_007d9960], ecx
        je    L_dfbd
        mov    eax, dword ptr [ebp - 0x54]
        and    eax, 0xffff
        mov    dword ptr [ebp + 8], 0
        mov    dword ptr [ebp - 0x24], eax
        jle    L_dea8
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
        jmp    L_d76a
L_d767:
        mov    edx, dword ptr [ebp - 0x6c]
L_d76a:
        mov    eax, dword ptr [ebp + 8]
        lea    edi, [eax + 1]
        mov    eax, dword ptr [ebp - 0x24]
        xor    ecx, ecx
        cmp    edi, eax
        mov    eax, dword ptr [ebp - 0xc4]
        mov    eax, dword ptr [eax]
        setge    cl
        mov    dword ptr [ebp - 0x14], edi
        mov    dword ptr [g_007d995c], eax
        dec    ecx
        and    ecx, edi
        test    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 0x2c], ecx
        jne    L_d8cb
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
        jbe    L_d882
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], edx
        mov    dword ptr [ebp - 0x74], eax
L_d84e:
        mov    edi, dword ptr [ebp - 8]
        test    edx, edi
        je    L_d86f
        mov    edx, dword ptr [ebp + eax - 0x5c]
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp + eax - 0xa8]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    eax, dword ptr [ebp - 0x74]
        mov    edx, dword ptr [ebp - 0x20]
L_d86f:
        mov    edi, dword ptr [ebp - 8]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x74], eax
        mov    dword ptr [ebp - 8], edi
        jl    L_d84e
L_d882:
        mov    edi, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp - 0x60]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [eax + edi*4]
        inc    word ptr [ebp - 0xa0]
        test    edx, ecx
        je    L_de70
        mov    eax, dword ptr [ebp - 0x34]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_d96a
        mov    ecx, dword ptr [ebp - 0x44]
        jmp    dword ptr [ecx*4 + 0x46ead0]
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x6c]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        jmp    L_d926
L_d8cb:
        mov    eax, dword ptr [ebp - 0x60]
        mov    edi, dword ptr [ebp - 8]
        test    dword ptr [eax + ecx*4], edi
        jne    L_de70
        mov    eax, dword ptr [ebp - 0x34]
        mov    edi, ecx
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_dbb9
        mov    eax, dword ptr [ebp - 0x44]
        jmp    dword ptr [eax*4 + 0x46eae8]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_db7e
        mov    edx, dword ptr [ebp - 0x6c]
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 4]
        jmp    L_d926
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x6c]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
L_d926:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_d988
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_d995
        mov    edx, dword ptr [ebp - 0x6c]
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi + edx]
        jmp    L_d926
        mov    edx, dword ptr [ebp - 0x6c]
        fld    dword ptr [esi]
        fld    dword ptr [edi + edx + 8]
        jmp    L_d926
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x6c]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        jmp    L_d926
L_d96a:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_d97c
        int 3    
L_d97c:
        mov    edx, dword ptr [ebp - 0x6c]
        mov    dword ptr [ebp - 4], 0
        jmp    L_d995
L_d988:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_d995:
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
        je    L_d9fe
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_da04
L_d9fe:
        fld    dword ptr [g_007b220c]
L_da04:
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
        jbe    L_ddc9
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], edx
        xor    eax, eax
L_daf1:
        mov    edi, dword ptr [ebp - 8]
        test    edx, edi
        je    L_db53
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
L_db53:
        mov    ebx, dword ptr [ebp - 8]
        add    eax, 4
        shl    ebx, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 8], ebx
        jl    L_daf1
        jmp    L_ddc9
        fld    dword ptr [edi + edx + 4]
        fld    dword ptr [esi - 4]
        jmp    L_db7e
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_db7e:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_dbd7
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_dbe4
        fld    dword ptr [edi + edx]
        fld    dword ptr [esi - 8]
        jmp    L_db7e
        fld    dword ptr [edi + edx + 8]
        fld    dword ptr [esi]
        jmp    L_db7e
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_db7e
L_dbb9:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_dbcb
        int 3    
L_dbcb:
        mov    edx, dword ptr [ebp - 0x6c]
        mov    dword ptr [ebp - 4], 0
        jmp    L_dbe4
L_dbd7:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_dbe4:
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
        je    L_dc57
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_dc5d
L_dc57:
        fld    dword ptr [g_007b220c]
L_dc5d:
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
        jbe    L_ddc9
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], edx
        xor    eax, eax
L_dd57:
        mov    edi, dword ptr [ebp - 8]
        test    edx, edi
        je    L_ddb9
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
L_ddb9:
        mov    ebx, dword ptr [ebp - 8]
        add    eax, 4
        shl    ebx, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 8], ebx
        jl    L_dd57
L_ddc9:
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
        jmp    L_de73
L_de70:
        mov    edi, dword ptr [ebp - 0x50]
L_de73:
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
        jl    L_d767
L_dea8:
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
        jbe    L_df21
        mov    esi, ecx
        xor    eax, eax
        and    esi, 0xff
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], esi
        lea    edx, [ebp - 0x5c]
L_def1:
        mov    ebx, dword ptr [ebp - 8]
        test    esi, ebx
        je    L_df0d
        mov    ebx, dword ptr [g_007da66c]
        lea    esi, [edi + edi*2]
        lea    esi, [eax + esi*2]
        mov    esi, dword ptr [ebx + esi*8 + 0x20]
        mov    dword ptr [edx], esi
        mov    esi, dword ptr [ebp - 0x20]
L_df0d:
        mov    ebx, dword ptr [ebp - 8]
        inc    eax
        shl    ebx, 1
        add    edx, 4
        cmp    eax, 2
        mov    dword ptr [ebp - 8], ebx
        jl    L_def1
        mov    ebx, dword ptr [ebp - 0x18]
L_df21:
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
        jbe    L_dfb1
        xor    eax, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], ecx
        lea    edx, [ebp - 0xa8]
L_df84:
        mov    esi, dword ptr [ebp - 8]
        test    ecx, esi
        je    L_dfa0
        mov    esi, dword ptr [g_007da66c]
        lea    ecx, [edi + edi*2]
        lea    ecx, [eax + ecx*2]
        mov    ecx, dword ptr [esi + ecx*8 + 0x20]
        mov    dword ptr [edx], ecx
        mov    ecx, dword ptr [ebp - 0x20]
L_dfa0:
        mov    esi, dword ptr [ebp - 8]
        inc    eax
        shl    esi, 1
        add    edx, 4
        cmp    eax, 2
        mov    dword ptr [ebp - 8], esi
        jl    L_df84
L_dfb1:
        mov    esi, dword ptr [ebp - 0x60]
        mov    word ptr [ebp - 0xa0], 0
L_dfbd:
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
        jne    L_d716
        mov    edx, dword ptr [ebp - 0x54]
        xor    eax, eax
        and    edx, 0xffff
        jle    L_e025
        mov    ecx, esi
L_dff1:
        or    eax, dword ptr [ecx]
        add    ecx, 4
        dec    edx
        jne    L_dff1
        test    eax, eax
        je    L_e025
        mov    ecx, dword ptr [ebp - 0x38]
        mov    edx, ecx
        dec    ecx
        test    edx, edx
        mov    dword ptr [ebp - 0x38], ecx
        jne    L_d701
        test    eax, eax
        je    L_e025
        mov    eax, dword ptr [g_007da5e8]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    byte ptr [ecx + edx], 0
        jmp    L_e2d2
L_e025:
        mov    eax, dword ptr [ebp - 0x54]
        and    eax, 0xffff
        mov    dword ptr [ebp + 8], 0
        mov    dword ptr [ebp - 0x24], eax
        jle    L_e275
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
L_e072:
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
        fld    dword ptr [g_0076f0d8]
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
        jbe    L_e240
        and    eax, 0xff
        lea    esi, [ebp - 0x5c]
        mov    dword ptr [ebp - 8], 1
        mov    dword ptr [ebp - 0x20], eax
        mov    ecx, 0x7da660
        mov    dword ptr [ebp - 0x14], esi
L_e20a:
        mov    esi, dword ptr [ebp - 8]
        test    eax, esi
        je    L_e229
        mov    eax, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [eax]
        mov    ebx, dword ptr [ebp + 8]
        mov    al, byte ptr [eax + ebx]
        mov    esi, dword ptr [ecx]
        mov    esi, dword ptr [esi]
        mov    ebx, dword ptr [ebp - 0x7c]
        mov    byte ptr [esi + ebx], al
        mov    eax, dword ptr [ebp - 0x20]
L_e229:
        add    dword ptr [ebp - 0x14], 4
        mov    ebx, dword ptr [ebp - 8]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp - 8], ebx
        jl    L_e20a
L_e240:
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
        jl    L_e072
L_e275:
        mov    ecx, dword ptr [ebp - 0x54]
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x54]
        mov    dword ptr [ebp - 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x84]
        mov    word ptr [eax + ecx*2], dx
L_e291:
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
L_e2c9:
        mov    eax, dword ptr [ebp - 0x80]
        mov    ebx, dword ptr [ebp - 0x18]
        mov    dword ptr [ebp - 0xc], eax
L_e2d2:
        mov    ecx, dword ptr [ebp - 0xc]
        mov    esi, dword ptr [ebp - 0x1c]
L_e2d8:
        mov    eax, dword ptr [ebp - 0x4c]
        inc    esi
        cmp    esi, eax
        mov    dword ptr [ebp - 0x1c], esi
        jl    L_c850
L_e2e7:
        mov    dl, byte ptr [ebp + 0x1c]
        test    dl, dl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_e2f6
        mov    eax, dword ptr [ecx + 0x30]
        jmp    L_e303
L_e2f6:
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ebp + 0x10]
        shl    eax, 5
        add    eax, esi
L_e303:
        xor    edi, edi
        test    dl, dl
        mov    dword ptr [ebx + 0x44], eax
        mov    word ptr [ebx + 0xa], di
        je    L_e315
        mov    eax, dword ptr [ecx + 0x48]
        jmp    L_e31e
L_e315:
        mov    edx, dword ptr [ecx + 0xc]
        mov    eax, dword ptr [ecx + 0x28]
        lea    eax, [eax + edx*2]
L_e31e:
        mov    ecx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [ebx + 0x50], eax
        xor    eax, eax
        cmp    ecx, edi
        mov    word ptr [ebx + 0x54], di
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 0x14], edi
        jle    L_e4bb
L_e341:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + eax], 0
        jne    L_e357
        inc    dword ptr [ebp - 0x14]
        jmp    L_e4af
L_e357:
        mov    ecx, dword ptr [g_007da5f4]
        mov    dx, word ptr [ebp - 0x14]
        mov    word ptr [ecx + eax*2], dx
        test    byte ptr [ebx + 0x13], 1
        je    L_e386
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    dl, byte ptr [edx + eax]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x17], dl
L_e386:
        mov    ecx, dword ptr [ebx + 0x88]
        mov    eax, dword ptr [ebx + 0x1c]
        mov    edx, dword ptr [g_007da68c]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x70], ecx
        mov    ecx, dword ptr [ebx + 0x44]
        mov    dword ptr [ebp - 0x28], eax
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0xbc], eax
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
        je    L_e41d
        mov    edx, dword ptr [ebp - 0xc]
        mov    ecx, eax
        mov    eax, dword ptr [ecx + edx*4]
        jmp    L_e425
L_e41d:
        mov    eax, dword ptr [g_007b94a0]
        mov    edx, dword ptr [ebp - 0xc]
L_e425:
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [eax + edx*8]
        mov    dword ptr [esi + 0x18], ecx
        mov    eax, dword ptr [eax + edx*8 + 4]
        mov    dword ptr [esi + 0x1c], eax
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_e477
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
L_e477:
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
L_e4af:
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], eax
        jl    L_e341
L_e4bb:
        mov    eax, dword ptr [ebp - 0x4c]
        xor    edx, edx
        cmp    eax, edi
        mov    dword ptr [ebp - 0x1c], edi
        jle    L_e5b5
L_e4cb:
        mov    eax, dword ptr [ebx + 0x60]
        mov    ecx, dword ptr [g_007da5e8]
        movzx    si, byte ptr [edi + eax]
        mov    eax, dword ptr [ecx]
        cmp    byte ptr [eax + edi], 0
        jne    L_e4ec
        and    esi, 0xffff
        jmp    L_e5a2
L_e4ec:
        and    esi, 0xffff
        mov    eax, 1
        lea    ecx, [esi - 1]
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x24], esi
        jle    L_e5a2
L_e505:
        mov    edi, dword ptr [g_007da5f4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebx + 0x48]
        mov    cl, byte ptr [edx + ecx]
        mov    esi, ecx
        and    esi, 0xff
        movzx    cx, cl
        sub    cx, word ptr [edi + esi*2]
        mov    edi, dword ptr [ebx + 0x50]
        xor    esi, esi
        mov    si, word ptr [ebx + 0x54]
        mov    word ptr [edi + esi*2], cx
        mov    esi, dword ptr [ebx + 0x48]
        mov    edi, dword ptr [g_007da5f4]
        lea    ecx, [eax + edx]
        mov    cl, byte ptr [ecx + esi + 1]
        mov    esi, ecx
        and    esi, 0xff
        movzx    cx, cl
        sub    cx, word ptr [edi + esi*2]
        mov    edi, dword ptr [ebx + 0x50]
        xor    esi, esi
        mov    si, word ptr [ebx + 0x54]
        mov    word ptr [edi + esi*2 + 2], cx
        mov    esi, dword ptr [ebx + 0x48]
        mov    edi, dword ptr [g_007da5f4]
        lea    ecx, [eax + edx]
        mov    cl, byte ptr [ecx + esi]
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
        jl    L_e505
        mov    edi, dword ptr [ebp - 0x1c]
L_e5a2:
        mov    eax, dword ptr [ebp - 0x4c]
        add    edx, esi
        inc    edi
        cmp    edi, eax
        mov    dword ptr [ebp - 0x1c], edi
        jl    L_e4cb
        xor    edi, edi
L_e5b5:
        mov    eax, dword ptr [ebp - 0x84]
        cmp    eax, edi
        jle    L_e9c3
        mov    dword ptr [ebp - 0x1c], edi
        mov    dword ptr [ebp - 0xc], edi
L_e5c9:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    ax, word ptr [eax + ecx*2]
        mov    dword ptr [ebp + 8], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x24], eax
        dec    eax
        cmp    eax, 1
        jle    L_e9a0
        mov    edx, dword ptr [ebp - 0x48]
        mov    ebx, dword ptr [ebp - 0x18]
        lea    eax, [edx*8]
        mov    dword ptr [ebp - 0x70], eax
        mov    eax, dword ptr [ebp - 0xc]
        lea    ecx, [eax*8 + 8]
        lea    edx, [eax*4 + 4]
        mov    dword ptr [ebp - 0x3c], ecx
        mov    dword ptr [ebp - 0x14], edx
L_e618:
        test    byte ptr [ebx + 0x13], 1
        je    L_e679
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
L_e679:
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
        je    L_e8c2
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
L_e8c2:
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
        jl    L_e618
L_e9a0:
        mov    esi, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x24]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 0x84]
        add    esi, edx
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], esi
        mov    dword ptr [ebp - 0x1c], eax
        jl    L_e5c9
        mov    ebx, dword ptr [ebp - 0x18]
L_e9c3:
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
        je    L_ea2e
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        and    edx, 0xffff
        jle    L_ea64
        mov    ecx, dword ptr [g_007d997c]
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + esi + 0x1c]
        mov    esi, edx
L_ea0b:
        fld    dword ptr [ebp - 0xdc]
        add    eax, 8
        fadd    dword ptr [eax - 8]
        add    ecx, 0x20
        dec    esi
        fstp    dword ptr [ecx - 0x24]
        fld    dword ptr [ebp - 0xd4]
        fadd    dword ptr [eax - 4]
        fstp    dword ptr [ecx - 0x20]
        jne    L_ea0b
        jmp    L_ea64
L_ea2e:
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        and    edx, 0xffff
        jle    L_ea64
        mov    esi, dword ptr [ebx + 0x44]
        mov    eax, dword ptr [g_007d997c]
        mov    eax, dword ptr [eax]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + esi + 0x1c]
        mov    esi, edx
L_ea51:
        mov    edi, dword ptr [eax]
        mov    dword ptr [ecx - 4], edi
        mov    edi, dword ptr [eax + 4]
        mov    dword ptr [ecx], edi
        add    eax, 8
        add    ecx, 0x20
        dec    esi
        jne    L_ea51
L_ea64:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_ea84
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
L_ea84:
        cmp    word ptr [ebx + 0xa], 0
        mov    eax, dword ptr [ebp - 0x88]
        pop    edi
        setne    dl
        pop    esi
        mov    byte ptr [ebx + 0x10], dl
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        mov    edi, edi
        // jump-table data @ 0x0046EAA0 (6 relocated pointers)
        __emit 0xC2
        __emit 0xCA
        __emit 0x46
        __emit 0x00
        __emit 0xF1
        __emit 0xCA
        __emit 0x46
        __emit 0x00
        __emit 0xF9
        __emit 0xCA
        __emit 0x46
        __emit 0x00
        __emit 0x05
        __emit 0xCB
        __emit 0x46
        __emit 0x00
        __emit 0x0B
        __emit 0xCB
        __emit 0x46
        __emit 0x00
        __emit 0x13
        __emit 0xCB
        __emit 0x46
        __emit 0x00
        // jump-table data @ 0x0046EAB8 (6 relocated pointers)
        __emit 0x67
        __emit 0xCB
        __emit 0x46
        __emit 0x00
        __emit 0x8F
        __emit 0xCB
        __emit 0x46
        __emit 0x00
        __emit 0x97
        __emit 0xCB
        __emit 0x46
        __emit 0x00
        __emit 0xA3
        __emit 0xCB
        __emit 0x46
        __emit 0x00
        __emit 0xA9
        __emit 0xCB
        __emit 0x46
        __emit 0x00
        __emit 0xB1
        __emit 0xCB
        __emit 0x46
        __emit 0x00
        // jump-table data @ 0x0046EAD0 (6 relocated pointers)
        __emit 0xB8
        __emit 0xD8
        __emit 0x46
        __emit 0x00
        __emit 0x0A
        __emit 0xD9
        __emit 0x46
        __emit 0x00
        __emit 0x16
        __emit 0xD9
        __emit 0x46
        __emit 0x00
        __emit 0x42
        __emit 0xD9
        __emit 0x46
        __emit 0x00
        __emit 0x4D
        __emit 0xD9
        __emit 0x46
        __emit 0x00
        __emit 0x58
        __emit 0xD9
        __emit 0x46
        __emit 0x00
        // jump-table data @ 0x0046EAE8 (14 relocated pointers)
        __emit 0xF7
        __emit 0xD8
        __emit 0x46
        __emit 0x00
        __emit 0x68
        __emit 0xDB
        __emit 0x46
        __emit 0x00
        __emit 0x71
        __emit 0xDB
        __emit 0x46
        __emit 0x00
        __emit 0x9A
        __emit 0xDB
        __emit 0x46
        __emit 0x00
        __emit 0xA2
        __emit 0xDB
        __emit 0x46
        __emit 0x00
        __emit 0xAA
        __emit 0xDB
        __emit 0x46
        __emit 0x00
        __emit 0xA1
        __emit 0x8C
        __emit 0x95
        __emit 0x7B
        __emit 0x00
        __emit 0x83
        __emit 0xEC
        __emit 0x18
        __emit 0x55
        __emit 0x56
        __emit 0x57
        __emit 0x50
        __emit 0xE8
        __emit 0x3F
        __emit 0x5E
        __emit 0x28
        __emit 0x00
        __emit 0x68
        __emit 0x90
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xE8
        __emit 0xB5
        __emit 0x99
        __emit 0xF9
        __emit 0xFF
        __emit 0x83
        __emit 0xC4
        __emit 0x04
        __emit 0x85
        __emit 0xC0
    }
}
