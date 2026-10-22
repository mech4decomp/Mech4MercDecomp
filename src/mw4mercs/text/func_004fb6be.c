/*
 * FUN_004fb6be (extent 0x4fb6be-0x4fb922) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d598;
extern float  g_00775e40;
extern float  g_007b220c;
extern void __cdecl FUN_004fb680(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004fb6be(void)
{
    __asm {
        nop    
        nop    
        sub    esp, 0xc
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        fld    dword ptr [eax + 0x1c]
        fdivr    dword ptr [g_0076d064]
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        lea    edx, [esp + 8]
        push    edx
        mov    ecx, esi
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [esp + 0xc]
        fld    st(0)
        fmul    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x10]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [esp + 0x14]
        call    FUN_004fb680
        pop    esi
        add    esp, 0xc
        ret    8
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x24
        mov    eax, dword ptr [ebp + 0x14]
        push    esi
        mov    esi, ecx
        fld    dword ptr [esi + 0x19c]
        fmul    dword ptr [eax + 4]
        fld    dword ptr [esi + 0x1a0]
        fmul    dword ptr [eax + 8]
        faddp st(1), st(0)
        fld    dword ptr [eax]
        fmul    dword ptr [esi + 0x198]
        faddp st(1), st(0)
        fst    dword ptr [ebp + 0x14]
        fmul    dword ptr [eax]
        fstp    dword ptr [ebp - 0xc]
        fld    dword ptr [ebp + 0x14]
        fmul    dword ptr [eax + 4]
        fstp    dword ptr [ebp - 8]
        fld    dword ptr [ebp + 0x14]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [ebp - 4]
        fld    dword ptr [esi + 0x198]
        fsub    dword ptr [ebp - 0xc]
        fld    dword ptr [esi + 0x19c]
        fsub    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x20]
        fld    dword ptr [esi + 0x1a0]
        fsub    dword ptr [ebp - 4]
        fld    dword ptr [ebp + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b793
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    esi
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        mov    esp, ebp
        pop    ebp
        ret    0x1c
L_b793:
        fld    dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [ebp + 0x18]
        fchs    
        fld    dword ptr [ebp + 0xc]
        fmul    dword ptr [ebp + 0x1c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_b7b0
        mov    dword ptr [ecx], 0
L_b7b0:
        fld    dword ptr [ebp - 0x20]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fsqrt    
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    st(0)
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_b7f1
        mov    eax, dword ptr [ebp + 0x20]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        mov    dword ptr [eax], 0
        jmp    L_b824
L_b7f1:
        fld    dword ptr [ecx]
        mov    edx, dword ptr [ebp + 0x20]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [edx]
        fmul    dword ptr [ebp + 0x14]
        fdivrp st(1), st(0)
        fadd    dword ptr [g_0076d064]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_b824
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [edx], 0
        fld    dword ptr [g_0076c5b0]
L_b824:
        fld    st(0)
        push    0x76d414
        fsub    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [esi + 0x198]
        fstp    dword ptr [ebp - 0x18]
        fld    st(0)
        fmul    dword ptr [esi + 0x19c]
        fstp    dword ptr [ebp - 0x14]
        fmul    dword ptr [esi + 0x1a0]
        fstp    dword ptr [ebp - 0x10]
        fadd    dword ptr [ecx]
        fchs    
        fld    st(0)
        fmul    dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x18]
        fld    dword ptr [ebp - 8]
        fmul st(0), st(1)
        fadd    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebp - 0x10]
        fld    dword ptr [g_0076d598]
        fsub    dword ptr [ecx]
        fld    dword ptr [ebp - 0xc]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0xc]
        fld    dword ptr [ebp - 8]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 8]
        fld    dword ptr [ebp - 4]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esi + 0x198]
        fadd    st(0), st(0)
        fadd    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x24]
        fld    dword ptr [esi + 0x19c]
        fadd    st(0), st(0)
        fadd    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x20]
        fld    dword ptr [esi + 0x1a0]
        fadd    st(0), st(0)
        fadd    dword ptr [ebp - 4]
        fstp    dword ptr [ebp - 0x1c]
        fld    dword ptr [ebp - 0x18]
        fadd    dword ptr [esi + 0x198]
        fstp    dword ptr [esi + 0x198]
        fld    dword ptr [ebp - 0x14]
        fadd    dword ptr [esi + 0x19c]
        fstp    dword ptr [esi + 0x19c]
        fadd    dword ptr [esi + 0x1a0]
        fstp    dword ptr [esi + 0x1a0]
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_b8f3
        int 3    
L_b8f3:
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        fld    dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 4]
        pop    esi
        fld    dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 8]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0xc]
        faddp st(1), st(0)
        fmul    dword ptr [eax + 0x1c]
        fmul    dword ptr [g_00775e40]
        mov    esp, ebp
        pop    ebp
        ret    0x1c
    }
}
