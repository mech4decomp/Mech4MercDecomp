/*
 * FUN_0041d1f6 (extent 0x41d1f6-0x41d569) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0041d1f6(void)
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
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        fmul    dword ptr [esi]
        mov    eax, ecx
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0xc]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        faddp st(1), st(0)
        fld    dword ptr [esi]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x34]
        fmul    dword ptr [esi + 0xc]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x38]
        fmul    dword ptr [esi + 0xc]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 0xc]
        fmul    dword ptr [edx + 0x3c]
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0xc]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x1c]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x34]
        fmul    dword ptr [esi + 0x1c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [esi + 0x14]
        fmul    dword ptr [edx + 0x18]
        fld    dword ptr [edx + 0x38]
        fmul    dword ptr [esi + 0x1c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x28]
        mov    ecx, dword ptr [edx + 0x30]
        fmul    dword ptr [esi + 0x18]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [esi + 0x10]
        fmul    dword ptr [edx + 0xc]
        fld    dword ptr [esi + 0x1c]
        fmul    dword ptr [edx + 0x3c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x18]
        fmul    dword ptr [edx + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x14]
        fmul    dword ptr [edx + 0x1c]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x1c]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x2c]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x34]
        fmul    dword ptr [esi + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [esi + 0x24]
        fmul    dword ptr [edx + 0x18]
        fld    dword ptr [edx + 0x38]
        fmul    dword ptr [esi + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [esi + 0x20]
        fmul    dword ptr [edx + 0xc]
        fld    dword ptr [esi + 0x2c]
        fmul    dword ptr [edx + 0x3c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x28]
        fmul    dword ptr [edx + 0x2c]
        faddp st(1), st(0)
        fld    dword ptr [esi + 0x24]
        pop    esi
        fmul    dword ptr [edx + 0x1c]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 0x2c]
        mov    dword ptr [eax + 0x30], ecx
        mov    ecx, dword ptr [edx + 0x34]
        mov    dword ptr [eax + 0x34], ecx
        mov    ecx, dword ptr [edx + 0x38]
        mov    edx, dword ptr [edx + 0x3c]
        mov    dword ptr [eax + 0x38], ecx
        mov    dword ptr [eax + 0x3c], edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    ecx
        push    esi
        push    edi
        push    0x76d5f8
        mov    edi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_d3ca
        int 3    
L_d3ca:
        mov    dword ptr [ebp - 4], edi
        mov    edx, dword ptr [ebp + 8]
        push    esi
        mov    esi, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ebp - 4]
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
        xor    eax, eax
        mov    dword ptr [edi + 0x30], eax
        mov    dword ptr [edi + 0x34], eax
        mov    dword ptr [edi + 0x38], eax
        mov    dword ptr [edi + 0x3c], 0x3f800000
        mov    eax, edi
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    8
    }
}
