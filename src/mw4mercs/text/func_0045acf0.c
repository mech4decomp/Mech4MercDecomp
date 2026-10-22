/*
 * FUN_0045acf0 (extent 0x45acf0-0x45c160) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076d5f0;
extern float  g_0076df00;
extern float  g_0076ebf4;
extern float  g_0076ed00;
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
extern char   g_007d98e8;
extern int    g_007d98fc;
extern int    g_007da5dc;
extern int    g_007da5e0;
extern float  g_007da864;
extern float  g_007da868;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c610(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004286c0(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_00428810(void);
extern void __cdecl FUN_00428830(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_00430670(void);
extern void __cdecl FUN_004306f0(void);
extern void __cdecl FUN_00430740(void);
extern void __cdecl FUN_0047cfe0(void);
extern void __cdecl FUN_00491340(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0075dbbe(void);

__declspec(naked) void FUN_0045acf0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x118
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x58]
        push    edi
        push    0x7b9460
        lea    ecx, [ebp - 0xd8]
        mov    dword ptr [ebp - 0x28], esi
        mov    dword ptr [ebp - 0x68], eax
        call    FUN_00428850
        mov    ebx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        mov    dword ptr [ebp - 0x5c], 0x3f800000
        call    dword ptr [edx + 0x1c]
        xor    edi, edi
        cmp    eax, edi
        mov    dword ptr [ebp - 0x9c], eax
        je    L_c154
        cmp    dword ptr [g_007b2220], edi
        je    L_c154
        cmp    byte ptr [g_007b9608], 1
        je    L_c154
        fild    dword ptr [g_007da864]
        mov    eax, dword ptr [ebx]
        mov    ecx, ebx
        mov    byte ptr [ebp - 4], 0
        fmul    dword ptr [g_007da868]
        mov    byte ptr [ebp - 0x10], 0
        fstp    dword ptr [ebp - 0x60]
        call    dword ptr [eax + 0xc]
        add    eax, -3
        cmp    eax, 4
        ja    L_c034
        jmp    dword ptr [eax*4 + 0x45c160]
        lea    ecx, [ebx + 0x48]
        push    ecx
        lea    ecx, [ebp - 0x3c]
        call    FUN_00419480
        cmp    dword ptr [ebp - 0x68], edi
        mov    dword ptr [ebp - 0x44], edi
        mov    dword ptr [ebp - 0x18], edi
        jle    L_c154
        mov    dword ptr [ebp - 0x48], edi
L_ada0:
        mov    edx, dword ptr [g_007d98fc]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x44]
        cmp    byte ptr [eax + ecx], 0
        je    L_b326
        mov    edx, dword ptr [esi + 0x5c]
        mov    eax, dword ptr [ebp - 0x48]
        lea    ecx, [ebp - 0x3c]
        lea    edi, [edx + eax]
        push    ecx
        mov    ecx, edi
        call    FUN_0040c610
        fsub    dword ptr [edi + 0xc]
        mov    byte ptr [ebp - 5], 0
        fstp    dword ptr [ebp - 0xc]
        fld    dword ptr [ebp - 0xc]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b326
        fld    dword ptr [ebp - 0xc]
        fcomp    dword ptr [ebx + 0x80]
        fnstsw  ax
        test    ah, 0x41
        je    L_ae00
        mov    dword ptr [ebp - 0x5c], 0x3f800000
        jmp    L_ae26
L_ae00:
        fld    dword ptr [ebp - 0xc]
        fcomp    dword ptr [ebx + 0x84]
        fnstsw  ax
        test    ah, 1
        je    L_b326
        fld    dword ptr [ebx + 0x84]
        fsub    dword ptr [ebp - 0xc]
        fmul    dword ptr [ebx + 0x88]
        fstp    dword ptr [ebp - 0x5c]
L_ae26:
        fld    dword ptr [g_0076d064]
        push    0x7b9460
        fdiv    dword ptr [ebp - 0xc]
        lea    ecx, [ebp - 0xd8]
        fstp    dword ptr [ebp - 0x20]
        call    FUN_00419460
        push    1
        xor    ebx, ebx
        push    ebx
        push    2
        push    edi
        lea    ecx, [ebp - 0xd8]
        call    FUN_0041fde0
        lea    edx, [ebp - 0x80]
        push    edx
        lea    ecx, [ebp - 0xd8]
        call    FUN_00428810
        lea    eax, [ebp - 0x8c]
        push    eax
        lea    ecx, [ebp - 0xd8]
        call    FUN_00428830
        lea    ecx, [ebp - 0x74]
        push    ecx
        lea    ecx, [ebp - 0xd8]
        call    FUN_00428730
        fld    dword ptr [ebp - 0xc]
        push    ecx
        fchs    
        lea    edx, [ebp - 0x74]
        fstp    dword ptr [esp]
        push    edx
        lea    ecx, [ebp - 0x98]
        call    FUN_0040ca40
        lea    eax, [ebp - 0x3c]
        push    eax
        lea    ecx, [ebp - 0x98]
        push    ecx
        lea    ecx, [ebp - 0x98]
        call    FUN_0040c9e0
        mov    edx, dword ptr [esi + 0x14]
        mov    edi, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [esi + 0x48]
        mov    dword ptr [ebp - 0xc], ebx
        mov    dword ptr [ebp - 0x2c], edx
        add    edi, eax
L_aec4:
        mov    ecx, dword ptr [ebp - 0x2c]
        xor    eax, eax
        mov    al, byte ptr [edi]
        lea    eax, [eax + eax*2]
        mov    edx, dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        mov    dword ptr [ebp - 0xa8], edx
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0xa4], ecx
        mov    edx, dword ptr [eax + 8]
        lea    eax, [ebp - 0x98]
        push    eax
        lea    ecx, [ebp - 0xa8]
        push    ecx
        lea    ecx, [ebp - 0xa8]
        mov    dword ptr [ebp - 0xa0], edx
        call    FUN_0040ca10
        mov    edx, dword ptr [g_007da5e0]
        mov    eax, dword ptr [edx]
        mov    esi, ebx
        add    esi, eax
        lea    eax, [ebp - 0xa8]
        push    eax
        lea    ecx, [ebp - 0x80]
        call    FUN_0040c610
        mov    ecx, dword ptr [g_007da5e0]
        mov    edx, dword ptr [ecx]
        fmul    dword ptr [ebp - 0x20]
        lea    ecx, [ebp - 0x8c]
        fchs    
        fstp    dword ptr [esi]
        mov    esi, ebx
        add    esi, edx
        lea    edx, [ebp - 0xa8]
        push    edx
        call    FUN_0040c610
        mov    edx, dword ptr [g_007da5e0]
        mov    eax, dword ptr [edx]
        fmul    dword ptr [ebp - 0x20]
        lea    ecx, [ebx + eax]
        fchs    
        fstp    dword ptr [esi + 4]
        fld    dword ptr [ecx]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_af9a
        fld    dword ptr [ecx]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_af9a
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_af9a
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_af9a
        mov    byte ptr [ebp - 5], 1
L_af9a:
        fld    dword ptr [ebp - 0x60]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_afe7
        fld    dword ptr [ebp - 0x60]
        fchs    
        fstp    dword ptr [ebp - 0x64]
        fld    dword ptr [ecx]
        fcomp    dword ptr [ebp - 0x64]
        fnstsw  ax
        test    ah, 1
        jne    L_afe4
        fld    dword ptr [ecx]
        fcomp    dword ptr [ebp - 0x60]
        fnstsw  ax
        test    ah, 0x41
        je    L_afe4
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [ebp - 0x64]
        fnstsw  ax
        test    ah, 1
        jne    L_afe4
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [ebp - 0x60]
        fnstsw  ax
        test    ah, 0x41
        jne    L_afe7
L_afe4:
        inc    dword ptr [ebp - 0xc]
L_afe7:
        add    ebx, 8
        inc    edi
        cmp    ebx, 0x18
        jl    L_aec4
        mov    eax, dword ptr [ebp - 0xc]
        test    eax, eax
        jne    L_b326
        cmp    byte ptr [ebp - 5], 1
        je    L_b018
        push    3
        push    edx
        call    FUN_0047cfe0
        add    esp, 8
        cmp    al, 1
        jne    L_b326
L_b018:
        mov    eax, dword ptr [ebp + 8]
        fld    dword ptr [eax + 8]
        add    eax, 0xc
        fmul    dword ptr [ebp - 0x5c]
        push    eax
        lea    ecx, [ebp - 0x58]
        fmul    dword ptr [ebp - 0x5c]
        mov    dword ptr [ebp - 0x50], 0xbf800000
        mov    dword ptr [ebp - 0x54], 0xbf800000
        mov    dword ptr [ebp - 0x58], 0xbf800000
        fstp    dword ptr [ebp - 0x24]
        mov    dword ptr [ebp - 0x4c], 0xbf800000
        call    FUN_004286c0
        fld    dword ptr [ebp - 0x58]
        fmul    dword ptr [ebp - 0x24]
        mov    eax, dword ptr [g_007b95fc]
        mov    edi, dword ptr [ebp - 0x28]
        mov    dword ptr [ebp - 0x4c], 0x3f800000
        fstp    dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0xc], 0
        fld    dword ptr [ebp - 0x54]
        fmul    dword ptr [ebp - 0x24]
        fstp    dword ptr [ebp - 0x54]
        fld    dword ptr [ebp - 0x50]
        fmul    dword ptr [ebp - 0x24]
        fstp    dword ptr [ebp - 0x50]
L_b080:
        mov    ecx, dword ptr [ebp - 0xc]
        mov    esi, dword ptr [ebp - 0x10]
        lea    edx, [ecx*8]
        mov    ecx, dword ptr [g_007da5e0]
        mov    ecx, dword ptr [ecx]
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        fadd    dword ptr [g_0076d070]
        and    esi, 0xff
        lea    ebx, [esi + eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [ecx + 4]
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [ecx + 4]
        mov    cl, byte ptr [ebp - 0x10]
        inc    cl
        mov    byte ptr [ebp - 0x10], cl
        mov    ecx, dword ptr [g_007b95f0]
        cmp    ebx, dword ptr [ecx + 4]
        jae    L_c154
        mov    ecx, dword ptr [ecx]
        mov    bl, byte ptr [ebp - 4]
        add    ecx, esi
        mov    byte ptr [ecx + eax], bl
        lea    eax, [ebp - 0x58]
        mov    dword ptr [ebp - 0x1c], eax
        fld    dword ptr [g_0076ebf4]
        mov    esi, dword ptr [ebp - 0x1c]
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
        mov    dword ptr [ebp - 0x14], ebx
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
        mov    ecx, dword ptr [ebp - 0x14]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x14], ecx
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
        mov    ecx, dword ptr [ebp - 0x14]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x14], ecx
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
        mov    ecx, dword ptr [ebp - 0x14]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x14], ecx
        mov    ecx, dword ptr [g_007da5e0]
        mov    esi, dword ptr [ecx]
        mov    al, byte ptr [ebp - 4]
        mov    ecx, dword ptr [g_007b95f8]
        add    edx, esi
        mov    esi, dword ptr [ebp - 4]
        and    esi, 0xff
        inc    al
        mov    ebx, edx
        mov    edx, dword ptr [g_007b9600]
        mov    byte ptr [ebp - 4], al
        lea    eax, [esi + edx]
        cmp    eax, dword ptr [ecx + 4]
        jae    L_c154
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [edi + 0x48]
        xor    edx, edx
        mov    edx, dword ptr [ebp - 0x18]
        add    ecx, edx
        xor    edx, edx
        mov    dl, byte ptr [ecx + edi]
        mov    edi, dword ptr [ebp - 0x28]
        mov    ecx, edx
        mov    edx, dword ptr [edi + 0x14]
        lea    ecx, [ecx + ecx*2]
        lea    ecx, [edx + ecx*4]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [g_007b95f8]
        push    ecx
        mov    ecx, dword ptr [eax]
        lea    ecx, [ecx + edx*4]
        call    FUN_0040c410
        mov    edx, dword ptr [g_007b9600]
        mov    ecx, dword ptr [g_007b95f4]
        lea    eax, [esi + edx]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebx]
        mov    dword ptr [edx + eax*8], ecx
        mov    ecx, dword ptr [ebx + 4]
        mov    dword ptr [edx + eax*8 + 4], ecx
        mov    edx, dword ptr [g_007b95ec]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x14]
        mov    dword ptr [ecx + eax*4], edx
        cmp    byte ptr [ebp - 0x10], 0xfc
        jb    L_b311
        mov    al, byte ptr [ebp - 4]
        xor    bl, bl
        cmp    al, bl
        jbe    L_b311
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 4]
        and    eax, 0xff
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x20], ecx
        mov    ecx, dword ptr [g_007b960c]
        push    4
        lea    eax, [ebp - 0x1c]
        mov    dword ptr [ebp - 0x1c], 3
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [edi + 0x30]
        and    ecx, 0xf
        inc    ecx
        push    ecx
        mov    ecx, dword ptr [ebp - 0x9c]
        call    FUN_00430740
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        push    4
        push    0x7b9600
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x20]
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
        lea    ecx, [ebp - 0x2c]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    esi, dword ptr [g_007b9600]
        mov    edx, dword ptr [ebp - 0x20]
        mov    eax, dword ptr [g_007b95fc]
        mov    ecx, dword ptr [ebp - 0x2c]
        add    esi, edx
        add    eax, ecx
        mov    dword ptr [g_007b9600], esi
        mov    dword ptr [g_007b95fc], eax
        mov    byte ptr [ebp - 0x10], bl
        mov    byte ptr [ebp - 4], bl
        jmp    L_b316
L_b311:
        mov    eax, dword ptr [g_007b95fc]
L_b316:
        mov    ecx, dword ptr [ebp - 0xc]
        inc    ecx
        cmp    ecx, 3
        mov    dword ptr [ebp - 0xc], ecx
        jl    L_b080
L_b326:
        mov    eax, dword ptr [ebp - 0x44]
        mov    esi, dword ptr [ebp - 0x48]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ebp - 0x68]
        inc    eax
        add    esi, 0x10
        add    edx, 3
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x44], eax
        mov    dword ptr [ebp - 0x48], esi
        mov    dword ptr [ebp - 0x18], edx
        jge    L_c053
        mov    ebx, dword ptr [ebp + 8]
        mov    esi, dword ptr [ebp - 0x28]
        jmp    L_ada0
        lea    eax, [ebx + 0x48]
        push    eax
        lea    ecx, [ebp - 0xd8]
        call    FUN_00419460
        mov    ecx, dword ptr [ebp - 0xcc]
        mov    edx, dword ptr [ebp - 0xbc]
        mov    eax, dword ptr [ebp - 0xac]
        mov    dword ptr [ebp - 0x3c], ecx
        mov    ecx, dword ptr [ebx + 0x94]
        mov    dword ptr [ebp - 0x38], edx
        lea    edx, [ebp - 0x80]
        mov    dword ptr [ebp - 0x40], ecx
        push    edx
        lea    ecx, [ebp - 0xd8]
        mov    dword ptr [ebp - 0x34], eax
        call    FUN_00428810
        lea    eax, [ebp - 0x8c]
        push    eax
        lea    ecx, [ebp - 0xd8]
        call    FUN_00428830
        lea    ecx, [ebp - 0x74]
        push    ecx
        lea    ecx, [ebp - 0xd8]
        call    FUN_00428730
        mov    ecx, dword ptr [ebp - 0x68]
        xor    eax, eax
        cmp    ecx, edi
        mov    dword ptr [ebp - 0x44], eax
        mov    dword ptr [ebp - 0x18], edi
        jle    L_c154
        mov    ecx, dword ptr [g_007da5dc]
        mov    dword ptr [ebp - 0x20], edi
L_b3d4:
        mov    edx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + eax], 0
        mov    dword ptr [ebp - 0x48], edi
        mov    dword ptr [ebp - 0x14], edi
        je    L_b943
        mov    eax, dword ptr [esi + 0x5c]
        fld    dword ptr [ebp - 0x34]
        mov    edx, dword ptr [ebp - 0x20]
        fmul    dword ptr [eax + edx + 8]
        add    eax, edx
        fld    dword ptr [ebp - 0x38]
        mov    byte ptr [ebp - 5], 0
        fmul    dword ptr [eax + 4]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x3c]
        fmul    dword ptr [eax]
        faddp st(1), st(0)
        fcomp    dword ptr [eax + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b943
        mov    eax, dword ptr [esi + 0x14]
        mov    dword ptr [ebp - 0x2c], eax
        mov    eax, dword ptr [g_007da5e0]
        mov    ebx, dword ptr [eax]
        mov    eax, dword ptr [esi + 0x48]
        mov    dword ptr [ebp - 0xc], edi
        mov    edi, dword ptr [ebp - 0x18]
        xor    edx, edx
        add    edi, eax
L_b436:
        mov    esi, dword ptr [ebp - 0x2c]
        xor    eax, eax
        mov    al, byte ptr [edi]
        lea    eax, [eax + eax*2]
        fld    dword ptr [esi + eax*4]
        lea    eax, [esi + eax*4]
        fsub    dword ptr [ebp - 0x3c]
        fld    dword ptr [eax + 4]
        fsub    dword ptr [ebp - 0x38]
        fld    dword ptr [eax + 8]
        fsub    dword ptr [ebp - 0x34]
        fld    st(0)
        fmul    dword ptr [ebp - 0x6c]
        fld    st(2)
        fmul    dword ptr [ebp - 0x70]
        faddp st(1), st(0)
        fld    st(3)
        fmul    dword ptr [ebp - 0x74]
        faddp st(1), st(0)
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b4e5
        mov    esi, dword ptr [ebp + 8]
        fld    st(0)
        fcomp    dword ptr [esi + 0x80]
        fnstsw  ax
        test    ah, 0x41
        je    L_b490
        mov    dword ptr [ebp - 0x5c], 0x3f800000
        jmp    L_b4b3
L_b490:
        fcom    dword ptr [esi + 0x84]
        fnstsw  ax
        test    ah, 1
        je    L_b4b0
        fld    dword ptr [esi + 0x84]
        fsub st(0), st(1)
        fmul    dword ptr [esi + 0x88]
        fstp    dword ptr [ebp - 0x5c]
        jmp    L_b4b3
L_b4b0:
        inc    dword ptr [ebp - 0x14]
L_b4b3:
        fld    dword ptr [esi + 8]
        mov    eax, dword ptr [ecx]
        fmul    dword ptr [ebp - 0x5c]
        fmul    dword ptr [ebp - 0x5c]
        fstp    dword ptr [edx + eax]
        mov    eax, 0x7f000000
        fmul    dword ptr [ebp - 0x40]
        fadd    st(0), st(0)
        fstp    dword ptr [ebp - 0x24]
        sub    eax, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp - 0x64], eax
        fld    dword ptr [ebp - 0x64]
        fmul    dword ptr [ebp - 0x24]
        fsubr    dword ptr [g_0076d5f0]
        fmul    dword ptr [ebp - 0x64]
        jmp    L_b4fd
L_b4e5:
        mov    eax, dword ptr [ebp - 0x48]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076ed00]
        inc    eax
        mov    dword ptr [ebp - 0x48], eax
        mov    eax, dword ptr [ecx]
        mov    dword ptr [edx + eax], 0
L_b4fd:
        fld    dword ptr [ebp - 0x78]
        fmul st(0), st(2)
        fld    dword ptr [ebp - 0x7c]
        fmul st(0), st(4)
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x80]
        fmul st(0), st(5)
        faddp st(1), st(0)
        fmul st(0), st(1)
        fstp    dword ptr [ebx]
        fld    dword ptr [ebp - 0x84]
        fmul st(0), st(2)
        fld    dword ptr [ebp - 0x88]
        fmul st(0), st(4)
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x8c]
        fmul st(0), st(5)
        faddp st(1), st(0)
        fmul st(0), st(1)
        fchs    
        fstp    dword ptr [ebp - 0x24]
        mov    eax, dword ptr [ebp - 0x24]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebx + 4], eax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ebx]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_b587
        fld    dword ptr [ebx]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_b587
        fld    dword ptr [ebp - 0x24]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_b587
        fld    dword ptr [ebp - 0x24]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_b587
        mov    byte ptr [ebp - 5], 1
L_b587:
        fld    dword ptr [ebp - 0x60]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b5d4
        fld    dword ptr [ebp - 0x60]
        fchs    
        fstp    dword ptr [ebp - 0x64]
        fld    dword ptr [ebx]
        fcomp    dword ptr [ebp - 0x64]
        fnstsw  ax
        test    ah, 1
        jne    L_b5d1
        fld    dword ptr [ebx]
        fcomp    dword ptr [ebp - 0x60]
        fnstsw  ax
        test    ah, 0x41
        je    L_b5d1
        fld    dword ptr [ebp - 0x24]
        fcomp    dword ptr [ebp - 0x64]
        fnstsw  ax
        test    ah, 1
        jne    L_b5d1
        fld    dword ptr [ebp - 0x24]
        fcomp    dword ptr [ebp - 0x60]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b5d4
L_b5d1:
        inc    dword ptr [ebp - 0xc]
L_b5d4:
        add    edx, 4
        inc    edi
        add    ebx, 8
        cmp    edx, 0xc
        jl    L_b436
        mov    eax, dword ptr [ebp - 0xc]
        test    eax, eax
        jne    L_b943
        mov    edx, dword ptr [ebp - 0x48]
        mov    eax, 3
        cmp    edx, eax
        jge    L_b943
        cmp    dword ptr [ebp - 0x14], eax
        jge    L_b943
        cmp    byte ptr [ebp - 5], 1
        je    L_b62c
        mov    ecx, dword ptr [g_007da5e0]
        push    eax
        push    ecx
        call    FUN_0047cfe0
        mov    ecx, dword ptr [g_007da5dc]
        add    esp, 8
        cmp    al, 1
        jne    L_b943
L_b62c:
        xor    edi, edi
L_b62e:
        mov    dword ptr [ebp - 0x50], 0xbf800000
        mov    dword ptr [ebp - 0x54], 0xbf800000
        mov    dword ptr [ebp - 0x58], 0xbf800000
        mov    dword ptr [ebp - 0x4c], 0xbf800000
        mov    edx, dword ptr [ecx]
        fld    dword ptr [edx + edi*4]
        lea    edx, [edi*8]
        fstp    dword ptr [ebp - 0x58]
        mov    eax, dword ptr [ecx]
        fld    dword ptr [eax + edi*4]
        mov    eax, dword ptr [g_007da5e0]
        fstp    dword ptr [ebp - 0x54]
        mov    ecx, dword ptr [ecx]
        fld    dword ptr [ecx + edi*4]
        mov    dword ptr [ebp - 0x4c], 0x3f800000
        fstp    dword ptr [ebp - 0x50]
        mov    ecx, dword ptr [eax]
        fld    dword ptr [edx + ecx]
        lea    eax, [edx + ecx]
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
        jae    L_c154
        mov    ecx, dword ptr [ecx]
        mov    esi, dword ptr [g_007b95fc]
        add    ecx, eax
        mov    al, byte ptr [ebp - 4]
        mov    byte ptr [ecx + esi], al
        lea    ecx, [ebp - 0x58]
        mov    dword ptr [ebp - 0x14], ecx
        fld    dword ptr [g_0076ebf4]
        mov    esi, dword ptr [ebp - 0x14]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x30]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x30]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x1c], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x30]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x30]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x1c], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x30]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x30]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x30]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x30]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    eax, dword ptr [g_007da5e0]
        mov    ecx, dword ptr [eax]
        mov    esi, dword ptr [ebp - 4]
        add    edx, ecx
        mov    ecx, dword ptr [g_007b9600]
        mov    dword ptr [ebp - 0x14], edx
        mov    dl, byte ptr [ebp - 4]
        and    esi, 0xff
        inc    dl
        mov    byte ptr [ebp - 4], dl
        mov    edx, dword ptr [g_007b95f8]
        lea    eax, [esi + ecx]
        cmp    eax, dword ptr [edx + 4]
        jae    L_c154
        mov    ecx, dword ptr [ebp - 0x18]
        lea    edx, [edi + ecx]
        mov    ecx, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ecx + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + ecx]
        lea    eax, [eax + eax*2]
        mov    ecx, ebx
        mov    ebx, dword ptr [ebp - 0x28]
        lea    edx, [ecx + ecx*2]
        mov    ecx, dword ptr [ebx + 0x14]
        lea    edx, [ecx + edx*4]
        mov    ecx, dword ptr [g_007b95f8]
        push    edx
        mov    edx, dword ptr [ecx]
        lea    ecx, [edx + eax*4]
        call    FUN_0040c410
        mov    ecx, dword ptr [g_007b95f4]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007b9600]
        mov    ecx, dword ptr [ebp - 0x14]
        add    eax, esi
        mov    esi, dword ptr [ecx]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [edx + eax*8], esi
        mov    dword ptr [edx + eax*8 + 4], ecx
        mov    edx, dword ptr [g_007b95ec]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    dword ptr [ecx + eax*4], edx
        cmp    byte ptr [ebp - 0x10], 0xfc
        jb    L_b933
        mov    al, byte ptr [ebp - 4]
        test    al, al
        jbe    L_b933
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 4]
        and    eax, 0xff
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x14], ecx
        mov    ecx, dword ptr [g_007b960c]
        push    4
        lea    eax, [ebp - 0x48]
        mov    dword ptr [ebp - 0x48], 3
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 8]
        cmp    eax, 0x100
        jb    L_b8cb
        mov    ecx, dword ptr [ebx + 0x30]
        mov    eax, dword ptr [ebp - 0x9c]
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
L_b8cb:
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx]
        push    4
        push    0x7b9600
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x14]
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
        lea    ecx, [ebp - 0x2c]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    esi, dword ptr [g_007b9600]
        mov    edx, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [g_007b95fc]
        mov    eax, dword ptr [ebp - 0x2c]
        add    esi, edx
        add    ecx, eax
        mov    dword ptr [g_007b9600], esi
        mov    dword ptr [g_007b95fc], ecx
        mov    byte ptr [ebp - 0x10], 0
        mov    byte ptr [ebp - 4], 0
L_b933:
        mov    ecx, dword ptr [g_007da5dc]
        inc    edi
        cmp    edi, 3
        jl    L_b62e
L_b943:
        mov    eax, dword ptr [ebp - 0x44]
        mov    edi, dword ptr [ebp - 0x20]
        mov    esi, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ebp - 0x68]
        inc    eax
        add    edi, 0x10
        add    esi, 3
        cmp    eax, edx
        mov    dword ptr [ebp - 0x44], eax
        mov    dword ptr [ebp - 0x20], edi
        mov    dword ptr [ebp - 0x18], esi
        jge    L_c053
        mov    esi, dword ptr [ebp - 0x28]
        xor    edi, edi
        jmp    L_b3d4
        mov    eax, dword ptr [ebx + 0x74]
        mov    ecx, dword ptr [ebx + 0x54]
        mov    edx, dword ptr [ebx + 0x64]
        mov    dword ptr [ebp - 0x34], eax
        mov    al, byte ptr [g_007d98e8]
        test    al, 1
        mov    dword ptr [ebp - 0x3c], ecx
        mov    dword ptr [ebp - 0x38], edx
        jne    L_b9a4
        mov    dl, al
        or    dl, 1
        push    0x45c180
        mov    byte ptr [g_007d98e8], dl
        call    FUN_0075dbbe
        add    esp, 4
L_b9a4:
        mov    eax, dword ptr [ebp + 8]
        lea    ecx, [eax + 0xb8]
        add    eax, 0xf8
        lea    edx, [ebp - 0x118]
        mov    dword ptr [ebp - 0x30], ecx
        mov    dword ptr [ebp - 0x40], eax
        mov    dword ptr [ebp + 8], edx
        mov    edx, dword ptr [ebp - 0x40]
        push    esi
        mov    esi, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fadd    dword ptr [esi + 0x2c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x38]
        fxch    st(1)
        fstp    dword ptr [eax + 0x2c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x30]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x34]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x38]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [eax + 0x3c]
        pop    esi
        mov    edi, dword ptr [ebp - 0x28]
        mov    eax, dword ptr [edi + 0x18]
        xor    ebx, ebx
        xor    esi, esi
        cmp    eax, ebx
        jbe    L_bcb8
        lea    ecx, [ebp - 0x58]
        lea    eax, [ebp - 0x118]
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x40], eax
        xor    ecx, ecx
L_bbe4:
        mov    eax, dword ptr [edi + 0x14]
        mov    edx, ecx
        add    edx, eax
        mov    dword ptr [ebp - 0x30], edx
        mov    edx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp - 0x30]
        fld    dword ptr [eax]
        fld    dword ptr [eax + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp + 8]
        fld    dword ptr [edx + 0x34]
        fmul st(0), st(2)
        fld    dword ptr [edx + 0x38]
        fmul st(0), st(2)
        fxch    st(1)
        fadd    dword ptr [edx + 0x3c]
        fld    dword ptr [edx + 0x30]
        fmul st(0), st(5)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul st(0), st(4)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld    dword ptr [edx + 0x10]
        fmul st(0), st(5)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x24]
        fmul st(0), st(4)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x28]
        fmul st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fadd    dword ptr [edx + 0x2c]
        fld    dword ptr [edx + 0x20]
        fmul st(0), st(5)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul st(0), st(4)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fadd    dword ptr [edx + 0xc]
        fld    dword ptr [edx]
        fmul st(0), st(5)
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [g_0076d064]
        fdiv    dword ptr [ebp - 0x4c]
        mov    eax, dword ptr [edi + 0x18]
        inc    esi
        add    ecx, 0xc
        cmp    esi, eax
        fld    dword ptr [ebp - 0x58]
        fmul st(0), st(1)
        fstp    dword ptr [ecx + 0x7d8cdc]
        fld    dword ptr [ebp - 0x54]
        fmul st(0), st(1)
        fstp    dword ptr [ecx + 0x7d8ce0]
        fld    dword ptr [ebp - 0x50]
        fmul st(0), st(1)
        fstp    dword ptr [ecx + 0x7d8ce4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jb    L_bbe4
L_bcb8:
        mov    eax, dword ptr [ebp - 0x68]
        xor    edx, edx
        cmp    eax, ebx
        mov    dword ptr [ebp - 0x44], edx
        mov    dword ptr [ebp - 0x18], ebx
        jle    L_c154
        mov    ecx, dword ptr [g_007b95fc]
        mov    dword ptr [ebp + 8], ebx
L_bcd4:
        mov    eax, dword ptr [g_007d98fc]
        mov    eax, dword ptr [eax]
        cmp    byte ptr [eax + edx], 0
        je    L_c012
        mov    eax, dword ptr [edi + 0x5c]
        fld    dword ptr [ebp - 0x34]
        mov    esi, dword ptr [ebp + 8]
        fmul    dword ptr [eax + esi + 8]
        add    eax, esi
        fld    dword ptr [ebp - 0x38]
        fmul    dword ptr [eax + 4]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x3c]
        fmul    dword ptr [eax]
        faddp st(1), st(0)
        fcomp    dword ptr [eax + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c012
        mov    edx, dword ptr [g_007da5e0]
        mov    esi, dword ptr [edx]
        mov    eax, dword ptr [edi + 0x48]
        mov    edx, dword ptr [ebp - 0x18]
        add    edx, eax
        mov    edi, 3
L_bd26:
        xor    eax, eax
        mov    al, byte ptr [edx]
        add    esi, 8
        lea    eax, [eax + eax*2]
        shl    eax, 2
        mov    ebx, dword ptr [eax + 0x7d8ce8]
        mov    eax, dword ptr [eax + 0x7d8cec]
        mov    dword ptr [esi - 8], ebx
        mov    dword ptr [esi - 4], eax
        inc    edx
        dec    edi
        jne    L_bd26
        mov    edi, dword ptr [ebp - 0x28]
        mov    dword ptr [ebp - 0xc], 0
L_bd53:
        mov    eax, dword ptr [ebp - 0x10]
        mov    dl, byte ptr [ebp - 0x10]
        and    eax, 0xff
        inc    dl
        mov    byte ptr [ebp - 0x10], dl
        mov    edx, dword ptr [g_007b95f0]
        mov    ebx, dword ptr [edx + 4]
        lea    esi, [eax + ecx]
        cmp    esi, ebx
        jae    L_c154
        mov    edx, dword ptr [edx]
        add    edx, eax
        mov    al, byte ptr [ebp - 4]
        mov    byte ptr [edx + ecx], al
        fld    dword ptr [g_0076ebf4]
        mov    esi, 0x8bd548
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x30]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x30]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x1c], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x30]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x30]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x1c], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x30]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x30]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x30]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x30]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    ecx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [edi + 0x48]
        mov    bl, byte ptr [ebp - 4]
        xor    edx, edx
        mov    edx, dword ptr [ebp - 0x18]
        add    ecx, edx
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        mov    ecx, dword ptr [edi + 0x14]
        mov    eax, edx
        mov    edx, dword ptr [g_007b9600]
        lea    eax, [eax + eax*2]
        lea    ecx, [ecx + eax*4]
        mov    eax, dword ptr [ebp - 4]
        and    eax, 0xff
        add    eax, edx
        mov    edx, dword ptr [g_007b95f8]
        mov    esi, dword ptr [edx + 4]
        inc    bl
        cmp    eax, esi
        mov    byte ptr [ebp - 4], bl
        jae    L_c154
        mov    edx, dword ptr [edx]
        lea    esi, [eax + eax*2]
        lea    edx, [edx + esi*4]
        mov    esi, dword ptr [ecx]
        mov    dword ptr [edx], esi
        mov    esi, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [edx + 8], ecx
        mov    dword ptr [edx + 4], esi
        mov    edx, dword ptr [g_007da5e0]
        mov    ecx, dword ptr [edx]
        mov    esi, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [g_007b95f4]
        mov    edx, dword ptr [edx]
        mov    ebx, dword ptr [ecx + esi*8]
        mov    ecx, dword ptr [ecx + esi*8 + 4]
        mov    dword ptr [edx + eax*8], ebx
        mov    dword ptr [edx + eax*8 + 4], ecx
        mov    edx, dword ptr [g_007b95ec]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    dword ptr [ecx + eax*4], edx
        cmp    byte ptr [ebp - 0x10], 0xfc
        jb    L_bff9
        mov    al, byte ptr [ebp - 4]
        xor    bl, bl
        cmp    al, bl
        jbe    L_bff9
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 4]
        and    eax, 0xff
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x20], ecx
        mov    ecx, dword ptr [g_007b960c]
        push    4
        lea    eax, [ebp - 0x40]
        mov    dword ptr [ebp - 0x40], 3
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 8]
        cmp    eax, 0x100
        jb    L_bf91
        mov    eax, dword ptr [ebp - 0x9c]
        mov    edx, dword ptr [eax + 0x1c]
        lea    ecx, [eax + 0xc]
        mov    eax, dword ptr [ecx + 4]
        or    edx, 0xf
        mov    dword ptr [ecx + 0x10], edx
        mov    edx, dword ptr [edi + 0x30]
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
        je    L_bf97
        mov    edx, dword ptr [ecx]
        neg    eax
        and    eax, 3
        push    eax
        call    dword ptr [edx + 0x18]
L_bf91:
        mov    ecx, dword ptr [g_007b960c]
L_bf97:
        mov    eax, dword ptr [ecx]
        push    4
        push    0x7b9600
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x20]
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
        lea    ecx, [ebp - 0x14]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b9600]
        mov    edx, dword ptr [ebp - 0x20]
        mov    eax, dword ptr [ebp - 0x14]
        add    ecx, edx
        mov    dword ptr [g_007b9600], ecx
        mov    ecx, dword ptr [g_007b95fc]
        add    ecx, eax
        mov    dword ptr [g_007b95fc], ecx
        mov    byte ptr [ebp - 0x10], bl
        mov    byte ptr [ebp - 4], bl
        jmp    L_bfff
L_bff9:
        mov    ecx, dword ptr [g_007b95fc]
L_bfff:
        inc    esi
        cmp    esi, 3
        mov    dword ptr [ebp - 0xc], esi
        jl    L_bd53
        mov    edi, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ebp - 0x44]
L_c012:
        mov    ebx, dword ptr [ebp + 8]
        mov    esi, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [ebp - 0x68]
        inc    edx
        add    ebx, 0x10
        add    esi, 3
        cmp    edx, eax
        mov    dword ptr [ebp - 0x44], edx
        mov    dword ptr [ebp + 8], ebx
        mov    dword ptr [ebp - 0x18], esi
        jge    L_c053
        jmp    L_bcd4
L_c034:
        push    0x76ecc8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_c154
        int 3    
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_c053:
        mov    al, byte ptr [ebp - 0x10]
        test    al, al
        je    L_c154
        mov    al, byte ptr [ebp - 4]
        test    al, al
        je    L_c154
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 4]
        and    eax, 0xff
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp + 8], ecx
        mov    ecx, dword ptr [g_007b960c]
        push    4
        lea    eax, [ebp - 0x30]
        mov    dword ptr [ebp - 0x30], 3
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 8]
        cmp    eax, 0x100
        jb    L_c0f4
        mov    eax, dword ptr [ebp - 0x9c]
        mov    edx, dword ptr [ebp - 0x28]
        mov    edi, dword ptr [eax + 0x1c]
        lea    ecx, [eax + 0xc]
        mov    eax, dword ptr [edx + 0x30]
        mov    edx, dword ptr [ecx + 4]
        and    eax, 0xf
        or    edi, 0xf
        inc    eax
        and    edx, 0xfffffff0
        or    eax, edx
        mov    dword ptr [ecx + 4], eax
        mov    eax, dword ptr [g_007b960c]
        push    eax
        mov    dword ptr [ecx + 0x10], edi
        call    FUN_00491340
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx + 0x14]
        test    al, 3
        je    L_c0fa
        mov    edx, dword ptr [ecx]
        neg    eax
        and    eax, 3
        push    eax
        call    dword ptr [edx + 0x18]
L_c0f4:
        mov    ecx, dword ptr [g_007b960c]
L_c0fa:
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
        lea    ecx, [ebp - 0x1c]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    esi, dword ptr [g_007b9600]
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [g_007b95fc]
        mov    eax, dword ptr [ebp - 0x1c]
        add    esi, edx
        add    ecx, eax
        mov    dword ptr [g_007b9600], esi
        mov    dword ptr [g_007b95fc], ecx
L_c154:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x0045C160 (16 relocated pointers)
        __emit 0x82
        __emit 0xAD
        __emit 0x45
        __emit 0x00
        __emit 0x55
        __emit 0xB3
        __emit 0x45
        __emit 0x00
        __emit 0x34
        __emit 0xC0
        __emit 0x45
        __emit 0x00
        __emit 0x71
        __emit 0xB9
        __emit 0x45
        __emit 0x00
        __emit 0x54
        __emit 0xC1
        __emit 0x45
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
        __emit 0xC3
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
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x81
        __emit 0xEC
        __emit 0x80
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x53
        __emit 0x8B
        __emit 0xD9
        __emit 0xF6
        __emit 0x43
        __emit 0x30
        __emit 0x0F
        __emit 0x55
        __emit 0x56
        __emit 0x57
    }
}
