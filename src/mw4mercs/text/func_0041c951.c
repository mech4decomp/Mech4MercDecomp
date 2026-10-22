/*
 * FUN_0041c951 (extent 0x41c951-0x41ca23) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041c910(void);

__declspec(naked) void FUN_0041c951(void)
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
        nop    
        nop    
        nop    
        sub    esp, 0x10
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x18]
        fld    dword ptr [eax]
        fsub    dword ptr [ecx]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x5C
__emit 0x24
__emit 0x00
        fld    dword ptr [eax + 4]
        fsub    dword ptr [ecx + 4]
        fstp    dword ptr [esp + 4]
        fld    dword ptr [eax + 8]
        fsub    dword ptr [ecx + 8]
        fstp    dword ptr [esp + 8]
        fld    dword ptr [eax + 0xc]
        mov    eax, dword ptr [esp + 0x1c]
        fsub    dword ptr [ecx + 0xc]
        push    eax
        lea    ecx, [esp + 4]
        push    ecx
        fstp    dword ptr [esp + 0x14]
        call    FUN_0041c910
        add    esp, 0x18
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
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        fld    dword ptr [esi + 8]
        mov    eax, ecx
        fmul    dword ptr [edx + 8]
        mov    ecx, dword ptr [edx + 0xc]
        fld    dword ptr [esi + 4]
        mov    dword ptr [eax + 0xc], ecx
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0xc]
        fmul    dword ptr [edx + 0xc]
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        faddp st(1), st(0)
        fstp    dword ptr [eax]
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx]
        fld    dword ptr [esi + 0x18]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x14]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x1c]
        fmul    dword ptr [edx + 0xc]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx]
        fld    dword ptr [esi + 0x28]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x24]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x2c]
        pop    esi
        fmul    dword ptr [edx + 0xc]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 8]
        ret    8
    }
}
