/*
 * FUN_004f037a (extent 0x4f037a-0x4f0613) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_007b220c;
extern int    g_007b8810;
extern float  g_007daac8;
extern int    g_007dc828;
extern int    g_007dc82a;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_004c3a10(void);

__declspec(naked) void FUN_004f037a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007daac8]
        push    esi
        mov    esi, ecx
        fsub    dword ptr [esi + 0x2c]
        mov    ecx, dword ptr [esi + 0x24]
        push    0
        fstp    dword ptr [g_007daac8]
        call    FUN_004c3a10
        fld    dword ptr [g_007daac8]
        fadd    dword ptr [esi + 0x2c]
        pop    esi
        fstp    dword ptr [g_007daac8]
        ret    
        nop    
        nop    
        nop    
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1c
        mov    eax, dword ptr [ecx + 0x24]
        mov    ecx, dword ptr [eax + 0x220]
        __emit 0x89  // mov dword ptr [esp], ecx
__emit 0x4C
__emit 0x24
__emit 0x00
        mov    ecx, dword ptr [esp + 0x24]
        fld    dword ptr [ecx]
        add    eax, 0x80
        fld    dword ptr [g_0076d064]
        push    esi
        fsub st(0), st(1)
        mov    esi, dword ptr [esp + 0x24]
        push    eax
        fmul    dword ptr [eax + 0x18c]
        fld    dword ptr [eax + 0x190]
        fmul st(0), st(2)
        faddp st(1), st(0)
        fstp    st(1)
        fld    dword ptr [ecx + 4]
        fld    dword ptr [g_0076d064]
        fsub st(0), st(1)
        fmul    dword ptr [eax + 0x194]
        fld    dword ptr [eax + 0x198]
        fmul st(0), st(2)
        faddp st(1), st(0)
        fstp    dword ptr [esp + 0x10]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [eax + 0x19c]
        fst    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        faddp st(1), st(0)
        fld    st(1)
        fmul st(0), st(2)
        faddp st(1), st(0)
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fst    dword ptr [esp + 0x2c]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x2c]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x2c]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        mov    edx, dword ptr [eax + 0xc]
        mov    ecx, dword ptr [eax + 0x1c]
        mov    dword ptr [esi], edx
        mov    edx, dword ptr [eax + 0x2c]
        lea    eax, [esp + 0x18]
        mov    dword ptr [esi + 4], ecx
        push    eax
        lea    ecx, [esi + 0xc]
        mov    dword ptr [esi + 8], edx
        call    FUN_0041c680
        fld    dword ptr [esp + 4]
        fdiv    dword ptr [esp + 0x1c]
        fstp    dword ptr [esi + 0x18]
        pop    esi
        add    esp, 0x1c
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
        sub    esp, 0x50
        mov    eax, dword ptr [ecx + 0x24]
        mov    ecx, dword ptr [eax + 0x20c]
        mov    edx, dword ptr [eax + 0x210]
        __emit 0x89  // mov dword ptr [esp], ecx
__emit 0x4C
__emit 0x24
__emit 0x00
        mov    ecx, dword ptr [eax + 0x214]
        mov    dword ptr [esp + 4], ecx
        mov    ecx, dword ptr [eax + 0x21c]
        mov    dword ptr [esp + 0xc], edx
        mov    edx, dword ptr [eax + 0x218]
        add    eax, 0x80
        mov    dword ptr [esp + 8], ecx
        push    eax
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x14], edx
        call    FUN_004206b0
        mov    eax, dword ptr [esp + 0x58]
        lea    edx, [esp + 0x20]
        push    edx
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_0041c7d0
        fld    dword ptr [esp + 0x1c]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_052d
        fld    dword ptr [esp + 8]
        fdiv    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x14]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x18]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_052d:
        fld    dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x54]
        __emit 0xD8  // fsub dword ptr [esp+0] - MSVC6 drops the 00 disp byte (d8 24 24 vs ref d8 64 24 00)
        __emit 0x64
        __emit 0x24
        __emit 0x00
        fld    dword ptr [esp + 0xc]
        __emit 0xD8  // fsub dword ptr [esp+0] - MSVC6 drops the 00 disp byte (d8 24 24 vs ref d8 64 24 00)
        __emit 0x64
        __emit 0x24
        __emit 0x00
        fdivp st(1), st(0)
        fld    st(0)
        fstp    dword ptr [eax]
        fld    dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 4]
        fld    dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 4]
        fdivp st(1), st(0)
        fstp    dword ptr [esp + 0x58]
        mov    ecx, dword ptr [esp + 0x58]
        fcom    dword ptr [g_0076c5b0]
        mov    dword ptr [eax + 4], ecx
        fnstsw  ax
        test    ah, 1
        jne    L_05ab
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_05ad
        fld    dword ptr [esp + 0x58]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_05ad
        fld    dword ptr [esp + 0x58]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_05ad
        mov    eax, 1
        add    esp, 0x50
        ret    8
L_05ab:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_05ad:
        xor    eax, eax
        add    esp, 0x50
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
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_05eb
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x774d10
        pop    esi
        ret    
L_05eb:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        __emit 0xE9  // jmp rel32 L_0600 - MSVC6 emits jmp short (eb) for near target; ref uses e9 0b 00 00 00
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_0600:
        mov    word ptr [g_007dc828], 0xffff
        mov    word ptr [g_007dc82a], 0
        ret    
    }
}
