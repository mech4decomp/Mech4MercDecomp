/*
 * FUN_0047d1f0 (extent 0x47d1f0-0x47e7d4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076df00;
extern float  g_0076f46c;
extern float  g_0076f5d8;
extern float  g_0076f5dc;
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
extern char   g_007da5b8;
extern int    g_007da5dc;
extern int    g_007da5e0;
extern int    g_007da5e8;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c610(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_00428810(void);
extern void __cdecl FUN_00428830(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_00430670(void);
extern void __cdecl FUN_004306f0(void);
extern void __cdecl FUN_00430740(void);
extern void __cdecl FUN_0047cfe0(void);
extern void __cdecl FUN_0047f9e0(void);
extern void __cdecl FUN_0047fa00(void);
extern void __cdecl FUN_0047fa20(void);
extern void __cdecl FUN_00491340(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0075dbbe(void);

__declspec(naked) void FUN_0047d1f0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x11c
        push    ebx
        push    esi
        mov    esi, dword ptr [ebp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        mov    ecx, esi
        mov    dword ptr [ebp - 0x18], edi
        call    dword ptr [eax + 0x1c]
        test    eax, eax
        mov    dword ptr [ebp - 0x98], eax
        je    L_e7ca
        mov    eax, dword ptr [g_007b2220]
        test    eax, eax
        je    L_e7ca
        cmp    byte ptr [g_007b9608], 1
        je    L_e7ca
        mov    ebx, dword ptr [edi + 0x64]
        push    0x7b9460
        lea    ecx, [ebp - 0xcc]
        mov    dword ptr [ebp - 0x9c], ebx
        call    FUN_00428850
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        mov    dword ptr [ebp - 0x54], 0x3f800000
        mov    byte ptr [ebp - 0x10], 0
        mov    byte ptr [ebp - 4], 0
        call    dword ptr [edx + 0xc]
        add    eax, -3
        cmp    eax, 4
        ja    L_e6aa
        jmp    dword ptr [eax*4 + 0x47e7d4]
        add    esi, 0x48
        push    esi
        lea    ecx, [ebp - 0x3c]
        call    FUN_00419480
        xor    eax, eax
        cmp    ebx, eax
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x24], eax
        jle    L_e7ca
        mov    dword ptr [ebp - 0x40], eax
L_d294:
        mov    ecx, dword ptr [edi + 0x60]
        movzx    dx, byte ptr [ecx + eax]
        mov    ecx, dword ptr [g_007da5e8]
        mov    word ptr [ebp - 0x50], dx
        mov    edx, dword ptr [ecx]
        cmp    byte ptr [edx + eax], 0
        je    L_d838
        mov    eax, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [eax + 0x58]
        mov    edx, dword ptr [ebp - 0x40]
        lea    esi, [ecx + edx]
        lea    eax, [ebp - 0x3c]
        push    eax
        mov    ecx, esi
        call    FUN_0040c610
        fsub    dword ptr [esi + 0xc]
        mov    byte ptr [ebp - 9], 0
        fstp    dword ptr [ebp - 8]
        fld    dword ptr [ebp - 8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_d838
        fld    dword ptr [ebp - 8]
        mov    ecx, dword ptr [ebp + 8]
        fcomp    dword ptr [ecx + 0x80]
        fnstsw  ax
        test    ah, 0x41
        je    L_d303
        mov    dword ptr [ebp - 0x54], 0x3f800000
        jmp    L_d32c
L_d303:
        fld    dword ptr [ebp - 8]
        fcomp    dword ptr [ecx + 0x84]
        fnstsw  ax
        test    ah, 1
        je    L_d838
        mov    eax, dword ptr [ebp + 8]
        fld    dword ptr [eax + 0x84]
        fsub    dword ptr [ebp - 8]
        fmul    dword ptr [eax + 0x88]
        fstp    dword ptr [ebp - 0x54]
L_d32c:
        fld    dword ptr [g_0076d064]
        push    0x7b9460
        fdiv    dword ptr [ebp - 8]
        lea    ecx, [ebp - 0xcc]
        fstp    dword ptr [ebp - 0x1c]
        call    FUN_00419460
        push    0
        push    1
        push    2
        push    esi
        lea    ecx, [ebp - 0xcc]
        call    FUN_0041fde0
        lea    ecx, [ebp - 0x88]
        push    ecx
        lea    ecx, [ebp - 0xcc]
        call    FUN_0047fa00
        lea    edx, [ebp - 0x70]
        push    edx
        lea    ecx, [ebp - 0xcc]
        call    FUN_0047fa20
        lea    eax, [ebp - 0x7c]
        push    eax
        lea    ecx, [ebp - 0xcc]
        call    FUN_0047f9e0
        fld    dword ptr [ebp - 8]
        push    ecx
        fchs    
        lea    ecx, [ebp - 0x7c]
        fstp    dword ptr [esp]
        push    ecx
        lea    ecx, [ebp - 0x94]
        call    FUN_0040ca40
        lea    edx, [ebp - 0x3c]
        push    edx
        lea    eax, [ebp - 0x94]
        push    eax
        lea    ecx, [ebp - 0x94]
        call    FUN_0040c9e0
        mov    eax, dword ptr [ebp - 0x50]
        xor    edi, edi
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x14], eax
        jle    L_d4c2
        mov    eax, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [eax + 0x14]
        mov    eax, dword ptr [eax + 0x48]
        mov    dword ptr [ebp - 0x4c], ecx
        add    eax, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp - 8], eax
L_d3dd:
        mov    edx, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ebp - 0x4c]
        xor    eax, eax
        mov    al, byte ptr [edx]
        lea    eax, [eax + eax*2]
        mov    edx, dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        mov    dword ptr [ebp - 0x60], edx
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x5c], ecx
        mov    edx, dword ptr [eax + 8]
        lea    eax, [ebp - 0x94]
        push    eax
        lea    ecx, [ebp - 0x60]
        push    ecx
        lea    ecx, [ebp - 0x60]
        mov    dword ptr [ebp - 0x58], edx
        call    FUN_0040ca10
        mov    edx, dword ptr [g_007da5e0]
        mov    eax, dword ptr [edx]
        lea    esi, [edi*8]
        mov    ebx, esi
        add    ebx, eax
        lea    eax, [ebp - 0x60]
        push    eax
        lea    ecx, [ebp - 0x88]
        call    FUN_0040c610
        mov    ecx, dword ptr [g_007da5e0]
        mov    edx, dword ptr [ecx]
        fmul    dword ptr [ebp - 0x1c]
        lea    ecx, [ebp - 0x70]
        fchs    
        fstp    dword ptr [ebx]
        mov    ebx, esi
        add    ebx, edx
        lea    edx, [ebp - 0x60]
        push    edx
        call    FUN_0040c610
        mov    eax, dword ptr [g_007da5e0]
        mov    ecx, dword ptr [eax]
        fmul    dword ptr [ebp - 0x1c]
        add    esi, ecx
        fchs    
        fstp    dword ptr [ebx + 4]
        fld    dword ptr [esi]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_d4a6
        fld    dword ptr [esi]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_d4a6
        fld    dword ptr [esi + 4]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_d4a6
        fld    dword ptr [esi + 4]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_d4a6
        mov    byte ptr [ebp - 9], 1
L_d4a6:
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ebp - 0x14]
        inc    edi
        inc    ecx
        cmp    edi, eax
        mov    dword ptr [ebp - 8], ecx
        jl    L_d3dd
        cmp    byte ptr [ebp - 9], 1
        je    L_d4da
        mov    eax, dword ptr [ebp - 0x14]
L_d4c2:
        mov    edx, dword ptr [g_007da5e0]
        push    eax
        push    edx
        call    FUN_0047cfe0
        add    esp, 8
        cmp    al, 1
        jne    L_d838
L_d4da:
        mov    eax, dword ptr [ebp + 8]
        fld    dword ptr [eax + 8]
        mov    ecx, dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x54]
        mov    eax, 2
        cmp    ecx, eax
        fmul    dword ptr [ebp - 0x54]
        mov    dword ptr [ebp - 0xd0], 0x3f800000
        mov    dword ptr [ebp - 8], eax
        fst    dword ptr [ebp - 0xdc]
        fst    dword ptr [ebp - 0xd8]
        fstp    dword ptr [ebp - 0xd4]
        jle    L_d5b5
        mov    ecx, dword ptr [g_007b95f0]
        mov    edx, dword ptr [ecx + 4]
        mov    eax, dword ptr [g_007b95fc]
        mov    dword ptr [ebp - 0x1c], edx
L_d526:
        mov    ecx, dword ptr [ebp - 4]
        mov    dl, byte ptr [ebp - 4]
        mov    bl, byte ptr [ebp - 0x10]
        and    ecx, 0xff
        inc    dl
        mov    byte ptr [ebp - 4], dl
        mov    edx, dword ptr [ebp - 0x1c]
        lea    esi, [ecx + eax]
        cmp    esi, edx
        jae    L_e7ca
        mov    esi, dword ptr [g_007b95f0]
        mov    edi, dword ptr [esi]
        mov    esi, dword ptr [ebp - 4]
        add    ecx, edi
        mov    byte ptr [ecx + eax], bl
        mov    cl, byte ptr [ebp - 4]
        and    esi, 0xff
        inc    cl
        mov    byte ptr [ebp - 4], cl
        lea    ecx, [esi + eax]
        cmp    ecx, edx
        jae    L_e7ca
        mov    dl, byte ptr [ebp - 8]
        add    dl, bl
        mov    bl, byte ptr [ebp - 4]
        mov    cl, dl
        dec    cl
        add    esi, edi
        mov    byte ptr [esi + eax], cl
        mov    ecx, dword ptr [ebp - 4]
        and    ecx, 0xff
        inc    bl
        mov    byte ptr [ebp - 4], bl
        mov    ebx, dword ptr [ebp - 0x1c]
        lea    esi, [ecx + eax]
        cmp    esi, ebx
        jae    L_e7ca
        add    edi, ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    byte ptr [edi + eax], dl
        mov    edx, dword ptr [ebp - 0x14]
        inc    ecx
        cmp    ecx, edx
        mov    dword ptr [ebp - 8], ecx
        jl    L_d526
L_d5b5:
        mov    eax, dword ptr [ebp - 0x14]
        xor    edi, edi
        test    eax, eax
        mov    dword ptr [ebp - 8], edi
        jle    L_d838
        lea    edx, [ebp - 0xdc]
        mov    dword ptr [ebp - 0x28], edx
L_d5ce:
        mov    eax, dword ptr [g_007da5e0]
        mov    ecx, dword ptr [eax]
        lea    edx, [edi*8]
        fld    dword ptr [edx + ecx]
        lea    eax, [edx + ecx]
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [eax]
        fld    dword ptr [eax + 4]
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [g_0076f46c]
        mov    esi, dword ptr [ebp - 0x28]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x20]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x20]
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
        fstp    dword ptr [ebp - 0x20]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x20]
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
        fstp    dword ptr [ebp - 0x20]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x20]
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
        fstp    dword ptr [ebp - 0x20]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x20]
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
        mov    eax, dword ptr [g_007da5e0]
        mov    ecx, dword ptr [eax]
        mov    esi, dword ptr [ebp - 0x10]
        add    edx, ecx
        mov    ecx, dword ptr [g_007b9600]
        mov    ebx, edx
        mov    dl, byte ptr [ebp - 0x10]
        and    esi, 0xff
        inc    dl
        mov    byte ptr [ebp - 0x10], dl
        mov    edx, dword ptr [g_007b95f8]
        lea    eax, [esi + ecx]
        cmp    eax, dword ptr [edx + 4]
        jae    L_e7ca
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ecx + 0x48]
        add    edx, edi
        mov    edi, dword ptr [ebp - 0x24]
        xor    ecx, ecx
        mov    cl, byte ptr [edx + edi]
        mov    edx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [edx + 0x14]
        lea    ecx, [ecx + ecx*2]
        lea    ecx, [edx + ecx*4]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [g_007b95f8]
        push    ecx
        mov    ecx, dword ptr [eax]
        lea    ecx, [ecx + edx*4]
        call    FUN_0040c410
        mov    edx, dword ptr [g_007b9600]
        mov    eax, dword ptr [g_007b95f4]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebx + 4]
        add    esi, edx
        mov    edx, dword ptr [ebx]
        mov    dword ptr [ecx + esi*8], edx
        mov    dword ptr [ecx + esi*8 + 4], eax
        mov    ecx, dword ptr [g_007b95ec]
        mov    eax, dword ptr [ebp - 0x44]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [edx + esi*4], eax
        cmp    byte ptr [ebp - 4], 0xfc
        jb    L_d826
        mov    al, byte ptr [ebp - 0x10]
        xor    bl, bl
        cmp    al, bl
        jbe    L_d826
        mov    ecx, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp - 0x10]
        and    ecx, 0xff
        and    edx, 0xff
        mov    dword ptr [ebp - 0x4c], ecx
        mov    ecx, dword ptr [g_007b960c]
        mov    dword ptr [ebp - 0x1c], edx
        push    4
        lea    edx, [ebp - 0x48]
        mov    dword ptr [ebp - 0x48], 3
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [eax + 0x30]
        and    ecx, 0xf
        inc    ecx
        push    ecx
        mov    ecx, dword ptr [ebp - 0x98]
        call    FUN_00430740
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        push    4
        push    0x7b9600
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x1c]
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
        lea    ecx, [ebp - 0x4c]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    esi, dword ptr [g_007b9600]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [g_007b95fc]
        mov    eax, dword ptr [ebp - 0x4c]
        add    esi, edx
        add    ecx, eax
        mov    dword ptr [g_007b9600], esi
        mov    dword ptr [g_007b95fc], ecx
        mov    byte ptr [ebp - 4], bl
        mov    byte ptr [ebp - 0x10], bl
L_d826:
        mov    edi, dword ptr [ebp - 8]
        mov    eax, dword ptr [ebp - 0x14]
        inc    edi
        cmp    edi, eax
        mov    dword ptr [ebp - 8], edi
        jl    L_d5ce
L_d838:
        mov    eax, dword ptr [ebp - 0x50]
        mov    edx, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    edi, dword ptr [ebp - 0x40]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0x9c]
        inc    ecx
        add    edi, 0x10
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x2c], ecx
        mov    dword ptr [ebp - 0x40], edi
        mov    dword ptr [ebp - 0x24], edx
        jge    L_e6c9
        mov    edi, dword ptr [ebp - 0x18]
        mov    eax, ecx
        jmp    L_d294
        lea    ecx, [esi + 0x48]
        push    ecx
        lea    ecx, [ebp - 0xcc]
        call    FUN_00419460
        mov    eax, dword ptr [ebp - 0xb0]
        mov    edx, dword ptr [ebp - 0xc0]
        mov    ecx, dword ptr [ebp - 0xa0]
        mov    dword ptr [ebp - 0x38], eax
        mov    dword ptr [ebp - 0x3c], edx
        mov    edx, dword ptr [esi + 0x94]
        lea    eax, [ebp - 0x88]
        mov    dword ptr [ebp - 0x34], ecx
        push    eax
        lea    ecx, [ebp - 0xcc]
        mov    dword ptr [ebp - 0x48], edx
        call    FUN_00428810
        lea    ecx, [ebp - 0x70]
        push    ecx
        lea    ecx, [ebp - 0xcc]
        call    FUN_00428830
        lea    edx, [ebp - 0x7c]
        push    edx
        lea    ecx, [ebp - 0xcc]
        call    FUN_00428730
        xor    edx, edx
        xor    eax, eax
        cmp    ebx, edx
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x24], edx
        jle    L_e7ca
        mov    esi, dword ptr [g_007da5dc]
        mov    ecx, dword ptr [g_007b95fc]
        mov    dword ptr [ebp - 0x1c], edx
L_d8f4:
        mov    dword ptr [ebp - 0x20], edx
        mov    dword ptr [ebp - 0x44], edx
        mov    edx, dword ptr [edi + 0x60]
        movzx    dx, byte ptr [edx + eax]
        mov    word ptr [ebp - 0x50], dx
        mov    edx, dword ptr [g_007da5e8]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + eax], 0
        je    L_dee2
        mov    eax, dword ptr [ebp - 0x18]
        fld    dword ptr [ebp - 0x34]
        mov    eax, dword ptr [eax + 0x58]
        mov    edx, dword ptr [ebp - 0x1c]
        fmul    dword ptr [eax + edx + 8]
        add    eax, edx
        fld    dword ptr [ebp - 0x38]
        mov    byte ptr [ebp - 9], 0
        fmul    dword ptr [eax + 4]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x3c]
        fmul    dword ptr [eax]
        faddp st(1), st(0)
        fcomp    dword ptr [eax + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_dee2
        mov    eax, dword ptr [ebp - 0x50]
        xor    edi, edi
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x40], edi
        mov    dword ptr [ebp - 0x14], eax
        jle    L_db10
        mov    eax, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [eax + 0x14]
        mov    ebx, dword ptr [eax + 0x48]
        mov    eax, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp - 0x4c], edx
        add    ebx, eax
L_d972:
        mov    edx, dword ptr [ebp - 0x4c]
        xor    eax, eax
        mov    al, byte ptr [ebx]
        lea    eax, [eax + eax*2]
        fld    dword ptr [edx + eax*4]
        lea    eax, [edx + eax*4]
        fsub    dword ptr [ebp - 0x3c]
        fld    dword ptr [eax + 4]
        fsub    dword ptr [ebp - 0x38]
        fld    dword ptr [eax + 8]
        fsub    dword ptr [ebp - 0x34]
        fld    st(2)
        fmul    dword ptr [ebp - 0x7c]
        fld    st(1)
        fmul    dword ptr [ebp - 0x74]
        faddp st(1), st(0)
        fld    st(2)
        fmul    dword ptr [ebp - 0x78]
        faddp st(1), st(0)
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_dae8
        mov    edx, dword ptr [ebp + 8]
        fld    st(0)
        fcomp    dword ptr [edx + 0x80]
        fnstsw  ax
        test    ah, 0x41
        je    L_d9d0
        mov    dword ptr [ebp - 0x54], 0x3f800000
        jmp    L_d9f3
L_d9d0:
        fcom    dword ptr [edx + 0x84]
        fnstsw  ax
        test    ah, 1
        je    L_d9f0
        fld    dword ptr [edx + 0x84]
        fsub st(0), st(1)
        fmul    dword ptr [edx + 0x88]
        fstp    dword ptr [ebp - 0x54]
        jmp    L_d9f3
L_d9f0:
        inc    dword ptr [ebp - 0x44]
L_d9f3:
        mov    eax, dword ptr [ebp + 8]
        fld    dword ptr [eax + 8]
        mov    edx, dword ptr [esi]
        fmul    dword ptr [ebp - 0x54]
        mov    eax, dword ptr [g_007da5e0]
        fmul    dword ptr [ebp - 0x54]
        fstp    dword ptr [edx + edi*4]
        mov    edx, dword ptr [eax]
        lea    edx, [edx + edi*8]
        fmul    dword ptr [ebp - 0x48]
        fadd    st(0), st(0)
        fld    dword ptr [ebp - 0x88]
        fmul st(0), st(4)
        fld    st(3)
        fmul    dword ptr [ebp - 0x84]
        faddp st(1), st(0)
        fld    st(2)
        fmul    dword ptr [ebp - 0x80]
        faddp st(1), st(0)
        fdiv st(0), st(1)
        fstp    dword ptr [edx]
        fld    dword ptr [ebp - 0x70]
        fmul st(0), st(4)
        fxch    st(3)
        fmul    dword ptr [ebp - 0x6c]
        faddp st(3), st(0)
        fxch    st(1)
        fmul    dword ptr [ebp - 0x68]
        faddp st(2), st(0)
        fxch    st(1)
        fdiv st(0), st(1)
        fchs    
        fstp    dword ptr [ebp - 8]
        mov    eax, dword ptr [ebp - 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [edx + 4], eax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [edx]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_da98
        fld    dword ptr [edx]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_da98
        fld    dword ptr [ebp - 8]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        jne    L_da98
        fld    dword ptr [ebp - 8]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_da98
        mov    byte ptr [ebp - 9], 1
L_da98:
        fld    dword ptr [edx]
        fcomp    dword ptr [g_0076f5dc]
        fnstsw  ax
        test    ah, 1
        jne    L_dad6
        fld    dword ptr [edx]
        fcomp    dword ptr [g_0076f5d8]
        fnstsw  ax
        test    ah, 0x41
        je    L_dad6
        fld    dword ptr [ebp - 8]
        fcomp    dword ptr [g_0076f5dc]
        fnstsw  ax
        test    ah, 1
        je    L_dad9
        fld    dword ptr [ebp - 8]
        fcomp    dword ptr [g_0076f5d8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_dad9
L_dad6:
        inc    dword ptr [ebp - 0x40]
L_dad9:
        mov    eax, dword ptr [ebp - 0x14]
        inc    edi
        inc    ebx
        cmp    edi, eax
        jl    L_d972
        jmp    L_daf7
L_dae8:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 0x20], 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_daf7:
        mov    eax, dword ptr [ebp - 0x40]
        test    eax, eax
        jne    L_dee2
        mov    eax, dword ptr [ebp - 0x20]
        test    eax, eax
        jne    L_dee2
        mov    eax, dword ptr [ebp - 0x14]
L_db10:
        cmp    dword ptr [ebp - 0x44], eax
        jge    L_dee2
        cmp    byte ptr [ebp - 9], 1
        mov    ebx, dword ptr [ebp - 0x14]
        je    L_db46
        mov    ecx, dword ptr [g_007da5e0]
        push    ebx
        push    ecx
        call    FUN_0047cfe0
        mov    esi, dword ptr [g_007da5dc]
        mov    ecx, dword ptr [g_007b95fc]
        add    esp, 8
        cmp    al, 1
        jne    L_dee2
L_db46:
        cmp    ebx, 2
        mov    dword ptr [ebp - 8], 2
        jle    L_dbf5
        mov    edx, dword ptr [g_007b95f0]
        mov    eax, dword ptr [edx + 4]
        mov    dword ptr [ebp - 0x20], eax
L_db62:
        mov    eax, dword ptr [ebp - 4]
        mov    dl, byte ptr [ebp - 4]
        mov    bl, byte ptr [ebp - 0x10]
        and    eax, 0xff
        inc    dl
        mov    byte ptr [ebp - 4], dl
        mov    edx, dword ptr [ebp - 0x20]
        lea    esi, [eax + ecx]
        cmp    esi, edx
        jae    L_e7ca
        mov    esi, dword ptr [g_007b95f0]
        mov    edi, dword ptr [esi]
        mov    esi, dword ptr [ebp - 4]
        add    eax, edi
        mov    byte ptr [eax + ecx], bl
        mov    al, byte ptr [ebp - 4]
        and    esi, 0xff
        inc    al
        mov    byte ptr [ebp - 4], al
        lea    eax, [esi + ecx]
        cmp    eax, edx
        jae    L_e7ca
        mov    dl, byte ptr [ebp - 8]
        add    dl, bl
        mov    bl, byte ptr [ebp - 4]
        mov    al, dl
        dec    al
        add    esi, edi
        mov    byte ptr [esi + ecx], al
        mov    eax, dword ptr [ebp - 4]
        and    eax, 0xff
        inc    bl
        mov    byte ptr [ebp - 4], bl
        mov    ebx, dword ptr [ebp - 0x20]
        lea    esi, [eax + ecx]
        cmp    esi, ebx
        jae    L_e7ca
        mov    ebx, dword ptr [ebp - 0x14]
        add    eax, edi
        mov    byte ptr [eax + ecx], dl
        mov    eax, dword ptr [ebp - 8]
        inc    eax
        cmp    eax, ebx
        mov    dword ptr [ebp - 8], eax
        jl    L_db62
        mov    esi, dword ptr [g_007da5dc]
L_dbf5:
        xor    edi, edi
        test    ebx, ebx
        jle    L_dee2
        lea    ecx, [ebp - 0x64]
        mov    dword ptr [ebp - 0x4c], ecx
L_dc05:
        mov    dword ptr [ebp - 0x5c], 0xbf800000
        mov    dword ptr [ebp - 0x60], 0xbf800000
        mov    dword ptr [ebp - 0x64], 0xbf800000
        mov    dword ptr [ebp - 0x58], 0xbf800000
        mov    edx, dword ptr [esi]
        fld    dword ptr [edx + edi*4]
        lea    edx, [edi*8]
        fstp    dword ptr [ebp - 0x64]
        mov    eax, dword ptr [esi]
        fld    dword ptr [eax + edi*4]
        mov    eax, dword ptr [g_007da5e0]
        fstp    dword ptr [ebp - 0x60]
        mov    ecx, dword ptr [esi]
        fld    dword ptr [ecx + edi*4]
        mov    dword ptr [ebp - 0x58], 0x3f800000
        fstp    dword ptr [ebp - 0x5c]
        mov    ecx, dword ptr [eax]
        fld    dword ptr [edx + ecx]
        lea    eax, [edx + ecx]
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [eax]
        fld    dword ptr [eax + 4]
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [g_0076f46c]
        mov    esi, dword ptr [ebp - 0x4c]
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
        mov    dword ptr [ebp - 0x28], ebx
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
        mov    ecx, dword ptr [ebp - 0x28]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x28], ecx
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
        mov    ecx, dword ptr [ebp - 0x28]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x28], ecx
        mov    eax, dword ptr [g_007da5e0]
        mov    ecx, dword ptr [eax]
        mov    esi, dword ptr [ebp - 0x10]
        add    edx, ecx
        mov    ecx, dword ptr [g_007b9600]
        mov    dword ptr [ebp - 0x20], edx
        mov    dl, byte ptr [ebp - 0x10]
        and    esi, 0xff
        inc    dl
        mov    byte ptr [ebp - 0x10], dl
        mov    edx, dword ptr [g_007b95f8]
        lea    eax, [esi + ecx]
        cmp    eax, dword ptr [edx + 4]
        jae    L_e7ca
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ecx + 0x48]
        mov    ebx, dword ptr [ebp - 0x24]
        xor    ecx, ecx
        add    edx, edi
        mov    cl, byte ptr [edx + ebx]
        mov    ebx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ebx + 0x14]
        lea    ecx, [ecx + ecx*2]
        lea    ecx, [edx + ecx*4]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [g_007b95f8]
        push    ecx
        mov    ecx, dword ptr [eax]
        lea    ecx, [ecx + edx*4]
        call    FUN_0040c410
        mov    eax, dword ptr [g_007b95f4]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007b9600]
        mov    eax, dword ptr [ebp - 0x20]
        add    esi, edx
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ecx + esi*8], edx
        mov    dword ptr [ecx + esi*8 + 4], eax
        mov    ecx, dword ptr [g_007b95ec]
        mov    eax, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [edx + esi*4], eax
        cmp    byte ptr [ebp - 4], 0xfc
        jb    L_deca
        mov    al, byte ptr [ebp - 0x10]
        test    al, al
        jbe    L_deca
        mov    ecx, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp - 0x10]
        and    ecx, 0xff
        and    edx, 0xff
        mov    dword ptr [ebp - 0x44], ecx
        mov    ecx, dword ptr [g_007b960c]
        mov    dword ptr [ebp - 0x20], edx
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
        jb    L_de60
        mov    edx, dword ptr [ebx + 0x30]
        mov    ecx, dword ptr [ebp - 0x98]
        and    edx, 0xf
        lea    esi, [ecx + 0xc]
        inc    edx
        push    edx
        mov    ecx, esi
        call    FUN_004306f0
        mov    eax, dword ptr [g_007b960c]
        push    eax
        mov    ecx, esi
        call    FUN_00491340
        mov    ecx, dword ptr [g_007b960c]
        call    FUN_00430670
L_de60:
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
        lea    ecx, [ebp - 0x44]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b9600]
        mov    edx, dword ptr [ebp - 0x20]
        mov    eax, dword ptr [ebp - 0x44]
        add    ecx, edx
        mov    dword ptr [g_007b9600], ecx
        mov    ecx, dword ptr [g_007b95fc]
        add    ecx, eax
        mov    dword ptr [g_007b95fc], ecx
        mov    byte ptr [ebp - 4], 0
        mov    byte ptr [ebp - 0x10], 0
        jmp    L_ded0
L_deca:
        mov    ecx, dword ptr [g_007b95fc]
L_ded0:
        mov    eax, dword ptr [ebp - 0x14]
        mov    esi, dword ptr [g_007da5dc]
        inc    edi
        cmp    edi, eax
        jl    L_dc05
L_dee2:
        mov    eax, dword ptr [ebp - 0x1c]
        mov    edi, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ebp - 0x2c]
        add    eax, 0x10
        mov    dword ptr [ebp - 0x1c], eax
        mov    eax, dword ptr [ebp - 0x50]
        and    eax, 0xffff
        add    edi, eax
        mov    eax, dword ptr [ebp - 0x9c]
        inc    edx
        cmp    edx, eax
        mov    dword ptr [ebp - 0x2c], edx
        mov    dword ptr [ebp - 0x24], edi
        jge    L_e6c9
        mov    edi, dword ptr [ebp - 0x18]
        mov    eax, edx
        xor    edx, edx
        jmp    L_d8f4
        mov    eax, dword ptr [esi + 0x54]
        mov    ecx, dword ptr [esi + 0x64]
        mov    edx, dword ptr [esi + 0x74]
        mov    dword ptr [ebp - 0x3c], eax
        mov    al, byte ptr [g_007da5b8]
        test    al, 1
        mov    dword ptr [ebp - 0x38], ecx
        mov    dword ptr [ebp - 0x34], edx
        jne    L_df4f
        mov    dl, al
        or    dl, 1
        push    0x47e7f0
        mov    byte ptr [g_007da5b8], dl
        call    FUN_0075dbbe
        add    esp, 4
L_df4f:
        lea    eax, [esi + 0xb8]
        add    esi, 0xf8
        lea    ecx, [ebp - 0x11c]
        mov    dword ptr [ebp - 0x30], eax
        mov    dword ptr [ebp - 0x48], esi
        mov    dword ptr [ebp + 8], ecx
        mov    edx, dword ptr [ebp - 0x48]
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
        mov    eax, dword ptr [edi + 0x18]
        xor    esi, esi
        test    eax, eax
        jbe    L_e25a
        lea    edx, [ebp - 0x11c]
        lea    eax, [ebp - 0x64]
        mov    dword ptr [ebp - 0x48], edx
        mov    dword ptr [ebp + 8], eax
        xor    ecx, ecx
L_e188:
        mov    edx, dword ptr [edi + 0x14]
        add    edx, ecx
        mov    dword ptr [ebp - 0x30], edx
        mov    edx, dword ptr [ebp - 0x48]
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
        fdiv    dword ptr [ebp - 0x58]
        mov    eax, dword ptr [edi + 0x18]
        inc    esi
        add    ecx, 0xc
        cmp    esi, eax
        fld    dword ptr [ebp - 0x64]
        fmul st(0), st(1)
        fstp    dword ptr [ecx + 0x7d99ac]
        fld    dword ptr [ebp - 0x60]
        fmul st(0), st(1)
        fstp    dword ptr [ecx + 0x7d99b0]
        fld    dword ptr [ebp - 0x5c]
        fmul st(0), st(1)
        fstp    dword ptr [ecx + 0x7d99b4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jb    L_e188
L_e25a:
        xor    eax, eax
        cmp    ebx, eax
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x24], eax
        jle    L_e7ca
        mov    ecx, dword ptr [g_007b95fc]
        mov    dword ptr [ebp + 8], eax
L_e273:
        mov    edx, dword ptr [edi + 0x60]
        movzx    dx, byte ptr [edx + eax]
        mov    word ptr [ebp - 0x50], dx
        mov    edx, dword ptr [g_007da5e8]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + eax], 0
        je    L_e676
        mov    eax, dword ptr [ebp - 0x18]
        fld    dword ptr [ebp - 0x34]
        mov    eax, dword ptr [eax + 0x58]
        mov    esi, dword ptr [ebp + 8]
        fmul    dword ptr [eax + esi + 8]
        add    eax, esi
        fld    dword ptr [ebp - 0x38]
        xor    dl, dl
        fmul    dword ptr [eax + 4]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x3c]
        fmul    dword ptr [eax]
        faddp st(1), st(0)
        fcomp    dword ptr [eax + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_e676
        mov    edi, dword ptr [ebp - 0x50]
        and    edi, 0xffff
        mov    dword ptr [ebp - 0x14], edi
        jle    L_e310
        mov    edx, dword ptr [g_007da5e0]
        mov    eax, dword ptr [ebp - 0x18]
        mov    esi, dword ptr [edx]
        mov    edx, dword ptr [eax + 0x48]
        mov    eax, dword ptr [ebp - 0x24]
        mov    byte ptr [ebp - 9], 1
        add    edx, eax
L_e2e7:
        xor    eax, eax
        mov    al, byte ptr [edx]
        add    esi, 8
        lea    eax, [eax + eax*2]
        shl    eax, 2
        mov    ebx, dword ptr [eax + 0x7d99b8]
        mov    eax, dword ptr [eax + 0x7d99bc]
        mov    dword ptr [esi - 8], ebx
        mov    dword ptr [esi - 4], eax
        inc    edx
        dec    edi
        jne    L_e2e7
        mov    dl, byte ptr [ebp - 9]
        mov    edi, dword ptr [ebp - 0x14]
L_e310:
        test    edi, edi
        jle    L_e676
        cmp    dl, 1
        je    L_e33e
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [g_007da5e0]
        push    ecx
        push    edx
        call    FUN_0047cfe0
        mov    ecx, dword ptr [g_007b95fc]
        add    esp, 8
        cmp    al, 1
        jne    L_e676
L_e33e:
        mov    edx, dword ptr [ebp - 0x14]
        mov    eax, 2
        cmp    edx, eax
        mov    dword ptr [ebp - 8], eax
        jle    L_e3e9
        mov    eax, dword ptr [g_007b95f0]
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x28], edx
L_e35c:
        mov    eax, dword ptr [ebp - 4]
        mov    dl, byte ptr [ebp - 4]
        mov    bl, byte ptr [ebp - 0x10]
        and    eax, 0xff
        inc    dl
        mov    byte ptr [ebp - 4], dl
        mov    edx, dword ptr [ebp - 0x28]
        lea    esi, [eax + ecx]
        cmp    esi, edx
        jae    L_e7ca
        mov    esi, dword ptr [g_007b95f0]
        mov    edi, dword ptr [esi]
        mov    esi, dword ptr [ebp - 4]
        add    eax, edi
        mov    byte ptr [eax + ecx], bl
        mov    al, byte ptr [ebp - 4]
        and    esi, 0xff
        inc    al
        mov    byte ptr [ebp - 4], al
        lea    eax, [esi + ecx]
        cmp    eax, edx
        jae    L_e7ca
        mov    dl, byte ptr [ebp - 8]
        add    dl, bl
        mov    bl, byte ptr [ebp - 4]
        mov    al, dl
        dec    al
        add    esi, edi
        mov    byte ptr [esi + ecx], al
        mov    eax, dword ptr [ebp - 4]
        and    eax, 0xff
        inc    bl
        mov    byte ptr [ebp - 4], bl
        mov    ebx, dword ptr [ebp - 0x28]
        lea    esi, [eax + ecx]
        cmp    esi, ebx
        jae    L_e7ca
        add    eax, edi
        mov    byte ptr [eax + ecx], dl
        mov    eax, dword ptr [ebp - 8]
        mov    edx, dword ptr [ebp - 0x14]
        inc    eax
        cmp    eax, edx
        mov    dword ptr [ebp - 8], eax
        jl    L_e35c
L_e3e9:
        mov    eax, dword ptr [ebp - 0x14]
        xor    edi, edi
        test    eax, eax
        jle    L_e676
L_e3f6:
        fld    dword ptr [g_0076f46c]
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
        mov    dword ptr [ebp - 0x20], ebx
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
        mov    ecx, dword ptr [ebp - 0x20]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x20], ecx
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
        mov    ecx, dword ptr [ebp - 0x20]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x20], ecx
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
        mov    ecx, dword ptr [ebp - 0x20]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x20], ecx
        mov    ecx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ecx + 0x48]
        mov    esi, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ecx + 0x14]
        mov    bl, byte ptr [ebp - 0x10]
        xor    eax, eax
        add    edx, edi
        mov    al, byte ptr [edx + esi]
        mov    edx, dword ptr [g_007b9600]
        lea    eax, [eax + eax*2]
        lea    ecx, [ecx + eax*4]
        mov    eax, dword ptr [ebp - 0x10]
        and    eax, 0xff
        add    eax, edx
        mov    edx, dword ptr [g_007b95f8]
        mov    esi, dword ptr [edx + 4]
        inc    bl
        cmp    eax, esi
        mov    byte ptr [ebp - 0x10], bl
        jae    L_e7ca
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
        mov    edx, dword ptr [g_007b95f4]
        mov    edx, dword ptr [edx]
        mov    esi, dword ptr [ecx + edi*8]
        mov    ecx, dword ptr [ecx + edi*8 + 4]
        mov    dword ptr [edx + eax*8], esi
        mov    dword ptr [edx + eax*8 + 4], ecx
        mov    edx, dword ptr [g_007b95ec]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x20]
        mov    dword ptr [ecx + eax*4], edx
        cmp    byte ptr [ebp - 4], 0xfc
        jb    L_e664
        mov    al, byte ptr [ebp - 0x10]
        xor    bl, bl
        cmp    al, bl
        jbe    L_e664
        mov    eax, dword ptr [ebp - 4]
        mov    ecx, dword ptr [ebp - 0x10]
        and    eax, 0xff
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x28], ecx
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
        jb    L_e5fc
        mov    eax, dword ptr [ebp - 0x98]
        mov    edx, dword ptr [ebp - 0x18]
        lea    ecx, [eax + 0xc]
        or    dword ptr [ecx + 0x10], 0xf
        mov    eax, dword ptr [edx + 0x30]
        mov    edx, dword ptr [ecx + 4]
        and    eax, 0xf
        inc    eax
        and    edx, 0xfffffff0
        or    eax, edx
        mov    dword ptr [ecx + 4], eax
        mov    eax, dword ptr [g_007b960c]
        push    eax
        call    FUN_00491340
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx + 0x14]
        test    al, 3
        je    L_e602
        mov    edx, dword ptr [ecx]
        neg    eax
        and    eax, 3
        push    eax
        call    dword ptr [edx + 0x18]
L_e5fc:
        mov    ecx, dword ptr [g_007b960c]
L_e602:
        mov    eax, dword ptr [ecx]
        push    4
        push    0x7b9600
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x28]
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
        mov    ecx, dword ptr [g_007b9600]
        mov    edx, dword ptr [ebp - 0x28]
        mov    eax, dword ptr [ebp - 0x1c]
        add    ecx, edx
        mov    dword ptr [g_007b9600], ecx
        mov    ecx, dword ptr [g_007b95fc]
        add    ecx, eax
        mov    dword ptr [g_007b95fc], ecx
        mov    byte ptr [ebp - 4], bl
        mov    byte ptr [ebp - 0x10], bl
        jmp    L_e66a
L_e664:
        mov    ecx, dword ptr [g_007b95fc]
L_e66a:
        mov    eax, dword ptr [ebp - 0x14]
        inc    edi
        cmp    edi, eax
        jl    L_e3f6
L_e676:
        mov    eax, dword ptr [ebp - 0x50]
        mov    esi, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ebp - 0x2c]
        mov    ebx, dword ptr [ebp + 8]
        and    eax, 0xffff
        add    esi, eax
        mov    eax, dword ptr [ebp - 0x9c]
        inc    edx
        add    ebx, 0x10
        cmp    edx, eax
        mov    dword ptr [ebp - 0x2c], edx
        mov    dword ptr [ebp + 8], ebx
        mov    dword ptr [ebp - 0x24], esi
        jge    L_e6c9
        mov    edi, dword ptr [ebp - 0x18]
        mov    eax, edx
        jmp    L_e273
L_e6aa:
        push    0x76f5a0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_e7ca
        int 3    
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_e6c9:
        mov    al, byte ptr [ebp - 4]
        test    al, al
        je    L_e7ca
        mov    al, byte ptr [ebp - 0x10]
        test    al, al
        je    L_e7ca
        mov    eax, dword ptr [ebp - 4]
        mov    ecx, dword ptr [ebp - 0x10]
        and    eax, 0xff
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x28], eax
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
        jb    L_e76a
        mov    eax, dword ptr [ebp - 0x98]
        mov    edx, dword ptr [ebp - 0x18]
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
        je    L_e770
        mov    edx, dword ptr [ecx]
        neg    eax
        and    eax, 3
        push    eax
        call    dword ptr [edx + 0x18]
L_e76a:
        mov    ecx, dword ptr [g_007b960c]
L_e770:
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
L_e7ca:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
        nop    
        // jump-table data @ 0x0047E7D4 (16 relocated pointers)
        __emit 0x75
        __emit 0xD2
        __emit 0x47
        __emit 0x00
        __emit 0x70
        __emit 0xD8
        __emit 0x47
        __emit 0x00
        __emit 0xAA
        __emit 0xE6
        __emit 0x47
        __emit 0x00
        __emit 0x1C
        __emit 0xDF
        __emit 0x47
        __emit 0x00
        __emit 0xCA
        __emit 0xE7
        __emit 0x47
        __emit 0x00
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
        __emit 0x83
        __emit 0xEC
        __emit 0x60
        __emit 0x53
        __emit 0x55
        __emit 0x8B
        __emit 0xE9
        __emit 0x8B
        __emit 0x45
        __emit 0x00
        __emit 0x57
        __emit 0x33
        __emit 0xDB
        __emit 0x89
        __emit 0x6C
        __emit 0x24
        __emit 0x4C
        __emit 0x33
        __emit 0xFF
        __emit 0x89
    }
}
