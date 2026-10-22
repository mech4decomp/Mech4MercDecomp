/*
 * FUN_00421119 (extent 0x421119-0x42121e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2e4;
extern float  g_0076c5b0;
extern float  g_0076d588;
extern float  g_0076d978;
extern float  g_007b220c;
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00421119(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        fld    dword ptr [esp + 8]
        sub    esp, 8
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2e4]
        add    esp, 8
        call    FUN_0075db4a
        mov    ecx, eax
        __emit 0x89  // mov dword ptr [esp], ecx
__emit 0x4C
__emit 0x24
__emit 0x00
__emit 0xDB  // fild dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fsubr    dword ptr [esp + 8]
        fcomp    qword ptr [g_0076d588]
        fnstsw  ax
        test    ah, 1
        lea    eax, [ecx + 1]
        je    L_1159
        mov    eax, ecx
L_1159:
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 8]
        fld    dword ptr [esp + 4]
        fmul    dword ptr [esp + 0xc]
        fmul    dword ptr [g_0076d978]
        fsubp st(1), st(0)
        fld    st(0)
        fstp    dword ptr [ecx]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_11d9
        fld    dword ptr [esp + 4]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_11d9
        fld    dword ptr [esp + 4]
        mov    eax, dword ptr [esp + 0x10]
        fadd    st(0), st(0)
        fld    dword ptr [esp + 8]
        fdiv st(0), st(1)
        fchs    
        fstp    dword ptr [eax]
        fld    dword ptr [ecx]
        fcomp    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 1
        je    L_11ce
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ecx], 0
        ret    
L_11ce:
        fld    dword ptr [ecx]
        fsqrt    
        fdiv st(0), st(1)
        fstp    dword ptr [ecx]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        ret    
L_11d9:
        mov    dword ptr [ecx], 0xbf800000
        ret    
        sub    esp, 8
        fld    dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x10]
        mov    ecx, 0x20
        fld    dword ptr [esp + 0x14]
        sub    ecx, eax
        fsub    dword ptr [esp + 0x10]
        or    eax, 0xffffffff
        shr    eax, cl
        fdivp st(1), st(0)
        mov    dword ptr [esp + 4], 0
        __emit 0x89  // mov dword ptr [esp], eax
__emit 0x44
__emit 0x24
__emit 0x00
        __emit 0xDA  // fimul dword ptr [esp] (explicit disp8=0)
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0075db4a
        add    esp, 8
        ret    
    }
}
