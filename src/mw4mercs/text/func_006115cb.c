/*
 * FUN_006115cb (extent 0x6115cb-0x6119b8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0077016c;
extern float  g_0077dff4;
extern float  g_0077dff8;
extern float  g_0078c1a4;
extern float  g_0078c1a8;
extern float  g_0078c1ac;
extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007f2870;
extern char   g_007f2871;
extern char   g_007f2872;
extern int    g_007f2874;
extern int    g_007f2878;
extern int    g_007f287c;
extern int    g_007f2880;
extern int    g_007f2884;
extern int    g_007f2888;
extern int    g_007f288c;
extern int    g_007f2890;
extern int    g_007f2894;
extern int    g_007f2898;
extern int    g_007f289c;
extern int    g_007f28a0;
extern int    g_007f28a4;
extern int    g_007f28a8;
extern int    g_007f28ac;
extern int    g_007f28b0;
extern int    g_007f28b4;
extern int    g_007f28b8;
extern int    g_007f28bc;
extern int    g_007f28c0;
extern int    g_007f28c4;
extern float  g_007f28c8;
extern int    g_007f28d0;
extern int    g_007f28d4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0055e5c0(void);
extern void __cdecl FUN_0055eb90(void);
extern void __cdecl FUN_0055eed0(void);
extern void __cdecl FUN_006102c0(void);
extern void __cdecl FUN_006105f0(void);
extern void __cdecl FUN_00611580(void);
extern void __cdecl FUN_0061bf80(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_006115cb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x28
        push    esi
        mov    esi, ecx
        push    edi
        lea    eax, [esi + 0x14]
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_0040c410
        fld    dword ptr [esp + 0xc]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_1603
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0xc]
L_1603:
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_1622
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x10]
L_1622:
        lea    ecx, [esp + 0xc]
        push    ecx
        lea    ecx, [esp + 0x28]
        call    FUN_0040c5d0
        lea    eax, [esi + 0x20]
        push    eax
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0xc], eax
        call    FUN_0040c410
        fld    dword ptr [esp + 0xc]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_1660
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0xc]
L_1660:
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_167f
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x10]
L_167f:
        push    ebx
        push    ebp
        lea    edx, [esp + 0x14]
        push    edx
        lea    ecx, [esp + 0x24]
        call    FUN_0040c5d0
        fld    dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x30]
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x2c]
        mov    edi, eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x30]
        mov    ebx, eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x2c]
        mov    esi, eax
        call    FUN_0075db4a
        push    0xfa808080
        push    edi
        push    ebx
        mov    ebp, eax
        push    esi
        push    ebp
        call    FUN_0055e5c0
        push    0xfa000000
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_0055eb90
        fld    dword ptr [g_007f28bc]
        fcomp    dword ptr [g_0076c5b0]
        add    esp, 0x28
        fnstsw  ax
        test    ah, 0x40
        je    L_16fd
        fld    dword ptr [g_0076c5b0]
        jmp    L_170b
L_16fd:
        fld    dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x24]
        fdiv    dword ptr [g_007f28bc]
L_170b:
        fmul    dword ptr [g_007f28b4]
        fadd    dword ptr [g_0078c1ac]
        fld    dword ptr [esp + 0x24]
        fadd st(0), st(1)
        fcomp    dword ptr [g_0078c1a8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_1736
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0078c1a8]
        fsub    dword ptr [esp + 0x24]
L_1736:
        fld    dword ptr [esp + 0x24]
        fadd st(0), st(1)
        call    FUN_0075db4a
        mov    ebx, eax
        call    FUN_0075db4a
        push    0xfa00fa00
        push    edi
        push    ebx
        mov    ebp, eax
        push    esi
        push    ebp
        call    FUN_0055e5c0
        push    0xfa000000
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_0055eb90
        mov    eax, dword ptr [esp + 0x38]
        mov    ecx, dword ptr [eax]
        fld    dword ptr [eax + 4]
        mov    dword ptr [esp + 0x48], ecx
        fld    dword ptr [esp + 0x48]
        fcomp    dword ptr [g_0076d064]
        add    esp, 0x28
        pop    ebp
        pop    ebx
        fnstsw  ax
        test    ah, 0x41
        je    L_1797
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x18]
L_1797:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_17aa
        fmul    dword ptr [g_0077dff4]
L_17aa:
        fld    dword ptr [g_007f28bc]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_17c5
        fld    dword ptr [g_0076c5b0]
        jmp    L_17cf
L_17c5:
        fld    dword ptr [esp + 0x18]
        fdiv    dword ptr [g_007f28bc]
L_17cf:
        fmul    dword ptr [g_007f28b8]
        fadd    dword ptr [g_0077016c]
        fcom    dword ptr [g_0078c1a4]
        fnstsw  ax
        test    ah, 0x41
        jne    L_17f0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0078c1a4]
L_17f0:
        call    FUN_0075db4a
        fadd    dword ptr [esp + 0x28]
        mov    edi, eax
        push    0xfa000000
        call    FUN_0075db4a
        push    eax
        push    edi
        push    esi
        push    edi
        call    FUN_0055eed0
        add    esp, 0x14
        pop    edi
        pop    esi
        add    esp, 0x28
        ret    
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
        xor    ebx, ebx
        push    esi
        push    edi
        push    ebx
        mov    dword ptr [g_007f2874], 0xffffffff
        mov    dword ptr [g_007f28b0], 0x41b80000
        mov    dword ptr [g_007f28ac], 0x41200000
        mov    dword ptr [g_007f28a8], 0x43c80000
        mov    dword ptr [g_007f28a4], 0x43c80000
        mov    dword ptr [g_007f28a0], 0
        mov    dword ptr [g_007f289c], 0
        mov    dword ptr [g_007f2880], 0
        mov    dword ptr [g_007f287c], 0
        mov    dword ptr [g_007f2898], 0x45a00000
        mov    dword ptr [g_007f2894], 0x45a00000
        mov    byte ptr [g_007f2872], bl
        mov    byte ptr [g_007f2870], bl
        mov    byte ptr [g_007f2871], bl
        mov    dword ptr [g_007f2878], ebx
        mov    dword ptr [g_007f2888], 0x447a0000
        mov    dword ptr [g_007f2884], 0x447a0000
        mov    dword ptr [g_007f2890], 0x3ecccccd
        mov    dword ptr [g_007f288c], 0x3ecccccd
        mov    dword ptr [g_007f28b4], ebx
        mov    dword ptr [g_007f28b8], ebx
        mov    dword ptr [g_007f28bc], ebx
        mov    dword ptr [g_007f28c0], ebx
        mov    dword ptr [g_007f28c4], 0x3f800000
        call    FUN_00707e70
        fstp    qword ptr [g_007f28c8]
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        push    0x7f28c0
        push    0x7f28bc
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x3080]
        push    0x7f28b8
        call    FUN_0061bf80
        push    0x50
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_1948
        mov    ecx, eax
        call    FUN_006102c0
        jmp    L_194a
L_1948:
        xor    eax, eax
L_194a:
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        mov    dword ptr [g_007f28d0], eax
        call    dword ptr [edx + 0x10]
        push    0x50
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_196d
        mov    ecx, eax
        call    FUN_00611580
        jmp    L_196f
L_196d:
        xor    eax, eax
L_196f:
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        mov    dword ptr [g_007f28d4], eax
        call    dword ptr [edx + 0x10]
        xor    edi, edi
        mov    esi, 0x7f28d8
L_1982:
        push    0xc0
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_199d
        push    edi
        mov    ecx, eax
        call    FUN_006105f0
        jmp    L_199f
L_199d:
        xor    eax, eax
L_199f:
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        mov    dword ptr [esi], eax
        call    dword ptr [edx + 0x10]
        add    esi, 4
        inc    edi
        cmp    esi, 0x7f2918
        jl    L_1982
        pop    edi
        pop    esi
        pop    ebx
        ret    
    }
}
