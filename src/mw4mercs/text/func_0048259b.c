/*
 * FUN_0048259b (extent 0x48259b-0x482734) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076e10c;
extern float  g_007b220c;
extern int    g_007da6ac;
extern int    g_007da850;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_0048259b(void)
{
    __asm {
        nop    
        nop    
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
        sub    esp, 0xc
        fld    dword ptr [ecx + 0x50]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [edx + 8]
        test    eax, eax
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x5C
__emit 0x24
__emit 0x00
        fld    dword ptr [ecx + 0x60]
        fstp    dword ptr [esp + 4]
        fld    dword ptr [ecx + 0x70]
        fstp    dword ptr [esp + 8]
        fld    dword ptr [g_0076e10c]
        je    L_25f8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 4]
        fmul    dword ptr [eax + 4]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [eax + 8]
        faddp st(1), st(0)
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fmul    dword ptr [eax]
        faddp st(1), st(0)
        fmul    dword ptr [ecx + 8]
        fchs    
L_25f8:
        fcom    dword ptr [g_007b220c]
        add    ecx, 0xc
        mov    eax, dword ptr [ecx]
        __emit 0x89  // mov dword ptr [esp], eax
__emit 0x44
__emit 0x24
__emit 0x00
        mov    eax, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [esp + 4], eax
        fnstsw  ax
        mov    dword ptr [esp + 8], ecx
        test    ah, 0x41
        jne    L_2659
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        mov    eax, dword ptr [edx + 4]
        fmul st(0), st(1)
        fld    dword ptr [esp + 4]
        fmul st(0), st(2)
        fstp    dword ptr [esp + 4]
        fld    dword ptr [esp + 8]
        fmul st(0), st(2)
        fstp    dword ptr [esp + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esp + 8]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
        add    esp, 0xc
        ret    4
L_2659:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        add    esp, 0xc
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
        nop    
        sub    esp, 0xc
        fld    dword ptr [g_0076e10c]
        add    ecx, 0xc
        mov    eax, dword ptr [ecx]
        fcomp    dword ptr [g_007b220c]
        mov    edx, dword ptr [ecx + 4]
        __emit 0x89  // mov dword ptr [esp], eax
__emit 0x44
__emit 0x24
__emit 0x00
        mov    eax, dword ptr [ecx + 8]
        mov    dword ptr [esp + 8], eax
        fnstsw  ax
        mov    dword ptr [esp + 4], edx
        test    ah, 0x41
        jne    L_26df
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        mov    eax, dword ptr [esp + 0x10]
        fmul    dword ptr [g_0076e10c]
        fld    dword ptr [esp + 4]
        fmul    dword ptr [g_0076e10c]
        fstp    dword ptr [esp + 4]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [g_0076e10c]
        fstp    dword ptr [esp + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld    dword ptr [esp + 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esp + 8]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
L_26df:
        add    esp, 0xc
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
        mov    eax, 1
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
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2729
        mov    ecx, dword ptr [g_007da850]
        push    ecx
        push    0x76fad4
        push    0x4f
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007da6ac], eax
        ret    
L_2729:
        mov    dword ptr [g_007da6ac], 0
        ret    
    }
}
