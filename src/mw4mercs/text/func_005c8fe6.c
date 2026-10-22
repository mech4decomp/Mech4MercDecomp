/*
 * FUN_005c8fe6 (extent 0x5c8fe6-0x5c906e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_007b220c;
extern void __cdecl FUN_005ac3e0(void);

__declspec(naked) void FUN_005c8fe6(void)
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
        push    ecx
        mov    eax, dword ptr [ecx + 0x170]
        mov    ecx, dword ptr [eax + 0x408]
        test    ecx, ecx
        jne    L_9019
        fld    dword ptr [g_0076c5b0]
        pop    ecx
        ret    
L_9019:
        mov    edx, dword ptr [ecx + 0x50]
        __emit 0x89  // mov dword ptr [esp], edx
__emit 0x54
__emit 0x24
__emit 0x00
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_903d
        fld    dword ptr [g_0076c5b0]
        pop    ecx
        ret    
L_903d:
        call    FUN_005ac3e0
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        fnstsw  ax
        test    ah, 0x41
        jne    L_9053
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
L_9053:
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_9068
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
L_9068:
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x74
__emit 0x24
__emit 0x00
        pop    ecx
        ret    
    }
}
