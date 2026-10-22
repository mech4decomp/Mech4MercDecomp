/*
 * FUN_0044d750 (extent 0x44d750-0x44fa28) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_0076e93c;
extern float  g_0076e940;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007b9574;
extern int    g_007b98a8;
extern int    g_007b98ac;
extern int    g_007b98b0;
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
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_0041cb30(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00423e00(void);
extern void __cdecl FUN_004286e0(void);
extern void __cdecl FUN_00459210(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0044d750(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1d4
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x6c]
        test    eax, eax
        push    edi
        mov    dword ptr [ebp - 8], esi
        je    L_f9f5
        mov    ecx, dword ptr [eax + 4]
        test    ecx, ecx
        je    L_f9f5
        mov    eax, dword ptr [g_007b9574]
        test    eax, eax
        ja    L_f9f5
        mov    eax, dword ptr [esi + 0x58]
        test    eax, eax
        mov    dword ptr [ebp - 0x90], 0
        jg    L_d7a4
        mov    byte ptr [esi + 0x10], 0
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_d7a4:
        cmp    word ptr [esi + 0x56], 0
        mov    eax, dword ptr [esi + 0x18]
        mov    dword ptr [ebp - 0x18], eax
        jne    L_d7bb
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x98]
L_d7bb:
        mov    eax, dword ptr [g_007da68c]
        mov    edi, dword ptr [eax]
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [g_007da600]
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x2c], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp + 0x18], edi
        je    L_d84c
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        mov    dword ptr [ebp - 0x1c], 0
        jle    L_d887
L_d7f7:
        cmp    byte ptr [ebx], 0
        je    L_d829
        mov    edx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp + 0x18]
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
        mov    edi, dword ptr [ebp + 0x18]
L_d829:
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp - 0x1c]
        add    ecx, 4
        inc    eax
        add    edi, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x2c], ecx
        mov    ecx, dword ptr [ebp - 0x18]
        inc    ebx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp + 0x18], edi
        jl    L_d7f7
        jmp    L_d887
L_d84c:
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        jle    L_d887
        mov    dword ptr [ebp + 0x14], eax
L_d856:
        cmp    byte ptr [ebx], 0
        je    L_d86e
        mov    edx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp + 8]
        push    edx
        push    eax
        push    esi
        mov    ecx, edi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
L_d86e:
        mov    edx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        add    edi, 0x10
        inc    ebx
        dec    eax
        mov    dword ptr [ebp - 0x2c], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_d856
L_d887:
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x24]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0x9c], 0
        mov    dword ptr [ebp - 4], 0
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0xa8], 0
        mov    dword ptr [ebp - 0x94], 0
        je    L_d985
        test    eax, eax
        jle    L_d985
        mov    edx, dword ptr [g_007da848]
        mov    esi, dword ptr [edx + eax*4 + 0x24]
        test    esi, esi
        je    L_d985
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_d8fe
        mov    dword ptr [g_007da864], 1
        jmp    L_d959
L_d8fe:
        cmp    eax, 0x80
        jl    L_d911
        mov    dword ptr [g_007da864], 2
        jmp    L_d959
L_d911:
        cmp    eax, 0x40
        jl    L_d922
        mov    dword ptr [g_007da864], 4
        jmp    L_d959
L_d922:
        cmp    eax, 0x20
        jl    L_d933
        mov    dword ptr [g_007da864], 8
        jmp    L_d959
L_d933:
        cmp    eax, 0x10
        jl    L_d944
        mov    dword ptr [g_007da864], 0x10
        jmp    L_d959
L_d944:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_d959:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_da31
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_da31
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0xa8], edx
        mov    dword ptr [ebp - 0x94], eax
L_d985:
        mov    ecx, dword ptr [g_007da688]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    dword ptr [ebp - 0x2c], edx
        cmp    dword ptr [ecx + 0x58], eax
        mov    dword ptr [ebp - 0x98], eax
        mov    dword ptr [ebp - 0x6c], eax
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x14], eax
        jle    L_f3ae
L_d9ad:
        mov    edx, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    eax, dword ptr [edx]
        add    eax, ecx
        cmp    byte ptr [eax], 0
        mov    dword ptr [ebp + 8], eax
        je    L_f390
        mov    edx, dword ptr [ebp - 8]
        mov    ecx, dword ptr [edx + 0x48]
        mov    esi, dword ptr [ebp - 0x14]
        xor    edx, edx
        mov    dl, byte ptr [ecx + esi + 2]
        xor    eax, eax
        mov    al, byte ptr [ecx + esi]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + esi + 1]
        mov    dword ptr [ebp - 0xb4], ecx
        mov    edi, edx
        mov    edx, dword ptr [ebp - 0x2c]
        mov    edx, dword ptr [edx + eax*4]
        mov    dword ptr [ebp + 0x18], eax
        mov    eax, dword ptr [ebp - 0x2c]
        mov    dword ptr [ebp - 0x68], edi
        mov    edi, dword ptr [eax + edi*4]
        mov    eax, dword ptr [eax + ebx*4]
        mov    dword ptr [ebp - 0x34], ebx
        mov    ebx, eax
        and    ebx, edi
        mov    dword ptr [g_007b98ac], edx
        or    eax, edi
        mov    edi, dword ptr [g_007b98ac]
        and    edx, ebx
        or    edi, eax
        test    edx, edx
        mov    dword ptr [g_007b98b0], edx
        mov    dword ptr [g_007b98ac], edi
        je    L_da3a
        mov    ecx, dword ptr [ebp + 8]
        mov    byte ptr [ecx], 0
        jmp    L_f390
L_da31:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_d985
L_da3a:
        test    edi, edi
        jne    L_da6d
        mov    eax, dword ptr [ebp - 0x90]
        mov    edx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ebp + 0x18]
        inc    eax
        mov    dword ptr [ebp - 0x90], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x34]
        mov    byte ptr [eax + ecx], 1
        mov    ecx, dword ptr [ebp - 0x68]
        mov    byte ptr [eax + edx], 1
        mov    byte ptr [eax + ecx], 1
        jmp    L_f390
L_da6d:
        cmp    dword ptr [edi*4 + 0x7b2478], 1
        mov    dword ptr [ebp - 0x10], 0
        jne    L_e593
        lea    edx, [esi + 3]
        cmp    esi, edx
        mov    ecx, esi
        jge    L_e57f
L_da8f:
        mov    eax, dword ptr [ebp - 8]
        mov    eax, dword ptr [eax + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x28], ecx
        mov    edi, ebx
        jge    L_daa6
        mov    esi, ecx
L_daa6:
        xor    edx, edx
        mov    dl, byte ptr [eax + esi]
        mov    esi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x98]
        and    esi, 0xffff
        add    esi, eax
        mov    eax, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [eax + edi*4]
        test    ecx, ecx
        mov    dword ptr [ebp + 0x18], edx
        mov    dword ptr [ebp - 0x30], esi
        mov    dword ptr [g_007b98a8], ecx
        jne    L_dbb4
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
        mov    ecx, dword ptr [eax + 0x6c]
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
        jbe    L_db89
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x18], 1
        mov    dword ptr [ebp - 0xc], ecx
        mov    eax, 0x7da660
L_db5e:
        mov    ebx, dword ptr [ebp - 0x18]
        test    ecx, ebx
        je    L_db77
        mov    ecx, dword ptr [eax - 4]
        mov    ecx, dword ptr [ecx]
        mov    ebx, dword ptr [eax]
        mov    cl, byte ptr [ecx + edi]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + esi], cl
        mov    ecx, dword ptr [ebp - 0xc]
L_db77:
        mov    ebx, dword ptr [ebp - 0x18]
        add    eax, 8
        shl    ebx, 1
        cmp    eax, 0x7da670
        mov    dword ptr [ebp - 0x18], ebx
        jl    L_db5e
L_db89:
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x2c]
        inc    eax
        mov    dword ptr [ebp - 0x10], eax
        lea    eax, [edx*4]
        mov    dword ptr [ebp - 0x18], eax
        mov    eax, dword ptr [eax + ecx]
        inc    esi
        test    eax, eax
        mov    dword ptr [ebp - 0x30], esi
        je    L_e56e
        mov    ecx, dword ptr [g_007b98a8]
        jmp    L_dbcd
L_dbb4:
        lea    ebx, [edx*4]
        mov    eax, dword ptr [ebx + eax]
        test    eax, eax
        mov    byte ptr [ebp + 0xb], 0
        mov    dword ptr [ebp - 0x18], ebx
        jne    L_e56e
L_dbcd:
        or    ecx, eax
        mov    dword ptr [ebp - 0x38], 1
        mov    dword ptr [g_007b98a8], ecx
        xor    ebx, ebx
L_dbde:
        mov    eax, dword ptr [ebp - 0x38]
        test    eax, ecx
        jne    L_dbf6
        shl    eax, 1
        inc    ebx
        cmp    bx, 6
        mov    dword ptr [ebp - 0x38], eax
        jb    L_dbde
        jmp    L_dd57
L_dbf6:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_dca6
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
        ja    L_dc88
        jmp    dword ptr [ebx*4 + 0x44fa28]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_dc35:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_dd41
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_dd4e
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_dc35
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_dc35
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_dc35
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_dc35
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_dc35
L_dc88:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_dced
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_dd4e
L_dca6:
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
        ja    L_dd26
        jmp    dword ptr [ebx*4 + 0x44fa40]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_dcda:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_dd41
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_dced:
        mov    dword ptr [ebp - 4], 0
        jmp    L_dd4e
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_dcda
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_dcda
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_dcda
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_dcda
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_dcda
L_dd26:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_dced
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_dd4e
L_dd41:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_dd4e:
        mov    edx, dword ptr [ebp + 0x18]
        mov    dword ptr [ebp - 0x9c], ebx
L_dd57:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_e170
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
        mov    eax, dword ptr [ebp - 0x9c]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_ddda
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_dde0
L_ddda:
        fld    dword ptr [g_007b220c]
L_dde0:
        mov    ecx, dword ptr [ebp - 0x9c]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x6c]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [eax + ecx]
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
        fmul    dword ptr [g_0076e940]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x160], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x12c]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x164]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x170], edx
        mov    dword ptr [ebp - 0x174], esi
        fmul    dword ptr [g_0076e940]
        mov    dword ptr [ebp - 0x184], ecx
        mov    dword ptr [ebp - 0x180], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x130]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x174]
        mov    dword ptr [ebp - 0x194], ecx
        mov    dword ptr [ebp - 0x190], edx
        shr    eax, 8
        fmul    dword ptr [g_0076e940]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1a4], ecx
        fstp    dword ptr [ebp - 0x134]
        mov    dword ptr [ebp - 0x1a0], edx
        fild    qword ptr [ebp - 0x184]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076e940]
        mov    dword ptr [ebp - 0x1b4], ecx
        mov    dword ptr [ebp - 0x1b0], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x128]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x194]
        mov    dword ptr [ebp - 0x1c4], eax
        mov    dword ptr [ebp - 0x1c0], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076e940]
        push    edx
        lea    eax, [ebp - 0x104]
        lea    ecx, [ebp - 0x134]
        fstp    dword ptr [ebp - 0xfc]
        push    eax
        fild    qword ptr [ebp - 0x1a4]
        push    ecx
        mov    dword ptr [ebp - 0xd4], 0xbf800000
        mov    dword ptr [ebp - 0xd8], 0xbf800000
        fmul    dword ptr [g_0076e940]
        mov    dword ptr [ebp - 0xdc], 0xbf800000
        mov    dword ptr [ebp - 0xd0], 0xbf800000
        lea    ecx, [ebp - 0xdc]
        fstp    dword ptr [ebp - 0x100]
        fild    qword ptr [ebp - 0x1b4]
        fmul    dword ptr [g_0076e940]
        fstp    dword ptr [ebp - 0x104]
        fild    qword ptr [ebp - 0x1c4]
        fmul    dword ptr [g_0076e940]
        fstp    dword ptr [ebp - 0xf8]
        call    FUN_004286e0
        lea    edx, [ebp - 0xdc]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076e93c]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xf4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xf4]
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
        fstp    dword ptr [ebp - 0xf4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xf4]
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
        fstp    dword ptr [ebp - 0xf4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xf4]
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
        fstp    dword ptr [ebp - 0xf4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xf4]
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
        mov    ecx, dword ptr [ebp - 0x30]
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
        jbe    L_e56b
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0xc], ecx
        mov    eax, 0x7da65c
        mov    edx, ebx
L_e109:
        mov    esi, dword ptr [ebp + 8]
        test    ecx, esi
        je    L_e159
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    bl, byte ptr [edi + ecx]
        mov    byte ptr [ebp - 0xf0], bl
        mov    esi, dword ptr [ebp - 0xf0]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + ecx]
        mov    ecx, dword ptr [eax + 4]
        mov    ecx, dword ptr [ecx]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x34], esi
        sub    ebx, esi
        mov    esi, dword ptr [ebp - 0x30]
        mov    dword ptr [ebp + 0x18], ebx
        fild    dword ptr [ebp + 0x18]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x34]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 0x18]
        mov    bl, byte ptr [ebp + 0x18]
        mov    byte ptr [ecx + esi], bl
        mov    ecx, dword ptr [ebp - 0xc]
L_e159:
        mov    ebx, dword ptr [ebp + 8]
        add    eax, 8
        shl    ebx, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 8], ebx
        jl    L_e109
        jmp    L_e56b
L_e170:
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
        mov    eax, dword ptr [ebp - 0x9c]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_e1e8
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_e1ee
L_e1e8:
        fld    dword ptr [g_007b220c]
L_e1ee:
        mov    ecx, dword ptr [ebp - 0x9c]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x6c]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [edx + ecx]
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
        fmul    dword ptr [g_0076e940]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x148], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x11c]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x14c]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1c8], edx
        mov    dword ptr [ebp - 0x1cc], esi
        fmul    dword ptr [g_0076e940]
        mov    dword ptr [ebp - 0x13c], ecx
        mov    dword ptr [ebp - 0x138], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x120]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x1cc]
        mov    dword ptr [ebp - 0x19c], ecx
        mov    dword ptr [ebp - 0x198], edx
        shr    eax, 8
        fmul    dword ptr [g_0076e940]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x16c], ecx
        fstp    dword ptr [ebp - 0x124]
        mov    dword ptr [ebp - 0x168], edx
        fild    qword ptr [ebp - 0x13c]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076e940]
        mov    dword ptr [ebp - 0x1bc], ecx
        mov    dword ptr [ebp - 0x1b8], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x118]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x19c]
        mov    dword ptr [ebp - 0x17c], eax
        mov    dword ptr [ebp - 0x178], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076e940]
        push    edx
        lea    eax, [ebp - 0x114]
        lea    ecx, [ebp - 0x124]
        fstp    dword ptr [ebp - 0x10c]
        push    eax
        fild    qword ptr [ebp - 0x16c]
        push    ecx
        mov    dword ptr [ebp - 0xe4], 0xbf800000
        mov    dword ptr [ebp - 0xe8], 0xbf800000
        fmul    dword ptr [g_0076e940]
        mov    dword ptr [ebp - 0xec], 0xbf800000
        mov    dword ptr [ebp - 0xe0], 0xbf800000
        lea    ecx, [ebp - 0xec]
        fstp    dword ptr [ebp - 0x110]
        fild    qword ptr [ebp - 0x1bc]
        fmul    dword ptr [g_0076e940]
        fstp    dword ptr [ebp - 0x114]
        fild    qword ptr [ebp - 0x17c]
        fmul    dword ptr [g_0076e940]
        fstp    dword ptr [ebp - 0x108]
        call    FUN_004286e0
        lea    edx, [ebp - 0xec]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076e93c]
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
        mov    dword ptr [ebp - 0xc8], ebx
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
        mov    ecx, dword ptr [ebp - 0xc8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc8], ecx
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
        mov    ecx, dword ptr [ebp - 0xc8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc8], ecx
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xc8]
        mov    ecx, dword ptr [ebp - 0x30]
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
        jbe    L_e56b
        mov    ecx, eax
        and    ecx, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0xc], ecx
        mov    eax, 0x7da65c
L_e50f:
        test    ecx, edx
        je    L_e55f
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    esi, dword ptr [ebp + 0x18]
        mov    bl, byte ptr [ecx + esi]
        mov    byte ptr [ebp - 0xbc], bl
        mov    esi, dword ptr [ebp - 0xbc]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + edi]
        mov    ecx, dword ptr [eax + 4]
        mov    ecx, dword ptr [ecx]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x34], esi
        sub    ebx, esi
        mov    esi, dword ptr [ebp - 0x30]
        mov    dword ptr [ebp + 8], ebx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x34]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    bl, byte ptr [ebp + 8]
        mov    byte ptr [ecx + esi], bl
        mov    ecx, dword ptr [ebp - 0xc]
L_e55f:
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da66c
        jl    L_e50f
L_e56b:
        inc    dword ptr [ebp - 0x10]
L_e56e:
        mov    esi, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebp - 0x28]
        lea    edx, [esi + 3]
        cmp    ecx, edx
        jl    L_da8f
L_e57f:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x6c]
        mov    dx, word ptr [ebp - 0x10]
        jmp    L_f354
L_e593:
        mov    eax, dword ptr [g_007da66c]
        mov    edx, dword ptr [eax + 0x30]
        mov    dword ptr [ebp - 0x58], edx
        mov    edx, dword ptr [eax + 0x38]
        mov    dword ptr [ebp - 0x54], edx
        mov    edx, dword ptr [eax + 0x40]
        mov    dword ptr [ebp - 0x50], edx
        mov    edx, dword ptr [eax + 0x48]
        mov    dword ptr [ebp - 0x4c], edx
        mov    edx, dword ptr [ebp - 8]
        mov    dl, byte ptr [edx + 0x13]
        test    dl, dl
        mov    byte ptr [ebp - 0xcc], dl
        jbe    L_e606
        mov    edi, edx
        and    edi, 0xff
        lea    ebx, [ebp - 0x48]
        mov    dword ptr [ebp + 0x18], 1
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp + 8], ebx
        add    eax, 0x50
        mov    dword ptr [ebp - 0x28], 2
L_e5e2:
        mov    ebx, dword ptr [ebp + 0x18]
        test    edi, ebx
        je    L_e5f3
        mov    edi, dword ptr [eax]
        mov    ebx, dword ptr [ebp + 8]
        mov    dword ptr [ebx], edi
        mov    edi, dword ptr [ebp - 0xc]
L_e5f3:
        add    dword ptr [ebp + 8], 4
        shl    dword ptr [ebp + 0x18], 1
        mov    ebx, dword ptr [ebp - 0x28]
        add    eax, 8
        dec    ebx
        mov    dword ptr [ebp - 0x28], ebx
        jne    L_e5e2
L_e606:
        xor    edi, edi
        lea    ebx, [esi + 3]
        cmp    esi, ebx
        mov    eax, esi
        mov    byte ptr [ebp + 0x1b], 0
        mov    byte ptr [ebp + 0xb], 0xff
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0x28], edi
        jge    L_e7d9
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    ebx, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0x34], edx
        mov    edx, dword ptr [ebp - 8]
        mov    esi, dword ptr [edx + 0x6c]
        mov    edx, dword ptr [edx + 0x1c]
        mov    esi, dword ptr [esi]
        mov    dword ptr [ebp - 0x64], edx
        mov    edx, dword ptr [g_007da688]
        mov    edx, dword ptr [edx]
        mov    dword ptr [ebp - 0x68], esi
        mov    dword ptr [ebp - 0x3c], edx
        jmp    L_e655
L_e64f:
        mov    ecx, dword ptr [ebp - 0xb4]
L_e655:
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        and    edi, 0xffff
        mov    eax, edi
        shl    eax, 4
        mov    dword ptr [ebp - 0x1a8], 0
        mov    dword ptr [ebp - 0x188], 0
        mov    esi, edx
        mov    edx, dword ptr [ebp - 0x34]
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax + ebx], edx
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + ebx + 4], edx
        mov    edx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + ebx + 8], edx
        mov    edx, dword ptr [ebp - 0x68]
        mov    dword ptr [eax + ebx + 0xc], ecx
        mov    ecx, dword ptr [edx + esi*4]
        mov    edx, ecx
        and    edx, 0xff
        mov    dword ptr [ebp - 0x1ac], edx
        fild    qword ptr [ebp - 0x1ac]
        mov    edx, dword ptr [ebp - 0x54]
        shr    ecx, 8
        mov    ebx, ecx
        fmul    dword ptr [g_0076e940]
        and    ebx, 0xff
        shr    ecx, 8
        mov    dword ptr [ebp - 0x18c], ebx
        fstp    dword ptr [eax + edx + 8]
        mov    ebx, ecx
        fild    qword ptr [ebp - 0x18c]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x144], ebx
        xor    ebx, ebx
        fmul    dword ptr [g_0076e940]
        mov    dword ptr [ebp - 0x140], ebx
        shr    ecx, 8
        and    ecx, 0xff
        fstp    dword ptr [eax + edx + 4]
        mov    dword ptr [ebp - 0x154], ecx
        fild    qword ptr [ebp - 0x144]
        mov    ecx, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp - 0x150], ebx
        fmul    dword ptr [g_0076e940]
        fstp    dword ptr [eax + edx]
        fild    qword ptr [ebp - 0x154]
        fmul    dword ptr [g_0076e940]
        fstp    dword ptr [eax + edx + 0xc]
        mov    eax, dword ptr [ebp - 0x64]
        mov    edx, dword ptr [eax + esi*8]
        mov    eax, dword ptr [eax + esi*8 + 4]
        mov    dword ptr [ecx + edi*8], edx
        mov    dword ptr [ecx + edi*8 + 4], eax
        mov    ecx, dword ptr [ebp - 0x3c]
        mov    edx, dword ptr [ecx + esi*4]
        mov    eax, dword ptr [ebp - 0x4c]
        mov    dword ptr [eax + edi*4], edx
        mov    edx, dword ptr [ebp - 0xcc]
        test    dl, dl
        jbe    L_e7ba
        and    edx, 0xff
        mov    dword ptr [ebp - 0x18], 1
        mov    dword ptr [ebp - 0xc], edx
        lea    ebx, [ebp - 0x48]
        mov    ecx, 0x7da65c
        jmp    L_e77b
L_e778:
        mov    edx, dword ptr [ebp - 0xc]
L_e77b:
        mov    eax, dword ptr [ebp - 0x18]
        test    edx, eax
        je    L_e79e
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [edx]
        mov    al, byte ptr [eax + esi]
        mov    edx, dword ptr [ebx]
        mov    byte ptr [edi + edx], al
        cmp    al, byte ptr [ebp + 0xb]
        jae    L_e796
        mov    byte ptr [ebp + 0xb], al
L_e796:
        cmp    al, byte ptr [ebp + 0x1b]
        jbe    L_e79e
        mov    byte ptr [ebp + 0x1b], al
L_e79e:
        mov    edx, dword ptr [ebp - 0x18]
        add    ecx, 8
        shl    edx, 1
        add    ebx, 4
        cmp    ecx, 0x7da66c
        mov    dword ptr [ebp - 0x18], edx
        jl    L_e778
        mov    edx, dword ptr [ebp - 0xcc]
L_e7ba:
        mov    eax, dword ptr [ebp - 0x10]
        mov    edi, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    ebx, dword ptr [ebp - 0x58]
        inc    eax
        inc    edi
        add    ecx, 3
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0x28], edi
        jl    L_e64f
L_e7d9:
        mov    eax, dword ptr [g_007da66c]
        mov    esi, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x88], esi
        mov    esi, dword ptr [eax + 0x10]
        mov    word ptr [ebp - 0x40], di
        mov    edi, dword ptr [eax]
        xor    ecx, ecx
        test    dl, dl
        mov    dword ptr [ebp - 0x84], esi
        mov    esi, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x60], ecx
        mov    dword ptr [ebp - 0x8c], edi
        mov    dword ptr [ebp - 0x80], esi
        jbe    L_e84a
        and    edx, 0xff
        mov    ebx, 1
        mov    dword ptr [ebp - 0xc], edx
        lea    esi, [ebp - 0x7c]
        add    eax, 0x20
        mov    dword ptr [ebp + 8], 2
        jmp    L_e82b
L_e828:
        mov    edx, dword ptr [ebp - 0xc]
L_e82b:
        test    edx, ebx
        je    L_e839
        mov    edx, dword ptr [eax]
        mov    dword ptr [esi], edx
        mov    edi, dword ptr [ebp - 0x8c]
L_e839:
        mov    edx, dword ptr [ebp + 8]
        add    eax, 8
        add    esi, 4
        shl    ebx, 1
        dec    edx
        mov    dword ptr [ebp + 8], edx
        jne    L_e828
L_e84a:
        mov    ebx, dword ptr [ebp - 0x40]
        mov    word ptr [ebp - 0x74], 0
        mov    dword ptr [ebp - 0x38], 1
        mov    dword ptr [ebp - 0x34], 4
L_e861:
        mov    dword ptr [ebp - 0x5c], 0
        mov    dword ptr [ebp - 0x30], 0x7b2404
        mov    dword ptr [ebp - 0x68], 6
L_e876:
        mov    eax, dword ptr [ebp - 0x38]
        test    dword ptr [g_007b98ac], eax
        je    L_f089
        xor    eax, eax
        mov    edx, ebx
        and    edx, 0xffff
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0x18], edx
        jle    L_ef88
        mov    ecx, dword ptr [ebp - 0x50]
        mov    edx, dword ptr [ebp - 0x4c]
        mov    dword ptr [ebp - 0x70], ecx
        mov    ecx, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp - 0xb0], edx
        mov    edx, dword ptr [ebp - 0x58]
        lea    ebx, [ecx + 0xc]
        sub    ecx, edx
        lea    esi, [edx + 8]
        mov    edx, dword ptr [ebp - 0x18]
        mov    dword ptr [ebp - 0xb4], ebx
        mov    dword ptr [ebp - 0x3c], ecx
L_e8c4:
        inc    eax
        xor    ecx, ecx
        cmp    eax, edx
        mov    edx, dword ptr [ebp - 0x38]
        setge    cl
        mov    dword ptr [ebp - 0x28], eax
        dec    ecx
        and    ecx, eax
        mov    eax, dword ptr [ebp - 0xb0]
        mov    eax, dword ptr [eax]
        test    edx, eax
        mov    dword ptr [ebp + 0x18], ecx
        mov    dword ptr [g_007b98a8], eax
        jne    L_e9f7
        mov    ecx, dword ptr [ebp - 0x74]
        mov    edx, dword ptr [esi - 8]
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
        mov    edx, dword ptr [ebp - 0xb0]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x80]
        mov    dword ptr [edi + ecx*4], edx
        mov    edx, dword ptr [ebp - 0x88]
        mov    edi, dword ptr [ebx - 0xc]
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [ebx - 8]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [ebp - 0x3c]
        mov    edi, dword ptr [edi + esi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [ebx]
        mov    dword ptr [eax + edx + 0xc], edi
        mov    edx, dword ptr [ebp - 0x70]
        mov    edi, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x84]
        mov    dword ptr [eax + ecx*8], edi
        mov    edx, dword ptr [edx + 4]
        mov    dword ptr [eax + ecx*8 + 4], edx
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_e9af
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0xc], edx
        mov    dword ptr [ebp - 0x24], eax
L_e97e:
        mov    edi, dword ptr [ebp + 8]
        test    edx, edi
        je    L_e99c
        mov    edx, dword ptr [ebp + eax - 0x48]
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp + eax - 0x7c]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    edx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0x24]
L_e99c:
        mov    edi, dword ptr [ebp + 8]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp + 8], edi
        jl    L_e97e
L_e9af:
        mov    eax, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0x4c]
        mov    edx, dword ptr [ebp - 0x38]
        mov    edi, dword ptr [ecx + eax*4]
        inc    word ptr [ebp - 0x74]
        test    edi, edx
        je    L_ef4a
        mov    edi, eax
        mov    eax, dword ptr [ebp - 0x30]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_ea97
        mov    ecx, dword ptr [ebp - 0x5c]
        jmp    dword ptr [ecx*4 + 0x44fa58]
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x58]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        jmp    L_ea53
L_e9f7:
        mov    eax, dword ptr [ebp - 0x4c]
        test    dword ptr [eax + ecx*4], edx
        jne    L_ef55
        mov    edi, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp - 0x30]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_ecc2
        mov    eax, dword ptr [ebp - 0x5c]
        jmp    dword ptr [eax*4 + 0x44fa70]
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_ec7e
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 4]
        jmp    L_ea53
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x58]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
L_ea53:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_eab5
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_eac2
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi + edx]
        jmp    L_ea53
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [esi]
        fld    dword ptr [edi + edx + 8]
        jmp    L_ea53
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x58]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        jmp    L_ea53
L_ea97:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_eaa9
        int 3    
L_eaa9:
        mov    edx, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 4], 0
        jmp    L_eac2
L_eab5:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_eac2:
        fld    dword ptr [edi + edx]
        mov    ecx, dword ptr [ebp - 0x74]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0x8c]
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
        mov    edx, dword ptr [ebp - 0x30]
        cmp    dword ptr [edx + 4], 0
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_eb29
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_eb2f
L_eb29:
        fld    dword ptr [g_007b220c]
L_eb2f:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x88]
        fsub    dword ptr [ebx - 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 0xc]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edi + edx + 4]
        mov    edx, dword ptr [ebp - 0x88]
        fsub    dword ptr [ebx - 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 8]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edi + edx + 8]
        mov    edx, dword ptr [ebp - 0x3c]
        fsub    dword ptr [edx + esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x88]
        fstp    dword ptr [ecx + edx + 8]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x88]
        fsub    dword ptr [ebx]
        mov    edi, dword ptr [ebp - 0x84]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp + 8]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    edx, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0x50]
        fld    dword ptr [ecx + edx*8]
        mov    ecx, dword ptr [ebp - 0x70]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x50]
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
        jbe    L_eea3
        mov    edi, ecx
        and    edi, 0xff
        mov    dword ptr [ebp - 0x24], 1
        mov    dword ptr [ebp - 0xc], edi
        xor    ecx, ecx
L_ebf5:
        mov    ebx, dword ptr [ebp - 0x24]
        test    edi, ebx
        je    L_ec4d
        mov    edi, dword ptr [ebp + ecx - 0x48]
        mov    ebx, dword ptr [ebp - 0x10]
        mov    bl, byte ptr [edi + ebx]
        mov    byte ptr [ebp - 0xc0], bl
        mov    ebx, dword ptr [ebp - 0xc0]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x64], ebx
        xor    ebx, ebx
        mov    bl, byte ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x64]
        mov    edi, dword ptr [ebp + 8]
        sub    ebx, edx
        mov    edx, dword ptr [ebp + ecx - 0x7c]
        mov    dword ptr [ebp - 0x20], ebx
        fild    dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x64]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x20]
        mov    bl, byte ptr [ebp - 0x20]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp + 0x18]
        mov    edi, dword ptr [ebp - 0xc]
L_ec4d:
        mov    ebx, dword ptr [ebp - 0x24]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 0x24], ebx
        jl    L_ebf5
        jmp    L_eea3
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [edi + edx + 4]
        fld    dword ptr [esi - 4]
        jmp    L_ec7e
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_ec7e:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_ece0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_eced
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [edi + edx]
        fld    dword ptr [esi - 8]
        jmp    L_ec7e
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [edi + edx + 8]
        fld    dword ptr [esi]
        jmp    L_ec7e
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_ec7e
L_ecc2:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_ecd4
        int 3    
L_ecd4:
        mov    edx, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 4], 0
        jmp    L_eced
L_ece0:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_eced:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x74]
        fsub    dword ptr [edi + edx]
        mov    eax, dword ptr [ebp - 0x8c]
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
        mov    edx, dword ptr [ebp - 0x58]
        lea    edx, [edi + edx + 8]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x58]
        lea    edx, [edi + edx + 0xc]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x30]
        cmp    dword ptr [edx + 4], 0
        fstp    dword ptr [eax + 0xc]
        je    L_ed5e
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_ed64
L_ed5e:
        fld    dword ptr [g_007b220c]
L_ed64:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [ebx - 0xc]
        fsub    dword ptr [edi + edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x88]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [ebx - 8]
        lea    edx, [edi + edx + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x88]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x54]
        lea    edx, [edi + edx + 8]
        mov    dword ptr [ebp - 0x20], edx
        mov    edx, dword ptr [ebp - 0x3c]
        fld    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x20]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x88]
        fstp    dword ptr [ecx + edx + 8]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [ebx]
        lea    edi, [edi + edx + 0xc]
        fsub    dword ptr [edi]
        mov    edx, dword ptr [ebp - 0x88]
        mov    ebx, dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        mov    edi, dword ptr [ebp - 0x84]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    ecx, dword ptr [ebp - 0x70]
        fld    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x50]
        mov    edx, dword ptr [ebp + 0x18]
        fsub    dword ptr [ecx + edx*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + edx*8]
        lea    ecx, [ecx + edx*8 + 4]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x70]
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
        jbe    L_eea3
        and    ecx, 0xff
        xor    edi, edi
        mov    dword ptr [ebp - 0x24], 1
        mov    dword ptr [ebp - 0xc], ecx
        mov    dword ptr [ebp + 0x18], edi
L_ee37:
        mov    ebx, dword ptr [ebp - 0x24]
        test    ecx, ebx
        je    L_ee90
        mov    edi, dword ptr [ebp + edi - 0x48]
        mov    cl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x10]
        mov    byte ptr [ebp - 0xa4], cl
        mov    ecx, dword ptr [ebp - 0xa4]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x64], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edi + ebx]
        sub    ecx, dword ptr [ebp - 0x64]
        mov    edi, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x20], ecx
        fild    dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp + ecx - 0x7c]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x64]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x20]
        mov    bl, byte ptr [ebp - 0x20]
        mov    byte ptr [ecx + edi], bl
        mov    edi, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0xc]
L_ee90:
        mov    ebx, dword ptr [ebp - 0x24]
        add    edi, 4
        shl    ebx, 1
        cmp    edi, 8
        mov    dword ptr [ebp + 0x18], edi
        mov    dword ptr [ebp - 0x24], ebx
        jl    L_ee37
L_eea3:
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebp + 0x18], 0
        mov    edi, dword ptr [ebp - 0x20]
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
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp - 0x80]
        inc    word ptr [ebp - 0x74]
        mov    ebx, dword ptr [ebp - 0xb4]
        mov    edi, dword ptr [ebp - 0x8c]
        mov    dword ptr [eax + ecx*4], edx
        mov    ecx, dword ptr [ebp - 0x60]
        jmp    L_ef58
L_ef4a:
        mov    ecx, dword ptr [ebp - 0x60]
        mov    edi, dword ptr [ebp - 0x8c]
        jmp    L_ef58
L_ef55:
        mov    ecx, dword ptr [ebp - 0x60]
L_ef58:
        mov    edx, dword ptr [ebp - 0xb0]
        mov    eax, dword ptr [ebp - 0x28]
        add    edx, 4
        mov    dword ptr [ebp - 0xb0], edx
        add    dword ptr [ebp - 0x70], 8
        mov    edx, dword ptr [ebp - 0x18]
        add    ebx, 0x10
        add    esi, 0x10
        cmp    eax, edx
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0xb4], ebx
        jl    L_e8c4
L_ef88:
        mov    eax, dword ptr [g_007da66c]
        lea    edx, [ecx + ecx*2]
        shl    edx, 4
        add    eax, edx
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0x58], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x54], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x50], edx
        mov    edx, dword ptr [ebp - 8]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + 0x13]
        test    bl, bl
        mov    dword ptr [ebp - 0x4c], eax
        jbe    L_effc
        mov    edx, ebx
        xor    eax, eax
        and    edx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0xc], edx
        lea    esi, [ebp - 0x48]
L_efcf:
        mov    edi, dword ptr [ebp + 8]
        test    edx, edi
        je    L_efeb
        mov    edi, dword ptr [g_007da66c]
        lea    edx, [ecx + ecx*2]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [edi + edx*8 + 0x20]
        mov    dword ptr [esi], edx
        mov    edx, dword ptr [ebp - 0xc]
L_efeb:
        mov    edi, dword ptr [ebp + 8]
        inc    eax
        shl    edi, 1
        add    esi, 4
        cmp    eax, 2
        mov    dword ptr [ebp + 8], edi
        jl    L_efcf
L_effc:
        mov    ax, word ptr [ebp - 0x74]
        xor    edx, edx
        test    ecx, ecx
        sete    dl
        mov    word ptr [ebp - 0x40], ax
        mov    ecx, edx
        mov    edx, dword ptr [g_007da66c]
        lea    eax, [ecx + ecx*2]
        shl    eax, 4
        mov    edi, dword ptr [eax + edx]
        add    eax, edx
        test    bl, bl
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x88], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x60], ecx
        mov    dword ptr [ebp - 0x8c], edi
        mov    dword ptr [ebp - 0x84], edx
        mov    dword ptr [ebp - 0x80], eax
        jbe    L_f080
        xor    eax, eax
        and    ebx, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0xc], ebx
        lea    esi, [ebp - 0x7c]
L_f056:
        test    ebx, edx
        je    L_f075
        mov    ebx, dword ptr [g_007da66c]
        lea    edi, [ecx + ecx*2]
        lea    edi, [eax + edi*2]
        mov    edi, dword ptr [ebx + edi*8 + 0x20]
        mov    ebx, dword ptr [ebp - 0xc]
        mov    dword ptr [esi], edi
        mov    edi, dword ptr [ebp - 0x8c]
L_f075:
        inc    eax
        add    esi, 4
        shl    edx, 1
        cmp    eax, 2
        jl    L_f056
L_f080:
        mov    ebx, dword ptr [ebp - 0x40]
        mov    word ptr [ebp - 0x74], 0
L_f089:
        mov    eax, dword ptr [ebp - 0x38]
        mov    esi, dword ptr [ebp - 0x5c]
        mov    edx, dword ptr [ebp - 0x30]
        shl    eax, 1
        mov    dword ptr [ebp - 0x38], eax
        mov    eax, dword ptr [ebp - 0x68]
        inc    esi
        add    edx, 8
        dec    eax
        mov    dword ptr [ebp - 0x5c], esi
        mov    dword ptr [ebp - 0x30], edx
        mov    dword ptr [ebp - 0x68], eax
        jne    L_e876
        mov    esi, ebx
        xor    eax, eax
        and    esi, 0xffff
        jle    L_f0c5
        mov    edx, dword ptr [ebp - 0x4c]
L_f0bd:
        or    eax, dword ptr [edx]
        add    edx, 4
        dec    esi
        jne    L_f0bd
L_f0c5:
        test    eax, eax
        mov    dword ptr [g_007b98ac], eax
        je    L_f0f7
        mov    edx, dword ptr [ebp - 0x34]
        mov    esi, edx
        dec    edx
        test    esi, esi
        mov    dword ptr [ebp - 0x34], edx
        jne    L_e861
        test    eax, eax
        je    L_f0f7
        mov    ecx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    byte ptr [edx + eax], 0
        jmp    L_f390
L_f0f7:
        mov    eax, dword ptr [ebp - 0x40]
        xor    edx, edx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x18], eax
        jle    L_f33f
        mov    eax, dword ptr [ebp - 0x54]
        mov    ecx, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp - 0x24], eax
        mov    eax, dword ptr [ebp - 0x98]
        mov    dword ptr [ebp - 0x60], ecx
        lea    ecx, [eax*8]
        mov    dword ptr [ebp - 0x5c], ecx
        lea    ecx, [eax*4]
        shl    eax, 4
        mov    dword ptr [ebp - 0x3c], eax
        mov    eax, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0x28], ecx
        lea    edi, [eax + 8]
L_f13c:
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
        mov    eax, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp + 8], eax
        fld    dword ptr [g_0076e93c]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xac]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xac]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xa0], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xac]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xac]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xa0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xa0], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xac]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xac]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xa0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xa0], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xac]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xac]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xa0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xa0], ecx
        mov    ecx, dword ptr [g_007da608]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0xa0]
        mov    esi, dword ptr [ebp - 0x28]
        mov    dword ptr [esi + eax], ecx
        mov    eax, dword ptr [g_007da680]
        mov    esi, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x5c]
        mov    eax, dword ptr [ebp - 0x60]
        add    ecx, esi
        mov    esi, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ecx], esi
        mov    dword ptr [ecx + 4], eax
        mov    ecx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        jbe    L_f2fe
        and    eax, 0xff
        lea    esi, [ebp - 0x48]
        mov    dword ptr [ebp + 0x18], 1
        mov    dword ptr [ebp - 0xc], eax
        mov    ecx, 0x7da660
        mov    dword ptr [ebp + 8], esi
L_f2c6:
        mov    esi, dword ptr [ebp + 0x18]
        test    eax, esi
        je    L_f2e7
        mov    esi, dword ptr [ecx]
        mov    ebx, dword ptr [esi]
        mov    eax, dword ptr [ebp + 8]
        mov    eax, dword ptr [eax]
        mov    esi, dword ptr [ebp - 0x98]
        mov    al, byte ptr [eax + edx]
        add    esi, edx
        mov    byte ptr [ebx + esi], al
        mov    eax, dword ptr [ebp - 0xc]
L_f2e7:
        add    dword ptr [ebp + 8], 4
        mov    ebx, dword ptr [ebp + 0x18]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp + 0x18], ebx
        jl    L_f2c6
L_f2fe:
        mov    ebx, dword ptr [ebp - 0x28]
        mov    esi, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x60]
        add    ebx, 4
        mov    eax, 0x10
        add    esi, eax
        mov    dword ptr [ebp - 0x28], ebx
        mov    ebx, dword ptr [ebp - 0x24]
        add    ebx, eax
        add    edi, eax
        mov    dword ptr [ebp - 0x3c], esi
        mov    esi, dword ptr [ebp - 0x5c]
        mov    eax, 8
        add    esi, eax
        add    ecx, eax
        mov    eax, dword ptr [ebp - 0x18]
        inc    edx
        cmp    edx, eax
        mov    dword ptr [ebp - 0x24], ebx
        mov    dword ptr [ebp - 0x5c], esi
        mov    dword ptr [ebp - 0x60], ecx
        jl    L_f13c
L_f33f:
        mov    ecx, dword ptr [ebp - 0x40]
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x40]
        mov    dword ptr [ebp - 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x6c]
L_f354:
        mov    word ptr [eax + ecx*2], dx
        mov    eax, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ebp - 0x98]
        mov    ecx, dword ptr [ebp - 0x6c]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0x90]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x90], eax
        mov    eax, dword ptr [g_007d98fc]
        mov    dword ptr [ebp - 0x98], edx
        mov    edx, dword ptr [ebp - 0x1c]
        mov    dword ptr [ebp - 0x6c], ecx
        mov    ecx, dword ptr [eax]
        mov    byte ptr [ecx + edx], 0
L_f390:
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x58]
        add    edi, 3
        inc    eax
        cmp    eax, edx
        mov    dword ptr [ebp - 0x14], edi
        mov    dword ptr [ebp - 0x1c], eax
        jl    L_d9ad
L_f3ae:
        mov    bl, byte ptr [ebp + 0x1c]
        test    bl, bl
        je    L_f3bd
        mov    edx, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [edx + 0x30]
        jmp    L_f3cc
L_f3bd:
        mov    eax, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 0x10]
        shl    ecx, 5
        add    ecx, edx
        mov    edx, eax
L_f3cc:
        mov    eax, dword ptr [ebp - 8]
        xor    esi, esi
        test    bl, bl
        mov    dword ptr [eax + 0x44], ecx
        mov    word ptr [eax + 0xa], si
        je    L_f3e1
        mov    ecx, dword ptr [edx + 0x48]
        jmp    L_f3ea
L_f3e1:
        mov    ecx, dword ptr [edx + 0xc]
        mov    edx, dword ptr [edx + 0x28]
        lea    ecx, [edx + ecx*2]
L_f3ea:
        mov    dword ptr [eax + 0x50], ecx
        mov    word ptr [eax + 0x54], si
        mov    edx, dword ptr [eax + 0x18]
        xor    ecx, ecx
        cmp    edx, esi
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp - 0x14], ecx
        mov    dword ptr [ebp + 8], esi
        jle    L_f55e
L_f407:
        mov    esi, dword ptr [g_007da600]
        mov    esi, dword ptr [esi]
        cmp    byte ptr [esi + ecx], 0
        jne    L_f41d
        inc    dword ptr [ebp + 8]
        jmp    L_f552
L_f41d:
        mov    eax, dword ptr [ebp - 0x14]
        mov    esi, dword ptr [ebp + 8]
        mov    ebx, dword ptr [ebp - 8]
        mov    edx, dword ptr [g_007da5f4]
        mov    ecx, eax
        sub    ecx, esi
        mov    word ptr [edx + eax*2], cx
        mov    eax, dword ptr [ebx + 0x1c]
        mov    ecx, dword ptr [ebx + 0x6c]
        mov    edx, dword ptr [ecx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x20], eax
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xa4], ecx
        mov    ecx, dword ptr [ebx + 0x44]
        mov    dword ptr [ebp + 0x18], edx
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0xac], esi
        mov    ecx, dword ptr [ebp - 0xa4]
        fld1    
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0xac]
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
        je    L_f4c9
        mov    edx, eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [edx + eax*4]
        jmp    L_f4d2
L_f4c9:
        mov    ecx, dword ptr [g_007b94a0]
        mov    eax, dword ptr [ebp - 0x14]
L_f4d2:
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ecx + eax*8]
        mov    dword ptr [esi + 0x18], edx
        mov    ecx, dword ptr [ecx + eax*8 + 4]
        mov    dword ptr [esi + 0x1c], ecx
        test    byte ptr [ebx + 0x13], 1
        je    L_f506
        mov    edx, dword ptr [g_007da65c]
        mov    ecx, dword ptr [edx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    al, byte ptr [ecx + eax]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x17], al
L_f506:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_f545
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xa8]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x94]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        fstp    dword ptr [eax]
L_f545:
        inc    word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 8]
L_f552:
        inc    ecx
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x14], ecx
        jl    L_f407
L_f55e:
        mov    esi, dword ptr [eax + 0x58]
        xor    edx, edx
        xor    ecx, ecx
        test    esi, esi
        mov    dword ptr [ebp - 0x1c], edx
        jle    L_f5f9
L_f570:
        mov    esi, dword ptr [g_007d98fc]
        mov    esi, dword ptr [esi]
        cmp    byte ptr [esi + edx], 0
        je    L_f5e7
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
        mov    edx, dword ptr [ebp - 0x1c]
L_f5e7:
        mov    esi, dword ptr [eax + 0x58]
        add    ecx, 3
        inc    edx
        cmp    edx, esi
        mov    dword ptr [ebp - 0x1c], edx
        jl    L_f570
L_f5f9:
        mov    eax, dword ptr [ebp - 0x6c]
        test    eax, eax
        jle    L_f997
        xor    ecx, ecx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0x14], ecx
        jle    L_f997
L_f614:
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    ax, word ptr [ecx + edx*2]
        mov    dword ptr [ebp - 0x10], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0xa0], eax
        dec    eax
        cmp    eax, 1
        jle    L_f977
        mov    eax, dword ptr [ebp - 0x14]
        mov    ebx, dword ptr [ebp - 8]
        lea    ecx, [eax*8 + 8]
        lea    edx, [eax*4 + 4]
        mov    dword ptr [ebp + 0x18], ecx
        mov    dword ptr [ebp + 8], edx
L_f658:
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da608]
        mov    eax, dword ptr [edx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0xb8], ecx
        mov    ecx, dword ptr [g_007da684]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    dword ptr [ebp - 0xbc], eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 0xc0], edx
        lea    edx, [ecx + eax]
        lea    eax, [ecx + eax + 1]
        mov    ecx, dword ptr [ebx + 0x44]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0xac], edx
        mov    dword ptr [ebp - 0xa4], eax
        mov    dword ptr [ebp - 0x20], esi
        mov    ecx, dword ptr [ebp - 0xc0]
        fld1    
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x20]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0xa4]
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
        mov    eax, dword ptr [ebp - 0xac]
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
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [eax + ecx*4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], edx
        mov    edx, dword ptr [ebp + 8]
        mov    edi, dword ptr [eax + edx + 4]
        fstp    dword ptr [esi]
        mov    eax, dword ptr [eax + edx]
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x50], eax
        fmul    dword ptr [esi + 4]
        mov    eax, dword ptr [ebp - 0xb8]
        mov    edx, dword ptr [eax + ecx*8]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        fadd    dword ptr [g_007da870]
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi + 0x1c], ecx
        mov    ecx, dword ptr [ebp + 0x18]
        fstp    dword ptr [esi + 4]
        mov    edx, dword ptr [eax + ecx + 8]
        fld    dword ptr [g_007da87c]
        mov    dword ptr [esi + 0x38], edx
        fmul    dword ptr [esi + 0x20]
        mov    edx, dword ptr [eax + ecx + 0xc]
        mov    dword ptr [esi + 0x3c], edx
        mov    edx, dword ptr [eax + ecx]
        fadd    dword ptr [g_007da874]
        mov    eax, dword ptr [eax + ecx + 4]
        mov    dword ptr [esi + 0x5c], eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, 1
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
        je    L_f859
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0x14]
        mov    dl, byte ptr [edx + esi]
        mov    ecx, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        mov    byte ptr [eax + ecx + 0x17], dl
        mov    edx, dword ptr [g_007da660]
        mov    edi, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x10]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, ecx
        add    eax, edi
        mov    al, byte ptr [eax + esi + 1]
        mov    edi, dword ptr [ebx + 0x44]
        shl    edx, 5
        mov    byte ptr [edx + edi + 0x37], al
        mov    eax, dword ptr [g_007da660]
        mov    edi, dword ptr [eax]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, ecx
        add    edx, edi
        mov    edi, dword ptr [ebx + 0x44]
        mov    dl, byte ptr [edx + esi]
        shl    eax, 5
        mov    byte ptr [eax + edi + 0x57], dl
        jmp    L_f85c
L_f859:
        mov    ecx, dword ptr [ebp - 0x10]
L_f85c:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_f90f
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xa8]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + edx + 0x18]
        lea    eax, [eax + edx + 0x18]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x94]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + edx + 0x1c]
        lea    eax, [eax + edx + 0x1c]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xa8]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + edx + 0x38]
        lea    eax, [eax + edx + 0x38]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x94]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + edx + 0x3c]
        lea    eax, [eax + edx + 0x3c]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xa8]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + edx + 0x58]
        lea    eax, [eax + edx + 0x58]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x94]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + edx + 0x5c]
        lea    eax, [eax + edx + 0x5c]
        fstp    dword ptr [eax]
L_f90f:
        mov    si, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0x54]
        add    dword ptr [ebp + 8], 4
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
        mov    esi, dword ptr [ebp + 0x18]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        mov    eax, dword ptr [ebp - 0xa0]
        inc    ecx
        add    esi, 8
        dec    eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x10], ecx
        mov    dword ptr [ebp + 0x18], esi
        jl    L_f658
L_f977:
        mov    ecx, dword ptr [ebp - 0xa0]
        mov    esi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x1c]
        add    esi, ecx
        mov    ecx, dword ptr [ebp - 0x6c]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x14], esi
        mov    dword ptr [ebp - 0x1c], eax
        jl    L_f614
L_f997:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_f9d8
        mov    ecx, dword ptr [ebp - 8]
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
        mov    eax, dword ptr [ebp - 0x90]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_f9d8:
        mov    ecx, dword ptr [ebp - 8]
        cmp    word ptr [ecx + 0xa], 0
        setne    al
        mov    byte ptr [ecx + 0x10], al
        mov    eax, dword ptr [ebp - 0x90]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_f9f5:
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
        mov    ecx, esi
        call    FUN_00459210
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x0044FA28 (6 relocated pointers)
        __emit 0x29
        __emit 0xDC
        __emit 0x44
        __emit 0x00
        __emit 0x58
        __emit 0xDC
        __emit 0x44
        __emit 0x00
        __emit 0x60
        __emit 0xDC
        __emit 0x44
        __emit 0x00
        __emit 0x6C
        __emit 0xDC
        __emit 0x44
        __emit 0x00
        __emit 0x72
        __emit 0xDC
        __emit 0x44
        __emit 0x00
        __emit 0x7A
        __emit 0xDC
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x0044FA40 (6 relocated pointers)
        __emit 0xCE
        __emit 0xDC
        __emit 0x44
        __emit 0x00
        __emit 0xF6
        __emit 0xDC
        __emit 0x44
        __emit 0x00
        __emit 0xFE
        __emit 0xDC
        __emit 0x44
        __emit 0x00
        __emit 0x0A
        __emit 0xDD
        __emit 0x44
        __emit 0x00
        __emit 0x10
        __emit 0xDD
        __emit 0x44
        __emit 0x00
        __emit 0x18
        __emit 0xDD
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x0044FA58 (6 relocated pointers)
        __emit 0xE4
        __emit 0xE9
        __emit 0x44
        __emit 0x00
        __emit 0x37
        __emit 0xEA
        __emit 0x44
        __emit 0x00
        __emit 0x43
        __emit 0xEA
        __emit 0x44
        __emit 0x00
        __emit 0x6F
        __emit 0xEA
        __emit 0x44
        __emit 0x00
        __emit 0x7A
        __emit 0xEA
        __emit 0x44
        __emit 0x00
        __emit 0x85
        __emit 0xEA
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x0044FA70 (14 relocated pointers)
        __emit 0x21
        __emit 0xEA
        __emit 0x44
        __emit 0x00
        __emit 0x62
        __emit 0xEC
        __emit 0x44
        __emit 0x00
        __emit 0x6E
        __emit 0xEC
        __emit 0x44
        __emit 0x00
        __emit 0x9A
        __emit 0xEC
        __emit 0x44
        __emit 0x00
        __emit 0xA5
        __emit 0xEC
        __emit 0x44
        __emit 0x00
        __emit 0xB0
        __emit 0xEC
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
        __emit 0x64
        __emit 0x56
        __emit 0x89
        __emit 0x5D
        __emit 0xFC
        __emit 0x89
        __emit 0x7B
    }
}
