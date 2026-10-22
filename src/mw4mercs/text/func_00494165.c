/*
 * FUN_00494165 (extent 0x494165-0x494435) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_00770148;
extern int    g_007da920;
extern int    g_007da93c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_004940a0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00494165(void)
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
        push    0xa0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_41b0
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007da93c]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004940a0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_41b0:
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
        push    ebp
        mov    ebp, esp
        sub    esp, 8
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    edi
        push    eax
        mov    edi, ecx
        call    FUN_006f4950
        mov    cl, byte ptr [edi + 0x9c]
        mov    esi, dword ptr [ebp + 8]
        mov    eax, 1
        test    cl, al
        je    L_420d
        mov    ecx, dword ptr [edi + 0x88]
        test    ecx, ecx
        jne    L_421e
        cmp    dword ptr [edi + 0x8c], 0xbff00000
        jne    L_421e
L_420d:
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [esi + 4]
        mov    dword ptr [edi + 0x88], ecx
        mov    dword ptr [edi + 0x8c], edx
L_421e:
        mov    ecx, dword ptr [edi + 0x9c]
        or    ecx, eax
        cmp    dword ptr [esi + 8], 0xbf800000
        mov    dword ptr [edi + 0x9c], ecx
        jne    L_423c
        call    FUN_00415020
        jmp    L_423f
L_423c:
        fld    dword ptr [esi + 8]
L_423f:
        mov    eax, dword ptr [esi + 0x10]
        fstp    dword ptr [edi + 0x98]
        cmp    eax, 0xbf800000
        jne    L_427c
        mov    eax, dword ptr [edi + 0x10]
        fld    dword ptr [eax + 0x1c]
        fcom    dword ptr [g_00770148]
        fnstsw  ax
        test    ah, 1
        je    L_426a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_00770148]
L_426a:
        fld    dword ptr [g_0076d064]
        fdiv st(0), st(1)
        fstp    dword ptr [edi + 0x94]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_4285
L_427c:
        mov    ecx, dword ptr [esi + 0x10]
        mov    dword ptr [edi + 0x94], ecx
L_4285:
        mov    edx, dword ptr [esi + 0xc]
        mov    eax, dword ptr [esi + 0x14]
        mov    dword ptr [edi + 0x90], edx
        lea    ecx, [edi + 0x58]
        lea    edx, [edi + 0x28]
        mov    dword ptr [ebp - 4], eax
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [ebp + 8], edx
        mov    edx, dword ptr [ebp - 8]
        push    esi
        mov    esi, dword ptr [ebp - 4]
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
        mov    eax, dword ptr [edi + 0x20]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [edi + 0x24], ecx
        call    FUN_006f49a0
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
