/*
 * FUN_00678316 (extent 0x678316-0x678429) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041ae30(void);
extern void __cdecl FUN_0041bb80(void);
extern void __cdecl FUN_00501eb0(void);

__declspec(naked) void FUN_00678316(void)
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
        fld    dword ptr [ecx + 4]
        mov    byte ptr [ecx], 0
        fcomp    dword ptr [ecx + 8]
        fnstsw  ax
        test    ah, 1
        jne    L_8343
        mov    eax, dword ptr [ecx + 0x24]
        mov    edx, dword ptr [ecx + 0x28]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [ecx + 0x2c]
        mov    dword ptr [ecx + 0x10], edx
        mov    dword ptr [ecx + 0x14], eax
        ret    
L_8343:
        fld    dword ptr [ecx + 4]
        fdiv    dword ptr [ecx + 8]
        fld    dword ptr [ecx + 0x24]
        fsub    dword ptr [ecx + 0x18]
        fmul st(0), st(1)
        fadd    dword ptr [ecx + 0x18]
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [ecx + 0x28]
        fsub    dword ptr [ecx + 0x1c]
        fmul st(0), st(1)
        fadd    dword ptr [ecx + 0x1c]
        fstp    dword ptr [ecx + 0x10]
        fld    dword ptr [ecx + 0x2c]
        fsub    dword ptr [ecx + 0x20]
        fmul st(0), st(1)
        fadd    dword ptr [ecx + 0x20]
        fstp    dword ptr [ecx + 0x14]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
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
        fld    dword ptr [ecx + 4]
        mov    byte ptr [ecx], 0
        fcomp    dword ptr [ecx + 8]
        fnstsw  ax
        test    ah, 1
        jne    L_83a9
        mov    eax, dword ptr [ecx + 0x2c]
        mov    edx, dword ptr [ecx + 0x30]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [ecx + 0x34]
        mov    dword ptr [ecx + 0x10], edx
        mov    edx, dword ptr [ecx + 0x38]
        mov    dword ptr [ecx + 0x14], eax
        mov    dword ptr [ecx + 0x18], edx
        ret    
L_83a9:
        fld    dword ptr [ecx + 4]
        push    ecx
        fdiv    dword ptr [ecx + 8]
        lea    eax, [ecx + 0x2c]
        lea    edx, [ecx + 0x1c]
        add    ecx, 0xc
        fstp    dword ptr [esp]
        push    eax
        push    edx
        call    FUN_0041bb80
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
        fld    dword ptr [ecx + 4]
        mov    byte ptr [ecx], 0
        fcomp    dword ptr [ecx + 8]
        fnstsw  ax
        test    ah, 1
        jne    L_83f3
        mov    eax, dword ptr [ecx + 0x28]
        mov    dword ptr [ecx + 0x10], eax
        mov    edx, dword ptr [ecx + 0x24]
        mov    eax, dword ptr [ecx + 0x2c]
        mov    dword ptr [ecx + 0xc], edx
        mov    dword ptr [ecx + 0x14], eax
        ret    
L_83f3:
        fld    dword ptr [ecx + 4]
        push    ecx
        fdiv    dword ptr [ecx + 8]
        lea    edx, [ecx + 0x24]
        lea    eax, [ecx + 0x18]
        add    ecx, 0xc
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    FUN_0041ae30
        ret    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    0x1c
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_00501eb0
        add    esp, 4
        pop    esi
        ret    
    }
}
