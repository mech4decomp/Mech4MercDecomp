/*
 * FUN_004aa6a5 (extent 0x4aa6a5-0x4aae32) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_007b220c;
extern int    g_007b8d68;
extern int    g_007b8d6c;
extern int    g_007b8d70;
extern int    g_007da920;
extern int    g_007da99c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_004188e0(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041c6e0(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_00420790(void);
extern void __cdecl FUN_00495dd0(void);
extern void __cdecl FUN_00495e10(void);
extern void __cdecl FUN_00495e60(void);
extern void __cdecl FUN_004aa5a0(void);
extern void __cdecl FUN_004ac210(void);
extern void __cdecl FUN_004ac690(void);
extern void __cdecl FUN_004ac970(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004aa6a5(void)
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
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xbc
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_a6f0
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007da99c]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004aa5a0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_a6f0:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x98
        push    ebp
        mov    ebp, ecx
        test    byte ptr [ebp + 0x9c], 1
        jne    L_a71e
        xor    al, al
        pop    ebp
        add    esp, 0x98
        ret    4
L_a71e:
        mov    eax, dword ptr [esp + 0xa0]
        push    eax
        mov    ecx, ebp
        call    FUN_004ac210
        test    al, al
        jne    L_a73b
        pop    ebp
        add    esp, 0x98
        ret    4
L_a73b:
        push    edi
        mov    edi, dword ptr [ebp + 0xa0]
        test    edi, edi
        jle    L_a936
        push    ebx
        push    esi
        push    0x7b8d88
        push    0x7b8d88
        lea    ecx, [esp + 0x18]
        call    FUN_00420790
        mov    ecx, dword ptr [ebp + 0xb4]
        xor    edx, edx
        test    edi, edi
        jbe    L_a7c4
        mov    eax, dword ptr [ebp + 0x10]
        mov    esi, dword ptr [ebp + 0xa8]
        mov    ebx, dword ptr [eax + 0x270]
        add    esi, 0x1c
L_a77d:
        fld    dword ptr [esi]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        jne    L_a798
        add    ecx, 0xc
        inc    edx
        add    esi, ebx
        cmp    edx, edi
        jb    L_a77d
        jmp    L_a7c4
L_a798:
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x1c], eax
        mov    eax, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x18], eax
        mov    eax, dword ptr [ecx + 8]
        mov    dword ptr [esp + 0x24], eax
        mov    eax, dword ptr [ecx + 8]
        add    ecx, 0xc
        mov    dword ptr [esp + 0x20], eax
        inc    edx
L_a7c4:
        cmp    edx, edi
        jae    L_a87f
        mov    esi, dword ptr [ebp + 0x10]
        mov    ebx, dword ptr [ebp + 0xa8]
L_a7d5:
        mov    eax, dword ptr [esi + 0x270]
        imul    eax, edx
        fld    dword ptr [eax + ebx + 0x1c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        je    L_a873
        fld    dword ptr [ecx]
        fcomp    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a808
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esp + 0x14], eax
        jmp    L_a81b
L_a808:
        fld    dword ptr [ecx]
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_a81b
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esp + 0x10], eax
L_a81b:
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a832
        mov    eax, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x1c], eax
        jmp    L_a847
L_a832:
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 1
        je    L_a847
        mov    eax, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x18], eax
L_a847:
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a85e
        mov    eax, dword ptr [ecx + 8]
        mov    dword ptr [esp + 0x24], eax
        jmp    L_a873
L_a85e:
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 1
        je    L_a873
        mov    eax, dword ptr [ecx + 8]
        mov    dword ptr [esp + 0x20], eax
L_a873:
        add    ecx, 0xc
        inc    edx
        cmp    edx, edi
        jb    L_a7d5
L_a87f:
        push    0x7b8c28
        lea    ecx, [esp + 0x2c]
        call    FUN_00419460
        fld    dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x10]
        add    ebp, 0x58
        push    ebp
        lea    ecx, [esp + 0x2c]
        fmul    dword ptr [g_0076d070]
        push    ecx
        lea    ecx, [esp + 0x70]
        fstp    dword ptr [esp + 0x60]
        fld    dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x20]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x64]
        fld    dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x28]
        fmul    dword ptr [g_0076d070]
        fst    dword ptr [esp + 0x68]
        fld    dword ptr [esp + 0x60]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x64]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x4c]
        fld    st(0)
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x5c]
        fld    dword ptr [esp + 0x64]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    dword ptr [esp + 0x60]
        fmul    dword ptr [esp + 0x60]
        faddp st(1), st(0)
        fsqrt    
        fstp    st(2)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fadd    dword ptr [g_007b220c]
        fstp    dword ptr [esp + 0x6c]
        call    FUN_00417d80
        mov    edx, dword ptr [esp + 0xac]
        mov    ecx, dword ptr [edx + 0x18]
        lea    eax, [esp + 0x68]
        push    eax
        push    ecx
        call    FUN_004188e0
        pop    esi
        pop    ebx
L_a936:
        pop    edi
        mov    al, 1
        pop    ebp
        add    esp, 0x98
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
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    edi
        mov    esi, ecx
        push    ebx
        call    FUN_004ac690
        mov    eax, dword ptr [esi + 0xb0]
        mov    ecx, dword ptr [eax + 0x18]
        lea    eax, [ecx + ebx]
        or    byte ptr [eax], 2
        mov    eax, dword ptr [esi + 0xb4]
        mov    ecx, dword ptr [edi]
        lea    edx, [ebx + ebx*2]
        lea    eax, [eax + edx*4]
        mov    edx, dword ptr [edi + 4]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [edi + 8]
        pop    edi
        pop    esi
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        pop    ebx
        ret    8
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
        jne    L_a9e7
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x90
        ret    0x10
L_a9e7:
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
        jne    L_aa34
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
L_aa34:
        mov    esi, dword ptr [ebp + 0x10]
        mov    al, byte ptr [esi + 0x114]
        fld    dword ptr [esi + 0x104]
        test    al, al
        mov    ecx, dword ptr [ebx + 0x18]
        mov    dword ptr [esp + 0x18], ecx
        je    L_aa60
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x110]
        fadd    dword ptr [esi + 0x10c]
        fmulp st(1), st(0)
L_aa60:
        fstp    dword ptr [esp + 0x3c]
        mov    al, byte ptr [esi + 0x130]
        test    al, al
        fld    dword ptr [esi + 0x120]
        je    L_aa86
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x12c]
        fadd    dword ptr [esi + 0x128]
        fmulp st(1), st(0)
L_aa86:
        fstp    dword ptr [esp + 0x40]
        mov    al, byte ptr [esi + 0x14c]
        test    al, al
        fld    dword ptr [esi + 0x13c]
        je    L_aaac
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x148]
        fadd    dword ptr [esi + 0x144]
        fmulp st(1), st(0)
L_aaac:
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
        je    L_ab05
        mov    eax, dword ptr [esp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    0
        push    eax
        lea    ecx, [esi + 0x1d8]
        call    FUN_00495e60
        fmul    dword ptr [esp + 0x14]
L_ab05:
        fchs    
        fst    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ab20
        mov    dword ptr [esp + 0x14], 0
L_ab20:
        cmp    dword ptr [esp + 0x2c], 8
        jne    L_ac7e
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
        je    L_abc7
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x170]
        fadd    dword ptr [esi + 0x16c]
        fmulp st(1), st(0)
L_abc7:
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
        je    L_ac0b
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x198]
        fadd    dword ptr [esi + 0x194]
        fmulp st(1), st(0)
L_ac0b:
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
        je    L_ac4f
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x1c0]
        fadd    dword ptr [esi + 0x1bc]
        fmulp st(1), st(0)
L_ac4f:
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
        jmp    L_ad80
L_ac7e:
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
        je    L_acfa
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x170]
        fadd    dword ptr [esi + 0x16c]
        fmulp st(1), st(0)
L_acfa:
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
        je    L_ad42
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x198]
        fadd    dword ptr [esi + 0x194]
        fmulp st(1), st(0)
L_ad42:
        fadd    dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x10]
        push    0
        push    edx
        lea    ecx, [esi + 0x1a4]
        fstp    dword ptr [esp + 0x28]
        call    FUN_00495e10
        mov    al, byte ptr [esi + 0x1c4]
        test    al, al
        je    L_ad78
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x1c0]
        fadd    dword ptr [esi + 0x1bc]
        fmulp st(1), st(0)
L_ad78:
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
L_ad80:
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
        jne    L_adf5
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
L_adf5:
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
    }
}
