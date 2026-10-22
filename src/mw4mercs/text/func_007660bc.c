/*
 * FUN_007660bc (extent 0x7660bc-0x7663d9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_00766050(void);

__declspec(naked) void FUN_007660bc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx + 8]
        fmul    dword ptr [ecx + 8]
        fld    dword ptr [edx + 4]
        fmul    dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [ecx]
        faddp st(1), st(0)
        fsub    dword ptr [ecx + 0xc]
        fcom    dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_60eb
        fsub    dword ptr [edx + 0xc]
        ret    4
L_60eb:
        fld    dword ptr [edx + 0xc]
        fchs    
        fld    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_6101
        fadd    dword ptr [edx + 0xc]
        ret    4
L_6101:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        ret    4
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x40
        push    esi
        mov    esi, dword ptr [esp + 0x48]
        push    edi
        mov    edi, ecx
        push    esi
        lea    ecx, [esp + 0x1c]
        call    FUN_004206b0
        lea    eax, [esp + 0x18]
        push    eax
        push    edi
        lea    ecx, [esp + 0x10]
        call    FUN_00766050
        fld    dword ptr [esi + 0x30]
        fld    dword ptr [esi + 0x34]
        pop    edi
        fld    dword ptr [esi + 0x38]
        fld    dword ptr [esi + 0x30]
        fld    dword ptr [esi + 0x34]
        fld    dword ptr [esi + 0x38]
        pop    esi
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6161
        fxch    st(5)
        fchs    
        fxch    st(5)
        jmp    L_6167
L_6161:
        fxch    st(2)
        fchs    
        fxch    st(2)
L_6167:
        fld    dword ptr [esp + 4]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6180
        fxch    st(4)
        fchs    
        fxch    st(4)
        jmp    L_6186
L_6180:
        fxch    st(1)
        fchs    
        fxch    st(1)
L_6186:
        fld    dword ptr [esp + 8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_619f
        fxch    st(3)
        fchs    
        fxch    st(3)
        jmp    L_61a1
L_619f:
        fchs    
L_61a1:
        fmul    dword ptr [esp + 8]
        fxch    st(1)
        fmul    dword ptr [esp + 4]
        faddp st(1), st(0)
        fxch    st(1)
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        faddp st(1), st(0)
        fsub    dword ptr [esp + 0xc]
        fst    dword ptr [esp + 0x44]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_61da
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x44]
        add    esp, 0x40
        ret    4
L_61da:
        fmul    dword ptr [esp + 8]
        fxch    st(1)
        fmul    dword ptr [esp + 4]
        faddp st(1), st(0)
        fxch    st(1)
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        faddp st(1), st(0)
        fsub    dword ptr [esp + 0xc]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_6207
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
L_6207:
        add    esp, 0x40
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        fld    dword ptr [eax + 8]
        fmul    dword ptr [ecx + 8]
        fld    dword ptr [eax + 4]
        fmul    dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld    dword ptr [eax]
        fmul    dword ptr [ecx]
        faddp st(1), st(0)
        fsub    dword ptr [ecx + 0xc]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [esp + 8]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_6243
        mov    eax, 1
        ret    8
L_6243:
        xor    eax, eax
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        fld    dword ptr [eax + 8]
        fmul    dword ptr [ecx + 8]
        fld    dword ptr [eax + 4]
        fmul    dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld    dword ptr [eax]
        fmul    dword ptr [ecx]
        faddp st(1), st(0)
        fsubr    dword ptr [ecx + 0xc]
        fld    dword ptr [esp + 8]
        fadd    dword ptr [eax + 0xc]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        je    L_6283
        mov    eax, 1
        ret    8
L_6283:
        xor    eax, eax
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [ecx]
        mov    edx, dword ptr [esp + 4]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_62a7
        fld    dword ptr [edx]
        jmp    L_62aa
L_62a7:
        fld    dword ptr [edx + 4]
L_62aa:
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_62bf
        fld    dword ptr [edx + 8]
        jmp    L_62c2
L_62bf:
        fld    dword ptr [edx + 0xc]
L_62c2:
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_62d7
        fld    dword ptr [edx + 0x10]
        jmp    L_62da
L_62d7:
        fld    dword ptr [edx + 0x14]
L_62da:
        fmul    dword ptr [ecx + 8]
        fxch    st(2)
        fmul    dword ptr [ecx]
        faddp st(2), st(0)
        fmul    dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [esp + 8]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_6300
        mov    eax, 1
        ret    8
L_6300:
        xor    eax, eax
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
        fld    dword ptr [ecx]
        mov    edx, dword ptr [esp + 4]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_6327
        fld    dword ptr [edx]
        jmp    L_632a
L_6327:
        fld    dword ptr [edx + 4]
L_632a:
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_633f
        fld    dword ptr [edx + 8]
        jmp    L_6342
L_633f:
        fld    dword ptr [edx + 0xc]
L_6342:
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_6357
        fld    dword ptr [edx + 0x10]
        jmp    L_635a
L_6357:
        fld    dword ptr [edx + 0x14]
L_635a:
        fmul    dword ptr [ecx + 8]
        fxch    st(2)
        fmul    dword ptr [ecx]
        faddp st(2), st(0)
        fmul    dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld    dword ptr [esp + 8]
        fadd    dword ptr [ecx + 0xc]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_6380
        mov    eax, 1
        ret    8
L_6380:
        xor    eax, eax
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
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx + 8]
        fmul    dword ptr [ecx + 8]
        fld    dword ptr [edx + 4]
        fmul    dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [ecx]
        faddp st(1), st(0)
        fsub    dword ptr [ecx + 0xc]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_63ba
        fchs    
L_63ba:
        fld    dword ptr [esp + 8]
        fadd    dword ptr [edx + 0xc]
        fxch    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        je    L_63d4
        mov    eax, 1
        ret    8
L_63d4:
        xor    eax, eax
        ret    8
    }
}
