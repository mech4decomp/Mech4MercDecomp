/*
 * FUN_0058fa64 (extent 0x58fa64-0x58fb93) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;

__declspec(naked) void FUN_0058fa64(void)
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
        mov    al, byte ptr [ecx + 0x620]
        xor    edx, edx
        cmp    al, dl
        jne    L_fb14
        fld    dword ptr [ecx + 0x630]
        mov    byte ptr [ecx + 0x620], 1
        fld    dword ptr [ecx + 0x62c]
        fcomp    dword ptr [ecx + 0x628]
        fnstsw  ax
        test    ah, 1
        jne    L_faba
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ecx + 0x634]
        jmp    L_faf3
L_faba:
        fld    dword ptr [ecx + 0x62c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_faf3
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ecx + 0x62c]
        fdiv    dword ptr [ecx + 0x628]
        fld    dword ptr [g_0076d064]
        fsub st(0), st(1)
        fmul    dword ptr [ecx + 0x630]
        fxch    st(1)
        fmul    dword ptr [ecx + 0x634]
        faddp st(1), st(0)
L_faf3:
        fstp    dword ptr [ecx + 0x630]
        mov    dword ptr [ecx + 0x628], 0x3e4ccccd
        mov    dword ptr [ecx + 0x62c], edx
        mov    dword ptr [ecx + 0x634], 0x3f800000
        ret    
L_fb14:
        fld    dword ptr [ecx + 0x630]
        mov    byte ptr [ecx + 0x620], dl
        fld    dword ptr [ecx + 0x62c]
        fcomp    dword ptr [ecx + 0x628]
        fnstsw  ax
        test    ah, 1
        jne    L_fb3d
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ecx + 0x634]
        jmp    L_fb76
L_fb3d:
        fld    dword ptr [ecx + 0x62c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_fb76
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ecx + 0x62c]
        fdiv    dword ptr [ecx + 0x628]
        fld    dword ptr [g_0076d064]
        fsub st(0), st(1)
        fmul    dword ptr [ecx + 0x630]
        fxch    st(1)
        fmul    dword ptr [ecx + 0x634]
        faddp st(1), st(0)
L_fb76:
        fstp    dword ptr [ecx + 0x630]
        mov    dword ptr [ecx + 0x628], 0x3f800000
        mov    dword ptr [ecx + 0x62c], edx
        mov    dword ptr [ecx + 0x634], edx
        ret    
    }
}
