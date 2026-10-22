/*
 * FUN_0044b5d0 (extent 0x44b5d0-0x44cd14) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076d3c8;
extern float  g_0076d5f0;
extern float  g_0076d5f4;
extern float  g_0076df00;
extern float  g_0076e22c;
extern float  g_0076e824;
extern float  g_007b220c;
extern int    g_007b2220;
extern int    g_007b95ec;
extern int    g_007b95f0;
extern int    g_007b95f4;
extern int    g_007b95f8;
extern int    g_007b95fc;
extern int    g_007b9600;
extern char   g_007b9608;
extern int    g_007b960c;
extern int    g_007d98fc;
extern int    g_007da5dc;
extern int    g_007da5e0;
extern float  g_007da864;
extern float  g_007da868;
extern int    g_008bd548;
extern int    g_008bd54c;
extern int    g_008bd550;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c610(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_004286c0(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_00428810(void);
extern void __cdecl FUN_00428830(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_00430670(void);
extern void __cdecl FUN_004306f0(void);
extern void __cdecl FUN_00430740(void);
extern void __cdecl FUN_0047cfe0(void);
extern void __cdecl FUN_00482220(void);
extern void __cdecl FUN_00491340(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0044b5d0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0xe8
        push    ebx
        push    esi
        mov    esi, dword ptr [ebp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x1c]
        xor    ebx, ebx
        cmp    eax, ebx
        mov    dword ptr [ebp - 0x78], eax
        je    L_cd0a
        cmp    dword ptr [g_007b2220], ebx
        je    L_cd0a
        cmp    byte ptr [g_007b9608], 1
        je    L_cd0a
        mov    ecx, dword ptr [edi + 0x58]
        mov    dword ptr [ebp - 0x70], ecx
        push    0x7b9460
        lea    ecx, [ebp - 0xe8]
        call    FUN_00428850
        fild    dword ptr [g_007da864]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        fmul    dword ptr [g_007da868]
        mov    dword ptr [ebp - 0x18], 0x3f800000
        mov    byte ptr [ebp - 0xc], bl
        mov    byte ptr [ebp - 0x10], bl
        fstp    dword ptr [ebp - 0x2c]
        call    dword ptr [edx + 0xc]
        add    eax, -3
        cmp    eax, 4
        ja    L_cbee
        jmp    dword ptr [eax*4 + 0x44cd14]
        lea    eax, [esi + 0x48]
        push    eax
        lea    ecx, [ebp - 0x5c]
        call    FUN_00419480
        lea    ecx, [ebp - 0x14]
        push    ecx
        lea    edx, [ebp - 0x24]
        push    edx
        mov    ecx, esi
        call    FUN_00482220
        fld    dword ptr [g_0076d070]
        fdiv    dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebp - 0x70]
        xor    eax, eax
        cmp    ecx, ebx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x20], ebx
        fstp    dword ptr [ebp - 0x44]
        jle    L_cd0a
        mov    dword ptr [ebp - 0x3c], ebx
L_b697:
        mov    ecx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [ecx]
        cmp    byte ptr [edx + eax], 0
        je    L_bae5
        mov    edx, dword ptr [ebp - 0x3c]
        mov    esi, dword ptr [edi + 0x5c]
        add    esi, edx
        lea    eax, [ebp - 0x5c]
        push    eax
        mov    ecx, esi
        call    FUN_0040c610
        fsub    dword ptr [esi + 0xc]
        mov    esi, dword ptr [edi + 0x48]
        mov    eax, dword ptr [ebp - 0x20]
        xor    ebx, ebx
        fstp    dword ptr [ebp - 0x14]
        mov    byte ptr [ebp - 1], 0
        mov    dword ptr [ebp - 8], ebx
        add    esi, eax
L_b6d3:
        xor    eax, eax
        mov    al, byte ptr [esi]
        lea    ecx, [eax + eax*2]
        mov    eax, dword ptr [edi + 0x14]
        mov    edx, dword ptr [eax + ecx*4]
        lea    eax, [eax + ecx*4]
        mov    dword ptr [ebp - 0x50], edx
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x4c], ecx
        mov    edx, dword ptr [eax + 8]
        lea    eax, [ebp - 0x5c]
        push    eax
        lea    ecx, [ebp - 0x50]
        push    ecx
        lea    ecx, [ebp - 0x50]
        mov    dword ptr [ebp - 0x48], edx
        call    FUN_0040ca10
        fld    dword ptr [ebp - 0x50]
        fmul    dword ptr [ebp - 0x44]
        mov    edx, dword ptr [g_007da5e0]
        mov    eax, dword ptr [edx]
        lea    ecx, [ebx + eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [ebp - 0x48]
        fmul    dword ptr [ebp - 0x44]
        fstp    dword ptr [ebp - 0x18]
        mov    eax, dword ptr [ebp - 0x18]
        mov    dword ptr [ecx + 4], eax
        fld    dword ptr [ecx]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_b766
        fld    dword ptr [ecx]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_b766
        fld    dword ptr [ebp - 0x18]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_b766
        fld    dword ptr [ebp - 0x18]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_b766
        mov    byte ptr [ebp - 1], 1
L_b766:
        fld    dword ptr [ebp - 0x2c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b7b3
        fld    dword ptr [ebp - 0x2c]
        fchs    
        fstp    dword ptr [ebp - 0x34]
        fld    dword ptr [ecx]
        fcomp    dword ptr [ebp - 0x34]
        fnstsw  ax
        test    ah, 1
        jne    L_b7b0
        fld    dword ptr [ecx]
        fcomp    dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 0x41
        je    L_b7b0
        fld    dword ptr [ebp - 0x18]
        fcomp    dword ptr [ebp - 0x34]
        fnstsw  ax
        test    ah, 1
        jne    L_b7b0
        fld    dword ptr [ebp - 0x18]
        fcomp    dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b7b3
L_b7b0:
        inc    dword ptr [ebp - 8]
L_b7b3:
        add    ebx, 8
        inc    esi
        cmp    ebx, 0x18
        jl    L_b6d3
        mov    eax, dword ptr [ebp - 8]
        test    eax, eax
        jne    L_bae2
        cmp    byte ptr [ebp - 1], 1
        je    L_b7e4
        push    3
        push    edx
        call    FUN_0047cfe0
        add    esp, 8
        cmp    al, 1
        jne    L_bae2
L_b7e4:
        mov    eax, dword ptr [ebp + 8]
        fld    dword ptr [eax + 8]
        add    eax, 0xc
        fstp    dword ptr [ebp - 0x18]
        push    eax
        lea    ecx, [ebp - 0x6c]
        mov    dword ptr [ebp - 0x64], 0xbf800000
        mov    dword ptr [ebp - 0x68], 0xbf800000
        mov    dword ptr [ebp - 0x6c], 0xbf800000
        mov    dword ptr [ebp - 0x60], 0xbf800000
        call    FUN_004286c0
        fld    dword ptr [ebp - 0x6c]
        fmul    dword ptr [ebp - 0x18]
        mov    eax, dword ptr [g_007b95fc]
        mov    dword ptr [ebp - 0x60], 0x3f800000
        mov    dword ptr [ebp - 8], 0
        fstp    dword ptr [ebp - 0x6c]
        fld    dword ptr [ebp - 0x68]
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x68]
        fld    dword ptr [ebp - 0x64]
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x64]
L_b843:
        mov    ecx, dword ptr [ebp - 8]
        mov    bl, byte ptr [ebp - 0x10]
        mov    esi, dword ptr [g_007b95f0]
        lea    edx, [ecx*8]
        mov    ecx, dword ptr [g_007da5e0]
        mov    ecx, dword ptr [ecx]
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [ecx]
        fld    dword ptr [ecx + 4]
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp - 0x10]
        and    ecx, 0xff
        inc    bl
        mov    byte ptr [ebp - 0x10], bl
        lea    ebx, [ecx + eax]
        cmp    ebx, dword ptr [esi + 4]
        jae    L_cd0a
        mov    esi, dword ptr [esi]
        add    esi, ecx
        mov    cl, byte ptr [ebp - 0xc]
        mov    byte ptr [esi + eax], cl
        lea    eax, [ebp - 0x6c]
        mov    dword ptr [ebp - 0x28], eax
        fld    dword ptr [g_0076e824]
        mov    esi, dword ptr [ebp - 0x28]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x74]
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
        fstp    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x74]
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
        fstp    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x74]
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
        fstp    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x74]
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
        mov    ecx, dword ptr [g_007da5e0]
        mov    esi, dword ptr [ecx]
        mov    ebx, dword ptr [ebp - 0xc]
        mov    al, byte ptr [ebp - 0xc]
        mov    ecx, dword ptr [g_007b95f8]
        add    esi, edx
        mov    edx, dword ptr [g_007b9600]
        and    ebx, 0xff
        inc    al
        mov    byte ptr [ebp - 0xc], al
        lea    eax, [ebx + edx]
        cmp    eax, dword ptr [ecx + 4]
        mov    dword ptr [ebp - 0x28], eax
        jae    L_cd0a
        mov    edx, dword ptr [edi + 0x48]
        mov    ecx, dword ptr [ebp - 0x20]
        xor    eax, eax
        add    edx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    al, byte ptr [edx + ecx]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [edi + 0x14]
        lea    ecx, [eax + edx*4]
        mov    eax, dword ptr [ebp - 0x28]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [g_007b95f8]
        push    ecx
        mov    ecx, dword ptr [eax]
        lea    ecx, [ecx + edx*4]
        call    FUN_0040c410
        mov    edx, dword ptr [g_007b9600]
        mov    eax, dword ptr [g_007b95f4]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [esi + 4]
        add    ebx, edx
        mov    edx, dword ptr [esi]
        mov    dword ptr [ecx + ebx*8], edx
        mov    dword ptr [ecx + ebx*8 + 4], eax
        mov    ecx, dword ptr [g_007b95ec]
        mov    eax, dword ptr [ebp - 0x30]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [edx + ebx*4], eax
        cmp    byte ptr [ebp - 0x10], 0xfc
        jb    L_bacd
        mov    al, byte ptr [ebp - 0xc]
        xor    bl, bl
        cmp    al, bl
        jbe    L_bacd
        mov    ecx, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ebp - 0xc]
        and    ecx, 0xff
        and    edx, 0xff
        mov    dword ptr [ebp - 0x18], ecx
        mov    ecx, dword ptr [g_007b960c]
        mov    dword ptr [ebp - 0x38], edx
        push    4
        lea    edx, [ebp - 0x28]
        mov    dword ptr [ebp - 0x28], 3
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [edi + 0x30]
        mov    ecx, dword ptr [ebp - 0x78]
        and    eax, 0xf
        inc    eax
        push    eax
        call    FUN_00430740
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        push    4
        push    0x7b9600
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x38]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        push    4
        push    0x7b95fc
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x18]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    esi, dword ptr [g_007b9600]
        mov    edx, dword ptr [ebp - 0x38]
        mov    eax, dword ptr [g_007b95fc]
        mov    ecx, dword ptr [ebp - 0x18]
        add    esi, edx
        add    eax, ecx
        mov    dword ptr [g_007b9600], esi
        mov    dword ptr [g_007b95fc], eax
        mov    byte ptr [ebp - 0x10], bl
        mov    byte ptr [ebp - 0xc], bl
        jmp    L_bad2
L_bacd:
        mov    eax, dword ptr [g_007b95fc]
L_bad2:
        mov    ecx, dword ptr [ebp - 8]
        inc    ecx
        cmp    ecx, 3
        mov    dword ptr [ebp - 8], ecx
        jl    L_b843
L_bae2:
        mov    eax, dword ptr [ebp - 0x1c]
L_bae5:
        mov    esi, dword ptr [ebp - 0x3c]
        mov    edx, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 0x70]
        inc    eax
        add    esi, 0x10
        add    edx, 3
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x3c], esi
        mov    dword ptr [ebp - 0x20], edx
        jge    L_cc0d
        jmp    L_b697
        lea    eax, [esi + 0x48]
        push    eax
        lea    ecx, [ebp - 0xe8]
        call    FUN_00419460
        mov    ecx, dword ptr [ebp - 0xdc]
        mov    edx, dword ptr [ebp - 0xcc]
        mov    eax, dword ptr [ebp - 0xbc]
        mov    dword ptr [ebp - 0x5c], ecx
        mov    ecx, dword ptr [esi + 0x94]
        mov    dword ptr [ebp - 0x58], edx
        lea    edx, [ebp - 0xac]
        mov    dword ptr [ebp - 0x74], ecx
        push    edx
        lea    ecx, [ebp - 0xe8]
        mov    dword ptr [ebp - 0x54], eax
        call    FUN_00428810
        lea    eax, [ebp - 0xa0]
        push    eax
        lea    ecx, [ebp - 0xe8]
        call    FUN_00428830
        lea    ecx, [ebp - 0x84]
        push    ecx
        lea    ecx, [ebp - 0xe8]
        call    FUN_00428730
        mov    ecx, dword ptr [ebp - 0x70]
        xor    eax, eax
        cmp    ecx, ebx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x20], ebx
        jle    L_cd0a
        mov    dword ptr [ebp - 0x44], ebx
L_bb8a:
        mov    edx, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [edx]
        cmp    byte ptr [ecx + eax], 0
        mov    dword ptr [ebp - 0x30], ebx
        mov    dword ptr [ebp - 0x24], ebx
        je    L_c0f1
        mov    ecx, dword ptr [ebp - 0x44]
        mov    esi, dword ptr [edi + 0x5c]
        add    esi, ecx
        lea    edx, [ebp - 0x5c]
        push    edx
        mov    ecx, esi
        mov    byte ptr [ebp - 1], 0
        call    FUN_0040c610
        fcomp    dword ptr [esi + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c0ec
        mov    eax, dword ptr [edi + 0x48]
        mov    ecx, dword ptr [ebp - 0x20]
        xor    ebx, ebx
        add    eax, ecx
        mov    dword ptr [ebp - 8], ebx
        mov    dword ptr [ebp - 0x14], ebx
        mov    dword ptr [ebp - 0x38], eax
L_bbda:
        mov    ecx, dword ptr [ebp - 0x38]
        xor    eax, eax
        mov    al, byte ptr [ecx]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [edi + 0x14]
        fld    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fsub    dword ptr [ebp - 0x5c]
        fstp    dword ptr [ebp - 0x50]
        fld    dword ptr [eax + 4]
        fsub    dword ptr [ebp - 0x58]
        fstp    dword ptr [ebp - 0x4c]
        fld    dword ptr [eax + 8]
        fsub    dword ptr [ebp - 0x54]
        fstp    dword ptr [ebp - 0x48]
        fld    dword ptr [ebp - 0x7c]
        fmul    dword ptr [ebp - 0x48]
        fld    dword ptr [ebp - 0x80]
        fmul    dword ptr [ebp - 0x4c]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x84]
        fmul    dword ptr [ebp - 0x50]
        faddp st(1), st(0)
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_bca8
        mov    ecx, dword ptr [ebp + 8]
        fld    st(0)
        fcomp    dword ptr [ecx + 0x80]
        fnstsw  ax
        test    ah, 0x41
        je    L_bc46
        mov    dword ptr [ebp - 0x18], 0x3f800000
        jmp    L_bc69
L_bc46:
        fcom    dword ptr [ecx + 0x84]
        fnstsw  ax
        test    ah, 1
        je    L_bc66
        fld    dword ptr [ecx + 0x84]
        fsub st(0), st(1)
        fmul    dword ptr [ecx + 0x88]
        fstp    dword ptr [ebp - 0x18]
        jmp    L_bc69
L_bc66:
        inc    dword ptr [ebp - 0x24]
L_bc69:
        fld    dword ptr [ecx + 8]
        mov    eax, dword ptr [g_007da5dc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x18]
        mov    eax, 0x7f000000
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [edx + ecx]
        fmul    dword ptr [ebp - 0x74]
        fadd    st(0), st(0)
        fstp    dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x3c]
        sub    eax, ecx
        mov    dword ptr [ebp - 0x34], eax
        fld    dword ptr [ebp - 0x34]
        fmul    dword ptr [ebp - 0x3c]
        fsubr    dword ptr [g_0076d5f0]
        fmul    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0x3c]
        jmp    L_bcca
L_bca8:
        mov    eax, dword ptr [ebp - 0x30]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    ecx, dword ptr [g_007da5dc]
        mov    edx, dword ptr [ecx]
        inc    eax
        mov    dword ptr [ebp - 0x30], eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 0x3c], 0x3ca3d70a
        mov    dword ptr [eax + edx], 0
L_bcca:
        mov    ecx, dword ptr [g_007da5e0]
        mov    edx, dword ptr [ecx]
        mov    esi, ebx
        add    esi, edx
        lea    edx, [ebp - 0x50]
        push    edx
        lea    ecx, [ebp - 0xac]
        call    FUN_0040c610
        mov    eax, dword ptr [g_007da5e0]
        mov    ecx, dword ptr [eax]
        fmul    dword ptr [ebp - 0x3c]
        fstp    dword ptr [esi]
        mov    esi, ebx
        add    esi, ecx
        lea    ecx, [ebp - 0x50]
        push    ecx
        lea    ecx, [ebp - 0xa0]
        call    FUN_0040c610
        mov    edx, dword ptr [g_007da5e0]
        mov    eax, dword ptr [edx]
        fmul    dword ptr [ebp - 0x3c]
        lea    ecx, [ebx + eax]
        fchs    
        fstp    dword ptr [esi + 4]
        fld    dword ptr [ecx]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_bd59
        fld    dword ptr [ecx]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_bd59
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_bd59
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_bd59
        mov    byte ptr [ebp - 1], 1
L_bd59:
        fld    dword ptr [ebp - 0x2c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_bda6
        fld    dword ptr [ebp - 0x2c]
        fchs    
        fstp    dword ptr [ebp - 0x34]
        fld    dword ptr [ecx]
        fcomp    dword ptr [ebp - 0x34]
        fnstsw  ax
        test    ah, 1
        jne    L_bda3
        fld    dword ptr [ecx]
        fcomp    dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 0x41
        je    L_bda3
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [ebp - 0x34]
        fnstsw  ax
        test    ah, 1
        jne    L_bda3
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_bda6
L_bda3:
        inc    dword ptr [ebp - 8]
L_bda6:
        inc    dword ptr [ebp - 0x38]
        mov    eax, dword ptr [ebp - 0x14]
        add    eax, 4
        add    ebx, 8
        cmp    eax, 0xc
        mov    dword ptr [ebp - 0x14], eax
        jl    L_bbda
        mov    eax, dword ptr [ebp - 8]
        test    eax, eax
        jne    L_c0ec
        mov    ecx, dword ptr [ebp - 0x30]
        mov    eax, 3
        cmp    ecx, eax
        jge    L_c0ec
        cmp    dword ptr [ebp - 0x24], eax
        jge    L_c0ec
        cmp    byte ptr [ebp - 1], 1
        je    L_be00
        mov    ecx, dword ptr [g_007da5e0]
        push    eax
        push    ecx
        call    FUN_0047cfe0
        add    esp, 8
        cmp    al, 1
        jne    L_c0ec
L_be00:
        mov    eax, dword ptr [g_007b95fc]
        mov    dword ptr [ebp - 8], 0
L_be0c:
        mov    edx, dword ptr [g_007da5dc]
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0x64], 0xbf800000
        mov    dword ptr [ebp - 0x68], 0xbf800000
        mov    dword ptr [ebp - 0x6c], 0xbf800000
        mov    dword ptr [ebp - 0x60], 0xbf800000
        mov    esi, dword ptr [edx]
        fld    dword ptr [esi + ecx*4]
        mov    bl, byte ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x6c]
        mov    esi, dword ptr [edx]
        fld    dword ptr [esi + ecx*4]
        mov    esi, dword ptr [g_007b95f0]
        fstp    dword ptr [ebp - 0x68]
        mov    edx, dword ptr [edx]
        fld    dword ptr [edx + ecx*4]
        lea    edx, [ecx*8]
        mov    ecx, dword ptr [g_007da5e0]
        fstp    dword ptr [ebp - 0x64]
        mov    dword ptr [ebp - 0x60], 0x3f800000
        mov    ecx, dword ptr [ecx]
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [ecx]
        fld    dword ptr [ecx + 4]
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp - 0x10]
        and    ecx, 0xff
        inc    bl
        mov    byte ptr [ebp - 0x10], bl
        lea    ebx, [ecx + eax]
        cmp    ebx, dword ptr [esi + 4]
        jae    L_cd0a
        mov    esi, dword ptr [esi]
        add    esi, ecx
        mov    cl, byte ptr [ebp - 0xc]
        mov    byte ptr [esi + eax], cl
        lea    eax, [ebp - 0x6c]
        mov    dword ptr [ebp - 0x24], eax
        fld    dword ptr [g_0076e824]
        mov    esi, dword ptr [ebp - 0x24]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x40]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x40]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x28], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x40]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x40]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x28]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x28], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x40]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x40]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x28]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x28], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x40]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x40]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x28]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x28], ecx
        mov    ecx, dword ptr [g_007da5e0]
        mov    esi, dword ptr [ecx]
        mov    ebx, dword ptr [ebp - 0xc]
        mov    al, byte ptr [ebp - 0xc]
        mov    ecx, dword ptr [g_007b95f8]
        add    esi, edx
        mov    edx, dword ptr [g_007b9600]
        and    ebx, 0xff
        inc    al
        mov    byte ptr [ebp - 0xc], al
        lea    eax, [ebx + edx]
        cmp    eax, dword ptr [ecx + 4]
        mov    dword ptr [ebp - 0x24], eax
        jae    L_cd0a
        mov    edx, dword ptr [edi + 0x48]
        mov    ecx, dword ptr [ebp - 0x20]
        xor    eax, eax
        add    edx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    al, byte ptr [edx + ecx]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [edi + 0x14]
        lea    ecx, [eax + edx*4]
        mov    eax, dword ptr [ebp - 0x24]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [g_007b95f8]
        push    ecx
        mov    ecx, dword ptr [eax]
        lea    ecx, [ecx + edx*4]
        call    FUN_0040c410
        mov    edx, dword ptr [g_007b9600]
        mov    eax, dword ptr [g_007b95f4]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [esi + 4]
        add    ebx, edx
        mov    edx, dword ptr [esi]
        mov    dword ptr [ecx + ebx*8], edx
        mov    dword ptr [ecx + ebx*8 + 4], eax
        mov    ecx, dword ptr [g_007b95ec]
        mov    eax, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [edx + ebx*4], eax
        cmp    byte ptr [ebp - 0x10], 0xfc
        jb    L_c0d7
        mov    al, byte ptr [ebp - 0xc]
        xor    bl, bl
        cmp    al, bl
        jbe    L_c0d7
        mov    ecx, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ebp - 0xc]
        and    ecx, 0xff
        and    edx, 0xff
        mov    dword ptr [ebp - 0x30], ecx
        mov    ecx, dword ptr [g_007b960c]
        mov    dword ptr [ebp - 0x24], edx
        push    4
        lea    edx, [ebp - 0x38]
        mov    dword ptr [ebp - 0x38], 3
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [edi + 0x30]
        mov    ecx, dword ptr [ebp - 0x78]
        and    eax, 0xf
        inc    eax
        push    eax
        call    FUN_00430740
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        push    4
        push    0x7b9600
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x24]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        push    4
        push    0x7b95fc
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x30]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    esi, dword ptr [g_007b9600]
        mov    edx, dword ptr [ebp - 0x24]
        mov    eax, dword ptr [g_007b95fc]
        mov    ecx, dword ptr [ebp - 0x30]
        add    esi, edx
        add    eax, ecx
        mov    dword ptr [g_007b9600], esi
        mov    dword ptr [g_007b95fc], eax
        mov    byte ptr [ebp - 0x10], bl
        mov    byte ptr [ebp - 0xc], bl
        jmp    L_c0dc
L_c0d7:
        mov    eax, dword ptr [g_007b95fc]
L_c0dc:
        mov    ecx, dword ptr [ebp - 8]
        inc    ecx
        cmp    ecx, 3
        mov    dword ptr [ebp - 8], ecx
        jl    L_be0c
L_c0ec:
        mov    eax, dword ptr [ebp - 0x1c]
        xor    ebx, ebx
L_c0f1:
        mov    esi, dword ptr [ebp - 0x44]
        mov    edx, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 0x70]
        inc    eax
        add    esi, 0x10
        add    edx, 3
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x44], esi
        mov    dword ptr [ebp - 0x20], edx
        jge    L_cc0d
        jmp    L_bb8a
        lea    ebx, [esi + 0x48]
        push    ebx
        lea    ecx, [ebp - 0x5c]
        call    FUN_00419480
        lea    eax, [ebp - 0x44]
        push    eax
        lea    ecx, [ebp - 0x24]
        push    ecx
        mov    ecx, esi
        call    FUN_00482220
        fld    dword ptr [esi + 8]
        lea    edx, [ebp - 0x50]
        fstp    dword ptr [ebp - 0x1c]
        push    edx
        mov    ecx, ebx
        call    FUN_00428730
        fld    dword ptr [ebp - 0x50]
        fmul    dword ptr [ebp - 0x1c]
        fadd    dword ptr [ebp - 0x5c]
        fstp    dword ptr [ebp - 0x5c]
        fld    dword ptr [ebp - 0x4c]
        fmul    dword ptr [ebp - 0x1c]
        fadd    dword ptr [ebp - 0x58]
        fstp    dword ptr [ebp - 0x58]
        fld    dword ptr [ebp - 0x48]
        fmul    dword ptr [ebp - 0x1c]
        fadd    dword ptr [ebp - 0x54]
        fstp    dword ptr [ebp - 0x54]
        fld    dword ptr [ebp - 0x50]
        fmul    dword ptr [ebp - 0x50]
        fld    dword ptr [ebp - 0x48]
        fmul    dword ptr [ebp - 0x48]
        faddp st(1), st(0)
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [ebp - 0x50]
        fstp    dword ptr [ebp - 0x68]
        fld    dword ptr [ebp - 0x48]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x60]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ebp - 0x1c]
        fcomp    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_cd0a
        fld    dword ptr [esi + 0xb0]
        fmul    dword ptr [ebp - 0x1c]
        fdivr    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 0x28]
        fld    dword ptr [ebp - 0x1c]
        fcomp    dword ptr [esi + 0x80]
        fnstsw  ax
        test    ah, 0x41
        je    L_c1ce
        mov    dword ptr [ebp - 0x18], 0x3f800000
        jmp    L_c1f4
L_c1ce:
        fld    dword ptr [ebp - 0x1c]
        fcomp    dword ptr [esi + 0x84]
        fnstsw  ax
        test    ah, 1
        je    L_cd0a
        fld    dword ptr [esi + 0x84]
        fsub    dword ptr [ebp - 0x1c]
        fmul    dword ptr [esi + 0x88]
        fstp    dword ptr [ebp - 0x18]
L_c1f4:
        mov    ecx, dword ptr [ebp - 0x70]
        xor    eax, eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x20], eax
        jle    L_cd0a
L_c207:
        mov    ecx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [ecx]
        cmp    byte ptr [edx + eax], 0
        je    L_c6a3
        mov    esi, dword ptr [edi + 0x48]
        mov    eax, dword ptr [ebp - 0x20]
        xor    ebx, ebx
        mov    byte ptr [ebp - 1], 0
        mov    dword ptr [ebp - 8], ebx
        add    esi, eax
L_c22a:
        xor    eax, eax
        mov    al, byte ptr [esi]
        lea    ecx, [eax + eax*2]
        mov    eax, dword ptr [edi + 0x14]
        mov    edx, dword ptr [eax + ecx*4]
        lea    eax, [eax + ecx*4]
        mov    dword ptr [ebp - 0xb8], edx
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0xb4], ecx
        mov    edx, dword ptr [eax + 8]
        lea    eax, [ebp - 0x5c]
        push    eax
        lea    ecx, [ebp - 0xb8]
        push    ecx
        lea    ecx, [ebp - 0xb8]
        mov    dword ptr [ebp - 0xb0], edx
        call    FUN_0040ca10
        fld    dword ptr [ebp - 0xb8]
        fmul    dword ptr [ebp - 0x28]
        mov    edx, dword ptr [g_007da5e0]
        fld    dword ptr [ebp - 0xb0]
        mov    eax, dword ptr [edx]
        fmul    dword ptr [ebp - 0x28]
        lea    ecx, [ebx + eax]
        fld    dword ptr [ebp - 0x60]
        fmul st(0), st(2)
        fld    dword ptr [ebp - 0x68]
        fmul st(0), st(2)
        fsubp st(1), st(0)
        fstp    dword ptr [ecx]
        fld    dword ptr [ebp - 0x60]
        fmul st(0), st(1)
        fld    dword ptr [ebp - 0x68]
        fmul st(0), st(3)
        faddp st(1), st(0)
        fstp    dword ptr [ebp - 0x14]
        mov    edx, dword ptr [ebp - 0x14]
        mov    dword ptr [ecx + 4], edx
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ecx]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_c2ee
        fld    dword ptr [ecx]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_c2ee
        fld    dword ptr [ebp - 0x14]
        fcomp    dword ptr [g_0076d5f4]
        fnstsw  ax
        test    ah, 1
        jne    L_c2ee
        fld    dword ptr [ebp - 0x14]
        fcomp    dword ptr [g_0076e22c]
        fnstsw  ax
        test    ah, 0x41
        je    L_c2ee
        mov    byte ptr [ebp - 1], 1
L_c2ee:
        fld    dword ptr [ebp - 0x2c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c33b
        fld    dword ptr [ebp - 0x2c]
        fchs    
        fstp    dword ptr [ebp - 0x34]
        fld    dword ptr [ecx]
        fcomp    dword ptr [ebp - 0x34]
        fnstsw  ax
        test    ah, 1
        jne    L_c338
        fld    dword ptr [ecx]
        fcomp    dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 0x41
        je    L_c338
        fld    dword ptr [ebp - 0x14]
        fcomp    dword ptr [ebp - 0x34]
        fnstsw  ax
        test    ah, 1
        jne    L_c338
        fld    dword ptr [ebp - 0x14]
        fcomp    dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c33b
L_c338:
        inc    dword ptr [ebp - 8]
L_c33b:
        add    ebx, 8
        inc    esi
        cmp    ebx, 0x18
        jl    L_c22a
        mov    eax, dword ptr [ebp - 8]
        test    eax, eax
        jne    L_c6a0
        cmp    byte ptr [ebp - 1], 1
        je    L_c371
        mov    eax, dword ptr [g_007da5e0]
        push    3
        push    eax
        call    FUN_0047cfe0
        add    esp, 8
        cmp    al, 1
        jne    L_c6a0
L_c371:
        fld    dword ptr [ebp - 0x18]
        mov    eax, dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [eax + 0x10]
        fld    dword ptr [eax + 0xc]
        mov    edx, dword ptr [eax + 0x14]
        mov    dword ptr [ebp - 0x90], ecx
        mov    ecx, dword ptr [g_007b95fc]
        fmul st(0), st(1)
        mov    dword ptr [ebp - 0x8c], edx
        mov    dword ptr [ebp - 0x88], 0x3f800000
        fstp    dword ptr [ebp - 0x94]
        mov    dword ptr [ebp - 8], 0
        fld    dword ptr [ebp - 0x90]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x90]
        fld    dword ptr [ebp - 0x8c]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x8c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_c3cc:
        mov    eax, dword ptr [ebp - 8]
        mov    bl, byte ptr [ebp - 0x10]
        mov    esi, dword ptr [g_007b95f0]
        lea    edx, [eax*8]
        mov    eax, dword ptr [g_007da5e0]
        mov    eax, dword ptr [eax]
        fld    dword ptr [eax + edx]
        add    eax, edx
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [eax]
        fld    dword ptr [eax + 4]
        fadd    dword ptr [g_0076d3c8]
        fstp    dword ptr [eax + 4]
        mov    eax, dword ptr [ebp - 0x10]
        and    eax, 0xff
        inc    bl
        mov    byte ptr [ebp - 0x10], bl
        lea    ebx, [eax + ecx]
        cmp    ebx, dword ptr [esi + 4]
        jae    L_cd0a
        mov    esi, dword ptr [esi]
        add    esi, eax
        mov    al, byte ptr [ebp - 0xc]
        mov    byte ptr [esi + ecx], al
        lea    ecx, [ebp - 0x94]
        mov    dword ptr [ebp - 0x40], ecx
        fld    dword ptr [g_0076e824]
        mov    esi, dword ptr [ebp - 0x40]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x74]
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
        fstp    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x74]
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
        fstp    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x74]
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
        fstp    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x74]
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
        mov    eax, dword ptr [g_007da5e0]
        mov    esi, dword ptr [eax]
        mov    ebx, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [g_007b9600]
        add    esi, edx
        mov    dl, byte ptr [ebp - 0xc]
        and    ebx, 0xff
        inc    dl
        mov    byte ptr [ebp - 0xc], dl
        mov    edx, dword ptr [g_007b95f8]
        lea    eax, [ebx + ecx]
        cmp    eax, dword ptr [edx + 4]
        mov    dword ptr [ebp - 0x40], eax
        jae    L_cd0a
        mov    edx, dword ptr [ebp - 8]
        mov    eax, dword ptr [edi + 0x48]
        add    eax, edx
        mov    edx, dword ptr [ebp - 0x20]
        xor    ecx, ecx
        mov    cl, byte ptr [eax + edx]
        mov    eax, ecx
        mov    ecx, dword ptr [edi + 0x14]
        lea    eax, [eax + eax*2]
        lea    edx, [ecx + eax*4]
        mov    ecx, dword ptr [g_007b95f8]
        mov    eax, dword ptr [ebp - 0x40]
        push    edx
        mov    edx, dword ptr [ecx]
        lea    eax, [eax + eax*2]
        lea    ecx, [edx + eax*4]
        call    FUN_0040c410
        mov    eax, dword ptr [g_007b9600]
        mov    ecx, dword ptr [g_007b95f4]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [esi + 4]
        add    ebx, eax
        mov    eax, dword ptr [esi]
        mov    dword ptr [edx + ebx*8], eax
        mov    dword ptr [edx + ebx*8 + 4], ecx
        mov    edx, dword ptr [g_007b95ec]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x30]
        mov    dword ptr [eax + ebx*4], ecx
        cmp    byte ptr [ebp - 0x10], 0xfc
        jb    L_c68a
        mov    al, byte ptr [ebp - 0xc]
        xor    bl, bl
        cmp    al, bl
        jbe    L_c68a
        mov    eax, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [g_007b960c]
        and    eax, 0xff
        and    edx, 0xff
        mov    dword ptr [ebp - 0x38], eax
        push    4
        lea    eax, [ebp - 0x40]
        mov    dword ptr [ebp - 0x3c], edx
        mov    dword ptr [ebp - 0x40], 3
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 8]
        cmp    eax, 0x100
        jb    L_c622
        mov    ecx, dword ptr [edi + 0x30]
        mov    eax, dword ptr [ebp - 0x78]
        and    ecx, 0xf
        inc    ecx
        lea    esi, [eax + 0xc]
        push    ecx
        mov    ecx, esi
        call    FUN_004306f0
        mov    edx, dword ptr [g_007b960c]
        push    edx
        mov    ecx, esi
        call    FUN_00491340
        mov    ecx, dword ptr [g_007b960c]
        call    FUN_00430670
L_c622:
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx]
        push    4
        push    0x7b9600
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x38]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        push    4
        push    0x7b95fc
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x3c]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b9600]
        mov    edx, dword ptr [ebp - 0x38]
        mov    eax, dword ptr [ebp - 0x3c]
        add    ecx, edx
        mov    dword ptr [g_007b9600], ecx
        mov    ecx, dword ptr [g_007b95fc]
        add    ecx, eax
        mov    dword ptr [g_007b95fc], ecx
        mov    byte ptr [ebp - 0x10], bl
        mov    byte ptr [ebp - 0xc], bl
        jmp    L_c690
L_c68a:
        mov    ecx, dword ptr [g_007b95fc]
L_c690:
        mov    eax, dword ptr [ebp - 8]
        inc    eax
        cmp    eax, 3
        mov    dword ptr [ebp - 8], eax
        jl    L_c3cc
L_c6a0:
        mov    eax, dword ptr [ebp - 0x1c]
L_c6a3:
        mov    edx, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 0x70]
        inc    eax
        add    edx, 3
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x20], edx
        jge    L_cc0d
        jmp    L_c207
        mov    edx, dword ptr [esi + 0x64]
        mov    eax, dword ptr [esi + 0x54]
        lea    ecx, [esi + 0x48]
        mov    dword ptr [ebp - 0x58], edx
        mov    dword ptr [ebp - 0x5c], eax
        mov    eax, dword ptr [ecx + 0x2c]
        lea    edx, [ebp - 0x50]
        push    edx
        mov    dword ptr [ebp - 0x54], eax
        call    FUN_00428730
        fld    dword ptr [ebp - 0x48]
        fmul    dword ptr [ebp - 0x48]
        fld    dword ptr [ebp - 0x50]
        fmul    dword ptr [ebp - 0x50]
        faddp st(1), st(0)
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fld    dword ptr [ebp - 0x50]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x68]
        fld    dword ptr [ebp - 0x48]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x60]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ebp - 0x58]
        fcomp    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_cd0a
        fld    dword ptr [esi + 0x84]
        mov    ecx, dword ptr [ebp - 0x70]
        fdivr    dword ptr [g_0076d070]
        xor    eax, eax
        cmp    ecx, ebx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x20], ebx
        fstp    dword ptr [ebp - 0x28]
        jle    L_cd0a
        mov    dword ptr [ebp - 0x38], ebx
L_c73f:
        mov    ecx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [ecx]
        cmp    byte ptr [edx + eax], 0
        je    L_cbc9
        mov    eax, dword ptr [edi + 0x5c]
        fld    dword ptr [ebp - 0x48]
        fmul    dword ptr [eax + ebx + 8]
        add    eax, ebx
        fld    dword ptr [ebp - 0x4c]
        fmul    dword ptr [eax + 4]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x50]
        fmul    dword ptr [eax]
        faddp st(1), st(0)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_cbc9
        mov    eax, dword ptr [g_007da5e0]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [edi + 0x48]
        mov    eax, dword ptr [ebp - 0x20]
        mov    esi, dword ptr [edi + 0x14]
        mov    byte ptr [ebp - 1], 0
        mov    dword ptr [ebp - 8], 0
        add    edx, eax
        mov    ebx, 3
L_c79f:
        xor    eax, eax
        mov    al, byte ptr [edx]
        lea    eax, [eax + eax*2]
        fld    dword ptr [esi + eax*4]
        lea    eax, [esi + eax*4]
        fsub    dword ptr [ebp - 0x5c]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xb0], eax
        fld    dword ptr [ebp - 0xb0]
        fsub    dword ptr [ebp - 0x54]
        fstp    dword ptr [ebp - 0xb0]
        fmul    dword ptr [ebp - 0x28]
        fld    dword ptr [ebp - 0xb0]
        fmul    dword ptr [ebp - 0x28]
        fld    dword ptr [ebp - 0x60]
        fmul st(0), st(2)
        fld    dword ptr [ebp - 0x68]
        fmul st(0), st(2)
        fsubp st(1), st(0)
        fstp    dword ptr [ecx]
        fld    dword ptr [ebp - 0x60]
        fmul st(0), st(1)
        fld    dword ptr [ebp - 0x68]
        fmul st(0), st(3)
        faddp st(1), st(0)
        fstp    dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x14]
        mov    dword ptr [ecx + 4], eax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ecx]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_c83c
        fld    dword ptr [ecx]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_c83c
        fld    dword ptr [ebp - 0x14]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_c83c
        fld    dword ptr [ebp - 0x14]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_c83c
        mov    byte ptr [ebp - 1], 1
L_c83c:
        fld    dword ptr [ebp - 0x2c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c889
        fld    dword ptr [ebp - 0x2c]
        fchs    
        fstp    dword ptr [ebp - 0x34]
        fld    dword ptr [ecx]
        fcomp    dword ptr [ebp - 0x34]
        fnstsw  ax
        test    ah, 1
        jne    L_c886
        fld    dword ptr [ecx]
        fcomp    dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 0x41
        je    L_c886
        fld    dword ptr [ebp - 0x14]
        fcomp    dword ptr [ebp - 0x34]
        fnstsw  ax
        test    ah, 1
        jne    L_c886
        fld    dword ptr [ebp - 0x14]
        fcomp    dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c889
L_c886:
        inc    dword ptr [ebp - 8]
L_c889:
        inc    edx
        add    ecx, 8
        dec    ebx
        jne    L_c79f
        mov    eax, dword ptr [ebp - 8]
        test    eax, eax
        jne    L_cbc9
        cmp    byte ptr [ebp - 1], 1
        je    L_c8be
        mov    ecx, dword ptr [g_007da5e0]
        push    3
        push    ecx
        call    FUN_0047cfe0
        add    esp, 8
        cmp    al, 1
        jne    L_cbc9
L_c8be:
        mov    edx, dword ptr [g_008bd548]
        mov    eax, dword ptr [g_008bd54c]
        mov    ecx, dword ptr [g_008bd550]
        mov    dword ptr [ebp - 0x94], edx
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx + 8]
        mov    dword ptr [ebp - 8], 0
        mov    edx, dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x88]
        mov    dword ptr [ebp - 0x90], eax
        mov    dword ptr [ebp - 0x8c], ecx
L_c8f7:
        mov    eax, dword ptr [g_007da5e0]
        mov    ecx, dword ptr [eax]
        fld    dword ptr [ecx + edx*8]
        lea    eax, [ecx + edx*8]
        fadd    dword ptr [g_0076d070]
        mov    cl, byte ptr [ebp - 0x10]
        fstp    dword ptr [eax]
        fld    dword ptr [eax + 4]
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [eax + 4]
        mov    eax, dword ptr [ebp - 0x10]
        and    eax, 0xff
        inc    cl
        mov    byte ptr [ebp - 0x10], cl
        mov    ecx, dword ptr [g_007b95fc]
        lea    esi, [eax + ecx]
        mov    ecx, dword ptr [g_007b95f0]
        cmp    esi, dword ptr [ecx + 4]
        jae    L_cd0a
        mov    esi, dword ptr [ecx]
        mov    cl, byte ptr [ebp - 0xc]
        add    eax, esi
        mov    esi, dword ptr [g_007b95fc]
        mov    byte ptr [eax + esi], cl
        lea    eax, [ebp - 0x94]
        mov    dword ptr [ebp - 0x40], eax
        fld    dword ptr [g_0076e824]
        mov    esi, dword ptr [ebp - 0x40]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x74]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x44], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x74]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x44]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x44], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x74]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x44]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x44], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x74]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x44]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x44], ecx
        mov    ecx, dword ptr [edi + 0x48]
        mov    esi, dword ptr [ebp - 0x20]
        mov    bl, byte ptr [ebp - 0xc]
        xor    eax, eax
        add    ecx, edx
        mov    al, byte ptr [ecx + esi]
        mov    ecx, dword ptr [edi + 0x14]
        mov    esi, dword ptr [g_007b9600]
        lea    eax, [eax + eax*2]
        lea    ecx, [ecx + eax*4]
        mov    eax, dword ptr [ebp - 0xc]
        and    eax, 0xff
        inc    bl
        add    eax, esi
        mov    esi, dword ptr [g_007b95f8]
        mov    byte ptr [ebp - 0xc], bl
        cmp    eax, dword ptr [esi + 4]
        jae    L_cd0a
        mov    esi, dword ptr [esi]
        lea    ebx, [eax + eax*2]
        lea    esi, [esi + ebx*4]
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [esi], ebx
        mov    ebx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [esi + 8], ecx
        mov    ecx, dword ptr [g_007da5e0]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [esi + 4], ebx
        mov    ebx, dword ptr [ecx + edx*8]
        mov    esi, dword ptr [g_007b95f4]
        mov    esi, dword ptr [esi]
        mov    ecx, dword ptr [ecx + edx*8 + 4]
        mov    dword ptr [esi + eax*8], ebx
        mov    dword ptr [esi + eax*8 + 4], ecx
        mov    ecx, dword ptr [g_007b95ec]
        mov    ecx, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0x44]
        mov    dword ptr [ecx + eax*4], esi
        cmp    byte ptr [ebp - 0x10], 0xfc
        jb    L_cbbc
        mov    al, byte ptr [ebp - 0xc]
        xor    bl, bl
        cmp    al, bl
        jbe    L_cbbc
        mov    eax, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [g_007b960c]
        and    eax, 0xff
        and    edx, 0xff
        mov    dword ptr [ebp - 0x24], eax
        push    4
        lea    eax, [ebp - 0x40]
        mov    dword ptr [ebp - 0x30], edx
        mov    dword ptr [ebp - 0x40], 3
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 8]
        cmp    eax, 0x100
        jb    L_cb53
        mov    eax, dword ptr [ebp - 0x78]
        mov    edx, dword ptr [edi + 0x30]
        lea    ecx, [eax + 0xc]
        or    dword ptr [ecx + 0x10], 0xf
        mov    eax, dword ptr [ecx + 4]
        and    edx, 0xf
        inc    edx
        and    eax, 0xfffffff0
        or    edx, eax
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [g_007b960c]
        push    edx
        call    FUN_00491340
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx + 0x14]
        test    al, 3
        je    L_cb59
        mov    edx, dword ptr [ecx]
        neg    eax
        and    eax, 3
        push    eax
        call    dword ptr [edx + 0x18]
L_cb53:
        mov    ecx, dword ptr [g_007b960c]
L_cb59:
        mov    eax, dword ptr [ecx]
        push    4
        push    0x7b9600
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x24]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        push    4
        push    0x7b95fc
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x30]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [ebp - 0x24]
        mov    esi, dword ptr [g_007b9600]
        mov    ecx, dword ptr [g_007b95fc]
        mov    eax, dword ptr [ebp - 0x30]
        add    esi, edx
        mov    edx, dword ptr [ebp - 8]
        add    ecx, eax
        mov    dword ptr [g_007b9600], esi
        mov    dword ptr [g_007b95fc], ecx
        mov    byte ptr [ebp - 0x10], bl
        mov    byte ptr [ebp - 0xc], bl
L_cbbc:
        inc    edx
        cmp    edx, 3
        mov    dword ptr [ebp - 8], edx
        jl    L_c8f7
L_cbc9:
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ebx, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 0x70]
        inc    eax
        add    ebx, 0x10
        add    edx, 3
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x38], ebx
        mov    dword ptr [ebp - 0x20], edx
        jge    L_cc0d
        jmp    L_c73f
L_cbee:
        push    0x76e900
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_cd0a
        int 3    
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_cc0d:
        mov    al, byte ptr [ebp - 0x10]
        test    al, al
        je    L_cd0a
        mov    al, byte ptr [ebp - 0xc]
        test    al, al
        je    L_cd0a
        mov    ecx, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ebp - 0xc]
        and    ecx, 0xff
        and    edx, 0xff
        mov    dword ptr [ebp - 0x28], ecx
        mov    ecx, dword ptr [g_007b960c]
        mov    dword ptr [ebp + 8], edx
        push    4
        lea    edx, [ebp - 0x40]
        mov    dword ptr [ebp - 0x40], 3
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x24]
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 8]
        cmp    eax, 0x100
        jb    L_ccaa
        mov    ecx, dword ptr [ebp - 0x78]
        mov    ebx, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [edi + 0x30]
        mov    eax, dword ptr [ecx + 0x10]
        add    ecx, 0xc
        and    edx, 0xf
        or    ebx, 0xf
        inc    edx
        and    eax, 0xfffffff0
        or    edx, eax
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [g_007b960c]
        push    edx
        mov    dword ptr [ecx + 0x10], ebx
        call    FUN_00491340
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx + 0x14]
        test    al, 3
        je    L_ccb0
        mov    edx, dword ptr [ecx]
        neg    eax
        and    eax, 3
        push    eax
        call    dword ptr [edx + 0x18]
L_ccaa:
        mov    ecx, dword ptr [g_007b960c]
L_ccb0:
        mov    eax, dword ptr [ecx]
        push    4
        push    0x7b9600
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp + 8]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        push    4
        push    0x7b95fc
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x28]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    esi, dword ptr [g_007b9600]
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [g_007b95fc]
        mov    eax, dword ptr [ebp - 0x28]
        add    esi, edx
        add    ecx, eax
        mov    dword ptr [g_007b9600], esi
        mov    dword ptr [g_007b95fc], ecx
L_cd0a:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
        nop    
        // jump-table data @ 0x0044CD14 (16 relocated pointers)
        __emit 0x5A
        __emit 0xB6
        __emit 0x44
        __emit 0x00
        __emit 0x0B
        __emit 0xBB
        __emit 0x44
        __emit 0x00
        __emit 0xEE
        __emit 0xCB
        __emit 0x44
        __emit 0x00
        __emit 0x17
        __emit 0xC1
        __emit 0x44
        __emit 0x00
        __emit 0xC0
        __emit 0xC6
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
        __emit 0x51
        __emit 0x53
        __emit 0x56
        __emit 0x8B
        __emit 0xF1
        __emit 0x8B
        __emit 0x5E
        __emit 0x04
        __emit 0x57
        __emit 0x8B
        __emit 0x7C
        __emit 0x24
        __emit 0x14
        __emit 0x3B
        __emit 0xFB
        __emit 0x89
        __emit 0x74
        __emit 0x24
        __emit 0x0C
        __emit 0x0F
        __emit 0x84
        __emit 0x93
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x85
        __emit 0xFF
        __emit 0x76
        __emit 0x7B
        __emit 0x8D
        __emit 0x04
        __emit 0x7F
        __emit 0xC1
        __emit 0xE0
        __emit 0x02
        __emit 0x55
    }
}
