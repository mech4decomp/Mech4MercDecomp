/*
 * FUN_004954c5 (extent 0x4954c5-0x495d61) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern int    g_007b8d68;
extern int    g_007b8d6c;
extern int    g_007b8d70;
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041c6e0(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0048bcf0(void);
extern void __cdecl FUN_0048e890(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_00494990(void);
extern void __cdecl FUN_00495dd0(void);
extern void __cdecl FUN_00495e10(void);
extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_00495e60(void);
extern void __cdecl FUN_004ac970(void);

__declspec(naked) void FUN_004954c5(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x90
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    eax, dword ptr [ebp + 0x10]
        mov    ebx, dword ptr [eax + 0x270]
        mov    ecx, dword ptr [esp + 0x9c]
        mov    eax, dword ptr [ebp + 0xa8]
        imul    ebx, ecx
        fld    dword ptr [ebx + eax + 0x1c]
        fst    dword ptr [esp + 8]
        fcomp    dword ptr [g_0076d064]
        add    ebx, eax
        fnstsw  ax
        test    ah, 1
        jne    L_5517
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x90
        ret    0x10
L_5517:
        push    esi
        mov    esi, dword ptr [ebp + 0xb4]
        lea    eax, [ecx + ecx*2]
        shl    eax, 2
        add    esi, eax
        mov    dword ptr [esp + 0x44], eax
        mov    eax, dword ptr [ebp + 0x9c]
        and    eax, 0xc
        cmp    eax, 4
        push    edi
        mov    edi, ebx
        mov    dword ptr [esp + 0x28], esi
        mov    dword ptr [esp + 0x2c], eax
        jne    L_5564
        lea    edi, [ebp + 0x28]
        push    edi
        lea    ecx, [ebx + 0xc]
        push    ebx
        call    FUN_0041c680
        push    edi
        lea    ecx, [ebx + 0x24]
        push    esi
        call    FUN_0041c7d0
        lea    eax, [ebx + 0x24]
        mov    dword ptr [esp + 0x28], eax
        lea    edi, [ebx + 0xc]
L_5564:
        mov    esi, dword ptr [ebp + 0x10]
        mov    al, byte ptr [esi + 0x114]
        fld    dword ptr [esi + 0x104]
        test    al, al
        mov    ecx, dword ptr [ebx + 0x18]
        mov    dword ptr [esp + 0x18], ecx
        je    L_5590
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x110]
        fadd    dword ptr [esi + 0x10c]
        fmulp st(1), st(0)
L_5590:
        fstp    dword ptr [esp + 0x3c]
        mov    al, byte ptr [esi + 0x130]
        test    al, al
        fld    dword ptr [esi + 0x120]
        je    L_55b6
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x12c]
        fadd    dword ptr [esi + 0x128]
        fmulp st(1), st(0)
L_55b6:
        fstp    dword ptr [esp + 0x40]
        mov    al, byte ptr [esi + 0x14c]
        test    al, al
        fld    dword ptr [esi + 0x13c]
        je    L_55dc
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x148]
        fadd    dword ptr [esi + 0x144]
        fmulp st(1), st(0)
L_55dc:
        mov    edx, dword ptr [g_007b8d68]
        fstp    dword ptr [esp + 0x44]
        mov    ecx, dword ptr [g_007b8d70]
        mov    eax, dword ptr [g_007b8d6c]
        mov    dword ptr [esp + 0x1c], edx
        mov    edx, dword ptr [esp + 0x10]
        push    0
        mov    dword ptr [esp + 0x28], ecx
        push    edx
        lea    ecx, [esi + 0x1cc]
        mov    dword ptr [esp + 0x28], eax
        call    FUN_00495e60
        fst    dword ptr [esp + 0x14]
        mov    al, byte ptr [esi + 0x1e4]
        test    al, al
        je    L_5635
        mov    eax, dword ptr [esp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    0
        push    eax
        lea    ecx, [esi + 0x1d8]
        call    FUN_00495e60
        fmul    dword ptr [esp + 0x14]
L_5635:
        fchs    
        fst    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5650
        mov    dword ptr [esp + 0x14], 0
L_5650:
        cmp    dword ptr [esp + 0x2c], 8
        jne    L_57ae
        lea    ecx, [ebp + 0x28]
        push    ecx
        lea    ecx, [esp + 0x74]
        call    FUN_004206b0
        lea    edx, [esp + 0x70]
        push    edx
        lea    eax, [esp + 0x40]
        push    eax
        lea    ecx, [esp + 0x54]
        call    FUN_0041c6e0
        fld    dword ptr [edi]
        fsub    dword ptr [esp + 0x4c]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [esp + 0x50]
        fstp    dword ptr [esp + 0x5c]
        fld    dword ptr [edi + 8]
        fsub    dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0x60]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x5c]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x60]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x24]
        mov    al, byte ptr [esi + 0x174]
        test    al, al
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x160]
        fadd    dword ptr [esi + 0x164]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x15c]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x158]
        je    L_56f7
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x170]
        fadd    dword ptr [esi + 0x16c]
        fmulp st(1), st(0)
L_56f7:
        mov    al, byte ptr [esi + 0x19c]
        fstp    dword ptr [esp + 0x30]
        test    al, al
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x188]
        fadd    dword ptr [esi + 0x18c]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x184]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x180]
        je    L_573b
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x198]
        fadd    dword ptr [esi + 0x194]
        fmulp st(1), st(0)
L_573b:
        mov    al, byte ptr [esi + 0x1c4]
        fstp    dword ptr [esp + 0x34]
        test    al, al
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x1b0]
        fadd    dword ptr [esi + 0x1b4]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x1ac]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x1a8]
        je    L_577f
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x1c0]
        fadd    dword ptr [esi + 0x1bc]
        fmulp st(1), st(0)
L_577f:
        lea    ecx, [esp + 0x70]
        fstp    dword ptr [esp + 0x38]
        push    ecx
        lea    edx, [esp + 0x34]
        push    edx
        lea    ecx, [esp + 0x6c]
        call    FUN_0041c680
        lea    eax, [esp + 0x64]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x24]
        call    FUN_0040c9e0
        jmp    L_58b0
L_57ae:
        fld    dword ptr [edi]
        fsub    dword ptr [esp + 0x3c]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [esp + 0x40]
        fstp    dword ptr [esp + 0x34]
        fld    dword ptr [edi + 8]
        fsub    dword ptr [esp + 0x44]
        fstp    dword ptr [esp + 0x38]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x38]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x24]
        mov    al, byte ptr [esi + 0x174]
        test    al, al
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x160]
        fadd    dword ptr [esi + 0x164]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x15c]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x158]
        je    L_582a
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x170]
        fadd    dword ptr [esi + 0x16c]
        fmulp st(1), st(0)
L_582a:
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        mov    al, byte ptr [esi + 0x19c]
        test    al, al
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x188]
        fadd    dword ptr [esi + 0x18c]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x184]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x180]
        je    L_5872
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x198]
        fadd    dword ptr [esi + 0x194]
        fmulp st(1), st(0)
L_5872:
        fadd    dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x10]
        push    0
        push    edx
        lea    ecx, [esi + 0x1a4]
        fstp    dword ptr [esp + 0x28]
        call    FUN_00495e10
        mov    al, byte ptr [esi + 0x1c4]
        test    al, al
        je    L_58a8
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x1c0]
        fadd    dword ptr [esi + 0x1bc]
        fmulp st(1), st(0)
L_58a8:
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
L_58b0:
        fld    qword ptr [esp + 0xac]
        mov    ecx, dword ptr [esp + 0x28]
        fsub    qword ptr [ebp + 0x88]
        fst    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        push    edi
        fadd    dword ptr [edi]
        push    ecx
        fstp    dword ptr [edi]
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x2c]
        fadd    dword ptr [edi + 4]
        fstp    dword ptr [edi + 4]
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x30]
        fadd    dword ptr [edi + 8]
        fstp    dword ptr [edi + 8]
        call    FUN_00495dd0
        cmp    dword ptr [esp + 0x2c], 4
        jne    L_5925
        mov    esi, dword ptr [esp + 0xa8]
        push    esi
        lea    ecx, [ebx + 0xc]
        push    ecx
        mov    ecx, ebx
        call    FUN_0041c680
        mov    eax, dword ptr [esp + 0x48]
        mov    ecx, dword ptr [ebp + 0xb4]
        push    esi
        add    ebx, 0x24
        push    ebx
        add    ecx, eax
        call    FUN_0041c7d0
L_5925:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x90
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0xb0]
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x18]
        push    ebx
        mov    bl, byte ptr [eax + edx]
        add    eax, edx
        and    bl, 0xfd
        push    edx
        mov    byte ptr [eax], bl
        call    FUN_004ac970
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x70
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    ebx, dword ptr [edi + 0xa0]
        test    ebx, ebx
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp - 0x1c], ebx
        je    L_5d3f
        lea    ecx, [ebp - 0x40]
        call    FUN_0048bcf0
        mov    eax, dword ptr [edi + 0xb0]
        mov    esi, dword ptr [edi + 0x10]
        xor    edx, edx
        cmp    ebx, edx
        mov    dword ptr [ebp - 0x40], eax
        mov    dword ptr [ebp - 0x10], edx
        jbe    L_5b72
        mov    ecx, dword ptr [edi + 0xa8]
        mov    dword ptr [ebp - 0x18], ecx
        mov    dword ptr [ebp - 0x14], edx
L_59bc:
        mov    ecx, dword ptr [esi + 0x270]
        mov    eax, dword ptr [ebp - 0x18]
        imul    ecx, edx
        fld    dword ptr [ecx + eax + 0x1c]
        fst    dword ptr [ebp - 4]
        fcomp    dword ptr [g_0076d064]
        add    ecx, eax
        fnstsw  ax
        test    ah, 1
        je    L_5b5d
        mov    edx, dword ptr [ecx + 0x18]
        mov    ebx, dword ptr [ebp - 4]
        lea    edi, [esi + 0x1ec]
        push    ebx
        mov    ecx, edi
        mov    dword ptr [ebp - 8], edx
        call    FUN_00495e30
        fld    dword ptr [ebp - 4]
        mov    ecx, dword ptr [edi + 4]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [esi + 0x204]
        test    al, al
        je    L_5a29
        fld    dword ptr [ebp - 8]
        fmul    dword ptr [esi + 0x200]
        fadd    dword ptr [esi + 0x1fc]
        fmulp st(1), st(0)
L_5a29:
        mov    edx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [edx + 0xb8]
        mov    ecx, dword ptr [ebp - 0x14]
        lea    edi, [eax + ecx]
        lea    ecx, [esi + 0x20c]
        fstp    dword ptr [edi]
        push    ebx
        call    FUN_00495e30
        fld    dword ptr [ebp - 4]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esi + 0x210]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [esi + 0x224]
        test    al, al
        je    L_5a79
        fld    dword ptr [ebp - 8]
        fmul    dword ptr [esi + 0x220]
        fadd    dword ptr [esi + 0x21c]
        fmulp st(1), st(0)
L_5a79:
        lea    ecx, [esi + 0x22c]
        fstp    dword ptr [edi + 4]
        push    ebx
        call    FUN_00495e30
        fld    dword ptr [ebp - 4]
        mov    edx, dword ptr [esi + 0x230]
        lea    ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [esi + 0x244]
        test    al, al
        je    L_5abb
        fld    dword ptr [ebp - 8]
        fmul    dword ptr [esi + 0x240]
        fadd    dword ptr [esi + 0x23c]
        fmulp st(1), st(0)
L_5abb:
        lea    ecx, [esi + 0x24c]
        fstp    dword ptr [edi + 8]
        push    ebx
        call    FUN_00495e30
        fld    dword ptr [ebp - 4]
        mov    ecx, dword ptr [esi + 0x250]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [esi + 0x264]
        test    al, al
        je    L_5afd
        fld    dword ptr [ebp - 8]
        fmul    dword ptr [esi + 0x260]
        fadd    dword ptr [esi + 0x25c]
        fmulp st(1), st(0)
L_5afd:
        fstp    dword ptr [edi + 0xc]
        lea    edi, [esi + 0x278]
        push    ebx
        mov    ecx, edi
        call    FUN_00495e30
        fld    dword ptr [ebp - 4]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [edi + 4]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [esi + 0x290]
        test    al, al
        fst    dword ptr [ebp - 4]
        je    L_5b46
        mov    ecx, dword ptr [ebp - 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    0
        push    ecx
        lea    ecx, [esi + 0x284]
        call    FUN_00495e60
        fmul    dword ptr [ebp - 4]
L_5b46:
        mov    edx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [edx + 0xbc]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [ebp - 0x1c]
        fstp    dword ptr [eax + ecx*4]
        mov    edi, dword ptr [ebp - 0xc]
        mov    edx, ecx
L_5b5d:
        mov    ecx, dword ptr [ebp - 0x14]
        inc    edx
        add    ecx, 0x10
        cmp    edx, ebx
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp - 0x14], ecx
        jb    L_59bc
L_5b72:
        mov    ebx, dword ptr [ebp + 8]
        add    esi, 0x48
        push    esi
        lea    edx, [ebx + 8]
        push    edx
        lea    ecx, [ebp - 0x3c]
        call    FUN_00491670
        mov    eax, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        mov    dword ptr [ebp - 0x24], eax
        lea    edx, [edi + 0x58]
        lea    eax, [ebp - 0x70]
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [ebp + 8], eax
        mov    edx, dword ptr [ebp - 0x18]
        push    esi
        mov    esi, dword ptr [ebp - 0x1c]
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
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop    esi
        lea    ecx, [ebp - 0x70]
        lea    edx, [ebp - 0x40]
        mov    dword ptr [ebp - 0x20], ecx
        mov    ecx, dword ptr [ebx + 0x20]
        push    edx
        call    FUN_0048e890
        push    ebx
        mov    ecx, edi
        call    FUN_00494990
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_5d3f:
        mov    ebx, dword ptr [ebp + 8]
        push    ebx
        mov    ecx, edi
        call    FUN_00494990
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
    }
}
